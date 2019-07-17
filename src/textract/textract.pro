include(../../common.pri)

TARGET = QtAwsTextract
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    analyzedocumentrequest.h \
    analyzedocumentrequest_p.h \
    analyzedocumentresponse.h \
    analyzedocumentresponse_p.h \
    detectdocumenttextrequest.h \
    detectdocumenttextrequest_p.h \
    detectdocumenttextresponse.h \
    detectdocumenttextresponse_p.h \
    getdocumentanalysisrequest.h \
    getdocumentanalysisrequest_p.h \
    getdocumentanalysisresponse.h \
    getdocumentanalysisresponse_p.h \
    getdocumenttextdetectionrequest.h \
    getdocumenttextdetectionrequest_p.h \
    getdocumenttextdetectionresponse.h \
    getdocumenttextdetectionresponse_p.h \
    startdocumentanalysisrequest.h \
    startdocumentanalysisrequest_p.h \
    startdocumentanalysisresponse.h \
    startdocumentanalysisresponse_p.h \
    startdocumenttextdetectionrequest.h \
    startdocumenttextdetectionrequest_p.h \
    startdocumenttextdetectionresponse.h \
    startdocumenttextdetectionresponse_p.h \
    textractclient.h \
    textractclient_p.h \
    textractrequest.h \
    textractrequest_p.h \
    textractresponse.h \
    textractresponse_p.h \

SOURCES += \
    analyzedocumentrequest.cpp \
    analyzedocumentresponse.cpp \
    detectdocumenttextrequest.cpp \
    detectdocumenttextresponse.cpp \
    getdocumentanalysisrequest.cpp \
    getdocumentanalysisresponse.cpp \
    getdocumenttextdetectionrequest.cpp \
    getdocumenttextdetectionresponse.cpp \
    startdocumentanalysisrequest.cpp \
    startdocumentanalysisresponse.cpp \
    startdocumenttextdetectionrequest.cpp \
    startdocumenttextdetectionresponse.cpp \
    textractclient.cpp \
    textractrequest.cpp \
    textractresponse.cpp \

win32:CONFIG += skip_target_version_ext
