include(../../common.pri)

TARGET = QtAwsTranscribeService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createvocabularyrequest.h \
    createvocabularyrequest_p.h \
    createvocabularyresponse.h \
    createvocabularyresponse_p.h \
    deletetranscriptionjobrequest.h \
    deletetranscriptionjobrequest_p.h \
    deletetranscriptionjobresponse.h \
    deletetranscriptionjobresponse_p.h \
    deletevocabularyrequest.h \
    deletevocabularyrequest_p.h \
    deletevocabularyresponse.h \
    deletevocabularyresponse_p.h \
    gettranscriptionjobrequest.h \
    gettranscriptionjobrequest_p.h \
    gettranscriptionjobresponse.h \
    gettranscriptionjobresponse_p.h \
    getvocabularyrequest.h \
    getvocabularyrequest_p.h \
    getvocabularyresponse.h \
    getvocabularyresponse_p.h \
    listtranscriptionjobsrequest.h \
    listtranscriptionjobsrequest_p.h \
    listtranscriptionjobsresponse.h \
    listtranscriptionjobsresponse_p.h \
    listvocabulariesrequest.h \
    listvocabulariesrequest_p.h \
    listvocabulariesresponse.h \
    listvocabulariesresponse_p.h \
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
    updatevocabularyrequest.h \
    updatevocabularyrequest_p.h \
    updatevocabularyresponse.h \
    updatevocabularyresponse_p.h \

SOURCES += \
    createvocabularyrequest.cpp \
    createvocabularyresponse.cpp \
    deletetranscriptionjobrequest.cpp \
    deletetranscriptionjobresponse.cpp \
    deletevocabularyrequest.cpp \
    deletevocabularyresponse.cpp \
    gettranscriptionjobrequest.cpp \
    gettranscriptionjobresponse.cpp \
    getvocabularyrequest.cpp \
    getvocabularyresponse.cpp \
    listtranscriptionjobsrequest.cpp \
    listtranscriptionjobsresponse.cpp \
    listvocabulariesrequest.cpp \
    listvocabulariesresponse.cpp \
    starttranscriptionjobrequest.cpp \
    starttranscriptionjobresponse.cpp \
    transcribeserviceclient.cpp \
    transcribeservicerequest.cpp \
    transcribeserviceresponse.cpp \
    updatevocabularyrequest.cpp \
    updatevocabularyresponse.cpp \

win32:CONFIG += skip_target_version_ext
