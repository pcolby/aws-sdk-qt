include(../../common.pri)

TARGET = sts
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    stsclient.h \
    stsclient_p.h \

SOURCES += \
    stsclient.cpp \

win32:CONFIG += skip_target_version_ext
