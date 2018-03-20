include(../../common.pri)

TARGET = resourcegroupstaggingapi
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    resourcegroupstaggingapiclient.h \
    resourcegroupstaggingapiclient_p.h \

SOURCES += \
    resourcegroupstaggingapiclient.cpp \

win32:CONFIG += skip_target_version_ext
