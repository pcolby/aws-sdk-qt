include(../../common.pri)

TARGET = autoscaling
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    autoscalingclient.h \
    autoscalingclient_p.h \

SOURCES += \
    autoscalingclient.cpp \

win32:CONFIG += skip_target_version_ext
