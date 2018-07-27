include(../../common.pri)

TARGET = QtAwsApplicationDiscoveryService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    applicationdiscoveryserviceclient.h \
    applicationdiscoveryserviceclient_p.h \
    applicationdiscoveryservicerequest.h \
    applicationdiscoveryservicerequest_p.h \
    applicationdiscoveryserviceresponse.h \
    applicationdiscoveryserviceresponse_p.h \
    associateconfigurationitemstoapplicationrequest.h \
    associateconfigurationitemstoapplicationrequest_p.h \
    associateconfigurationitemstoapplicationresponse.h \
    associateconfigurationitemstoapplicationresponse_p.h \
    createapplicationrequest.h \
    createapplicationrequest_p.h \
    createapplicationresponse.h \
    createapplicationresponse_p.h \
    createtagsrequest.h \
    createtagsrequest_p.h \
    createtagsresponse.h \
    createtagsresponse_p.h \
    deleteapplicationsrequest.h \
    deleteapplicationsrequest_p.h \
    deleteapplicationsresponse.h \
    deleteapplicationsresponse_p.h \
    deletetagsrequest.h \
    deletetagsrequest_p.h \
    deletetagsresponse.h \
    deletetagsresponse_p.h \
    describeagentsrequest.h \
    describeagentsrequest_p.h \
    describeagentsresponse.h \
    describeagentsresponse_p.h \
    describeconfigurationsrequest.h \
    describeconfigurationsrequest_p.h \
    describeconfigurationsresponse.h \
    describeconfigurationsresponse_p.h \
    describeexportconfigurationsrequest.h \
    describeexportconfigurationsrequest_p.h \
    describeexportconfigurationsresponse.h \
    describeexportconfigurationsresponse_p.h \
    describeexporttasksrequest.h \
    describeexporttasksrequest_p.h \
    describeexporttasksresponse.h \
    describeexporttasksresponse_p.h \
    describetagsrequest.h \
    describetagsrequest_p.h \
    describetagsresponse.h \
    describetagsresponse_p.h \
    disassociateconfigurationitemsfromapplicationrequest.h \
    disassociateconfigurationitemsfromapplicationrequest_p.h \
    disassociateconfigurationitemsfromapplicationresponse.h \
    disassociateconfigurationitemsfromapplicationresponse_p.h \
    exportconfigurationsrequest.h \
    exportconfigurationsrequest_p.h \
    exportconfigurationsresponse.h \
    exportconfigurationsresponse_p.h \
    getdiscoverysummaryrequest.h \
    getdiscoverysummaryrequest_p.h \
    getdiscoverysummaryresponse.h \
    getdiscoverysummaryresponse_p.h \
    listconfigurationsrequest.h \
    listconfigurationsrequest_p.h \
    listconfigurationsresponse.h \
    listconfigurationsresponse_p.h \
    listserverneighborsrequest.h \
    listserverneighborsrequest_p.h \
    listserverneighborsresponse.h \
    listserverneighborsresponse_p.h \
    startdatacollectionbyagentidsrequest.h \
    startdatacollectionbyagentidsrequest_p.h \
    startdatacollectionbyagentidsresponse.h \
    startdatacollectionbyagentidsresponse_p.h \
    startexporttaskrequest.h \
    startexporttaskrequest_p.h \
    startexporttaskresponse.h \
    startexporttaskresponse_p.h \
    stopdatacollectionbyagentidsrequest.h \
    stopdatacollectionbyagentidsrequest_p.h \
    stopdatacollectionbyagentidsresponse.h \
    stopdatacollectionbyagentidsresponse_p.h \
    updateapplicationrequest.h \
    updateapplicationrequest_p.h \
    updateapplicationresponse.h \
    updateapplicationresponse_p.h \

SOURCES += \
    applicationdiscoveryserviceclient.cpp \
    applicationdiscoveryservicerequest.cpp \
    applicationdiscoveryserviceresponse.cpp \
    associateconfigurationitemstoapplicationrequest.cpp \
    associateconfigurationitemstoapplicationresponse.cpp \
    createapplicationrequest.cpp \
    createapplicationresponse.cpp \
    createtagsrequest.cpp \
    createtagsresponse.cpp \
    deleteapplicationsrequest.cpp \
    deleteapplicationsresponse.cpp \
    deletetagsrequest.cpp \
    deletetagsresponse.cpp \
    describeagentsrequest.cpp \
    describeagentsresponse.cpp \
    describeconfigurationsrequest.cpp \
    describeconfigurationsresponse.cpp \
    describeexportconfigurationsrequest.cpp \
    describeexportconfigurationsresponse.cpp \
    describeexporttasksrequest.cpp \
    describeexporttasksresponse.cpp \
    describetagsrequest.cpp \
    describetagsresponse.cpp \
    disassociateconfigurationitemsfromapplicationrequest.cpp \
    disassociateconfigurationitemsfromapplicationresponse.cpp \
    exportconfigurationsrequest.cpp \
    exportconfigurationsresponse.cpp \
    getdiscoverysummaryrequest.cpp \
    getdiscoverysummaryresponse.cpp \
    listconfigurationsrequest.cpp \
    listconfigurationsresponse.cpp \
    listserverneighborsrequest.cpp \
    listserverneighborsresponse.cpp \
    startdatacollectionbyagentidsrequest.cpp \
    startdatacollectionbyagentidsresponse.cpp \
    startexporttaskrequest.cpp \
    startexporttaskresponse.cpp \
    stopdatacollectionbyagentidsrequest.cpp \
    stopdatacollectionbyagentidsresponse.cpp \
    updateapplicationrequest.cpp \
    updateapplicationresponse.cpp \

win32:CONFIG += skip_target_version_ext
