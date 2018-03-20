include(../../common.pri)

TARGET = runtime.sagemaker
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    sagemakerruntimeclient.h \
    sagemakerruntimeclient_p.h \

SOURCES += \
    sagemakerruntimeclient.cpp \

win32:CONFIG += skip_target_version_ext
