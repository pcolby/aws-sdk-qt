include(../../common.pri)

TARGET = runtime.sagemaker
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    invokeendpointrequest.h \
    invokeendpointrequest_p.h \
    invokeendpointresponse.h \
    invokeendpointresponse_p.h \
    sagemakerruntimeclient.h \
    sagemakerruntimeclient_p.h \
    sagemakerruntimeclientrequest.h \
    sagemakerruntimeclientrequest_p.h \
    sagemakerruntimeclientresponse.h \
    sagemakerruntimeclientresponse_p.h \

SOURCES += \
    invokeendpointrequest.cpp \
    invokeendpointresponse.cpp \
    sagemakerruntimeclient.cpp \
    sagemakerruntimeclientrequest.cpp \
    sagemakerruntimeclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
