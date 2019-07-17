include(../../common.pri)

TARGET = QtAwsTranscribeStreamingService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    startstreamtranscriptionrequest.h \
    startstreamtranscriptionrequest_p.h \
    startstreamtranscriptionresponse.h \
    startstreamtranscriptionresponse_p.h \
    transcribestreamingserviceclient.h \
    transcribestreamingserviceclient_p.h \
    transcribestreamingservicerequest.h \
    transcribestreamingservicerequest_p.h \
    transcribestreamingserviceresponse.h \
    transcribestreamingserviceresponse_p.h \

SOURCES += \
    startstreamtranscriptionrequest.cpp \
    startstreamtranscriptionresponse.cpp \
    transcribestreamingserviceclient.cpp \
    transcribestreamingservicerequest.cpp \
    transcribestreamingserviceresponse.cpp \

win32:CONFIG += skip_target_version_ext
