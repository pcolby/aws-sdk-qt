include(../../common.pri)

TARGET = kinesis-video-archived-media
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getmediaforfragmentlistrequest.h \
    getmediaforfragmentlistrequest_p.h \
    getmediaforfragmentlistresponse.h \
    getmediaforfragmentlistresponse_p.h \
    kinesisvideoarchivedmediaclient.h \
    kinesisvideoarchivedmediaclient_p.h \
    kinesisvideoarchivedmediaclientrequest.h \
    kinesisvideoarchivedmediaclientrequest_p.h \
    kinesisvideoarchivedmediaclientresponse.h \
    kinesisvideoarchivedmediaclientresponse_p.h \
    listfragmentsrequest.h \
    listfragmentsrequest_p.h \
    listfragmentsresponse.h \
    listfragmentsresponse_p.h \

SOURCES += \
    getmediaforfragmentlistrequest.cpp \
    getmediaforfragmentlistresponse.cpp \
    kinesisvideoarchivedmediaclient.cpp \
    kinesisvideoarchivedmediaclientrequest.cpp \
    kinesisvideoarchivedmediaclientresponse.cpp \
    listfragmentsrequest.cpp \
    listfragmentsresponse.cpp \

win32:CONFIG += skip_target_version_ext
