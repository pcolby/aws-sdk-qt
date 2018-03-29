include(../../common.pri)

TARGET = acm
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acmclient.h \
    acmclient_p.h \
    acmrequest.h \
    acmrequest_p.h \
    acmresponse.h \
    acmresponse_p.h \
    addtagstocertificaterequest.h \
    addtagstocertificaterequest_p.h \
    addtagstocertificateresponse.h \
    addtagstocertificateresponse_p.h \
    deletecertificaterequest.h \
    deletecertificaterequest_p.h \
    deletecertificateresponse.h \
    deletecertificateresponse_p.h \
    describecertificaterequest.h \
    describecertificaterequest_p.h \
    describecertificateresponse.h \
    describecertificateresponse_p.h \
    getcertificaterequest.h \
    getcertificaterequest_p.h \
    getcertificateresponse.h \
    getcertificateresponse_p.h \
    importcertificaterequest.h \
    importcertificaterequest_p.h \
    importcertificateresponse.h \
    importcertificateresponse_p.h \
    listcertificatesrequest.h \
    listcertificatesrequest_p.h \
    listcertificatesresponse.h \
    listcertificatesresponse_p.h \
    listtagsforcertificaterequest.h \
    listtagsforcertificaterequest_p.h \
    listtagsforcertificateresponse.h \
    listtagsforcertificateresponse_p.h \
    removetagsfromcertificaterequest.h \
    removetagsfromcertificaterequest_p.h \
    removetagsfromcertificateresponse.h \
    removetagsfromcertificateresponse_p.h \
    requestcertificaterequest.h \
    requestcertificaterequest_p.h \
    requestcertificateresponse.h \
    requestcertificateresponse_p.h \
    resendvalidationemailrequest.h \
    resendvalidationemailrequest_p.h \
    resendvalidationemailresponse.h \
    resendvalidationemailresponse_p.h \
    updatecertificateoptionsrequest.h \
    updatecertificateoptionsrequest_p.h \
    updatecertificateoptionsresponse.h \
    updatecertificateoptionsresponse_p.h \

SOURCES += \
    acmclient.cpp \
    acmrequest.cpp \
    acmresponse.cpp \
    addtagstocertificaterequest.cpp \
    addtagstocertificateresponse.cpp \
    deletecertificaterequest.cpp \
    deletecertificateresponse.cpp \
    describecertificaterequest.cpp \
    describecertificateresponse.cpp \
    getcertificaterequest.cpp \
    getcertificateresponse.cpp \
    importcertificaterequest.cpp \
    importcertificateresponse.cpp \
    listcertificatesrequest.cpp \
    listcertificatesresponse.cpp \
    listtagsforcertificaterequest.cpp \
    listtagsforcertificateresponse.cpp \
    removetagsfromcertificaterequest.cpp \
    removetagsfromcertificateresponse.cpp \
    requestcertificaterequest.cpp \
    requestcertificateresponse.cpp \
    resendvalidationemailrequest.cpp \
    resendvalidationemailresponse.cpp \
    updatecertificateoptionsrequest.cpp \
    updatecertificateoptionsresponse.cpp \

win32:CONFIG += skip_target_version_ext
