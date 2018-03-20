include(../../common.pri)

TARGET = config
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    configserviceclient.h \
    configserviceclient_p.h \

SOURCES += \
    configserviceclient.cpp \

win32:CONFIG += skip_target_version_ext
