include(../../common.pri)

TARGET = dax
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    daxclient.h \
    daxclient_p.h \

SOURCES += \
    daxclient.cpp \

win32:CONFIG += skip_target_version_ext
