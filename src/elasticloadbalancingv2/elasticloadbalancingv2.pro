include(../../common.pri)

TARGET = elasticloadbalancingv2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    elasticloadbalancingv2client.h \
    elasticloadbalancingv2client_p.h \

SOURCES += \
    elasticloadbalancingv2client.cpp \

win32:CONFIG += skip_target_version_ext
