include(../../common.pri)

TARGET = QtAwsMediaConnect
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addflowoutputsrequest.h \
    addflowoutputsrequest_p.h \
    addflowoutputsresponse.h \
    addflowoutputsresponse_p.h \
    createflowrequest.h \
    createflowrequest_p.h \
    createflowresponse.h \
    createflowresponse_p.h \
    deleteflowrequest.h \
    deleteflowrequest_p.h \
    deleteflowresponse.h \
    deleteflowresponse_p.h \
    describeflowrequest.h \
    describeflowrequest_p.h \
    describeflowresponse.h \
    describeflowresponse_p.h \
    grantflowentitlementsrequest.h \
    grantflowentitlementsrequest_p.h \
    grantflowentitlementsresponse.h \
    grantflowentitlementsresponse_p.h \
    listentitlementsrequest.h \
    listentitlementsrequest_p.h \
    listentitlementsresponse.h \
    listentitlementsresponse_p.h \
    listflowsrequest.h \
    listflowsrequest_p.h \
    listflowsresponse.h \
    listflowsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    mediaconnectclient.h \
    mediaconnectclient_p.h \
    mediaconnectrequest.h \
    mediaconnectrequest_p.h \
    mediaconnectresponse.h \
    mediaconnectresponse_p.h \
    removeflowoutputrequest.h \
    removeflowoutputrequest_p.h \
    removeflowoutputresponse.h \
    removeflowoutputresponse_p.h \
    revokeflowentitlementrequest.h \
    revokeflowentitlementrequest_p.h \
    revokeflowentitlementresponse.h \
    revokeflowentitlementresponse_p.h \
    startflowrequest.h \
    startflowrequest_p.h \
    startflowresponse.h \
    startflowresponse_p.h \
    stopflowrequest.h \
    stopflowrequest_p.h \
    stopflowresponse.h \
    stopflowresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateflowentitlementrequest.h \
    updateflowentitlementrequest_p.h \
    updateflowentitlementresponse.h \
    updateflowentitlementresponse_p.h \
    updateflowoutputrequest.h \
    updateflowoutputrequest_p.h \
    updateflowoutputresponse.h \
    updateflowoutputresponse_p.h \
    updateflowsourcerequest.h \
    updateflowsourcerequest_p.h \
    updateflowsourceresponse.h \
    updateflowsourceresponse_p.h \

SOURCES += \
    addflowoutputsrequest.cpp \
    addflowoutputsresponse.cpp \
    createflowrequest.cpp \
    createflowresponse.cpp \
    deleteflowrequest.cpp \
    deleteflowresponse.cpp \
    describeflowrequest.cpp \
    describeflowresponse.cpp \
    grantflowentitlementsrequest.cpp \
    grantflowentitlementsresponse.cpp \
    listentitlementsrequest.cpp \
    listentitlementsresponse.cpp \
    listflowsrequest.cpp \
    listflowsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    mediaconnectclient.cpp \
    mediaconnectrequest.cpp \
    mediaconnectresponse.cpp \
    removeflowoutputrequest.cpp \
    removeflowoutputresponse.cpp \
    revokeflowentitlementrequest.cpp \
    revokeflowentitlementresponse.cpp \
    startflowrequest.cpp \
    startflowresponse.cpp \
    stopflowrequest.cpp \
    stopflowresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateflowentitlementrequest.cpp \
    updateflowentitlementresponse.cpp \
    updateflowoutputrequest.cpp \
    updateflowoutputresponse.cpp \
    updateflowsourcerequest.cpp \
    updateflowsourceresponse.cpp \

win32:CONFIG += skip_target_version_ext
