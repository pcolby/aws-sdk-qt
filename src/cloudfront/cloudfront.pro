include(../../common.pri)

TARGET = cloudfront
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudfrontclient.h \
    cloudfrontclient_p.h \

SOURCES += \
    cloudfrontclient.cpp \

win32:CONFIG += skip_target_version_ext
