include(../../common.pri)

TARGET = application-autoscaling
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    applicationautoscalingclient.h \
    applicationautoscalingclient_p.h \
    deletescalingpolicyrequest.h \
    deletescalingpolicyrequest_p.h \
    deletescalingpolicyresponse.h \
    deletescalingpolicyresponse_p.h \
    deletescheduledactionrequest.h \
    deletescheduledactionrequest_p.h \
    deletescheduledactionresponse.h \
    deletescheduledactionresponse_p.h \
    deregisterscalabletargetrequest.h \
    deregisterscalabletargetrequest_p.h \
    deregisterscalabletargetresponse.h \
    deregisterscalabletargetresponse_p.h \
    describescalabletargetsrequest.h \
    describescalabletargetsrequest_p.h \
    describescalabletargetsresponse.h \
    describescalabletargetsresponse_p.h \
    describescalingactivitiesrequest.h \
    describescalingactivitiesrequest_p.h \
    describescalingactivitiesresponse.h \
    describescalingactivitiesresponse_p.h \
    describescalingpoliciesrequest.h \
    describescalingpoliciesrequest_p.h \
    describescalingpoliciesresponse.h \
    describescalingpoliciesresponse_p.h \
    describescheduledactionsrequest.h \
    describescheduledactionsrequest_p.h \
    describescheduledactionsresponse.h \
    describescheduledactionsresponse_p.h \
    putscalingpolicyrequest.h \
    putscalingpolicyrequest_p.h \
    putscalingpolicyresponse.h \
    putscalingpolicyresponse_p.h \
    putscheduledactionrequest.h \
    putscheduledactionrequest_p.h \
    putscheduledactionresponse.h \
    putscheduledactionresponse_p.h \
    registerscalabletargetrequest.h \
    registerscalabletargetrequest_p.h \
    registerscalabletargetresponse.h \
    registerscalabletargetresponse_p.h \

SOURCES += \
    applicationautoscalingclient.cpp \
    deletescalingpolicyrequest.cpp \
    deletescalingpolicyresponse.cpp \
    deletescheduledactionrequest.cpp \
    deletescheduledactionresponse.cpp \
    deregisterscalabletargetrequest.cpp \
    deregisterscalabletargetresponse.cpp \
    describescalabletargetsrequest.cpp \
    describescalabletargetsresponse.cpp \
    describescalingactivitiesrequest.cpp \
    describescalingactivitiesresponse.cpp \
    describescalingpoliciesrequest.cpp \
    describescalingpoliciesresponse.cpp \
    describescheduledactionsrequest.cpp \
    describescheduledactionsresponse.cpp \
    putscalingpolicyrequest.cpp \
    putscalingpolicyresponse.cpp \
    putscheduledactionrequest.cpp \
    putscheduledactionresponse.cpp \
    registerscalabletargetrequest.cpp \
    registerscalabletargetresponse.cpp \

win32:CONFIG += skip_target_version_ext
