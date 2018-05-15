include(../../common.pri)

TARGET = QtAwsIoT1ClickDevicesService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    claimdevicesbyclaimcoderequest.h \
    claimdevicesbyclaimcoderequest_p.h \
    claimdevicesbyclaimcoderesponse.h \
    claimdevicesbyclaimcoderesponse_p.h \
    describedevicerequest.h \
    describedevicerequest_p.h \
    describedeviceresponse.h \
    describedeviceresponse_p.h \
    finalizedeviceclaimrequest.h \
    finalizedeviceclaimrequest_p.h \
    finalizedeviceclaimresponse.h \
    finalizedeviceclaimresponse_p.h \
    getdevicemethodsrequest.h \
    getdevicemethodsrequest_p.h \
    getdevicemethodsresponse.h \
    getdevicemethodsresponse_p.h \
    initiatedeviceclaimrequest.h \
    initiatedeviceclaimrequest_p.h \
    initiatedeviceclaimresponse.h \
    initiatedeviceclaimresponse_p.h \
    invokedevicemethodrequest.h \
    invokedevicemethodrequest_p.h \
    invokedevicemethodresponse.h \
    invokedevicemethodresponse_p.h \
    iot1clickdevicesserviceclient.h \
    iot1clickdevicesserviceclient_p.h \
    iot1clickdevicesservicerequest.h \
    iot1clickdevicesservicerequest_p.h \
    iot1clickdevicesserviceresponse.h \
    iot1clickdevicesserviceresponse_p.h \
    listdeviceeventsrequest.h \
    listdeviceeventsrequest_p.h \
    listdeviceeventsresponse.h \
    listdeviceeventsresponse_p.h \
    listdevicesrequest.h \
    listdevicesrequest_p.h \
    listdevicesresponse.h \
    listdevicesresponse_p.h \
    unclaimdevicerequest.h \
    unclaimdevicerequest_p.h \
    unclaimdeviceresponse.h \
    unclaimdeviceresponse_p.h \
    updatedevicestaterequest.h \
    updatedevicestaterequest_p.h \
    updatedevicestateresponse.h \
    updatedevicestateresponse_p.h \

SOURCES += \
    claimdevicesbyclaimcoderequest.cpp \
    claimdevicesbyclaimcoderesponse.cpp \
    describedevicerequest.cpp \
    describedeviceresponse.cpp \
    finalizedeviceclaimrequest.cpp \
    finalizedeviceclaimresponse.cpp \
    getdevicemethodsrequest.cpp \
    getdevicemethodsresponse.cpp \
    initiatedeviceclaimrequest.cpp \
    initiatedeviceclaimresponse.cpp \
    invokedevicemethodrequest.cpp \
    invokedevicemethodresponse.cpp \
    iot1clickdevicesserviceclient.cpp \
    iot1clickdevicesservicerequest.cpp \
    iot1clickdevicesserviceresponse.cpp \
    listdeviceeventsrequest.cpp \
    listdeviceeventsresponse.cpp \
    listdevicesrequest.cpp \
    listdevicesresponse.cpp \
    unclaimdevicerequest.cpp \
    unclaimdeviceresponse.cpp \
    updatedevicestaterequest.cpp \
    updatedevicestateresponse.cpp \

win32:CONFIG += skip_target_version_ext
