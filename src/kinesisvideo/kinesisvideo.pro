include(../../common.pri)

TARGET = kinesisvideo
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createstreamrequest.h \
    createstreamrequest_p.h \
    createstreamresponse.h \
    createstreamresponse_p.h \
    deletestreamrequest.h \
    deletestreamrequest_p.h \
    deletestreamresponse.h \
    deletestreamresponse_p.h \
    describestreamrequest.h \
    describestreamrequest_p.h \
    describestreamresponse.h \
    describestreamresponse_p.h \
    getdataendpointrequest.h \
    getdataendpointrequest_p.h \
    getdataendpointresponse.h \
    getdataendpointresponse_p.h \
    kinesisvideoclient.h \
    kinesisvideoclient_p.h \
    liststreamsrequest.h \
    liststreamsrequest_p.h \
    liststreamsresponse.h \
    liststreamsresponse_p.h \
    listtagsforstreamrequest.h \
    listtagsforstreamrequest_p.h \
    listtagsforstreamresponse.h \
    listtagsforstreamresponse_p.h \
    tagstreamrequest.h \
    tagstreamrequest_p.h \
    tagstreamresponse.h \
    tagstreamresponse_p.h \
    untagstreamrequest.h \
    untagstreamrequest_p.h \
    untagstreamresponse.h \
    untagstreamresponse_p.h \
    updatedataretentionrequest.h \
    updatedataretentionrequest_p.h \
    updatedataretentionresponse.h \
    updatedataretentionresponse_p.h \
    updatestreamrequest.h \
    updatestreamrequest_p.h \
    updatestreamresponse.h \
    updatestreamresponse_p.h \

SOURCES += \
    createstreamrequest.cpp \
    createstreamresponse.cpp \
    deletestreamrequest.cpp \
    deletestreamresponse.cpp \
    describestreamrequest.cpp \
    describestreamresponse.cpp \
    getdataendpointrequest.cpp \
    getdataendpointresponse.cpp \
    kinesisvideoclient.cpp \
    liststreamsrequest.cpp \
    liststreamsresponse.cpp \
    listtagsforstreamrequest.cpp \
    listtagsforstreamresponse.cpp \
    tagstreamrequest.cpp \
    tagstreamresponse.cpp \
    untagstreamrequest.cpp \
    untagstreamresponse.cpp \
    updatedataretentionrequest.cpp \
    updatedataretentionresponse.cpp \
    updatestreamrequest.cpp \
    updatestreamresponse.cpp \

win32:CONFIG += skip_target_version_ext
