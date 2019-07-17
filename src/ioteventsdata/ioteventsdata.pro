include(../../common.pri)

TARGET = QtAwsIoTEventsData
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchputmessagerequest.h \
    batchputmessagerequest_p.h \
    batchputmessageresponse.h \
    batchputmessageresponse_p.h \
    batchupdatedetectorrequest.h \
    batchupdatedetectorrequest_p.h \
    batchupdatedetectorresponse.h \
    batchupdatedetectorresponse_p.h \
    describedetectorrequest.h \
    describedetectorrequest_p.h \
    describedetectorresponse.h \
    describedetectorresponse_p.h \
    ioteventsdataclient.h \
    ioteventsdataclient_p.h \
    ioteventsdatarequest.h \
    ioteventsdatarequest_p.h \
    ioteventsdataresponse.h \
    ioteventsdataresponse_p.h \
    listdetectorsrequest.h \
    listdetectorsrequest_p.h \
    listdetectorsresponse.h \
    listdetectorsresponse_p.h \

SOURCES += \
    batchputmessagerequest.cpp \
    batchputmessageresponse.cpp \
    batchupdatedetectorrequest.cpp \
    batchupdatedetectorresponse.cpp \
    describedetectorrequest.cpp \
    describedetectorresponse.cpp \
    ioteventsdataclient.cpp \
    ioteventsdatarequest.cpp \
    ioteventsdataresponse.cpp \
    listdetectorsrequest.cpp \
    listdetectorsresponse.cpp \

win32:CONFIG += skip_target_version_ext
