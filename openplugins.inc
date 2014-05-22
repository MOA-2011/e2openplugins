DEPENDS += "enigma2"

SRC_URI = "git://github.com/MOA-2011/e2openplugin-${MODULE}.git;protocol=git"

S="${WORKDIR}/git"

SRCREV_pn-${PN} ?= "${AUTOREV}"
