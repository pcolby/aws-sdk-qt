include(../../common.pri)

TARGET = cloud9
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloud9client.h \
    cloud9client_p.h \

SOURCES += \
    cloud9client.cpp \

win32:CONFIG += skip_target_version_ext
