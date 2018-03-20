include(../../common.pri)

TARGET = AWSMigrationHub
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    migrationhubclient.h \
    migrationhubclient_p.h \

SOURCES += \
    migrationhubclient.cpp \

win32:CONFIG += skip_target_version_ext
