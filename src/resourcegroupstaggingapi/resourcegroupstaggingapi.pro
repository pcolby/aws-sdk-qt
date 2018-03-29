include(../../common.pri)

TARGET = resourcegroupstaggingapi
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getresourcesrequest.h \
    getresourcesrequest_p.h \
    getresourcesresponse.h \
    getresourcesresponse_p.h \
    gettagkeysrequest.h \
    gettagkeysrequest_p.h \
    gettagkeysresponse.h \
    gettagkeysresponse_p.h \
    gettagvaluesrequest.h \
    gettagvaluesrequest_p.h \
    gettagvaluesresponse.h \
    gettagvaluesresponse_p.h \
    resourcegroupstaggingapiclient.h \
    resourcegroupstaggingapiclient_p.h \
    resourcegroupstaggingapirequest.h \
    resourcegroupstaggingapirequest_p.h \
    resourcegroupstaggingapiresponse.h \
    resourcegroupstaggingapiresponse_p.h \
    tagresourcesrequest.h \
    tagresourcesrequest_p.h \
    tagresourcesresponse.h \
    tagresourcesresponse_p.h \
    untagresourcesrequest.h \
    untagresourcesrequest_p.h \
    untagresourcesresponse.h \
    untagresourcesresponse_p.h \

SOURCES += \
    getresourcesrequest.cpp \
    getresourcesresponse.cpp \
    gettagkeysrequest.cpp \
    gettagkeysresponse.cpp \
    gettagvaluesrequest.cpp \
    gettagvaluesresponse.cpp \
    resourcegroupstaggingapiclient.cpp \
    resourcegroupstaggingapirequest.cpp \
    resourcegroupstaggingapiresponse.cpp \
    tagresourcesrequest.cpp \
    tagresourcesresponse.cpp \
    untagresourcesrequest.cpp \
    untagresourcesresponse.cpp \

win32:CONFIG += skip_target_version_ext
