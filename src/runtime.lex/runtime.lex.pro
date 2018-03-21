include(../../common.pri)

TARGET = runtime.lex
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    lexruntimeserviceclient.h \
    lexruntimeserviceclient_p.h \
    postcontentrequest.h \
    postcontentrequest_p.h \
    postcontentresponse.h \
    postcontentresponse_p.h \
    posttextrequest.h \
    posttextrequest_p.h \
    posttextresponse.h \
    posttextresponse_p.h \

SOURCES += \
    lexruntimeserviceclient.cpp \
    postcontentrequest.cpp \
    postcontentresponse.cpp \
    posttextrequest.cpp \
    posttextresponse.cpp \

win32:CONFIG += skip_target_version_ext
