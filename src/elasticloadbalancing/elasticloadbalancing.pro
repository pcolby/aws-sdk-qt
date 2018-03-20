include(../../common.pri)

TARGET = elasticloadbalancing
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    elasticloadbalancingclient.h \
    elasticloadbalancingclient_p.h \

SOURCES += \
    elasticloadbalancingclient.cpp \

win32:CONFIG += skip_target_version_ext
