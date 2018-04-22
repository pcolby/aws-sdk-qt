include(../../common.pri)

TARGET = QtAwsTranslate
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    translateclient.h \
    translateclient_p.h \
    translaterequest.h \
    translaterequest_p.h \
    translateresponse.h \
    translateresponse_p.h \
    translatetextrequest.h \
    translatetextrequest_p.h \
    translatetextresponse.h \
    translatetextresponse_p.h \

SOURCES += \
    translateclient.cpp \
    translaterequest.cpp \
    translateresponse.cpp \
    translatetextrequest.cpp \
    translatetextresponse.cpp \

win32:CONFIG += skip_target_version_ext
