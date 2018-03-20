include(../../common.pri)

TARGET = iot-jobs-data
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    iotjobsdataplaneclient.h \
    iotjobsdataplaneclient_p.h \

SOURCES += \
    iotjobsdataplaneclient.cpp \

win32:CONFIG += skip_target_version_ext
