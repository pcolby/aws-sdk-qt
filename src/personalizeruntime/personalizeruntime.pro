include(../../common.pri)

TARGET = QtAwsPersonalizeRuntime
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getpersonalizedrankingrequest.h \
    getpersonalizedrankingrequest_p.h \
    getpersonalizedrankingresponse.h \
    getpersonalizedrankingresponse_p.h \
    getrecommendationsrequest.h \
    getrecommendationsrequest_p.h \
    getrecommendationsresponse.h \
    getrecommendationsresponse_p.h \
    personalizeruntimeclient.h \
    personalizeruntimeclient_p.h \
    personalizeruntimerequest.h \
    personalizeruntimerequest_p.h \
    personalizeruntimeresponse.h \
    personalizeruntimeresponse_p.h \

SOURCES += \
    getpersonalizedrankingrequest.cpp \
    getpersonalizedrankingresponse.cpp \
    getrecommendationsrequest.cpp \
    getrecommendationsresponse.cpp \
    personalizeruntimeclient.cpp \
    personalizeruntimerequest.cpp \
    personalizeruntimeresponse.cpp \

win32:CONFIG += skip_target_version_ext
