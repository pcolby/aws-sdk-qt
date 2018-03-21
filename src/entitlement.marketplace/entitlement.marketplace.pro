include(../../common.pri)

TARGET = entitlement.marketplace
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getentitlementsrequest.h \
    getentitlementsrequest_p.h \
    getentitlementsresponse.h \
    getentitlementsresponse_p.h \
    marketplaceentitlementserviceclient.h \
    marketplaceentitlementserviceclient_p.h \

SOURCES += \
    getentitlementsrequest.cpp \
    getentitlementsresponse.cpp \
    marketplaceentitlementserviceclient.cpp \

win32:CONFIG += skip_target_version_ext
