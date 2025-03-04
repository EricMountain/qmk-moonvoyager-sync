#!/usr/bin/env python3

import re
import fileinput
import sys

# Key is the index of the colour in the ledmap. Value is the index into the
# moonlander ledmap.
# 0, 5, 10, 15, 20, 25,
# 1, 6, 11, 16, 21, 26,
# 2, 7, 12, 17, 22, 27,
# 3, 8, 13, 18, 23, 28,
# 32, 33,
# 61, 56, 51, 46, 41, 36,
# 62, 57, 52, 47, 42, 37,
# 63, 58, 53, 48, 43, 38,
# 64, 59, 54, 49, 44, 39,
# 69, 68,
voyager2moonlander = [
    0,
    5,
    10,
    15,
    20,
    25,
    1,
    6,
    11,
    16,
    21,
    26,
    2,
    7,
    12,
    17,
    22,
    27,
    3,
    8,
    13,
    18,
    23,
    28,
    32,
    33,
    61,
    56,
    51,
    46,
    41,
    36,
    62,
    57,
    52,
    47,
    42,
    37,
    63,
    58,
    53,
    48,
    43,
    38,
    64,
    59,
    54,
    49,
    44,
    39,
    69,
    68,
]


def handle_array_entry(line):
    if line.strip() == "":
        print(line)
        return

    rx = re.compile(r"(\s*\[\d+\] = \{\s*)((\{\d+,\d+,\d+\},*\s*)+)\},")
    match = rx.findall(line)
    # print(f"Matches: {match}")

    index_prefix = match[0][0]
    # print(f"Index: {index_prefix}")

    triplets_string = match[0][1]
    # print(f"triplets: {triplets_string}")

    triplets_rx = re.compile(r"\{(\d+),(\d+),(\d+)\}")
    triplets = triplets_rx.findall(triplets_string)
    # print(f"triplets: {triplets}")

    print(index_prefix, end="")
    for i in range(len(voyager2moonlander)):
        print(
            f"{{{triplets[voyager2moonlander[i]][0]}, {triplets[voyager2moonlander[i]][1]}, {triplets[voyager2moonlander[i]][2]}}}",
            end="",
        )
        print(", ", end="")
    print("},")


array_signature = "const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {"
array_end_signature = "};"
parsing_array = False
for line in fileinput.input():
    array_in_line = line.find(array_signature)
    if not parsing_array and array_in_line != -1:
        parsing_array = True
        print(line, end="")
        continue

    if parsing_array:
        # check if end of array
        end_of_array = line.find(array_end_signature)
        if end_of_array != -1:
            parsing_array = False
            print(line, end="")
            continue
        # print(f"todecode: {line}")
        handle_array_entry(line)
        # sys.exit(1)
        continue

    print(line, end="")
