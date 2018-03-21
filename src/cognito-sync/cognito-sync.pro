include(../../common.pri)

TARGET = cognito-sync
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    bulkpublishrequest.h \
    bulkpublishrequest_p.h \
    bulkpublishresponse.h \
    bulkpublishresponse_p.h \
    cognitosyncclient.h \
    cognitosyncclient_p.h \
    cognitosyncclientrequest.h \
    cognitosyncclientrequest_p.h \
    cognitosyncclientresponse.h \
    cognitosyncclientresponse_p.h \
    deletedatasetrequest.h \
    deletedatasetrequest_p.h \
    deletedatasetresponse.h \
    deletedatasetresponse_p.h \
    describedatasetrequest.h \
    describedatasetrequest_p.h \
    describedatasetresponse.h \
    describedatasetresponse_p.h \
    describeidentitypoolusagerequest.h \
    describeidentitypoolusagerequest_p.h \
    describeidentitypoolusageresponse.h \
    describeidentitypoolusageresponse_p.h \
    describeidentityusagerequest.h \
    describeidentityusagerequest_p.h \
    describeidentityusageresponse.h \
    describeidentityusageresponse_p.h \
    getbulkpublishdetailsrequest.h \
    getbulkpublishdetailsrequest_p.h \
    getbulkpublishdetailsresponse.h \
    getbulkpublishdetailsresponse_p.h \
    getcognitoeventsrequest.h \
    getcognitoeventsrequest_p.h \
    getcognitoeventsresponse.h \
    getcognitoeventsresponse_p.h \
    getidentitypoolconfigurationrequest.h \
    getidentitypoolconfigurationrequest_p.h \
    getidentitypoolconfigurationresponse.h \
    getidentitypoolconfigurationresponse_p.h \
    listdatasetsrequest.h \
    listdatasetsrequest_p.h \
    listdatasetsresponse.h \
    listdatasetsresponse_p.h \
    listidentitypoolusagerequest.h \
    listidentitypoolusagerequest_p.h \
    listidentitypoolusageresponse.h \
    listidentitypoolusageresponse_p.h \
    listrecordsrequest.h \
    listrecordsrequest_p.h \
    listrecordsresponse.h \
    listrecordsresponse_p.h \
    registerdevicerequest.h \
    registerdevicerequest_p.h \
    registerdeviceresponse.h \
    registerdeviceresponse_p.h \
    setcognitoeventsrequest.h \
    setcognitoeventsrequest_p.h \
    setcognitoeventsresponse.h \
    setcognitoeventsresponse_p.h \
    setidentitypoolconfigurationrequest.h \
    setidentitypoolconfigurationrequest_p.h \
    setidentitypoolconfigurationresponse.h \
    setidentitypoolconfigurationresponse_p.h \
    subscribetodatasetrequest.h \
    subscribetodatasetrequest_p.h \
    subscribetodatasetresponse.h \
    subscribetodatasetresponse_p.h \
    unsubscribefromdatasetrequest.h \
    unsubscribefromdatasetrequest_p.h \
    unsubscribefromdatasetresponse.h \
    unsubscribefromdatasetresponse_p.h \
    updaterecordsrequest.h \
    updaterecordsrequest_p.h \
    updaterecordsresponse.h \
    updaterecordsresponse_p.h \

SOURCES += \
    bulkpublishrequest.cpp \
    bulkpublishresponse.cpp \
    cognitosyncclient.cpp \
    cognitosyncclientrequest.cpp \
    cognitosyncclientresponse.cpp \
    deletedatasetrequest.cpp \
    deletedatasetresponse.cpp \
    describedatasetrequest.cpp \
    describedatasetresponse.cpp \
    describeidentitypoolusagerequest.cpp \
    describeidentitypoolusageresponse.cpp \
    describeidentityusagerequest.cpp \
    describeidentityusageresponse.cpp \
    getbulkpublishdetailsrequest.cpp \
    getbulkpublishdetailsresponse.cpp \
    getcognitoeventsrequest.cpp \
    getcognitoeventsresponse.cpp \
    getidentitypoolconfigurationrequest.cpp \
    getidentitypoolconfigurationresponse.cpp \
    listdatasetsrequest.cpp \
    listdatasetsresponse.cpp \
    listidentitypoolusagerequest.cpp \
    listidentitypoolusageresponse.cpp \
    listrecordsrequest.cpp \
    listrecordsresponse.cpp \
    registerdevicerequest.cpp \
    registerdeviceresponse.cpp \
    setcognitoeventsrequest.cpp \
    setcognitoeventsresponse.cpp \
    setidentitypoolconfigurationrequest.cpp \
    setidentitypoolconfigurationresponse.cpp \
    subscribetodatasetrequest.cpp \
    subscribetodatasetresponse.cpp \
    unsubscribefromdatasetrequest.cpp \
    unsubscribefromdatasetresponse.cpp \
    updaterecordsrequest.cpp \
    updaterecordsresponse.cpp \

win32:CONFIG += skip_target_version_ext
