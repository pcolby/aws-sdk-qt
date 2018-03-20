include(../../common.pri)

TARGET = route53
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    route53client.h \
    route53client_p.h \

SOURCES += \
    route53client.cpp \

win32:CONFIG += skip_target_version_ext
