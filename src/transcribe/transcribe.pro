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
    transcribeserviceclientrequest.h \
    transcribeserviceclientrequest_p.h \
    transcribeserviceclientresponse.h \
    transcribeserviceclientresponse_p.h \

SOURCES += \
    gettranscriptionjobrequest.cpp \
    gettranscriptionjobresponse.cpp \
    listtranscriptionjobsrequest.cpp \
    listtranscriptionjobsresponse.cpp \
    starttranscriptionjobrequest.cpp \
    starttranscriptionjobresponse.cpp \
    transcribeserviceclient.cpp \
    transcribeserviceclientrequest.cpp \
    transcribeserviceclientresponse.cpp \

win32:CONFIG += skip_target_version_ext
