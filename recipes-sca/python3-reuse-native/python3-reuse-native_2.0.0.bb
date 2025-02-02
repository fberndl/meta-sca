SUMMARY = "reuse is a tool for compliance with the REUSE recommendations"
HOMEPAGE = "https://github.com/fsfe/reuse-tool"

DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "GPL-3.0-or-later & Apache-2.0 & CC0-1.0 & CC-BY-SA-4.0"
LIC_FILES_CHKSUM = "\
                    file://LICENSES/Apache-2.0.txt;md5=3b83ef96387f14655fc854ddc3c6bd57 \
                    file://LICENSES/CC-BY-SA-4.0.txt;md5=fba3b94d88bfb9b81369b869a1e9a20f \
                    file://LICENSES/CC0-1.0.txt;md5=65d3616852dbf7b1a6d4b53b00626032 \
                    file://LICENSES/GPL-3.0-or-later.txt;md5=1ebbd3e34237af26da5dc08a4e440464 \
                    "

DEPENDS += "\
            python3-binaryornot-native \
            python3-booleanpy-native \
            python3-debian-native \
            python3-jinja2-native \
            python3-license-expression-native \
            python3-picobuild-native \
            python3-requests-native \
            python3-setuptools-scm-native \
            "

SRC_URI[md5sum] = "e99f64290d1fe027ade7d5f67a66974f"
SRC_URI[sha256sum] = "f4b42481c8f132cdd85b01f4ae2a0836c6fe49311ef6212ed6bfd0d847f60924"

PYPI_PACKAGE = "reuse"

inherit pypi
inherit sca-description
inherit python_poetry_core
inherit native

python_pep517_do_compile () {
    nativepython3 -m picobuild --source ${PEP517_SOURCE_PATH} --dest ${PEP517_WHEEL_PATH} --wheel ${PEP517_BUILD_OPTS}
}

SCA_TOOL_DESCRIPTION = "reuse"
