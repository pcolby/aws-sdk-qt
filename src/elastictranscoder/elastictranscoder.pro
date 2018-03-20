include(../../common.pri)

TARGET = elastictranscoder
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    elastictranscoderclient.h \
    elastictranscoderclient_p.h \

SOURCES += \
    elastictranscoderclient.cpp \

win32:CONFIG += skip_target_version_ext
