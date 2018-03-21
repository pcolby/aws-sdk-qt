include(../../common.pri)

TARGET = cloud9
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloud9client.h \
    cloud9client_p.h \
    createenvironmentec2request.h \
    createenvironmentec2request_p.h \
    createenvironmentec2response.h \
    createenvironmentec2response_p.h \
    createenvironmentmembershiprequest.h \
    createenvironmentmembershiprequest_p.h \
    createenvironmentmembershipresponse.h \
    createenvironmentmembershipresponse_p.h \
    deleteenvironmentmembershiprequest.h \
    deleteenvironmentmembershiprequest_p.h \
    deleteenvironmentmembershipresponse.h \
    deleteenvironmentmembershipresponse_p.h \
    deleteenvironmentrequest.h \
    deleteenvironmentrequest_p.h \
    deleteenvironmentresponse.h \
    deleteenvironmentresponse_p.h \
    describeenvironmentmembershipsrequest.h \
    describeenvironmentmembershipsrequest_p.h \
    describeenvironmentmembershipsresponse.h \
    describeenvironmentmembershipsresponse_p.h \
    describeenvironmentsrequest.h \
    describeenvironmentsrequest_p.h \
    describeenvironmentsresponse.h \
    describeenvironmentsresponse_p.h \
    describeenvironmentstatusrequest.h \
    describeenvironmentstatusrequest_p.h \
    describeenvironmentstatusresponse.h \
    describeenvironmentstatusresponse_p.h \
    listenvironmentsrequest.h \
    listenvironmentsrequest_p.h \
    listenvironmentsresponse.h \
    listenvironmentsresponse_p.h \
    updateenvironmentmembershiprequest.h \
    updateenvironmentmembershiprequest_p.h \
    updateenvironmentmembershipresponse.h \
    updateenvironmentmembershipresponse_p.h \
    updateenvironmentrequest.h \
    updateenvironmentrequest_p.h \
    updateenvironmentresponse.h \
    updateenvironmentresponse_p.h \

SOURCES += \
    cloud9client.cpp \
    createenvironmentec2request.cpp \
    createenvironmentec2response.cpp \
    createenvironmentmembershiprequest.cpp \
    createenvironmentmembershipresponse.cpp \
    deleteenvironmentmembershiprequest.cpp \
    deleteenvironmentmembershipresponse.cpp \
    deleteenvironmentrequest.cpp \
    deleteenvironmentresponse.cpp \
    describeenvironmentmembershipsrequest.cpp \
    describeenvironmentmembershipsresponse.cpp \
    describeenvironmentsrequest.cpp \
    describeenvironmentsresponse.cpp \
    describeenvironmentstatusrequest.cpp \
    describeenvironmentstatusresponse.cpp \
    listenvironmentsrequest.cpp \
    listenvironmentsresponse.cpp \
    updateenvironmentmembershiprequest.cpp \
    updateenvironmentmembershipresponse.cpp \
    updateenvironmentrequest.cpp \
    updateenvironmentresponse.cpp \

win32:CONFIG += skip_target_version_ext
