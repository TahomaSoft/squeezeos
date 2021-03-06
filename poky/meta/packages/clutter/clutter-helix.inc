DESCRIPTION = "Clutter Helix"
HOMEPAGE = "http://www.clutter-project.org/"
LICENSE = "LGPL"

DEPENDS = "helix-libs"

FILESPATH = "${FILE_DIRNAME}/clutter-helix"

PACKAGES =+ "${PN}-examples"
FILES_${PN}-examples = "${bindir}/video-player ${bindir}/audio-player"

inherit autotools_stage pkgconfig gtk-doc

