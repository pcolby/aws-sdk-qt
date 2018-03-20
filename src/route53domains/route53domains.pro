include(../../common.pri)

TARGET = route53domains
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    route53domainsclient.h \
    route53domainsclient_p.h \

SOURCES += \
    route53domainsclient.cpp \

win32:CONFIG += skip_target_version_ext
