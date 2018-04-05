include(../../common.pri)

TARGET = acm-pca
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acmpcaclient.h \
    acmpcaclient_p.h \
    acmpcarequest.h \
    acmpcarequest_p.h \
    acmpcaresponse.h \
    acmpcaresponse_p.h \
    createcertificateauthorityauditreportrequest.h \
    createcertificateauthorityauditreportrequest_p.h \
    createcertificateauthorityauditreportresponse.h \
    createcertificateauthorityauditreportresponse_p.h \
    createcertificateauthorityrequest.h \
    createcertificateauthorityrequest_p.h \
    createcertificateauthorityresponse.h \
    createcertificateauthorityresponse_p.h \
    deletecertificateauthorityrequest.h \
    deletecertificateauthorityrequest_p.h \
    deletecertificateauthorityresponse.h \
    deletecertificateauthorityresponse_p.h \
    describecertificateauthorityauditreportrequest.h \
    describecertificateauthorityauditreportrequest_p.h \
    describecertificateauthorityauditreportresponse.h \
    describecertificateauthorityauditreportresponse_p.h \
    describecertificateauthorityrequest.h \
    describecertificateauthorityrequest_p.h \
    describecertificateauthorityresponse.h \
    describecertificateauthorityresponse_p.h \
    getcertificateauthoritycertificaterequest.h \
    getcertificateauthoritycertificaterequest_p.h \
    getcertificateauthoritycertificateresponse.h \
    getcertificateauthoritycertificateresponse_p.h \
    getcertificateauthoritycsrrequest.h \
    getcertificateauthoritycsrrequest_p.h \
    getcertificateauthoritycsrresponse.h \
    getcertificateauthoritycsrresponse_p.h \
    getcertificaterequest.h \
    getcertificaterequest_p.h \
    getcertificateresponse.h \
    getcertificateresponse_p.h \
    importcertificateauthoritycertificaterequest.h \
    importcertificateauthoritycertificaterequest_p.h \
    importcertificateauthoritycertificateresponse.h \
    importcertificateauthoritycertificateresponse_p.h \
    issuecertificaterequest.h \
    issuecertificaterequest_p.h \
    issuecertificateresponse.h \
    issuecertificateresponse_p.h \
    listcertificateauthoritiesrequest.h \
    listcertificateauthoritiesrequest_p.h \
    listcertificateauthoritiesresponse.h \
    listcertificateauthoritiesresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    revokecertificaterequest.h \
    revokecertificaterequest_p.h \
    revokecertificateresponse.h \
    revokecertificateresponse_p.h \
    tagcertificateauthorityrequest.h \
    tagcertificateauthorityrequest_p.h \
    tagcertificateauthorityresponse.h \
    tagcertificateauthorityresponse_p.h \
    untagcertificateauthorityrequest.h \
    untagcertificateauthorityrequest_p.h \
    untagcertificateauthorityresponse.h \
    untagcertificateauthorityresponse_p.h \
    updatecertificateauthorityrequest.h \
    updatecertificateauthorityrequest_p.h \
    updatecertificateauthorityresponse.h \
    updatecertificateauthorityresponse_p.h \

SOURCES += \
    acmpcaclient.cpp \
    acmpcarequest.cpp \
    acmpcaresponse.cpp \
    createcertificateauthorityauditreportrequest.cpp \
    createcertificateauthorityauditreportresponse.cpp \
    createcertificateauthorityrequest.cpp \
    createcertificateauthorityresponse.cpp \
    deletecertificateauthorityrequest.cpp \
    deletecertificateauthorityresponse.cpp \
    describecertificateauthorityauditreportrequest.cpp \
    describecertificateauthorityauditreportresponse.cpp \
    describecertificateauthorityrequest.cpp \
    describecertificateauthorityresponse.cpp \
    getcertificateauthoritycertificaterequest.cpp \
    getcertificateauthoritycertificateresponse.cpp \
    getcertificateauthoritycsrrequest.cpp \
    getcertificateauthoritycsrresponse.cpp \
    getcertificaterequest.cpp \
    getcertificateresponse.cpp \
    importcertificateauthoritycertificaterequest.cpp \
    importcertificateauthoritycertificateresponse.cpp \
    issuecertificaterequest.cpp \
    issuecertificateresponse.cpp \
    listcertificateauthoritiesrequest.cpp \
    listcertificateauthoritiesresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    revokecertificaterequest.cpp \
    revokecertificateresponse.cpp \
    tagcertificateauthorityrequest.cpp \
    tagcertificateauthorityresponse.cpp \
    untagcertificateauthorityrequest.cpp \
    untagcertificateauthorityresponse.cpp \
    updatecertificateauthorityrequest.cpp \
    updatecertificateauthorityresponse.cpp \

win32:CONFIG += skip_target_version_ext
