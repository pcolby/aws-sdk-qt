include(../../common.pri)

TARGET = health
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    describeaffectedentitiesrequest.h \
    describeaffectedentitiesrequest_p.h \
    describeaffectedentitiesresponse.h \
    describeaffectedentitiesresponse_p.h \
    describeentityaggregatesrequest.h \
    describeentityaggregatesrequest_p.h \
    describeentityaggregatesresponse.h \
    describeentityaggregatesresponse_p.h \
    describeeventaggregatesrequest.h \
    describeeventaggregatesrequest_p.h \
    describeeventaggregatesresponse.h \
    describeeventaggregatesresponse_p.h \
    describeeventdetailsrequest.h \
    describeeventdetailsrequest_p.h \
    describeeventdetailsresponse.h \
    describeeventdetailsresponse_p.h \
    describeeventsrequest.h \
    describeeventsrequest_p.h \
    describeeventsresponse.h \
    describeeventsresponse_p.h \
    describeeventtypesrequest.h \
    describeeventtypesrequest_p.h \
    describeeventtypesresponse.h \
    describeeventtypesresponse_p.h \
    healthclient.h \
    healthclient_p.h \

SOURCES += \
    describeaffectedentitiesrequest.cpp \
    describeaffectedentitiesresponse.cpp \
    describeentityaggregatesrequest.cpp \
    describeentityaggregatesresponse.cpp \
    describeeventaggregatesrequest.cpp \
    describeeventaggregatesresponse.cpp \
    describeeventdetailsrequest.cpp \
    describeeventdetailsresponse.cpp \
    describeeventsrequest.cpp \
    describeeventsresponse.cpp \
    describeeventtypesrequest.cpp \
    describeeventtypesresponse.cpp \
    healthclient.cpp \

win32:CONFIG += skip_target_version_ext
