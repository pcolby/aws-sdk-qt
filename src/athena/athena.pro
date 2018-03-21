include(../../common.pri)

TARGET = athena
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    athenaclient.h \
    athenaclient_p.h \
    batchgetnamedqueryrequest.h \
    batchgetnamedqueryrequest_p.h \
    batchgetnamedqueryresponse.h \
    batchgetnamedqueryresponse_p.h \
    batchgetqueryexecutionrequest.h \
    batchgetqueryexecutionrequest_p.h \
    batchgetqueryexecutionresponse.h \
    batchgetqueryexecutionresponse_p.h \
    createnamedqueryrequest.h \
    createnamedqueryrequest_p.h \
    createnamedqueryresponse.h \
    createnamedqueryresponse_p.h \
    deletenamedqueryrequest.h \
    deletenamedqueryrequest_p.h \
    deletenamedqueryresponse.h \
    deletenamedqueryresponse_p.h \
    getnamedqueryrequest.h \
    getnamedqueryrequest_p.h \
    getnamedqueryresponse.h \
    getnamedqueryresponse_p.h \
    getqueryexecutionrequest.h \
    getqueryexecutionrequest_p.h \
    getqueryexecutionresponse.h \
    getqueryexecutionresponse_p.h \
    getqueryresultsrequest.h \
    getqueryresultsrequest_p.h \
    getqueryresultsresponse.h \
    getqueryresultsresponse_p.h \
    listnamedqueriesrequest.h \
    listnamedqueriesrequest_p.h \
    listnamedqueriesresponse.h \
    listnamedqueriesresponse_p.h \
    listqueryexecutionsrequest.h \
    listqueryexecutionsrequest_p.h \
    listqueryexecutionsresponse.h \
    listqueryexecutionsresponse_p.h \
    startqueryexecutionrequest.h \
    startqueryexecutionrequest_p.h \
    startqueryexecutionresponse.h \
    startqueryexecutionresponse_p.h \
    stopqueryexecutionrequest.h \
    stopqueryexecutionrequest_p.h \
    stopqueryexecutionresponse.h \
    stopqueryexecutionresponse_p.h \

SOURCES += \
    athenaclient.cpp \
    batchgetnamedqueryrequest.cpp \
    batchgetnamedqueryresponse.cpp \
    batchgetqueryexecutionrequest.cpp \
    batchgetqueryexecutionresponse.cpp \
    createnamedqueryrequest.cpp \
    createnamedqueryresponse.cpp \
    deletenamedqueryrequest.cpp \
    deletenamedqueryresponse.cpp \
    getnamedqueryrequest.cpp \
    getnamedqueryresponse.cpp \
    getqueryexecutionrequest.cpp \
    getqueryexecutionresponse.cpp \
    getqueryresultsrequest.cpp \
    getqueryresultsresponse.cpp \
    listnamedqueriesrequest.cpp \
    listnamedqueriesresponse.cpp \
    listqueryexecutionsrequest.cpp \
    listqueryexecutionsresponse.cpp \
    startqueryexecutionrequest.cpp \
    startqueryexecutionresponse.cpp \
    stopqueryexecutionrequest.cpp \
    stopqueryexecutionresponse.cpp \

win32:CONFIG += skip_target_version_ext
