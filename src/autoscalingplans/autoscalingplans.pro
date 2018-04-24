include(../../common.pri)

TARGET = QtAwsAutoScalingPlans
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    autoscalingplansclient.h \
    autoscalingplansclient_p.h \
    autoscalingplansrequest.h \
    autoscalingplansrequest_p.h \
    autoscalingplansresponse.h \
    autoscalingplansresponse_p.h \
    createscalingplanrequest.h \
    createscalingplanrequest_p.h \
    createscalingplanresponse.h \
    createscalingplanresponse_p.h \
    deletescalingplanrequest.h \
    deletescalingplanrequest_p.h \
    deletescalingplanresponse.h \
    deletescalingplanresponse_p.h \
    describescalingplanresourcesrequest.h \
    describescalingplanresourcesrequest_p.h \
    describescalingplanresourcesresponse.h \
    describescalingplanresourcesresponse_p.h \
    describescalingplansrequest.h \
    describescalingplansrequest_p.h \
    describescalingplansresponse.h \
    describescalingplansresponse_p.h \
    updatescalingplanrequest.h \
    updatescalingplanrequest_p.h \
    updatescalingplanresponse.h \
    updatescalingplanresponse_p.h \

SOURCES += \
    autoscalingplansclient.cpp \
    autoscalingplansrequest.cpp \
    autoscalingplansresponse.cpp \
    createscalingplanrequest.cpp \
    createscalingplanresponse.cpp \
    deletescalingplanrequest.cpp \
    deletescalingplanresponse.cpp \
    describescalingplanresourcesrequest.cpp \
    describescalingplanresourcesresponse.cpp \
    describescalingplansrequest.cpp \
    describescalingplansresponse.cpp \
    updatescalingplanrequest.cpp \
    updatescalingplanresponse.cpp \

win32:CONFIG += skip_target_version_ext
