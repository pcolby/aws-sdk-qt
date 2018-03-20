include(../../common.pri)

TARGET = appsync
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    appsyncclient.h \
    appsyncclient_p.h \

SOURCES += \
    appsyncclient.cpp \

win32:CONFIG += skip_target_version_ext
