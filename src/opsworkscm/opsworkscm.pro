include(../../common.pri)

TARGET = QtAwsOpsWorksCM
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associatenoderequest.h \
    associatenoderequest_p.h \
    associatenoderesponse.h \
    associatenoderesponse_p.h \
    createbackuprequest.h \
    createbackuprequest_p.h \
    createbackupresponse.h \
    createbackupresponse_p.h \
    createserverrequest.h \
    createserverrequest_p.h \
    createserverresponse.h \
    createserverresponse_p.h \
    deletebackuprequest.h \
    deletebackuprequest_p.h \
    deletebackupresponse.h \
    deletebackupresponse_p.h \
    deleteserverrequest.h \
    deleteserverrequest_p.h \
    deleteserverresponse.h \
    deleteserverresponse_p.h \
    describeaccountattributesrequest.h \
    describeaccountattributesrequest_p.h \
    describeaccountattributesresponse.h \
    describeaccountattributesresponse_p.h \
    describebackupsrequest.h \
    describebackupsrequest_p.h \
    describebackupsresponse.h \
    describebackupsresponse_p.h \
    describeeventsrequest.h \
    describeeventsrequest_p.h \
    describeeventsresponse.h \
    describeeventsresponse_p.h \
    describenodeassociationstatusrequest.h \
    describenodeassociationstatusrequest_p.h \
    describenodeassociationstatusresponse.h \
    describenodeassociationstatusresponse_p.h \
    describeserversrequest.h \
    describeserversrequest_p.h \
    describeserversresponse.h \
    describeserversresponse_p.h \
    disassociatenoderequest.h \
    disassociatenoderequest_p.h \
    disassociatenoderesponse.h \
    disassociatenoderesponse_p.h \
    exportserverengineattributerequest.h \
    exportserverengineattributerequest_p.h \
    exportserverengineattributeresponse.h \
    exportserverengineattributeresponse_p.h \
    opsworkscmclient.h \
    opsworkscmclient_p.h \
    opsworkscmrequest.h \
    opsworkscmrequest_p.h \
    opsworkscmresponse.h \
    opsworkscmresponse_p.h \
    restoreserverrequest.h \
    restoreserverrequest_p.h \
    restoreserverresponse.h \
    restoreserverresponse_p.h \
    startmaintenancerequest.h \
    startmaintenancerequest_p.h \
    startmaintenanceresponse.h \
    startmaintenanceresponse_p.h \
    updateserverengineattributesrequest.h \
    updateserverengineattributesrequest_p.h \
    updateserverengineattributesresponse.h \
    updateserverengineattributesresponse_p.h \
    updateserverrequest.h \
    updateserverrequest_p.h \
    updateserverresponse.h \
    updateserverresponse_p.h \

SOURCES += \
    associatenoderequest.cpp \
    associatenoderesponse.cpp \
    createbackuprequest.cpp \
    createbackupresponse.cpp \
    createserverrequest.cpp \
    createserverresponse.cpp \
    deletebackuprequest.cpp \
    deletebackupresponse.cpp \
    deleteserverrequest.cpp \
    deleteserverresponse.cpp \
    describeaccountattributesrequest.cpp \
    describeaccountattributesresponse.cpp \
    describebackupsrequest.cpp \
    describebackupsresponse.cpp \
    describeeventsrequest.cpp \
    describeeventsresponse.cpp \
    describenodeassociationstatusrequest.cpp \
    describenodeassociationstatusresponse.cpp \
    describeserversrequest.cpp \
    describeserversresponse.cpp \
    disassociatenoderequest.cpp \
    disassociatenoderesponse.cpp \
    exportserverengineattributerequest.cpp \
    exportserverengineattributeresponse.cpp \
    opsworkscmclient.cpp \
    opsworkscmrequest.cpp \
    opsworkscmresponse.cpp \
    restoreserverrequest.cpp \
    restoreserverresponse.cpp \
    startmaintenancerequest.cpp \
    startmaintenanceresponse.cpp \
    updateserverengineattributesrequest.cpp \
    updateserverengineattributesresponse.cpp \
    updateserverrequest.cpp \
    updateserverresponse.cpp \

win32:CONFIG += skip_target_version_ext
