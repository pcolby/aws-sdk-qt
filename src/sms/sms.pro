include(../../common.pri)

TARGET = QtAwsSms
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createreplicationjobrequest.h \
    createreplicationjobrequest_p.h \
    createreplicationjobresponse.h \
    createreplicationjobresponse_p.h \
    deletereplicationjobrequest.h \
    deletereplicationjobrequest_p.h \
    deletereplicationjobresponse.h \
    deletereplicationjobresponse_p.h \
    deleteservercatalogrequest.h \
    deleteservercatalogrequest_p.h \
    deleteservercatalogresponse.h \
    deleteservercatalogresponse_p.h \
    disassociateconnectorrequest.h \
    disassociateconnectorrequest_p.h \
    disassociateconnectorresponse.h \
    disassociateconnectorresponse_p.h \
    getconnectorsrequest.h \
    getconnectorsrequest_p.h \
    getconnectorsresponse.h \
    getconnectorsresponse_p.h \
    getreplicationjobsrequest.h \
    getreplicationjobsrequest_p.h \
    getreplicationjobsresponse.h \
    getreplicationjobsresponse_p.h \
    getreplicationrunsrequest.h \
    getreplicationrunsrequest_p.h \
    getreplicationrunsresponse.h \
    getreplicationrunsresponse_p.h \
    getserversrequest.h \
    getserversrequest_p.h \
    getserversresponse.h \
    getserversresponse_p.h \
    importservercatalogrequest.h \
    importservercatalogrequest_p.h \
    importservercatalogresponse.h \
    importservercatalogresponse_p.h \
    smsclient.h \
    smsclient_p.h \
    smsrequest.h \
    smsrequest_p.h \
    smsresponse.h \
    smsresponse_p.h \
    startondemandreplicationrunrequest.h \
    startondemandreplicationrunrequest_p.h \
    startondemandreplicationrunresponse.h \
    startondemandreplicationrunresponse_p.h \
    updatereplicationjobrequest.h \
    updatereplicationjobrequest_p.h \
    updatereplicationjobresponse.h \
    updatereplicationjobresponse_p.h \

SOURCES += \
    createreplicationjobrequest.cpp \
    createreplicationjobresponse.cpp \
    deletereplicationjobrequest.cpp \
    deletereplicationjobresponse.cpp \
    deleteservercatalogrequest.cpp \
    deleteservercatalogresponse.cpp \
    disassociateconnectorrequest.cpp \
    disassociateconnectorresponse.cpp \
    getconnectorsrequest.cpp \
    getconnectorsresponse.cpp \
    getreplicationjobsrequest.cpp \
    getreplicationjobsresponse.cpp \
    getreplicationrunsrequest.cpp \
    getreplicationrunsresponse.cpp \
    getserversrequest.cpp \
    getserversresponse.cpp \
    importservercatalogrequest.cpp \
    importservercatalogresponse.cpp \
    smsclient.cpp \
    smsrequest.cpp \
    smsresponse.cpp \
    startondemandreplicationrunrequest.cpp \
    startondemandreplicationrunresponse.cpp \
    updatereplicationjobrequest.cpp \
    updatereplicationjobresponse.cpp \

win32:CONFIG += skip_target_version_ext
