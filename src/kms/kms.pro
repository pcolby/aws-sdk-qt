include(../../common.pri)

TARGET = kms
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    kmsclient.h \
    kmsclient_p.h \

SOURCES += \
    kmsclient.cpp \

win32:CONFIG += skip_target_version_ext
