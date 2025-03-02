# Bridging Moonlander to Voyager

## QMK setup

* Will use the ZSA fork of QMK for simplicity.
* Environment setup per QMK docs
    * Installed the Arch QMK package
    * `qmk setup -y -H ./qmk_firmware -b firmware24 zsa/qmk_firmware/`
* Cloned `qmk_userspace` locally and removed its .git
    * `qmk config user.overlay_dir="$(realpath qmk_userspace)"`
    * `qmk new-keymap -kb zsa/moonlander -km bepo`
* Overwrite `qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo` contents with contents of `*_source` from the downloaded zip file
* Build:
    * `cd qmk_userspace/keyboards/zsa/moonlander/keymaps/bepo`
    * `qmk compile`
* Flash:
    * From same directory as above
    * `qmk flash`

