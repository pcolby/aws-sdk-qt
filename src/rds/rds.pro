include(../../common.pri)

TARGET = rds
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    rdsclient.h \
    rdsclient_p.h \

SOURCES += \
    rdsclient.cpp \

win32:CONFIG += skip_target_version_ext
