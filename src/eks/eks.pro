include(../../common.pri)

TARGET = QtAwsEks
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
    describeupdaterequest.h \
    describeupdaterequest_p.h \
    describeupdateresponse.h \
    describeupdateresponse_p.h \
    eksclient.h \
    eksclient_p.h \
    eksrequest.h \
    eksrequest_p.h \
    eksresponse.h \
    eksresponse_p.h \
    listclustersrequest.h \
    listclustersrequest_p.h \
    listclustersresponse.h \
    listclustersresponse_p.h \
    listupdatesrequest.h \
    listupdatesrequest_p.h \
    listupdatesresponse.h \
    listupdatesresponse_p.h \
    updateclusterconfigrequest.h \
    updateclusterconfigrequest_p.h \
    updateclusterconfigresponse.h \
    updateclusterconfigresponse_p.h \
    updateclusterversionrequest.h \
    updateclusterversionrequest_p.h \
    updateclusterversionresponse.h \
    updateclusterversionresponse_p.h \

SOURCES += \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    describeclusterrequest.cpp \
    describeclusterresponse.cpp \
    describeupdaterequest.cpp \
    describeupdateresponse.cpp \
    eksclient.cpp \
    eksrequest.cpp \
    eksresponse.cpp \
    listclustersrequest.cpp \
    listclustersresponse.cpp \
    listupdatesrequest.cpp \
    listupdatesresponse.cpp \
    updateclusterconfigrequest.cpp \
    updateclusterconfigresponse.cpp \
    updateclusterversionrequest.cpp \
    updateclusterversionresponse.cpp \

win32:CONFIG += skip_target_version_ext
