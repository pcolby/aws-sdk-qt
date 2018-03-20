include(../../common.pri)

TARGET = mediaconvert
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    mediaconvertclient.h \
    mediaconvertclient_p.h \

SOURCES += \
    mediaconvertclient.cpp \

win32:CONFIG += skip_target_version_ext
