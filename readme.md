# Bridging Moonlander to Voyager

I didn’t fancy duplicating my ZSA Moonlander layout for my Voyager keyboard. So
here’s a repo with a few scripts and C macros to do that.

The conversion is simplistic:

* The right-most (resp leftmost) key column on the Moonlander’s left (resp right) block will be dropped.
* The bottom-most key row of each Moonlander block will be dropped.
* The outermost thumb-cluster keys are dropped from each block. The big red keys too.

What’s left is mapped to the Voyager straightforwardly.

`{MOONLANDER|VOYAGER}_USER_LEDS` is set in order to turn off the layer indicator LEDs.

## Use

* Setup your QMK environment [per the docs for your OS](https://docs.qmk.fm/newbs_getting_started).
* Edit `update.sh` with a link to the source zip file supplied by Oryx.
    * For instance on [this layout’s page](https://configure.zsa.io/moonlander/layouts/yENpo/latest), grab URL that "Download Source" links to.
    * Don’t know of a way to grab this URL other than navigating to a layout’s page in-browser.
* Run `update.sh`.
    * Connect Moonlander and switch to reset mode.
    * Connect Voyager and switch to reset mode.

## Quirks

This setup confuses ZSA’s Keymapp tool: if the Voyager is connected, it shows the layout as though it were a Moonlander and misplaces the keys being activated.

## How to rebuild this repo from scratch

* `qmk setup -y -H ./qmk_firmware -b firmware24 zsa/qmk_firmware/`
* Clone `qmk_userspace` locally and remove its .git
    * `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
    * `qmk new-keymap -kb zsa/moonlander -km bepo`
* `update.sh` should work from this point
