include(../../common.pri)

TARGET = QtAwsMediaPackageVod
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createassetrequest.h \
    createassetrequest_p.h \
    createassetresponse.h \
    createassetresponse_p.h \
    createpackagingconfigurationrequest.h \
    createpackagingconfigurationrequest_p.h \
    createpackagingconfigurationresponse.h \
    createpackagingconfigurationresponse_p.h \
    createpackaginggrouprequest.h \
    createpackaginggrouprequest_p.h \
    createpackaginggroupresponse.h \
    createpackaginggroupresponse_p.h \
    deleteassetrequest.h \
    deleteassetrequest_p.h \
    deleteassetresponse.h \
    deleteassetresponse_p.h \
    deletepackagingconfigurationrequest.h \
    deletepackagingconfigurationrequest_p.h \
    deletepackagingconfigurationresponse.h \
    deletepackagingconfigurationresponse_p.h \
    deletepackaginggrouprequest.h \
    deletepackaginggrouprequest_p.h \
    deletepackaginggroupresponse.h \
    deletepackaginggroupresponse_p.h \
    describeassetrequest.h \
    describeassetrequest_p.h \
    describeassetresponse.h \
    describeassetresponse_p.h \
    describepackagingconfigurationrequest.h \
    describepackagingconfigurationrequest_p.h \
    describepackagingconfigurationresponse.h \
    describepackagingconfigurationresponse_p.h \
    describepackaginggrouprequest.h \
    describepackaginggrouprequest_p.h \
    describepackaginggroupresponse.h \
    describepackaginggroupresponse_p.h \
    listassetsrequest.h \
    listassetsrequest_p.h \
    listassetsresponse.h \
    listassetsresponse_p.h \
    listpackagingconfigurationsrequest.h \
    listpackagingconfigurationsrequest_p.h \
    listpackagingconfigurationsresponse.h \
    listpackagingconfigurationsresponse_p.h \
    listpackaginggroupsrequest.h \
    listpackaginggroupsrequest_p.h \
    listpackaginggroupsresponse.h \
    listpackaginggroupsresponse_p.h \
    mediapackagevodclient.h \
    mediapackagevodclient_p.h \
    mediapackagevodrequest.h \
    mediapackagevodrequest_p.h \
    mediapackagevodresponse.h \
    mediapackagevodresponse_p.h \

SOURCES += \
    createassetrequest.cpp \
    createassetresponse.cpp \
    createpackagingconfigurationrequest.cpp \
    createpackagingconfigurationresponse.cpp \
    createpackaginggrouprequest.cpp \
    createpackaginggroupresponse.cpp \
    deleteassetrequest.cpp \
    deleteassetresponse.cpp \
    deletepackagingconfigurationrequest.cpp \
    deletepackagingconfigurationresponse.cpp \
    deletepackaginggrouprequest.cpp \
    deletepackaginggroupresponse.cpp \
    describeassetrequest.cpp \
    describeassetresponse.cpp \
    describepackagingconfigurationrequest.cpp \
    describepackagingconfigurationresponse.cpp \
    describepackaginggrouprequest.cpp \
    describepackaginggroupresponse.cpp \
    listassetsrequest.cpp \
    listassetsresponse.cpp \
    listpackagingconfigurationsrequest.cpp \
    listpackagingconfigurationsresponse.cpp \
    listpackaginggroupsrequest.cpp \
    listpackaginggroupsresponse.cpp \
    mediapackagevodclient.cpp \
    mediapackagevodrequest.cpp \
    mediapackagevodresponse.cpp \

win32:CONFIG += skip_target_version_ext
