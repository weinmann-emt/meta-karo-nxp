# Copyright 2017-2020 NXP
 
DEPENDS = "zlib-native openssl-native"

SRCBRANCH = "lf-5.10.72_2.2.0"
IMX_MKIMAGE_SRC ?= "git://github.com/nxp-imx/imx-mkimage.git;protocol=https"
SRC_URI = "${IMX_MKIMAGE_SRC};branch=${SRCBRANCH}"
SRCREV = "7a277c8a1a21ff921d217889dde6a9f84e6d2168"
S = "${WORKDIR}/git"

SYSROOT_DIRS += "/boot"
