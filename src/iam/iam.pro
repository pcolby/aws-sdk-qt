include(../../common.pri)

TARGET = iam
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    iamclient.h \
    iamclient_p.h \

SOURCES += \
    iamclient.cpp \

win32:CONFIG += skip_target_version_ext
