include(../../common.pri)

TARGET = cloudformation
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cancelupdatestackrequest.h \
    cancelupdatestackrequest_p.h \
    cancelupdatestackresponse.h \
    cancelupdatestackresponse_p.h \
    cloudformationclient.h \
    cloudformationclient_p.h \
    cloudformationclientrequest.h \
    cloudformationclientrequest_p.h \
    cloudformationclientresponse.h \
    cloudformationclientresponse_p.h \
    continueupdaterollbackrequest.h \
    continueupdaterollbackrequest_p.h \
    continueupdaterollbackresponse.h \
    continueupdaterollbackresponse_p.h \
    createchangesetrequest.h \
    createchangesetrequest_p.h \
    createchangesetresponse.h \
    createchangesetresponse_p.h \
    createstackinstancesrequest.h \
    createstackinstancesrequest_p.h \
    createstackinstancesresponse.h \
    createstackinstancesresponse_p.h \
    createstackrequest.h \
    createstackrequest_p.h \
    createstackresponse.h \
    createstackresponse_p.h \
    createstacksetrequest.h \
    createstacksetrequest_p.h \
    createstacksetresponse.h \
    createstacksetresponse_p.h \
    deletechangesetrequest.h \
    deletechangesetrequest_p.h \
    deletechangesetresponse.h \
    deletechangesetresponse_p.h \
    deletestackinstancesrequest.h \
    deletestackinstancesrequest_p.h \
    deletestackinstancesresponse.h \
    deletestackinstancesresponse_p.h \
    deletestackrequest.h \
    deletestackrequest_p.h \
    deletestackresponse.h \
    deletestackresponse_p.h \
    deletestacksetrequest.h \
    deletestacksetrequest_p.h \
    deletestacksetresponse.h \
    deletestacksetresponse_p.h \
    describeaccountlimitsrequest.h \
    describeaccountlimitsrequest_p.h \
    describeaccountlimitsresponse.h \
    describeaccountlimitsresponse_p.h \
    describechangesetrequest.h \
    describechangesetrequest_p.h \
    describechangesetresponse.h \
    describechangesetresponse_p.h \
    describestackeventsrequest.h \
    describestackeventsrequest_p.h \
    describestackeventsresponse.h \
    describestackeventsresponse_p.h \
    describestackinstancerequest.h \
    describestackinstancerequest_p.h \
    describestackinstanceresponse.h \
    describestackinstanceresponse_p.h \
    describestackresourcerequest.h \
    describestackresourcerequest_p.h \
    describestackresourceresponse.h \
    describestackresourceresponse_p.h \
    describestackresourcesrequest.h \
    describestackresourcesrequest_p.h \
    describestackresourcesresponse.h \
    describestackresourcesresponse_p.h \
    describestacksetoperationrequest.h \
    describestacksetoperationrequest_p.h \
    describestacksetoperationresponse.h \
    describestacksetoperationresponse_p.h \
    describestacksetrequest.h \
    describestacksetrequest_p.h \
    describestacksetresponse.h \
    describestacksetresponse_p.h \
    describestacksrequest.h \
    describestacksrequest_p.h \
    describestacksresponse.h \
    describestacksresponse_p.h \
    estimatetemplatecostrequest.h \
    estimatetemplatecostrequest_p.h \
    estimatetemplatecostresponse.h \
    estimatetemplatecostresponse_p.h \
    executechangesetrequest.h \
    executechangesetrequest_p.h \
    executechangesetresponse.h \
    executechangesetresponse_p.h \
    getstackpolicyrequest.h \
    getstackpolicyrequest_p.h \
    getstackpolicyresponse.h \
    getstackpolicyresponse_p.h \
    gettemplaterequest.h \
    gettemplaterequest_p.h \
    gettemplateresponse.h \
    gettemplateresponse_p.h \
    gettemplatesummaryrequest.h \
    gettemplatesummaryrequest_p.h \
    gettemplatesummaryresponse.h \
    gettemplatesummaryresponse_p.h \
    listchangesetsrequest.h \
    listchangesetsrequest_p.h \
    listchangesetsresponse.h \
    listchangesetsresponse_p.h \
    listexportsrequest.h \
    listexportsrequest_p.h \
    listexportsresponse.h \
    listexportsresponse_p.h \
    listimportsrequest.h \
    listimportsrequest_p.h \
    listimportsresponse.h \
    listimportsresponse_p.h \
    liststackinstancesrequest.h \
    liststackinstancesrequest_p.h \
    liststackinstancesresponse.h \
    liststackinstancesresponse_p.h \
    liststackresourcesrequest.h \
    liststackresourcesrequest_p.h \
    liststackresourcesresponse.h \
    liststackresourcesresponse_p.h \
    liststacksetoperationresultsrequest.h \
    liststacksetoperationresultsrequest_p.h \
    liststacksetoperationresultsresponse.h \
    liststacksetoperationresultsresponse_p.h \
    liststacksetoperationsrequest.h \
    liststacksetoperationsrequest_p.h \
    liststacksetoperationsresponse.h \
    liststacksetoperationsresponse_p.h \
    liststacksetsrequest.h \
    liststacksetsrequest_p.h \
    liststacksetsresponse.h \
    liststacksetsresponse_p.h \
    liststacksrequest.h \
    liststacksrequest_p.h \
    liststacksresponse.h \
    liststacksresponse_p.h \
    setstackpolicyrequest.h \
    setstackpolicyrequest_p.h \
    setstackpolicyresponse.h \
    setstackpolicyresponse_p.h \
    signalresourcerequest.h \
    signalresourcerequest_p.h \
    signalresourceresponse.h \
    signalresourceresponse_p.h \
    stopstacksetoperationrequest.h \
    stopstacksetoperationrequest_p.h \
    stopstacksetoperationresponse.h \
    stopstacksetoperationresponse_p.h \
    updatestackinstancesrequest.h \
    updatestackinstancesrequest_p.h \
    updatestackinstancesresponse.h \
    updatestackinstancesresponse_p.h \
    updatestackrequest.h \
    updatestackrequest_p.h \
    updatestackresponse.h \
    updatestackresponse_p.h \
    updatestacksetrequest.h \
    updatestacksetrequest_p.h \
    updatestacksetresponse.h \
    updatestacksetresponse_p.h \
    updateterminationprotectionrequest.h \
    updateterminationprotectionrequest_p.h \
    updateterminationprotectionresponse.h \
    updateterminationprotectionresponse_p.h \
    validatetemplaterequest.h \
    validatetemplaterequest_p.h \
    validatetemplateresponse.h \
    validatetemplateresponse_p.h \

