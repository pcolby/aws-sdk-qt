include(../../common.pri)

TARGET = greengrass
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    greengrassclient.h \
    greengrassclient_p.h \

SOURCES += \
    greengrassclient.cpp \

win32:CONFIG += skip_target_version_ext
