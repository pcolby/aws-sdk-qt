include(../../common.pri)

TARGET = QtAwsRDSDataService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchexecutestatementrequest.h \
    batchexecutestatementrequest_p.h \
    batchexecutestatementresponse.h \
    batchexecutestatementresponse_p.h \
    begintransactionrequest.h \
    begintransactionrequest_p.h \
    begintransactionresponse.h \
    begintransactionresponse_p.h \
    committransactionrequest.h \
    committransactionrequest_p.h \
    committransactionresponse.h \
    committransactionresponse_p.h \
    executesqlrequest.h \
    executesqlrequest_p.h \
    executesqlresponse.h \
    executesqlresponse_p.h \
    executestatementrequest.h \
    executestatementrequest_p.h \
    executestatementresponse.h \
    executestatementresponse_p.h \
    rdsdataserviceclient.h \
    rdsdataserviceclient_p.h \
    rdsdataservicerequest.h \
    rdsdataservicerequest_p.h \
    rdsdataserviceresponse.h \
    rdsdataserviceresponse_p.h \
    rollbacktransactionrequest.h \
    rollbacktransactionrequest_p.h \
    rollbacktransactionresponse.h \
    rollbacktransactionresponse_p.h \

SOURCES += \
    batchexecutestatementrequest.cpp \
    batchexecutestatementresponse.cpp \
    begintransactionrequest.cpp \
    begintransactionresponse.cpp \
    committransactionrequest.cpp \
    committransactionresponse.cpp \
    executesqlrequest.cpp \
    executesqlresponse.cpp \
    executestatementrequest.cpp \
    executestatementresponse.cpp \
    rdsdataserviceclient.cpp \
    rdsdataservicerequest.cpp \
    rdsdataserviceresponse.cpp \
    rollbacktransactionrequest.cpp \
    rollbacktransactionresponse.cpp \

win32:CONFIG += skip_target_version_ext
