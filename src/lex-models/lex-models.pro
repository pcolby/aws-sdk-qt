include(../../common.pri)

TARGET = lex-models
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    lexmodelbuildingserviceclient.h \
    lexmodelbuildingserviceclient_p.h \

SOURCES += \
    lexmodelbuildingserviceclient.cpp \

win32:CONFIG += skip_target_version_ext
