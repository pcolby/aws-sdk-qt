include(../../common.pri)

TARGET = QtAwsAmplify
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    amplifyclient.h \
    amplifyclient_p.h \
    amplifyrequest.h \
    amplifyrequest_p.h \
    amplifyresponse.h \
    amplifyresponse_p.h \
    createapprequest.h \
    createapprequest_p.h \
    createappresponse.h \
    createappresponse_p.h \
    createbranchrequest.h \
    createbranchrequest_p.h \
    createbranchresponse.h \
    createbranchresponse_p.h \
    createdomainassociationrequest.h \
    createdomainassociationrequest_p.h \
    createdomainassociationresponse.h \
    createdomainassociationresponse_p.h \
    deleteapprequest.h \
    deleteapprequest_p.h \
    deleteappresponse.h \
    deleteappresponse_p.h \
    deletebranchrequest.h \
    deletebranchrequest_p.h \
    deletebranchresponse.h \
    deletebranchresponse_p.h \
    deletedomainassociationrequest.h \
    deletedomainassociationrequest_p.h \
    deletedomainassociationresponse.h \
    deletedomainassociationresponse_p.h \
    deletejobrequest.h \
    deletejobrequest_p.h \
    deletejobresponse.h \
    deletejobresponse_p.h \
    getapprequest.h \
    getapprequest_p.h \
    getappresponse.h \
    getappresponse_p.h \
    getbranchrequest.h \
    getbranchrequest_p.h \
    getbranchresponse.h \
    getbranchresponse_p.h \
    getdomainassociationrequest.h \
    getdomainassociationrequest_p.h \
    getdomainassociationresponse.h \
    getdomainassociationresponse_p.h \
    getjobrequest.h \
    getjobrequest_p.h \
    getjobresponse.h \
    getjobresponse_p.h \
    listappsrequest.h \
    listappsrequest_p.h \
    listappsresponse.h \
    listappsresponse_p.h \
    listbranchesrequest.h \
    listbranchesrequest_p.h \
    listbranchesresponse.h \
    listbranchesresponse_p.h \
    listdomainassociationsrequest.h \
    listdomainassociationsrequest_p.h \
    listdomainassociationsresponse.h \
    listdomainassociationsresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    startjobrequest.h \
    startjobrequest_p.h \
    startjobresponse.h \
    startjobresponse_p.h \
    stopjobrequest.h \
    stopjobrequest_p.h \
    stopjobresponse.h \
    stopjobresponse_p.h \
    updateapprequest.h \
    updateapprequest_p.h \
    updateappresponse.h \
    updateappresponse_p.h \
    updatebranchrequest.h \
    updatebranchrequest_p.h \
    updatebranchresponse.h \
    updatebranchresponse_p.h \
    updatedomainassociationrequest.h \
    updatedomainassociationrequest_p.h \
    updatedomainassociationresponse.h \
    updatedomainassociationresponse_p.h \

SOURCES += \
    amplifyclient.cpp \
    amplifyrequest.cpp \
    amplifyresponse.cpp \
    createapprequest.cpp \
    createappresponse.cpp \
    createbranchrequest.cpp \
    createbranchresponse.cpp \
    createdomainassociationrequest.cpp \
    createdomainassociationresponse.cpp \
    deleteapprequest.cpp \
    deleteappresponse.cpp \
    deletebranchrequest.cpp \
    deletebranchresponse.cpp \
    deletedomainassociationrequest.cpp \
    deletedomainassociationresponse.cpp \
    deletejobrequest.cpp \
    deletejobresponse.cpp \
    getapprequest.cpp \
    getappresponse.cpp \
    getbranchrequest.cpp \
    getbranchresponse.cpp \
    getdomainassociationrequest.cpp \
    getdomainassociationresponse.cpp \
    getjobrequest.cpp \
    getjobresponse.cpp \
    listappsrequest.cpp \
    listappsresponse.cpp \
    listbranchesrequest.cpp \
    listbranchesresponse.cpp \
    listdomainassociationsrequest.cpp \
    listdomainassociationsresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    startjobrequest.cpp \
    startjobresponse.cpp \
    stopjobrequest.cpp \
    stopjobresponse.cpp \
    updateapprequest.cpp \
    updateappresponse.cpp \
    updatebranchrequest.cpp \
    updatebranchresponse.cpp \
    updatedomainassociationrequest.cpp \
    updatedomainassociationresponse.cpp \

win32:CONFIG += skip_target_version_ext
