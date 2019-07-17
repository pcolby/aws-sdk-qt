include(../../common.pri)

TARGET = QtAwsApplicationInsights
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    applicationinsightsclient.h \
    applicationinsightsclient_p.h \
    applicationinsightsrequest.h \
    applicationinsightsrequest_p.h \
    applicationinsightsresponse.h \
    applicationinsightsresponse_p.h \
    createapplicationrequest.h \
    createapplicationrequest_p.h \
    createapplicationresponse.h \
    createapplicationresponse_p.h \
    createcomponentrequest.h \
    createcomponentrequest_p.h \
    createcomponentresponse.h \
    createcomponentresponse_p.h \
    deleteapplicationrequest.h \
    deleteapplicationrequest_p.h \
    deleteapplicationresponse.h \
    deleteapplicationresponse_p.h \
    deletecomponentrequest.h \
    deletecomponentrequest_p.h \
    deletecomponentresponse.h \
    deletecomponentresponse_p.h \
    describeapplicationrequest.h \
    describeapplicationrequest_p.h \
    describeapplicationresponse.h \
    describeapplicationresponse_p.h \
    describecomponentconfigurationrecommendationrequest.h \
    describecomponentconfigurationrecommendationrequest_p.h \
    describecomponentconfigurationrecommendationresponse.h \
    describecomponentconfigurationrecommendationresponse_p.h \
    describecomponentconfigurationrequest.h \
    describecomponentconfigurationrequest_p.h \
    describecomponentconfigurationresponse.h \
    describecomponentconfigurationresponse_p.h \
    describecomponentrequest.h \
    describecomponentrequest_p.h \
    describecomponentresponse.h \
    describecomponentresponse_p.h \
    describeobservationrequest.h \
    describeobservationrequest_p.h \
    describeobservationresponse.h \
    describeobservationresponse_p.h \
    describeproblemobservationsrequest.h \
    describeproblemobservationsrequest_p.h \
    describeproblemobservationsresponse.h \
    describeproblemobservationsresponse_p.h \
    describeproblemrequest.h \
    describeproblemrequest_p.h \
    describeproblemresponse.h \
    describeproblemresponse_p.h \
    listapplicationsrequest.h \
    listapplicationsrequest_p.h \
    listapplicationsresponse.h \
    listapplicationsresponse_p.h \
    listcomponentsrequest.h \
    listcomponentsrequest_p.h \
    listcomponentsresponse.h \
    listcomponentsresponse_p.h \
    listproblemsrequest.h \
    listproblemsrequest_p.h \
    listproblemsresponse.h \
    listproblemsresponse_p.h \
    updatecomponentconfigurationrequest.h \
    updatecomponentconfigurationrequest_p.h \
    updatecomponentconfigurationresponse.h \
    updatecomponentconfigurationresponse_p.h \
    updatecomponentrequest.h \
    updatecomponentrequest_p.h \
    updatecomponentresponse.h \
    updatecomponentresponse_p.h \

SOURCES += \
    applicationinsightsclient.cpp \
    applicationinsightsrequest.cpp \
    applicationinsightsresponse.cpp \
    createapplicationrequest.cpp \
    createapplicationresponse.cpp \
    createcomponentrequest.cpp \
    createcomponentresponse.cpp \
    deleteapplicationrequest.cpp \
    deleteapplicationresponse.cpp \
    deletecomponentrequest.cpp \
    deletecomponentresponse.cpp \
    describeapplicationrequest.cpp \
    describeapplicationresponse.cpp \
    describecomponentconfigurationrecommendationrequest.cpp \
    describecomponentconfigurationrecommendationresponse.cpp \
    describecomponentconfigurationrequest.cpp \
    describecomponentconfigurationresponse.cpp \
    describecomponentrequest.cpp \
    describecomponentresponse.cpp \
    describeobservationrequest.cpp \
    describeobservationresponse.cpp \
    describeproblemobservationsrequest.cpp \
    describeproblemobservationsresponse.cpp \
    describeproblemrequest.cpp \
    describeproblemresponse.cpp \
    listapplicationsrequest.cpp \
    listapplicationsresponse.cpp \
    listcomponentsrequest.cpp \
    listcomponentsresponse.cpp \
    listproblemsrequest.cpp \
    listproblemsresponse.cpp \
    updatecomponentconfigurationrequest.cpp \
    updatecomponentconfigurationresponse.cpp \
    updatecomponentrequest.cpp \
    updatecomponentresponse.cpp \

win32:CONFIG += skip_target_version_ext
