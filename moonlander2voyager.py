#!/usr/bin/env python3

import re
import fileinput

# Implements Moonlander to Voyager conversions:
# * Injects the include for the LAYOUT_moonlander macro that handles key remapping
# * Remaps colour arrays. Moonlander goes column-by-column, Voyager is row-by-row.
# * Converts chordal_hold_layout from Moonlander to Voyager layout.
# * Voyager is mostly used with the Mac, so boot to layer 1.

# ledmap conversion data:
#
# Array offset is the index of the colour in the ledmap. Value is the offset into the
# Moonlander ledmap.
#
# Note the Moonlander ledmap goes column by column, whereas the Voyager’s is row by row,
# so we’re doing a matrix transposition of sorts.
#
# Left block
# 0, 5, 10, 15, 20, 25,
# 1, 6, 11, 16, 21, 26,
# 2, 7, 12, 17, 22, 27,
# 3, 8, 13, 18, 23, 28,
# 32, 33,
#
# Right block
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

    index_prefix = match[0][0]
    triplets_string = match[0][1]

    triplets_rx = re.compile(r"\{(\d+),(\d+),(\d+)\}")
    triplets = triplets_rx.findall(triplets_string)

    print(index_prefix, end="")
    for i in range(len(voyager2moonlander)):
        print(
            f"{{{triplets[voyager2moonlander[i]][0]}, {triplets[voyager2moonlander[i]][1]}, {triplets[voyager2moonlander[i]][2]}}}",
            end="",
        )
        print(", ", end="")
    print("},")


def boot_to_layer1():
    """Activates the MacOS layer on boot"""
    print()
    print("void matrix_init_user(void) {")
    print("  layer_on(1);  // Activate Layer 1 on startup")
    print("}")
    print()


# Output the include for the LAYOUT_moonlander macro that handles key remapping
print('#include "../../../../../moonlander2voyager.h"')

ledmap_start = "const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {"
ledmap_end = "};"
parsing_ledmap = False

chordal_hold_layout_start = "const char chordal_hold_layout"
chordal_hold_layout_end = ");"
parsing_chordal_hold_layout = False
chordal_hold_layout_replacement = """const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                      'L', 'L', 'R', 'R'
);
"""

for line in fileinput.input():
    # Detect start of ledmap array
    ledmap_start_offset = line.find(ledmap_start)
    if not parsing_ledmap and ledmap_start_offset != -1:
        parsing_ledmap = True
        print(line, end="")
        continue

    # Each line of the ledmap array is the mapping for one layer
    if parsing_ledmap:
        ledmap_end_offset = line.find(ledmap_end)
        if ledmap_end_offset != -1:
            # End of ledmap array found, resume normal processing
            parsing_ledmap = False
            print(line, end="")
            continue
        handle_array_entry(line)
        continue

    # Detect start of chordal_hold_layout
    chordal_hold_layout_start_offset = line.find(chordal_hold_layout_start)
    if not parsing_chordal_hold_layout and chordal_hold_layout_start_offset != -1:
        parsing_chordal_hold_layout = True
        continue

    if parsing_chordal_hold_layout:
        chordal_hold_layout_end_offset = line.find(chordal_hold_layout_end)
        if chordal_hold_layout_end_offset != -1:
            parsing_chordal_hold_layout = False
            print(chordal_hold_layout_replacement)
        continue

    # No special handling, just echo the line
    print(line, end="")

boot_to_layer1()
