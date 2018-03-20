include(../../common.pri)

TARGET = iot-data
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    iotdataplaneclient.h \
    iotdataplaneclient_p.h \

SOURCES += \
    iotdataplaneclient.cpp \

win32:CONFIG += skip_target_version_ext
