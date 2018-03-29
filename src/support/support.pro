include(../../common.pri)

TARGET = support
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addattachmentstosetrequest.h \
    addattachmentstosetrequest_p.h \
    addattachmentstosetresponse.h \
    addattachmentstosetresponse_p.h \
    addcommunicationtocaserequest.h \
    addcommunicationtocaserequest_p.h \
    addcommunicationtocaseresponse.h \
    addcommunicationtocaseresponse_p.h \
    createcaserequest.h \
    createcaserequest_p.h \
    createcaseresponse.h \
    createcaseresponse_p.h \
    describeattachmentrequest.h \
    describeattachmentrequest_p.h \
    describeattachmentresponse.h \
    describeattachmentresponse_p.h \
    describecasesrequest.h \
    describecasesrequest_p.h \
    describecasesresponse.h \
    describecasesresponse_p.h \
    describecommunicationsrequest.h \
    describecommunicationsrequest_p.h \
    describecommunicationsresponse.h \
    describecommunicationsresponse_p.h \
    describeservicesrequest.h \
    describeservicesrequest_p.h \
    describeservicesresponse.h \
    describeservicesresponse_p.h \
    describeseveritylevelsrequest.h \
    describeseveritylevelsrequest_p.h \
    describeseveritylevelsresponse.h \
    describeseveritylevelsresponse_p.h \
    describetrustedadvisorcheckrefreshstatusesrequest.h \
    describetrustedadvisorcheckrefreshstatusesrequest_p.h \
    describetrustedadvisorcheckrefreshstatusesresponse.h \
    describetrustedadvisorcheckrefreshstatusesresponse_p.h \
    describetrustedadvisorcheckresultrequest.h \
    describetrustedadvisorcheckresultrequest_p.h \
    describetrustedadvisorcheckresultresponse.h \
    describetrustedadvisorcheckresultresponse_p.h \
    describetrustedadvisorchecksrequest.h \
    describetrustedadvisorchecksrequest_p.h \
    describetrustedadvisorchecksresponse.h \
    describetrustedadvisorchecksresponse_p.h \
    describetrustedadvisorchecksummariesrequest.h \
    describetrustedadvisorchecksummariesrequest_p.h \
    describetrustedadvisorchecksummariesresponse.h \
    describetrustedadvisorchecksummariesresponse_p.h \
    refreshtrustedadvisorcheckrequest.h \
    refreshtrustedadvisorcheckrequest_p.h \
    refreshtrustedadvisorcheckresponse.h \
    refreshtrustedadvisorcheckresponse_p.h \
    resolvecaserequest.h \
    resolvecaserequest_p.h \
    resolvecaseresponse.h \
    resolvecaseresponse_p.h \
    supportclient.h \
    supportclient_p.h \
    supportrequest.h \
    supportrequest_p.h \
    supportresponse.h \
    supportresponse_p.h \

SOURCES += \
    addattachmentstosetrequest.cpp \
    addattachmentstosetresponse.cpp \
    addcommunicationtocaserequest.cpp \
    addcommunicationtocaseresponse.cpp \
    createcaserequest.cpp \
    createcaseresponse.cpp \
    describeattachmentrequest.cpp \
    describeattachmentresponse.cpp \
    describecasesrequest.cpp \
    describecasesresponse.cpp \
    describecommunicationsrequest.cpp \
    describecommunicationsresponse.cpp \
    describeservicesrequest.cpp \
    describeservicesresponse.cpp \
    describeseveritylevelsrequest.cpp \
    describeseveritylevelsresponse.cpp \
    describetrustedadvisorcheckrefreshstatusesrequest.cpp \
    describetrustedadvisorcheckrefreshstatusesresponse.cpp \
    describetrustedadvisorcheckresultrequest.cpp \
    describetrustedadvisorcheckresultresponse.cpp \
    describetrustedadvisorchecksrequest.cpp \
    describetrustedadvisorchecksresponse.cpp \
    describetrustedadvisorchecksummariesrequest.cpp \
    describetrustedadvisorchecksummariesresponse.cpp \
    refreshtrustedadvisorcheckrequest.cpp \
    refreshtrustedadvisorcheckresponse.cpp \
    resolvecaserequest.cpp \
    resolvecaseresponse.cpp \
    supportclient.cpp \
    supportrequest.cpp \
    supportresponse.cpp \

win32:CONFIG += skip_target_version_ext
