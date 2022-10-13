SRC_URI += "https://proxy.golang.org/github.com/grpc-ecosystem/grpc-gateway/v2/@v/v2.11.3.zip;srcoutput=github.com/grpc-ecosystem/grpc-gateway/v2;srcinput=github.com/grpc-ecosystem/grpc-gateway/v2@v2.11.3;downloadfilename=github-com-grpc-ecosystem-grpc-gateway-v2-2.11.3.zip;name=github-com-grpc-ecosystem-grpc-gateway-v2"
SRC_URI[github-com-grpc-ecosystem-grpc-gateway-v2.sha256sum] = "7a91982c93816b187308f345fe56f892a3f7069b69c6da3c5657576dbd8c16d3"
GOSRC_REMOVEDIRS += "github.com/grpc-ecosystem/grpc-gateway/v2/examples"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/grpc-ecosystem/grpc-gateway/v2/LICENSE.txt;md5=c510a2a01572b82d27f28fd4d02ca318 \
    file://src/github.com/grpc-ecosystem/grpc-gateway/v2/internal/casing/LICENSE.md;md5=ed102105992ce5b28089249954248086 \
"

GOSRC_INCLUDEGUARD += "github.com-grpc-ecosystem-grpc-gateway-v2-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-antihax-optional-sources.inc', '', 'github.com-antihax-optional-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-golang-glog-sources.inc', '', 'github.com-golang-glog-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-golang-protobuf-sources.inc', '', 'github.com-golang-protobuf-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-google-go-cmp-sources.inc', '', 'github.com-google-go-cmp-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-rogpeppe-fastuuid-sources.inc', '', 'github.com-rogpeppe-fastuuid-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-oauth2-sources.inc', '', 'golang.org-x-oauth2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-text-sources.inc', '', 'golang.org-x-text-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'gopkg.in-yaml.v3-sources.inc', '', 'gopkg.in-yaml.v3-sources.inc', d)}