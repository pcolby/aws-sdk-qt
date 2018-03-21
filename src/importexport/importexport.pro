include(../../common.pri)

TARGET = importexport
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    getshippinglabelrequest.h \
    getshippinglabelrequest_p.h \
    getshippinglabelresponse.h \
    getshippinglabelresponse_p.h \
    getstatusrequest.h \
    getstatusrequest_p.h \
    getstatusresponse.h \
    getstatusresponse_p.h \
    importexportclient.h \
    importexportclient_p.h \
    importexportclientrequest.h \
    importexportclientrequest_p.h \
    importexportclientresponse.h \
    importexportclientresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    updatejobrequest.h \
    updatejobrequest_p.h \
    updatejobresponse.h \
    updatejobresponse_p.h \

SOURCES += \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    getshippinglabelrequest.cpp \
    getshippinglabelresponse.cpp \
    getstatusrequest.cpp \
    getstatusresponse.cpp \
    importexportclient.cpp \
    importexportclientrequest.cpp \
    importexportclientresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    updatejobrequest.cpp \
    updatejobresponse.cpp \

win32:CONFIG += skip_target_version_ext
