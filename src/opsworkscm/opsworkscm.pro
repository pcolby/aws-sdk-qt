include(../../common.pri)

TARGET = opsworkscm
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    opsworkscmclient.h \
    opsworkscmclient_p.h \

SOURCES += \
    opsworkscmclient.cpp \

win32:CONFIG += skip_target_version_ext
