#!/usr/bin/env bash

set -euo pipefail

rm -rf downloads
mkdir downloads
cd downloads

curl -o moonlander_src.zip https://oryx.zsa.io/source/VqqnBe
unzip moonlander_src.zip

cd ..
rm -rf qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/* qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/*

cp downloads/zsa_moonlander_moonlander-bepo-v2_source/* qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo
cp qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/* qmk_userspace/keyboards/zsa/voyager/keymaps/bepo

./ledmap-conversion.py <qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo/keymap.c >qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/keymap.c
echo "#define VOYAGER_USER_LEDS" >>qmk_userspace/keyboards/zsa/voyager/keymaps/bepo/config.h

cd qmk_userspace/keyboards/zsa/voyager/keymaps/bepo
qmk compile
qmk flash
