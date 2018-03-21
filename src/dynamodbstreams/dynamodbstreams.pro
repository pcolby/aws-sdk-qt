include(../../common.pri)

TARGET = dynamodbstreams
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    describestreamrequest.h \
    describestreamrequest_p.h \
    describestreamresponse.h \
    describestreamresponse_p.h \
    dynamodbstreamsclient.h \
    dynamodbstreamsclient_p.h \
    getrecordsrequest.h \
    getrecordsrequest_p.h \
    getrecordsresponse.h \
    getrecordsresponse_p.h \
    getsharditeratorrequest.h \
    getsharditeratorrequest_p.h \
    getsharditeratorresponse.h \
    getsharditeratorresponse_p.h \
    liststreamsrequest.h \
    liststreamsrequest_p.h \
    liststreamsresponse.h \
    liststreamsresponse_p.h \

SOURCES += \
    describestreamrequest.cpp \
    describestreamresponse.cpp \
    dynamodbstreamsclient.cpp \
    getrecordsrequest.cpp \
    getrecordsresponse.cpp \
    getsharditeratorrequest.cpp \
    getsharditeratorresponse.cpp \
    liststreamsrequest.cpp \
    liststreamsresponse.cpp \

win32:CONFIG += skip_target_version_ext