SOURCES += \
    cancelupdatestackrequest.cpp \
    cancelupdatestackresponse.cpp \
    cloudformationclient.cpp \
    cloudformationclientrequest.cpp \
    cloudformationclientresponse.cpp \
    continueupdaterollbackrequest.cpp \
    continueupdaterollbackresponse.cpp \
    createchangesetrequest.cpp \
    createchangesetresponse.cpp \
    createstackinstancesrequest.cpp \
    createstackinstancesresponse.cpp \
    createstackrequest.cpp \
    createstackresponse.cpp \
    createstacksetrequest.cpp \
    createstacksetresponse.cpp \
    deletechangesetrequest.cpp \
    deletechangesetresponse.cpp \
    deletestackinstancesrequest.cpp \
    deletestackinstancesresponse.cpp \
    deletestackrequest.cpp \
    deletestackresponse.cpp \
    deletestacksetrequest.cpp \
    deletestacksetresponse.cpp \
    describeaccountlimitsrequest.cpp \
    describeaccountlimitsresponse.cpp \
    describechangesetrequest.cpp \
    describechangesetresponse.cpp \
    describestackeventsrequest.cpp \
    describestackeventsresponse.cpp \
    describestackinstancerequest.cpp \
    describestackinstanceresponse.cpp \
    describestackresourcerequest.cpp \
    describestackresourceresponse.cpp \
    describestackresourcesrequest.cpp \
    describestackresourcesresponse.cpp \
    describestacksetoperationrequest.cpp \
    describestacksetoperationresponse.cpp \
    describestacksetrequest.cpp \
    describestacksetresponse.cpp \
    describestacksrequest.cpp \
    describestacksresponse.cpp \
    estimatetemplatecostrequest.cpp \
    estimatetemplatecostresponse.cpp \
    executechangesetrequest.cpp \
    executechangesetresponse.cpp \
    getstackpolicyrequest.cpp \
    getstackpolicyresponse.cpp \
    gettemplaterequest.cpp \
    gettemplateresponse.cpp \
    gettemplatesummaryrequest.cpp \
    gettemplatesummaryresponse.cpp \
    listchangesetsrequest.cpp \
    listchangesetsresponse.cpp \
    listexportsrequest.cpp \
    listexportsresponse.cpp \
    listimportsrequest.cpp \
    listimportsresponse.cpp \
    liststackinstancesrequest.cpp \
    liststackinstancesresponse.cpp \
    liststackresourcesrequest.cpp \
    liststackresourcesresponse.cpp \
    liststacksetoperationresultsrequest.cpp \
    liststacksetoperationresultsresponse.cpp \
    liststacksetoperationsrequest.cpp \
    liststacksetoperationsresponse.cpp \
    liststacksetsrequest.cpp \
    liststacksetsresponse.cpp \
    liststacksrequest.cpp \
    liststacksresponse.cpp \
    setstackpolicyrequest.cpp \
    setstackpolicyresponse.cpp \
    signalresourcerequest.cpp \
    signalresourceresponse.cpp \
    stopstacksetoperationrequest.cpp \
    stopstacksetoperationresponse.cpp \
    updatestackinstancesrequest.cpp \
    updatestackinstancesresponse.cpp \
    updatestackrequest.cpp \
    updatestackresponse.cpp \
    updatestacksetrequest.cpp \
    updatestacksetresponse.cpp \
    updateterminationprotectionrequest.cpp \
    updateterminationprotectionresponse.cpp \
    validatetemplaterequest.cpp \
    validatetemplateresponse.cpp \

win32:CONFIG += skip_target_version_ext
