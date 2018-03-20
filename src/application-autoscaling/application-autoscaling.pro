include(../../common.pri)

TARGET = application-autoscaling
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    applicationautoscalingclient.h \
    applicationautoscalingclient_p.h \

SOURCES += \
    applicationautoscalingclient.cpp \

win32:CONFIG += skip_target_version_ext
