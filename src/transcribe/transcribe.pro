include(../../common.pri)

TARGET = transcribe
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    gettranscriptionjobrequest.h \
    gettranscriptionjobrequest_p.h \
    gettranscriptionjobresponse.h \
    gettranscriptionjobresponse_p.h \
    listtranscriptionjobsrequest.h \
    listtranscriptionjobsrequest_p.h \
    listtranscriptionjobsresponse.h \
    listtranscriptionjobsresponse_p.h \
    starttranscriptionjobrequest.h \
    starttranscriptionjobrequest_p.h \
    starttranscriptionjobresponse.h \
    starttranscriptionjobresponse_p.h \
    transcribeserviceclient.h \
    transcribeserviceclient_p.h \
    transcribeservicerequest.h \
    transcribeservicerequest_p.h \
    transcribeserviceresponse.h \
    transcribeserviceresponse_p.h \

SOURCES += \
    gettranscriptionjobrequest.cpp \
    gettranscriptionjobresponse.cpp \
    listtranscriptionjobsrequest.cpp \
    listtranscriptionjobsresponse.cpp \
    starttranscriptionjobrequest.cpp \
    starttranscriptionjobresponse.cpp \
    transcribeserviceclient.cpp \
    transcribeservicerequest.cpp \
    transcribeserviceresponse.cpp \

win32:CONFIG += skip_target_version_ext
