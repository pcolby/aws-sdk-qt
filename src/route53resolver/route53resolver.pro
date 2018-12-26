include(../../common.pri)

TARGET = QtAwsRoute53Resolver
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateresolverendpointipaddressrequest.h \
    associateresolverendpointipaddressrequest_p.h \
    associateresolverendpointipaddressresponse.h \
    associateresolverendpointipaddressresponse_p.h \
    associateresolverrulerequest.h \
    associateresolverrulerequest_p.h \
    associateresolverruleresponse.h \
    associateresolverruleresponse_p.h \
    createresolverendpointrequest.h \
    createresolverendpointrequest_p.h \
    createresolverendpointresponse.h \
    createresolverendpointresponse_p.h \
    createresolverrulerequest.h \
    createresolverrulerequest_p.h \
    createresolverruleresponse.h \
    createresolverruleresponse_p.h \
    deleteresolverendpointrequest.h \
    deleteresolverendpointrequest_p.h \
    deleteresolverendpointresponse.h \
    deleteresolverendpointresponse_p.h \
    deleteresolverrulerequest.h \
    deleteresolverrulerequest_p.h \
    deleteresolverruleresponse.h \
    deleteresolverruleresponse_p.h \
    disassociateresolverendpointipaddressrequest.h \
    disassociateresolverendpointipaddressrequest_p.h \
    disassociateresolverendpointipaddressresponse.h \
    disassociateresolverendpointipaddressresponse_p.h \
    disassociateresolverrulerequest.h \
    disassociateresolverrulerequest_p.h \
    disassociateresolverruleresponse.h \
    disassociateresolverruleresponse_p.h \
    getresolverendpointrequest.h \
    getresolverendpointrequest_p.h \
    getresolverendpointresponse.h \
    getresolverendpointresponse_p.h \
    getresolverruleassociationrequest.h \
    getresolverruleassociationrequest_p.h \
    getresolverruleassociationresponse.h \
    getresolverruleassociationresponse_p.h \
    getresolverrulepolicyrequest.h \
    getresolverrulepolicyrequest_p.h \
    getresolverrulepolicyresponse.h \
    getresolverrulepolicyresponse_p.h \
    getresolverrulerequest.h \
    getresolverrulerequest_p.h \
    getresolverruleresponse.h \
    getresolverruleresponse_p.h \
    listresolverendpointipaddressesrequest.h \
    listresolverendpointipaddressesrequest_p.h \
    listresolverendpointipaddressesresponse.h \
    listresolverendpointipaddressesresponse_p.h \
    listresolverendpointsrequest.h \
    listresolverendpointsrequest_p.h \
    listresolverendpointsresponse.h \
    listresolverendpointsresponse_p.h \
    listresolverruleassociationsrequest.h \
    listresolverruleassociationsrequest_p.h \
    listresolverruleassociationsresponse.h \
    listresolverruleassociationsresponse_p.h \
    listresolverrulesrequest.h \
    listresolverrulesrequest_p.h \
    listresolverrulesresponse.h \
    listresolverrulesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    putresolverrulepolicyrequest.h \
    putresolverrulepolicyrequest_p.h \
    putresolverrulepolicyresponse.h \
    putresolverrulepolicyresponse_p.h \
    route53resolverclient.h \
    route53resolverclient_p.h \
    route53resolverrequest.h \
    route53resolverrequest_p.h \
    route53resolverresponse.h \
    route53resolverresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updateresolverendpointrequest.h \
    updateresolverendpointrequest_p.h \
    updateresolverendpointresponse.h \
    updateresolverendpointresponse_p.h \
    updateresolverrulerequest.h \
    updateresolverrulerequest_p.h \
    updateresolverruleresponse.h \
    updateresolverruleresponse_p.h \

SOURCES += \
    associateresolverendpointipaddressrequest.cpp \
    associateresolverendpointipaddressresponse.cpp \
    associateresolverrulerequest.cpp \
    associateresolverruleresponse.cpp \
    createresolverendpointrequest.cpp \
    createresolverendpointresponse.cpp \
    createresolverrulerequest.cpp \
    createresolverruleresponse.cpp \
    deleteresolverendpointrequest.cpp \
    deleteresolverendpointresponse.cpp \
    deleteresolverrulerequest.cpp \
    deleteresolverruleresponse.cpp \
    disassociateresolverendpointipaddressrequest.cpp \
    disassociateresolverendpointipaddressresponse.cpp \
    disassociateresolverrulerequest.cpp \
    disassociateresolverruleresponse.cpp \
    getresolverendpointrequest.cpp \
    getresolverendpointresponse.cpp \
    getresolverruleassociationrequest.cpp \
    getresolverruleassociationresponse.cpp \
    getresolverrulepolicyrequest.cpp \
    getresolverrulepolicyresponse.cpp \
    getresolverrulerequest.cpp \
    getresolverruleresponse.cpp \
    listresolverendpointipaddressesrequest.cpp \
    listresolverendpointipaddressesresponse.cpp \
    listresolverendpointsrequest.cpp \
    listresolverendpointsresponse.cpp \
    listresolverruleassociationsrequest.cpp \
    listresolverruleassociationsresponse.cpp \
    listresolverrulesrequest.cpp \
    listresolverrulesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    putresolverrulepolicyrequest.cpp \
    putresolverrulepolicyresponse.cpp \
    route53resolverclient.cpp \
    route53resolverrequest.cpp \
    route53resolverresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updateresolverendpointrequest.cpp \
    updateresolverendpointresponse.cpp \
    updateresolverrulerequest.cpp \
    updateresolverruleresponse.cpp \

win32:CONFIG += skip_target_version_ext
