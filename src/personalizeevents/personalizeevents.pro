include(../../common.pri)

TARGET = QtAwsPersonalizeEvents
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    personalizeeventsclient.h \
    personalizeeventsclient_p.h \
    personalizeeventsrequest.h \
    personalizeeventsrequest_p.h \
    personalizeeventsresponse.h \
    personalizeeventsresponse_p.h \
    puteventsrequest.h \
    puteventsrequest_p.h \
    puteventsresponse.h \
    puteventsresponse_p.h \

SOURCES += \
    personalizeeventsclient.cpp \
    personalizeeventsrequest.cpp \
    personalizeeventsresponse.cpp \
    puteventsrequest.cpp \
    puteventsresponse.cpp \

win32:CONFIG += skip_target_version_ext
