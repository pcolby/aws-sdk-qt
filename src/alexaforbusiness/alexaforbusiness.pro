include(../../common.pri)

TARGET = alexaforbusiness
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    alexaforbusinessclient.h \
    alexaforbusinessclient_p.h \

SOURCES += \
    alexaforbusinessclient.cpp \

win32:CONFIG += skip_target_version_ext
