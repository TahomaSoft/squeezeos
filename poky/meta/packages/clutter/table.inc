DESCRIPTION = "Table Clutter Demo"
HOMEPAGE = "http://www.clutter-project.org/"
LICENSE = "LGPL"

DEPENDS = "clutter-gst-0.6 gnome-vfs"

inherit autotools_stage pkgconfig

do_install() {
	install -d ${D}${bindir}
	install -m 0755 ${S}/table ${D}${bindir}/table
}

