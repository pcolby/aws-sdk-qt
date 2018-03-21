include(../../common.pri)

TARGET = cognito-identity
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cognitoidentityclient.h \
    cognitoidentityclient_p.h \
    createidentitypoolrequest.h \
    createidentitypoolrequest_p.h \
    createidentitypoolresponse.h \
    createidentitypoolresponse_p.h \
    deleteidentitiesrequest.h \
    deleteidentitiesrequest_p.h \
    deleteidentitiesresponse.h \
    deleteidentitiesresponse_p.h \
    deleteidentitypoolrequest.h \
    deleteidentitypoolrequest_p.h \
    deleteidentitypoolresponse.h \
    deleteidentitypoolresponse_p.h \
    describeidentitypoolrequest.h \
    describeidentitypoolrequest_p.h \
    describeidentitypoolresponse.h \
    describeidentitypoolresponse_p.h \
    describeidentityrequest.h \
    describeidentityrequest_p.h \
    describeidentityresponse.h \
    describeidentityresponse_p.h \
    getcredentialsforidentityrequest.h \
    getcredentialsforidentityrequest_p.h \
    getcredentialsforidentityresponse.h \
    getcredentialsforidentityresponse_p.h \
    getidentitypoolrolesrequest.h \
    getidentitypoolrolesrequest_p.h \
    getidentitypoolrolesresponse.h \
    getidentitypoolrolesresponse_p.h \
    getidrequest.h \
    getidrequest_p.h \
    getidresponse.h \
    getidresponse_p.h \
    getopenidtokenfordeveloperidentityrequest.h \
    getopenidtokenfordeveloperidentityrequest_p.h \
    getopenidtokenfordeveloperidentityresponse.h \
    getopenidtokenfordeveloperidentityresponse_p.h \
    getopenidtokenrequest.h \
    getopenidtokenrequest_p.h \
    getopenidtokenresponse.h \
    getopenidtokenresponse_p.h \
    listidentitiesrequest.h \
    listidentitiesrequest_p.h \
    listidentitiesresponse.h \
    listidentitiesresponse_p.h \
    listidentitypoolsrequest.h \
    listidentitypoolsrequest_p.h \
    listidentitypoolsresponse.h \
    listidentitypoolsresponse_p.h \
    lookupdeveloperidentityrequest.h \
    lookupdeveloperidentityrequest_p.h \
    lookupdeveloperidentityresponse.h \
    lookupdeveloperidentityresponse_p.h \
    mergedeveloperidentitiesrequest.h \
    mergedeveloperidentitiesrequest_p.h \
    mergedeveloperidentitiesresponse.h \
    mergedeveloperidentitiesresponse_p.h \
    setidentitypoolrolesrequest.h \
    setidentitypoolrolesrequest_p.h \
    setidentitypoolrolesresponse.h \
    setidentitypoolrolesresponse_p.h \
    unlinkdeveloperidentityrequest.h \
    unlinkdeveloperidentityrequest_p.h \
    unlinkdeveloperidentityresponse.h \
    unlinkdeveloperidentityresponse_p.h \
    unlinkidentityrequest.h \
    unlinkidentityrequest_p.h \
    unlinkidentityresponse.h \
    unlinkidentityresponse_p.h \
    updateidentitypoolrequest.h \
    updateidentitypoolrequest_p.h \
    updateidentitypoolresponse.h \
    updateidentitypoolresponse_p.h \

SOURCES += \
    cognitoidentityclient.cpp \
    createidentitypoolrequest.cpp \
    createidentitypoolresponse.cpp \
    deleteidentitiesrequest.cpp \
    deleteidentitiesresponse.cpp \
    deleteidentitypoolrequest.cpp \
    deleteidentitypoolresponse.cpp \
    describeidentitypoolrequest.cpp \
    describeidentitypoolresponse.cpp \
    describeidentityrequest.cpp \
    describeidentityresponse.cpp \
    getcredentialsforidentityrequest.cpp \
    getcredentialsforidentityresponse.cpp \
    getidentitypoolrolesrequest.cpp \
    getidentitypoolrolesresponse.cpp \
    getidrequest.cpp \
    getidresponse.cpp \
    getopenidtokenfordeveloperidentityrequest.cpp \
    getopenidtokenfordeveloperidentityresponse.cpp \
    getopenidtokenrequest.cpp \
    getopenidtokenresponse.cpp \
    listidentitiesrequest.cpp \
    listidentitiesresponse.cpp \
    listidentitypoolsrequest.cpp \
    listidentitypoolsresponse.cpp \
    lookupdeveloperidentityrequest.cpp \
    lookupdeveloperidentityresponse.cpp \
    mergedeveloperidentitiesrequest.cpp \
    mergedeveloperidentitiesresponse.cpp \
    setidentitypoolrolesrequest.cpp \
    setidentitypoolrolesresponse.cpp \
    unlinkdeveloperidentityrequest.cpp \
    unlinkdeveloperidentityresponse.cpp \
    unlinkidentityrequest.cpp \
    unlinkidentityresponse.cpp \
    updateidentitypoolrequest.cpp \
    updateidentitypoolresponse.cpp \

win32:CONFIG += skip_target_version_ext
