include(../../common.pri)

TARGET = cloudsearch
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudsearchclient.h \
    cloudsearchclient_p.h \

SOURCES += \
    cloudsearchclient.cpp \

win32:CONFIG += skip_target_version_ext
