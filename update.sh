#!/usr/bin/env bash

set -euo pipefail

# Housekeeping: update the ZSA fork of QMK
# cd qmk_firmware
# git pull --ff-only
# cd ..

# Clean out the previously downloaded firmware
rm -rf downloads
mkdir downloads
cd downloads

# Get the firmware we want to build and unpack
curl -o moonlander_src.zip https://oryx.zsa.io/source/B4qBb0
unzip moonlander_src.zip

# Clear out the old source files and replace with the new ones
cd ..
rm -rf qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/* qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/*
cp downloads/zsa_moonlander_moonlander-bepo-v2_source/* qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo
cp qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/* qmk_userspace/keyboards/zsa/voyager/keymaps/bepo

# Moonlander customisation
## Turn off layer LEDs
echo "#define MOONLANDER_USER_LEDS" >>qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/config.h

# Voyager conversion and customisation
./moonlander2voyager.py <qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/keymap.c >qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/keymap.c
## Turn off layer LEDs
echo "#define VOYAGER_USER_LEDS" >>qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/config.h

# Build and flash Moonlander
cd qmk_userspace
qmk compile -kb zsa/moonlander/reva -km bepo
qmk flash -kb zsa/moonlander/reva -km bepo
cd ..

# Build and flash Voyager
cd qmk_userspace
qmk compile -kb zsa/voyager -km bepo
qmk flash -kb zsa/voyager -km bepo
cd ..
