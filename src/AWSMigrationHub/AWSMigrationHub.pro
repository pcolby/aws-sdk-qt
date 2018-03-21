include(../../common.pri)

TARGET = AWSMigrationHub
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associatecreatedartifactrequest.h \
    associatecreatedartifactrequest_p.h \
    associatecreatedartifactresponse.h \
    associatecreatedartifactresponse_p.h \
    associatediscoveredresourcerequest.h \
    associatediscoveredresourcerequest_p.h \
    associatediscoveredresourceresponse.h \
    associatediscoveredresourceresponse_p.h \
    createprogressupdatestreamrequest.h \
    createprogressupdatestreamrequest_p.h \
    createprogressupdatestreamresponse.h \
    createprogressupdatestreamresponse_p.h \
    deleteprogressupdatestreamrequest.h \
    deleteprogressupdatestreamrequest_p.h \
    deleteprogressupdatestreamresponse.h \
    deleteprogressupdatestreamresponse_p.h \
    describeapplicationstaterequest.h \
    describeapplicationstaterequest_p.h \
    describeapplicationstateresponse.h \
    describeapplicationstateresponse_p.h \
    describemigrationtaskrequest.h \
    describemigrationtaskrequest_p.h \
    describemigrationtaskresponse.h \
    describemigrationtaskresponse_p.h \
    disassociatecreatedartifactrequest.h \
    disassociatecreatedartifactrequest_p.h \
    disassociatecreatedartifactresponse.h \
    disassociatecreatedartifactresponse_p.h \
    disassociatediscoveredresourcerequest.h \
    disassociatediscoveredresourcerequest_p.h \
    disassociatediscoveredresourceresponse.h \
    disassociatediscoveredresourceresponse_p.h \
    importmigrationtaskrequest.h \
    importmigrationtaskrequest_p.h \
    importmigrationtaskresponse.h \
    importmigrationtaskresponse_p.h \
    listcreatedartifactsrequest.h \
    listcreatedartifactsrequest_p.h \
    listcreatedartifactsresponse.h \
    listcreatedartifactsresponse_p.h \
    listdiscoveredresourcesrequest.h \
    listdiscoveredresourcesrequest_p.h \
    listdiscoveredresourcesresponse.h \
    listdiscoveredresourcesresponse_p.h \
    listmigrationtasksrequest.h \
    listmigrationtasksrequest_p.h \
    listmigrationtasksresponse.h \
    listmigrationtasksresponse_p.h \
    listprogressupdatestreamsrequest.h \
    listprogressupdatestreamsrequest_p.h \
    listprogressupdatestreamsresponse.h \
    listprogressupdatestreamsresponse_p.h \
    migrationhubclient.h \
    migrationhubclient_p.h \
    notifyapplicationstaterequest.h \
    notifyapplicationstaterequest_p.h \
    notifyapplicationstateresponse.h \
    notifyapplicationstateresponse_p.h \
    notifymigrationtaskstaterequest.h \
    notifymigrationtaskstaterequest_p.h \
    notifymigrationtaskstateresponse.h \
    notifymigrationtaskstateresponse_p.h \
    putresourceattributesrequest.h \
    putresourceattributesrequest_p.h \
    putresourceattributesresponse.h \
    putresourceattributesresponse_p.h \

SOURCES += \
    associatecreatedartifactrequest.cpp \
    associatecreatedartifactresponse.cpp \
    associatediscoveredresourcerequest.cpp \
    associatediscoveredresourceresponse.cpp \
    createprogressupdatestreamrequest.cpp \
    createprogressupdatestreamresponse.cpp \
    deleteprogressupdatestreamrequest.cpp \
    deleteprogressupdatestreamresponse.cpp \
    describeapplicationstaterequest.cpp \
    describeapplicationstateresponse.cpp \
    describemigrationtaskrequest.cpp \
    describemigrationtaskresponse.cpp \
    disassociatecreatedartifactrequest.cpp \
    disassociatecreatedartifactresponse.cpp \
    disassociatediscoveredresourcerequest.cpp \
    disassociatediscoveredresourceresponse.cpp \
    importmigrationtaskrequest.cpp \
    importmigrationtaskresponse.cpp \
    listcreatedartifactsrequest.cpp \
    listcreatedartifactsresponse.cpp \
    listdiscoveredresourcesrequest.cpp \
    listdiscoveredresourcesresponse.cpp \
    listmigrationtasksrequest.cpp \
    listmigrationtasksresponse.cpp \
    listprogressupdatestreamsrequest.cpp \
    listprogressupdatestreamsresponse.cpp \
    migrationhubclient.cpp \
    notifyapplicationstaterequest.cpp \
    notifyapplicationstateresponse.cpp \
    notifymigrationtaskstaterequest.cpp \
    notifymigrationtaskstateresponse.cpp \
    putresourceattributesrequest.cpp \
    putresourceattributesresponse.cpp \

win32:CONFIG += skip_target_version_ext
