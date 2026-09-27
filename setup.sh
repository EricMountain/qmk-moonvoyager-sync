#!/usr/bin/env bash

set -euo pipefail

qmk setup -y -H ./qmk_firmware -b firmware25 zsa/qmk_firmware
qmk config user.overlay_dir="$(realpath qmk_userspace)"
