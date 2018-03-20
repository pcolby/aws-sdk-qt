include(../../common.pri)

TARGET = resource-groups
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    resourcegroupsclient.h \
    resourcegroupsclient_p.h \

SOURCES += \
    resourcegroupsclient.cpp \

win32:CONFIG += skip_target_version_ext
