include(../../common.pri)

TARGET = waf-regional
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    wafregionalclient.h \
    wafregionalclient_p.h \

SOURCES += \
    wafregionalclient.cpp \

win32:CONFIG += skip_target_version_ext
