include(../../common.pri)

TARGET = QtAwsSageMakerRuntime
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
    sagemakerruntimerequest.h \
    sagemakerruntimerequest_p.h \
    sagemakerruntimeresponse.h \
    sagemakerruntimeresponse_p.h \

SOURCES += \
    invokeendpointrequest.cpp \
    invokeendpointresponse.cpp \
    sagemakerruntimeclient.cpp \
    sagemakerruntimerequest.cpp \
    sagemakerruntimeresponse.cpp \

win32:CONFIG += skip_target_version_ext
