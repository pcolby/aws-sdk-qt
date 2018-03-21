include(../../common.pri)

TARGET = monitoring
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudwatchclient.h \
    cloudwatchclient_p.h \
    cloudwatchclientrequest.h \
    cloudwatchclientrequest_p.h \
    cloudwatchclientresponse.h \
    cloudwatchclientresponse_p.h \
    deletealarmsrequest.h \
    deletealarmsrequest_p.h \
    deletealarmsresponse.h \
    deletealarmsresponse_p.h \
    deletedashboardsrequest.h \
    deletedashboardsrequest_p.h \
    deletedashboardsresponse.h \
    deletedashboardsresponse_p.h \
    describealarmhistoryrequest.h \
    describealarmhistoryrequest_p.h \
    describealarmhistoryresponse.h \
    describealarmhistoryresponse_p.h \
    describealarmsformetricrequest.h \
    describealarmsformetricrequest_p.h \
    describealarmsformetricresponse.h \
    describealarmsformetricresponse_p.h \
    describealarmsrequest.h \
    describealarmsrequest_p.h \
    describealarmsresponse.h \
    describealarmsresponse_p.h \
    disablealarmactionsrequest.h \
    disablealarmactionsrequest_p.h \
    disablealarmactionsresponse.h \
    disablealarmactionsresponse_p.h \
    enablealarmactionsrequest.h \
    enablealarmactionsrequest_p.h \
    enablealarmactionsresponse.h \
    enablealarmactionsresponse_p.h \
    getdashboardrequest.h \
    getdashboardrequest_p.h \
    getdashboardresponse.h \
    getdashboardresponse_p.h \
    getmetricstatisticsrequest.h \
    getmetricstatisticsrequest_p.h \
    getmetricstatisticsresponse.h \
    getmetricstatisticsresponse_p.h \
    listdashboardsrequest.h \
    listdashboardsrequest_p.h \
    listdashboardsresponse.h \
    listdashboardsresponse_p.h \
    listmetricsrequest.h \
    listmetricsrequest_p.h \
    listmetricsresponse.h \
    listmetricsresponse_p.h \
    putdashboardrequest.h \
    putdashboardrequest_p.h \
    putdashboardresponse.h \
    putdashboardresponse_p.h \
    putmetricalarmrequest.h \
    putmetricalarmrequest_p.h \
    putmetricalarmresponse.h \
    putmetricalarmresponse_p.h \
    putmetricdatarequest.h \
    putmetricdatarequest_p.h \
    putmetricdataresponse.h \
    putmetricdataresponse_p.h \
    setalarmstaterequest.h \
    setalarmstaterequest_p.h \
    setalarmstateresponse.h \
    setalarmstateresponse_p.h \

SOURCES += \
    cloudwatchclient.cpp \
    cloudwatchclientrequest.cpp \
    cloudwatchclientresponse.cpp \
    deletealarmsrequest.cpp \
    deletealarmsresponse.cpp \
    deletedashboardsrequest.cpp \
    deletedashboardsresponse.cpp \
    describealarmhistoryrequest.cpp \
    describealarmhistoryresponse.cpp \
    describealarmsformetricrequest.cpp \
    describealarmsformetricresponse.cpp \
    describealarmsrequest.cpp \
    describealarmsresponse.cpp \
    disablealarmactionsrequest.cpp \
    disablealarmactionsresponse.cpp \
    enablealarmactionsrequest.cpp \
    enablealarmactionsresponse.cpp \
    getdashboardrequest.cpp \
    getdashboardresponse.cpp \
    getmetricstatisticsrequest.cpp \
    getmetricstatisticsresponse.cpp \
    listdashboardsrequest.cpp \
    listdashboardsresponse.cpp \
    listmetricsrequest.cpp \
    listmetricsresponse.cpp \
    putdashboardrequest.cpp \
    putdashboardresponse.cpp \
    putmetricalarmrequest.cpp \
    putmetricalarmresponse.cpp \
    putmetricdatarequest.cpp \
    putmetricdataresponse.cpp \
    setalarmstaterequest.cpp \
    setalarmstateresponse.cpp \

win32:CONFIG += skip_target_version_ext
