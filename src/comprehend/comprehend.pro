include(../../common.pri)

TARGET = comprehend
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchdetectdominantlanguagerequest.h \
    batchdetectdominantlanguagerequest_p.h \
    batchdetectdominantlanguageresponse.h \
    batchdetectdominantlanguageresponse_p.h \
    batchdetectentitiesrequest.h \
    batchdetectentitiesrequest_p.h \
    batchdetectentitiesresponse.h \
    batchdetectentitiesresponse_p.h \
    batchdetectkeyphrasesrequest.h \
    batchdetectkeyphrasesrequest_p.h \
    batchdetectkeyphrasesresponse.h \
    batchdetectkeyphrasesresponse_p.h \
    batchdetectsentimentrequest.h \
    batchdetectsentimentrequest_p.h \
    batchdetectsentimentresponse.h \
    batchdetectsentimentresponse_p.h \
    comprehendclient.h \
    comprehendclient_p.h \
    comprehendrequest.h \
    comprehendrequest_p.h \
    comprehendresponse.h \
    comprehendresponse_p.h \
    describetopicsdetectionjobrequest.h \
    describetopicsdetectionjobrequest_p.h \
    describetopicsdetectionjobresponse.h \
    describetopicsdetectionjobresponse_p.h \
    detectdominantlanguagerequest.h \
    detectdominantlanguagerequest_p.h \
    detectdominantlanguageresponse.h \
    detectdominantlanguageresponse_p.h \
    detectentitiesrequest.h \
    detectentitiesrequest_p.h \
    detectentitiesresponse.h \
    detectentitiesresponse_p.h \
    detectkeyphrasesrequest.h \
    detectkeyphrasesrequest_p.h \
    detectkeyphrasesresponse.h \
    detectkeyphrasesresponse_p.h \
    detectsentimentrequest.h \
    detectsentimentrequest_p.h \
    detectsentimentresponse.h \
    detectsentimentresponse_p.h \
    listtopicsdetectionjobsrequest.h \
    listtopicsdetectionjobsrequest_p.h \
    listtopicsdetectionjobsresponse.h \
    listtopicsdetectionjobsresponse_p.h \
    starttopicsdetectionjobrequest.h \
    starttopicsdetectionjobrequest_p.h \
    starttopicsdetectionjobresponse.h \
    starttopicsdetectionjobresponse_p.h \

SOURCES += \
    batchdetectdominantlanguagerequest.cpp \
    batchdetectdominantlanguageresponse.cpp \
    batchdetectentitiesrequest.cpp \
    batchdetectentitiesresponse.cpp \
    batchdetectkeyphrasesrequest.cpp \
    batchdetectkeyphrasesresponse.cpp \
    batchdetectsentimentrequest.cpp \
    batchdetectsentimentresponse.cpp \
    comprehendclient.cpp \
    comprehendrequest.cpp \
    comprehendresponse.cpp \
    describetopicsdetectionjobrequest.cpp \
    describetopicsdetectionjobresponse.cpp \
    detectdominantlanguagerequest.cpp \
    detectdominantlanguageresponse.cpp \
    detectentitiesrequest.cpp \
    detectentitiesresponse.cpp \
    detectkeyphrasesrequest.cpp \
    detectkeyphrasesresponse.cpp \
    detectsentimentrequest.cpp \
    detectsentimentresponse.cpp \
    listtopicsdetectionjobsrequest.cpp \
    listtopicsdetectionjobsresponse.cpp \
    starttopicsdetectionjobrequest.cpp \
    starttopicsdetectionjobresponse.cpp \

win32:CONFIG += skip_target_version_ext
