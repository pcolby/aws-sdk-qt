include(../../common.pri)

TARGET = QtAwsCostExplorer
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    costexplorerclient.h \
    costexplorerclient_p.h \
    costexplorerrequest.h \
    costexplorerrequest_p.h \
    costexplorerresponse.h \
    costexplorerresponse_p.h \
    getcostandusagerequest.h \
    getcostandusagerequest_p.h \
    getcostandusageresponse.h \
    getcostandusageresponse_p.h \
    getcostforecastrequest.h \
    getcostforecastrequest_p.h \
    getcostforecastresponse.h \
    getcostforecastresponse_p.h \
    getdimensionvaluesrequest.h \
    getdimensionvaluesrequest_p.h \
    getdimensionvaluesresponse.h \
    getdimensionvaluesresponse_p.h \
    getreservationcoveragerequest.h \
    getreservationcoveragerequest_p.h \
    getreservationcoverageresponse.h \
    getreservationcoverageresponse_p.h \
    getreservationpurchaserecommendationrequest.h \
    getreservationpurchaserecommendationrequest_p.h \
    getreservationpurchaserecommendationresponse.h \
    getreservationpurchaserecommendationresponse_p.h \
    getreservationutilizationrequest.h \
    getreservationutilizationrequest_p.h \
    getreservationutilizationresponse.h \
    getreservationutilizationresponse_p.h \
    gettagsrequest.h \
    gettagsrequest_p.h \
    gettagsresponse.h \
    gettagsresponse_p.h \
    getusageforecastrequest.h \
    getusageforecastrequest_p.h \
    getusageforecastresponse.h \
    getusageforecastresponse_p.h \

SOURCES += \
    costexplorerclient.cpp \
    costexplorerrequest.cpp \
    costexplorerresponse.cpp \
    getcostandusagerequest.cpp \
    getcostandusageresponse.cpp \
    getcostforecastrequest.cpp \
    getcostforecastresponse.cpp \
    getdimensionvaluesrequest.cpp \
    getdimensionvaluesresponse.cpp \
    getreservationcoveragerequest.cpp \
    getreservationcoverageresponse.cpp \
    getreservationpurchaserecommendationrequest.cpp \
    getreservationpurchaserecommendationresponse.cpp \
    getreservationutilizationrequest.cpp \
    getreservationutilizationresponse.cpp \
    gettagsrequest.cpp \
    gettagsresponse.cpp \
    getusageforecastrequest.cpp \
    getusageforecastresponse.cpp \

win32:CONFIG += skip_target_version_ext
