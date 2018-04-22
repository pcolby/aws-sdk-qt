include(../../common.pri)

TARGET = QtAwsPricing
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    describeservicesrequest.h \
    describeservicesrequest_p.h \
    describeservicesresponse.h \
    describeservicesresponse_p.h \
    getattributevaluesrequest.h \
    getattributevaluesrequest_p.h \
    getattributevaluesresponse.h \
    getattributevaluesresponse_p.h \
    getproductsrequest.h \
    getproductsrequest_p.h \
    getproductsresponse.h \
    getproductsresponse_p.h \
    pricingclient.h \
    pricingclient_p.h \
    pricingrequest.h \
    pricingrequest_p.h \
    pricingresponse.h \
    pricingresponse_p.h \

SOURCES += \
    describeservicesrequest.cpp \
    describeservicesresponse.cpp \
    getattributevaluesrequest.cpp \
    getattributevaluesresponse.cpp \
    getproductsrequest.cpp \
    getproductsresponse.cpp \
    pricingclient.cpp \
    pricingrequest.cpp \
    pricingresponse.cpp \

win32:CONFIG += skip_target_version_ext
