include(../../common.pri)

TARGET = email
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    sesclient.h \
    sesclient_p.h \

SOURCES += \
    sesclient.cpp \

win32:CONFIG += skip_target_version_ext
