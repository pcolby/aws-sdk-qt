include(../../common.pri)

TARGET = acm
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acmclient.h \
    acmclient_p.h \

SOURCES += \
    acmclient.cpp \

win32:CONFIG += skip_target_version_ext
