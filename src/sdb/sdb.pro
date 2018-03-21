include(../../common.pri)

TARGET = sdb
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchdeleteattributesrequest.h \
    batchdeleteattributesrequest_p.h \
    batchdeleteattributesresponse.h \
    batchdeleteattributesresponse_p.h \
    batchputattributesrequest.h \
    batchputattributesrequest_p.h \
    batchputattributesresponse.h \
    batchputattributesresponse_p.h \
    createdomainrequest.h \
    createdomainrequest_p.h \
    createdomainresponse.h \
    createdomainresponse_p.h \
    deleteattributesrequest.h \
    deleteattributesrequest_p.h \
    deleteattributesresponse.h \
    deleteattributesresponse_p.h \
    deletedomainrequest.h \
    deletedomainrequest_p.h \
    deletedomainresponse.h \
    deletedomainresponse_p.h \
    domainmetadatarequest.h \
    domainmetadatarequest_p.h \
    domainmetadataresponse.h \
    domainmetadataresponse_p.h \
    getattributesrequest.h \
    getattributesrequest_p.h \
    getattributesresponse.h \
    getattributesresponse_p.h \
    listdomainsrequest.h \
    listdomainsrequest_p.h \
    listdomainsresponse.h \
    listdomainsresponse_p.h \
    putattributesrequest.h \
    putattributesrequest_p.h \
    putattributesresponse.h \
    putattributesresponse_p.h \
    selectrequest.h \
    selectrequest_p.h \
    selectresponse.h \
    selectresponse_p.h \
    simpledbclient.h \
    simpledbclient_p.h \

SOURCES += \
    batchdeleteattributesrequest.cpp \
    batchdeleteattributesresponse.cpp \
    batchputattributesrequest.cpp \
    batchputattributesresponse.cpp \
    createdomainrequest.cpp \
    createdomainresponse.cpp \
    deleteattributesrequest.cpp \
    deleteattributesresponse.cpp \
    deletedomainrequest.cpp \
    deletedomainresponse.cpp \
    domainmetadatarequest.cpp \
    domainmetadataresponse.cpp \
    getattributesrequest.cpp \
    getattributesresponse.cpp \
    listdomainsrequest.cpp \
    listdomainsresponse.cpp \
    putattributesrequest.cpp \
    putattributesresponse.cpp \
    selectrequest.cpp \
    selectresponse.cpp \
    simpledbclient.cpp \

win32:CONFIG += skip_target_version_ext
