include(../../common.pri)

TARGET = marketplacecommerceanalytics
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    generatedatasetrequest.h \
    generatedatasetrequest_p.h \
    generatedatasetresponse.h \
    generatedatasetresponse_p.h \
    marketplacecommerceanalyticsclient.h \
    marketplacecommerceanalyticsclient_p.h \
    marketplacecommerceanalyticsrequest.h \
    marketplacecommerceanalyticsrequest_p.h \
    marketplacecommerceanalyticsresponse.h \
    marketplacecommerceanalyticsresponse_p.h \
    startsupportdataexportrequest.h \
    startsupportdataexportrequest_p.h \
    startsupportdataexportresponse.h \
    startsupportdataexportresponse_p.h \

SOURCES += \
    generatedatasetrequest.cpp \
    generatedatasetresponse.cpp \
    marketplacecommerceanalyticsclient.cpp \
    marketplacecommerceanalyticsrequest.cpp \
    marketplacecommerceanalyticsresponse.cpp \
    startsupportdataexportrequest.cpp \
    startsupportdataexportresponse.cpp \

win32:CONFIG += skip_target_version_ext
