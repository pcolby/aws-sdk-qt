include(../../common.pri)

TARGET = QtAwsPinpointSMSVoice
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createconfigurationseteventdestinationrequest.h \
    createconfigurationseteventdestinationrequest_p.h \
    createconfigurationseteventdestinationresponse.h \
    createconfigurationseteventdestinationresponse_p.h \
    createconfigurationsetrequest.h \
    createconfigurationsetrequest_p.h \
    createconfigurationsetresponse.h \
    createconfigurationsetresponse_p.h \
    deleteconfigurationseteventdestinationrequest.h \
    deleteconfigurationseteventdestinationrequest_p.h \
    deleteconfigurationseteventdestinationresponse.h \
    deleteconfigurationseteventdestinationresponse_p.h \
    deleteconfigurationsetrequest.h \
    deleteconfigurationsetrequest_p.h \
    deleteconfigurationsetresponse.h \
    deleteconfigurationsetresponse_p.h \
    getconfigurationseteventdestinationsrequest.h \
    getconfigurationseteventdestinationsrequest_p.h \
    getconfigurationseteventdestinationsresponse.h \
    getconfigurationseteventdestinationsresponse_p.h \
    pinpointsmsvoiceclient.h \
    pinpointsmsvoiceclient_p.h \
    pinpointsmsvoicerequest.h \
    pinpointsmsvoicerequest_p.h \
    pinpointsmsvoiceresponse.h \
    pinpointsmsvoiceresponse_p.h \
    sendvoicemessagerequest.h \
    sendvoicemessagerequest_p.h \
    sendvoicemessageresponse.h \
    sendvoicemessageresponse_p.h \
    updateconfigurationseteventdestinationrequest.h \
    updateconfigurationseteventdestinationrequest_p.h \
    updateconfigurationseteventdestinationresponse.h \
    updateconfigurationseteventdestinationresponse_p.h \

SOURCES += \
    createconfigurationseteventdestinationrequest.cpp \
    createconfigurationseteventdestinationresponse.cpp \
    createconfigurationsetrequest.cpp \
    createconfigurationsetresponse.cpp \
    deleteconfigurationseteventdestinationrequest.cpp \
    deleteconfigurationseteventdestinationresponse.cpp \
    deleteconfigurationsetrequest.cpp \
    deleteconfigurationsetresponse.cpp \
    getconfigurationseteventdestinationsrequest.cpp \
    getconfigurationseteventdestinationsresponse.cpp \
    pinpointsmsvoiceclient.cpp \
    pinpointsmsvoicerequest.cpp \
    pinpointsmsvoiceresponse.cpp \
    sendvoicemessagerequest.cpp \
    sendvoicemessageresponse.cpp \
    updateconfigurationseteventdestinationrequest.cpp \
    updateconfigurationseteventdestinationresponse.cpp \

win32:CONFIG += skip_target_version_ext
