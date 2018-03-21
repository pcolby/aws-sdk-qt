include(../../common.pri)

TARGET = resource-groups
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    getgroupqueryrequest.h \
    getgroupqueryrequest_p.h \
    getgroupqueryresponse.h \
    getgroupqueryresponse_p.h \
    getgrouprequest.h \
    getgrouprequest_p.h \
    getgroupresponse.h \
    getgroupresponse_p.h \
    gettagsrequest.h \
    gettagsrequest_p.h \
    gettagsresponse.h \
    gettagsresponse_p.h \
    listgroupresourcesrequest.h \
    listgroupresourcesrequest_p.h \
    listgroupresourcesresponse.h \
    listgroupresourcesresponse_p.h \
    listgroupsrequest.h \
    listgroupsrequest_p.h \
    listgroupsresponse.h \
    listgroupsresponse_p.h \
    resourcegroupsclient.h \
    resourcegroupsclient_p.h \
    searchresourcesrequest.h \
    searchresourcesrequest_p.h \
    searchresourcesresponse.h \
    searchresourcesresponse_p.h \
    tagrequest.h \
    tagrequest_p.h \
    tagresponse.h \
    tagresponse_p.h \
    untagrequest.h \
    untagrequest_p.h \
    untagresponse.h \
    untagresponse_p.h \
    updategroupqueryrequest.h \
    updategroupqueryrequest_p.h \
    updategroupqueryresponse.h \
    updategroupqueryresponse_p.h \
    updategrouprequest.h \
    updategrouprequest_p.h \
    updategroupresponse.h \
    updategroupresponse_p.h \

SOURCES += \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    getgroupqueryrequest.cpp \
    getgroupqueryresponse.cpp \
    getgrouprequest.cpp \
    getgroupresponse.cpp \
    gettagsrequest.cpp \
    gettagsresponse.cpp \
    listgroupresourcesrequest.cpp \
    listgroupresourcesresponse.cpp \
    listgroupsrequest.cpp \
    listgroupsresponse.cpp \
    resourcegroupsclient.cpp \
    searchresourcesrequest.cpp \
    searchresourcesresponse.cpp \
    tagrequest.cpp \
    tagresponse.cpp \
    untagrequest.cpp \
    untagresponse.cpp \
    updategroupqueryrequest.cpp \
    updategroupqueryresponse.cpp \
    updategrouprequest.cpp \
    updategroupresponse.cpp \

win32:CONFIG += skip_target_version_ext
