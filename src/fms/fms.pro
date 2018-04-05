include(../../common.pri)

TARGET = fms
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateadminaccountrequest.h \
    associateadminaccountrequest_p.h \
    associateadminaccountresponse.h \
    associateadminaccountresponse_p.h \
    deletenotificationchannelrequest.h \
    deletenotificationchannelrequest_p.h \
    deletenotificationchannelresponse.h \
    deletenotificationchannelresponse_p.h \
    deletepolicyrequest.h \
    deletepolicyrequest_p.h \
    deletepolicyresponse.h \
    deletepolicyresponse_p.h \
    disassociateadminaccountrequest.h \
    disassociateadminaccountrequest_p.h \
    disassociateadminaccountresponse.h \
    disassociateadminaccountresponse_p.h \
    fmsclient.h \
    fmsclient_p.h \
    fmsrequest.h \
    fmsrequest_p.h \
    fmsresponse.h \
    fmsresponse_p.h \
    getadminaccountrequest.h \
    getadminaccountrequest_p.h \
    getadminaccountresponse.h \
    getadminaccountresponse_p.h \
    getcompliancedetailrequest.h \
    getcompliancedetailrequest_p.h \
    getcompliancedetailresponse.h \
    getcompliancedetailresponse_p.h \
    getnotificationchannelrequest.h \
    getnotificationchannelrequest_p.h \
    getnotificationchannelresponse.h \
    getnotificationchannelresponse_p.h \
    getpolicyrequest.h \
    getpolicyrequest_p.h \
    getpolicyresponse.h \
    getpolicyresponse_p.h \
    listcompliancestatusrequest.h \
    listcompliancestatusrequest_p.h \
    listcompliancestatusresponse.h \
    listcompliancestatusresponse_p.h \
    listpoliciesrequest.h \
    listpoliciesrequest_p.h \
    listpoliciesresponse.h \
    listpoliciesresponse_p.h \
    putnotificationchannelrequest.h \
    putnotificationchannelrequest_p.h \
    putnotificationchannelresponse.h \
    putnotificationchannelresponse_p.h \
    putpolicyrequest.h \
    putpolicyrequest_p.h \
    putpolicyresponse.h \
    putpolicyresponse_p.h \

SOURCES += \
    associateadminaccountrequest.cpp \
    associateadminaccountresponse.cpp \
    deletenotificationchannelrequest.cpp \
    deletenotificationchannelresponse.cpp \
    deletepolicyrequest.cpp \
    deletepolicyresponse.cpp \
    disassociateadminaccountrequest.cpp \
    disassociateadminaccountresponse.cpp \
    fmsclient.cpp \
    fmsrequest.cpp \
    fmsresponse.cpp \
    getadminaccountrequest.cpp \
    getadminaccountresponse.cpp \
    getcompliancedetailrequest.cpp \
    getcompliancedetailresponse.cpp \
    getnotificationchannelrequest.cpp \
    getnotificationchannelresponse.cpp \
    getpolicyrequest.cpp \
    getpolicyresponse.cpp \
    listcompliancestatusrequest.cpp \
    listcompliancestatusresponse.cpp \
    listpoliciesrequest.cpp \
    listpoliciesresponse.cpp \
    putnotificationchannelrequest.cpp \
    putnotificationchannelresponse.cpp \
    putpolicyrequest.cpp \
    putpolicyresponse.cpp \

win32:CONFIG += skip_target_version_ext
