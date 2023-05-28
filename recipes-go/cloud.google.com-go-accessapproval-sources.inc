SRC_URI += "https://proxy.golang.org/cloud.google.com/go/accessapproval/@v/v1.6.1.zip;srcoutput=cloud.google.com/go/accessapproval;srcinput=cloud.google.com/go/accessapproval@v1.6.1;downloadfilename=cloud-google-com-go-accessapproval-1.6.1.zip;name=cloud-google-com-go-accessapproval"
SRC_URI[cloud-google-com-go-accessapproval.sha256sum] = "128b4116a32a9c86c8e0885119790e803597a94c242ebccbd50f570531060d11"

GOSRC_LICENSE += "\
    Apache-2.0 \
"
LIC_FILES_CHKSUM += "\
    file://src/cloud.google.com/go/accessapproval/LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57 \
"

GOSRC_INCLUDEGUARD += "cloud.google.com-go-accessapproval-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-googleapis-gax-go-v2-sources.inc', '', 'github.com-googleapis-gax-go-v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-api-sources.inc', '', 'google.golang.org-api-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}