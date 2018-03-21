include(../../common.pri)

TARGET = cloudtrail
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    cloudtrailclient.h \
    cloudtrailclient_p.h \
    cloudtrailclientrequest.h \
    cloudtrailclientrequest_p.h \
    cloudtrailclientresponse.h \
    cloudtrailclientresponse_p.h \
    createtrailrequest.h \
    createtrailrequest_p.h \
    createtrailresponse.h \
    createtrailresponse_p.h \
    deletetrailrequest.h \
    deletetrailrequest_p.h \
    deletetrailresponse.h \
    deletetrailresponse_p.h \
    describetrailsrequest.h \
    describetrailsrequest_p.h \
    describetrailsresponse.h \
    describetrailsresponse_p.h \
    geteventselectorsrequest.h \
    geteventselectorsrequest_p.h \
    geteventselectorsresponse.h \
    geteventselectorsresponse_p.h \
    gettrailstatusrequest.h \
    gettrailstatusrequest_p.h \
    gettrailstatusresponse.h \
    gettrailstatusresponse_p.h \
    listpublickeysrequest.h \
    listpublickeysrequest_p.h \
    listpublickeysresponse.h \
    listpublickeysresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    lookupeventsrequest.h \
    lookupeventsrequest_p.h \
    lookupeventsresponse.h \
    lookupeventsresponse_p.h \
    puteventselectorsrequest.h \
    puteventselectorsrequest_p.h \
    puteventselectorsresponse.h \
    puteventselectorsresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    startloggingrequest.h \
    startloggingrequest_p.h \
    startloggingresponse.h \
    startloggingresponse_p.h \
    stoploggingrequest.h \
    stoploggingrequest_p.h \
    stoploggingresponse.h \
    stoploggingresponse_p.h \
    updatetrailrequest.h \
    updatetrailrequest_p.h \
    updatetrailresponse.h \
    updatetrailresponse_p.h \

SOURCES += \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    cloudtrailclient.cpp \
    cloudtrailclientrequest.cpp \
    cloudtrailclientresponse.cpp \
    createtrailrequest.cpp \
    createtrailresponse.cpp \
    deletetrailrequest.cpp \
    deletetrailresponse.cpp \
    describetrailsrequest.cpp \
    describetrailsresponse.cpp \
    geteventselectorsrequest.cpp \
    geteventselectorsresponse.cpp \
    gettrailstatusrequest.cpp \
    gettrailstatusresponse.cpp \
    listpublickeysrequest.cpp \
    listpublickeysresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    lookupeventsrequest.cpp \
    lookupeventsresponse.cpp \
    puteventselectorsrequest.cpp \
    puteventselectorsresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    startloggingrequest.cpp \
    startloggingresponse.cpp \
    stoploggingrequest.cpp \
    stoploggingresponse.cpp \
    updatetrailrequest.cpp \
    updatetrailresponse.cpp \

win32:CONFIG += skip_target_version_ext
