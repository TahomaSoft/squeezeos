DESCRIPTION = "XML::Parser::Expat - Low level access to James Clark's expat XML parser"
SECTION = "libs"
LICENSE = "Artistic|GPL"
PR = "r9"

# We want Perl to be as fast as possible, reset the default optimization flags
FULL_OPTIMIZATION = "-fexpensive-optimizations -fomit-frame-pointer -frename-registers -O2 -ggdb -feliminate-unused-debug-types"

DEPENDS = "expat"

SRC_URI = "http://search.cpan.org/CPAN/authors/id/T/TO/TODDR/XML-Parser-${PV}.tar.gz \
	file://libxml-parser-perl-Expat-Makefile.PL.patch;patch=1"

S = "${WORKDIR}/XML-Parser-${PV}"

EXTRA_CPANFLAGS = "EXPATLIBPATH=${STAGING_LIBDIR} EXPATINCPATH=${STAGING_INCDIR}"

inherit cpan

FILES_${PN}-doc = "${PERLLIBDIRS}/*.pod"
FILES_${PN} = "${PERLLIBDIRS}"
