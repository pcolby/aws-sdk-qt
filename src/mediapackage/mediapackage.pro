include(../../common.pri)

TARGET = QtAwsMediaPackage
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createchannelrequest.h \
    createchannelrequest_p.h \
    createchannelresponse.h \
    createchannelresponse_p.h \
    createoriginendpointrequest.h \
    createoriginendpointrequest_p.h \
    createoriginendpointresponse.h \
    createoriginendpointresponse_p.h \
    deletechannelrequest.h \
    deletechannelrequest_p.h \
    deletechannelresponse.h \
    deletechannelresponse_p.h \
    deleteoriginendpointrequest.h \
    deleteoriginendpointrequest_p.h \
    deleteoriginendpointresponse.h \
    deleteoriginendpointresponse_p.h \
    describechannelrequest.h \
    describechannelrequest_p.h \
    describechannelresponse.h \
    describechannelresponse_p.h \
    describeoriginendpointrequest.h \
    describeoriginendpointrequest_p.h \
    describeoriginendpointresponse.h \
    describeoriginendpointresponse_p.h \
    listchannelsrequest.h \
    listchannelsrequest_p.h \
    listchannelsresponse.h \
    listchannelsresponse_p.h \
    listoriginendpointsrequest.h \
    listoriginendpointsrequest_p.h \
    listoriginendpointsresponse.h \
    listoriginendpointsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    mediapackageclient.h \
    mediapackageclient_p.h \
    mediapackagerequest.h \
    mediapackagerequest_p.h \
    mediapackageresponse.h \
    mediapackageresponse_p.h \
    rotatechannelcredentialsrequest.h \
    rotatechannelcredentialsrequest_p.h \
    rotatechannelcredentialsresponse.h \
    rotatechannelcredentialsresponse_p.h \
    rotateingestendpointcredentialsrequest.h \
    rotateingestendpointcredentialsrequest_p.h \
    rotateingestendpointcredentialsresponse.h \
    rotateingestendpointcredentialsresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatechannelrequest.h \
    updatechannelrequest_p.h \
    updatechannelresponse.h \
    updatechannelresponse_p.h \
    updateoriginendpointrequest.h \
    updateoriginendpointrequest_p.h \
    updateoriginendpointresponse.h \
    updateoriginendpointresponse_p.h \

SOURCES += \
    createchannelrequest.cpp \
    createchannelresponse.cpp \
    createoriginendpointrequest.cpp \
    createoriginendpointresponse.cpp \
    deletechannelrequest.cpp \
    deletechannelresponse.cpp \
    deleteoriginendpointrequest.cpp \
    deleteoriginendpointresponse.cpp \
    describechannelrequest.cpp \
    describechannelresponse.cpp \
    describeoriginendpointrequest.cpp \
    describeoriginendpointresponse.cpp \
    listchannelsrequest.cpp \
    listchannelsresponse.cpp \
    listoriginendpointsrequest.cpp \
    listoriginendpointsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    mediapackageclient.cpp \
    mediapackagerequest.cpp \
    mediapackageresponse.cpp \
    rotatechannelcredentialsrequest.cpp \
    rotatechannelcredentialsresponse.cpp \
    rotateingestendpointcredentialsrequest.cpp \
    rotateingestendpointcredentialsresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatechannelrequest.cpp \
    updatechannelresponse.cpp \
    updateoriginendpointrequest.cpp \
    updateoriginendpointresponse.cpp \

win32:CONFIG += skip_target_version_ext
