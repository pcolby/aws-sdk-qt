include(../../common.pri)

TARGET = discovery
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    applicationdiscoveryserviceclient.h \
    applicationdiscoveryserviceclient_p.h \

SOURCES += \
    applicationdiscoveryserviceclient.cpp \

win32:CONFIG += skip_target_version_ext
