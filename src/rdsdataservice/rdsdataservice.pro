include(../../common.pri)

TARGET = QtAwsRDSDataService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    executesqlrequest.h \
    executesqlrequest_p.h \
    executesqlresponse.h \
    executesqlresponse_p.h \
    rdsdataserviceclient.h \
    rdsdataserviceclient_p.h \
    rdsdataservicerequest.h \
    rdsdataservicerequest_p.h \
    rdsdataserviceresponse.h \
    rdsdataserviceresponse_p.h \

SOURCES += \
    executesqlrequest.cpp \
    executesqlresponse.cpp \
    rdsdataserviceclient.cpp \
    rdsdataservicerequest.cpp \
    rdsdataserviceresponse.cpp \

win32:CONFIG += skip_target_version_ext
