include(../../common.pri)

TARGET = QtAwsMediaTailor
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    deleteplaybackconfigurationrequest.h \
    deleteplaybackconfigurationrequest_p.h \
    deleteplaybackconfigurationresponse.h \
    deleteplaybackconfigurationresponse_p.h \
    getplaybackconfigurationrequest.h \
    getplaybackconfigurationrequest_p.h \
    getplaybackconfigurationresponse.h \
    getplaybackconfigurationresponse_p.h \
    listplaybackconfigurationsrequest.h \
    listplaybackconfigurationsrequest_p.h \
    listplaybackconfigurationsresponse.h \
    listplaybackconfigurationsresponse_p.h \
    mediatailorclient.h \
    mediatailorclient_p.h \
    mediatailorrequest.h \
    mediatailorrequest_p.h \
    mediatailorresponse.h \
    mediatailorresponse_p.h \
    putplaybackconfigurationrequest.h \
    putplaybackconfigurationrequest_p.h \
    putplaybackconfigurationresponse.h \
    putplaybackconfigurationresponse_p.h \

SOURCES += \
    deleteplaybackconfigurationrequest.cpp \
    deleteplaybackconfigurationresponse.cpp \
    getplaybackconfigurationrequest.cpp \
    getplaybackconfigurationresponse.cpp \
    listplaybackconfigurationsrequest.cpp \
    listplaybackconfigurationsresponse.cpp \
    mediatailorclient.cpp \
    mediatailorrequest.cpp \
    mediatailorresponse.cpp \
    putplaybackconfigurationrequest.cpp \
    putplaybackconfigurationresponse.cpp \

win32:CONFIG += skip_target_version_ext
