include(../../common.pri)

TARGET = ecr
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    ecrclient.h \
    ecrclient_p.h \

SOURCES += \
    ecrclient.cpp \

win32:CONFIG += skip_target_version_ext
