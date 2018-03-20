include(../../common.pri)

TARGET = kinesis-video-archived-media
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    kinesisvideoarchivedmediaclient.h \
    kinesisvideoarchivedmediaclient_p.h \

SOURCES += \
    kinesisvideoarchivedmediaclient.cpp \

win32:CONFIG += skip_target_version_ext
