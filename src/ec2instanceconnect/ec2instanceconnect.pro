include(../../common.pri)

TARGET = QtAwsEC2InstanceConnect
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    ec2instanceconnectclient.h \
    ec2instanceconnectclient_p.h \
    ec2instanceconnectrequest.h \
    ec2instanceconnectrequest_p.h \
    ec2instanceconnectresponse.h \
    ec2instanceconnectresponse_p.h \
    sendsshpublickeyrequest.h \
    sendsshpublickeyrequest_p.h \
    sendsshpublickeyresponse.h \
    sendsshpublickeyresponse_p.h \

SOURCES += \
    ec2instanceconnectclient.cpp \
    ec2instanceconnectrequest.cpp \
    ec2instanceconnectresponse.cpp \
    sendsshpublickeyrequest.cpp \
    sendsshpublickeyresponse.cpp \

win32:CONFIG += skip_target_version_ext
