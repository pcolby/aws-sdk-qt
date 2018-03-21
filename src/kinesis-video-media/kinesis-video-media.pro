include(../../common.pri)

TARGET = kinesis-video-media
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getmediarequest.h \
    getmediarequest_p.h \
    getmediaresponse.h \
    getmediaresponse_p.h \
    kinesisvideomediaclient.h \
    kinesisvideomediaclient_p.h \
    kinesisvideomediaclientrequest.h \
    kinesisvideomediaclientrequest_p.h \
    kinesisvideomediaclientresponse.h \
    kinesisvideomediaclientresponse_p.h \

SOURCES += \
    getmediarequest.cpp \
    getmediaresponse.cpp \
    kinesisvideomediaclient.cpp \
    kinesisvideomediaclientrequest.cpp \
    kinesisvideomediaclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
