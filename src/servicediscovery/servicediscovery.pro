include(../../common.pri)

TARGET = QtAwsServiceDiscovery
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createprivatednsnamespacerequest.h \
    createprivatednsnamespacerequest_p.h \
    createprivatednsnamespaceresponse.h \
    createprivatednsnamespaceresponse_p.h \
    createpublicdnsnamespacerequest.h \
    createpublicdnsnamespacerequest_p.h \
    createpublicdnsnamespaceresponse.h \
    createpublicdnsnamespaceresponse_p.h \
    createservicerequest.h \
    createservicerequest_p.h \
    createserviceresponse.h \
    createserviceresponse_p.h \
    deletenamespacerequest.h \
    deletenamespacerequest_p.h \
    deletenamespaceresponse.h \
    deletenamespaceresponse_p.h \
    deleteservicerequest.h \
    deleteservicerequest_p.h \
    deleteserviceresponse.h \
    deleteserviceresponse_p.h \
    deregisterinstancerequest.h \
    deregisterinstancerequest_p.h \
    deregisterinstanceresponse.h \
    deregisterinstanceresponse_p.h \
    getinstancerequest.h \
    getinstancerequest_p.h \
    getinstanceresponse.h \
    getinstanceresponse_p.h \
    getinstanceshealthstatusrequest.h \
    getinstanceshealthstatusrequest_p.h \
    getinstanceshealthstatusresponse.h \
    getinstanceshealthstatusresponse_p.h \
    getnamespacerequest.h \
    getnamespacerequest_p.h \
    getnamespaceresponse.h \
    getnamespaceresponse_p.h \
    getoperationrequest.h \
    getoperationrequest_p.h \
    getoperationresponse.h \
    getoperationresponse_p.h \
    getservicerequest.h \
    getservicerequest_p.h \
    getserviceresponse.h \
    getserviceresponse_p.h \
    listinstancesrequest.h \
    listinstancesrequest_p.h \
    listinstancesresponse.h \
    listinstancesresponse_p.h \
    listnamespacesrequest.h \
    listnamespacesrequest_p.h \
    listnamespacesresponse.h \
    listnamespacesresponse_p.h \
    listoperationsrequest.h \
    listoperationsrequest_p.h \
    listoperationsresponse.h \
    listoperationsresponse_p.h \
    listservicesrequest.h \
    listservicesrequest_p.h \
    listservicesresponse.h \
    listservicesresponse_p.h \
    registerinstancerequest.h \
    registerinstancerequest_p.h \
    registerinstanceresponse.h \
    registerinstanceresponse_p.h \
    servicediscoveryclient.h \
    servicediscoveryclient_p.h \
    servicediscoveryrequest.h \
    servicediscoveryrequest_p.h \
    servicediscoveryresponse.h \
    servicediscoveryresponse_p.h \
    updateinstancecustomhealthstatusrequest.h \
    updateinstancecustomhealthstatusrequest_p.h \
    updateinstancecustomhealthstatusresponse.h \
    updateinstancecustomhealthstatusresponse_p.h \
    updateservicerequest.h \
    updateservicerequest_p.h \
    updateserviceresponse.h \
    updateserviceresponse_p.h \

SOURCES += \
    createprivatednsnamespacerequest.cpp \
    createprivatednsnamespaceresponse.cpp \
    createpublicdnsnamespacerequest.cpp \
    createpublicdnsnamespaceresponse.cpp \
    createservicerequest.cpp \
    createserviceresponse.cpp \
    deletenamespacerequest.cpp \
    deletenamespaceresponse.cpp \
    deleteservicerequest.cpp \
    deleteserviceresponse.cpp \
    deregisterinstancerequest.cpp \
    deregisterinstanceresponse.cpp \
    getinstancerequest.cpp \
    getinstanceresponse.cpp \
    getinstanceshealthstatusrequest.cpp \
    getinstanceshealthstatusresponse.cpp \
    getnamespacerequest.cpp \
    getnamespaceresponse.cpp \
    getoperationrequest.cpp \
    getoperationresponse.cpp \
    getservicerequest.cpp \
    getserviceresponse.cpp \
    listinstancesrequest.cpp \
    listinstancesresponse.cpp \
    listnamespacesrequest.cpp \
    listnamespacesresponse.cpp \
    listoperationsrequest.cpp \
    listoperationsresponse.cpp \
    listservicesrequest.cpp \
    listservicesresponse.cpp \
    registerinstancerequest.cpp \
    registerinstanceresponse.cpp \
    servicediscoveryclient.cpp \
    servicediscoveryrequest.cpp \
    servicediscoveryresponse.cpp \
    updateinstancecustomhealthstatusrequest.cpp \
    updateinstancecustomhealthstatusresponse.cpp \
    updateservicerequest.cpp \
    updateserviceresponse.cpp \

win32:CONFIG += skip_target_version_ext
