include(../../common.pri)

TARGET = QtAwsCostandUsageReportService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    costandusagereportserviceclient.h \
    costandusagereportserviceclient_p.h \
    costandusagereportservicerequest.h \
    costandusagereportservicerequest_p.h \
    costandusagereportserviceresponse.h \
    costandusagereportserviceresponse_p.h \
    deletereportdefinitionrequest.h \
    deletereportdefinitionrequest_p.h \
    deletereportdefinitionresponse.h \
    deletereportdefinitionresponse_p.h \
    describereportdefinitionsrequest.h \
    describereportdefinitionsrequest_p.h \
    describereportdefinitionsresponse.h \
    describereportdefinitionsresponse_p.h \
    putreportdefinitionrequest.h \
    putreportdefinitionrequest_p.h \
    putreportdefinitionresponse.h \
    putreportdefinitionresponse_p.h \

SOURCES += \
    costandusagereportserviceclient.cpp \
    costandusagereportservicerequest.cpp \
    costandusagereportserviceresponse.cpp \
    deletereportdefinitionrequest.cpp \
    deletereportdefinitionresponse.cpp \
    describereportdefinitionsrequest.cpp \
    describereportdefinitionsresponse.cpp \
    putreportdefinitionrequest.cpp \
    putreportdefinitionresponse.cpp \

win32:CONFIG += skip_target_version_ext
