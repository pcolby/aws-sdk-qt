include(../../common.pri)

TARGET = redshift
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    redshiftclient.h \
    redshiftclient_p.h \

SOURCES += \
    redshiftclient.cpp \

win32:CONFIG += skip_target_version_ext
