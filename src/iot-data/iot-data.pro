include(../../common.pri)

TARGET = iot-data
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deletethingshadowrequest.h \
    deletethingshadowrequest_p.h \
    deletethingshadowresponse.h \
    deletethingshadowresponse_p.h \
    getthingshadowrequest.h \
    getthingshadowrequest_p.h \
    getthingshadowresponse.h \
    getthingshadowresponse_p.h \
    iotdataplaneclient.h \
    iotdataplaneclient_p.h \
    iotdataplaneclientrequest.h \
    iotdataplaneclientrequest_p.h \
    iotdataplaneclientresponse.h \
    iotdataplaneclientresponse_p.h \
    publishrequest.h \
    publishrequest_p.h \
    publishresponse.h \
    publishresponse_p.h \
    updatethingshadowrequest.h \
    updatethingshadowrequest_p.h \
    updatethingshadowresponse.h \
    updatethingshadowresponse_p.h \

SOURCES += \
    deletethingshadowrequest.cpp \
    deletethingshadowresponse.cpp \
    getthingshadowrequest.cpp \
    getthingshadowresponse.cpp \
    iotdataplaneclient.cpp \
    iotdataplaneclientrequest.cpp \
    iotdataplaneclientresponse.cpp \
    publishrequest.cpp \
    publishresponse.cpp \
    updatethingshadowrequest.cpp \
    updatethingshadowresponse.cpp \

win32:CONFIG += skip_target_version_ext
