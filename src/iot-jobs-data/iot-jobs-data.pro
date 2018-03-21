include(../../common.pri)

TARGET = iot-jobs-data
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    describejobexecutionrequest.h \
    describejobexecutionrequest_p.h \
    describejobexecutionresponse.h \
    describejobexecutionresponse_p.h \
    getpendingjobexecutionsrequest.h \
    getpendingjobexecutionsrequest_p.h \
    getpendingjobexecutionsresponse.h \
    getpendingjobexecutionsresponse_p.h \
    iotjobsdataplaneclient.h \
    iotjobsdataplaneclient_p.h \
    iotjobsdataplaneclientrequest.h \
    iotjobsdataplaneclientrequest_p.h \
    iotjobsdataplaneclientresponse.h \
    iotjobsdataplaneclientresponse_p.h \
    startnextpendingjobexecutionrequest.h \
    startnextpendingjobexecutionrequest_p.h \
    startnextpendingjobexecutionresponse.h \
    startnextpendingjobexecutionresponse_p.h \
    updatejobexecutionrequest.h \
    updatejobexecutionrequest_p.h \
    updatejobexecutionresponse.h \
    updatejobexecutionresponse_p.h \

SOURCES += \
    describejobexecutionrequest.cpp \
    describejobexecutionresponse.cpp \
    getpendingjobexecutionsrequest.cpp \
    getpendingjobexecutionsresponse.cpp \
    iotjobsdataplaneclient.cpp \
    iotjobsdataplaneclientrequest.cpp \
    iotjobsdataplaneclientresponse.cpp \
    startnextpendingjobexecutionrequest.cpp \
    startnextpendingjobexecutionresponse.cpp \
    updatejobexecutionrequest.cpp \
    updatejobexecutionresponse.cpp \

win32:CONFIG += skip_target_version_ext
