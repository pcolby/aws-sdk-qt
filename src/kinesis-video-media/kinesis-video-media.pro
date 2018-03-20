include(../../common.pri)

TARGET = kinesis-video-media
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    kinesisvideomediaclient.h \
    kinesisvideomediaclient_p.h \

SOURCES += \
    kinesisvideomediaclient.cpp \

win32:CONFIG += skip_target_version_ext
