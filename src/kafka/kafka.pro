include(../../common.pri)

TARGET = QtAwsKafka
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createclusterrequest.h \
    createclusterrequest_p.h \
    createclusterresponse.h \
    createclusterresponse_p.h \
    deleteclusterrequest.h \
    deleteclusterrequest_p.h \
    deleteclusterresponse.h \
    deleteclusterresponse_p.h \
    describeclusterrequest.h \
    describeclusterrequest_p.h \
    describeclusterresponse.h \
    describeclusterresponse_p.h \
    getbootstrapbrokersrequest.h \
    getbootstrapbrokersrequest_p.h \
    getbootstrapbrokersresponse.h \
    getbootstrapbrokersresponse_p.h \
    kafkaclient.h \
    kafkaclient_p.h \
    kafkarequest.h \
    kafkarequest_p.h \
    kafkaresponse.h \
    kafkaresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listnodesrequest.h \
    listnodesrequest_p.h \
    listnodesresponse.h \
    listnodesresponse_p.h \

SOURCES += \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    describeclusterrequest.cpp \
    describeclusterresponse.cpp \
    getbootstrapbrokersrequest.cpp \
    getbootstrapbrokersresponse.cpp \
    kafkaclient.cpp \
    kafkarequest.cpp \
    kafkaresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listnodesrequest.cpp \
    listnodesresponse.cpp \

win32:CONFIG += skip_target_version_ext
