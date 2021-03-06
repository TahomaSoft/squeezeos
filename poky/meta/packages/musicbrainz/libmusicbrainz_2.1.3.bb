DESCRIPTION = "The MusicBrainz client is a library which can be built into other programs.  The library allows you to access the data held on the MusicBrainz server."
HOMEPAGE = "http://musicbrainz.org"
LICENSE = "LGPL"
DEPENDS = "expat"
PR = "r1"

SRC_URI = "http://ftp.musicbrainz.org/pub/musicbrainz/libmusicbrainz-2.1.3.tar.gz \
           file://gcc43_fix.patch;patch=1 \
           file://autofoo.patch;patch=1"

inherit autotools_stage pkgconfig



