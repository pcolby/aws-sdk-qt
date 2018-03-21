include(../../common.pri)

TARGET = states
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createactivityrequest.h \
    createactivityrequest_p.h \
    createactivityresponse.h \
    createactivityresponse_p.h \
    createstatemachinerequest.h \
    createstatemachinerequest_p.h \
    createstatemachineresponse.h \
    createstatemachineresponse_p.h \
    deleteactivityrequest.h \
    deleteactivityrequest_p.h \
    deleteactivityresponse.h \
    deleteactivityresponse_p.h \
    deletestatemachinerequest.h \
    deletestatemachinerequest_p.h \
    deletestatemachineresponse.h \
    deletestatemachineresponse_p.h \
    describeactivityrequest.h \
    describeactivityrequest_p.h \
    describeactivityresponse.h \
    describeactivityresponse_p.h \
    describeexecutionrequest.h \
    describeexecutionrequest_p.h \
    describeexecutionresponse.h \
    describeexecutionresponse_p.h \
    describestatemachineforexecutionrequest.h \
    describestatemachineforexecutionrequest_p.h \
    describestatemachineforexecutionresponse.h \
    describestatemachineforexecutionresponse_p.h \
    describestatemachinerequest.h \
    describestatemachinerequest_p.h \
    describestatemachineresponse.h \
    describestatemachineresponse_p.h \
    getactivitytaskrequest.h \
    getactivitytaskrequest_p.h \
    getactivitytaskresponse.h \
    getactivitytaskresponse_p.h \
    getexecutionhistoryrequest.h \
    getexecutionhistoryrequest_p.h \
    getexecutionhistoryresponse.h \
    getexecutionhistoryresponse_p.h \
    listactivitiesrequest.h \
    listactivitiesrequest_p.h \
    listactivitiesresponse.h \
    listactivitiesresponse_p.h \
    listexecutionsrequest.h \
    listexecutionsrequest_p.h \
    listexecutionsresponse.h \
    listexecutionsresponse_p.h \
    liststatemachinesrequest.h \
    liststatemachinesrequest_p.h \
    liststatemachinesresponse.h \
    liststatemachinesresponse_p.h \
    sendtaskfailurerequest.h \
    sendtaskfailurerequest_p.h \
    sendtaskfailureresponse.h \
    sendtaskfailureresponse_p.h \
    sendtaskheartbeatrequest.h \
    sendtaskheartbeatrequest_p.h \
    sendtaskheartbeatresponse.h \
    sendtaskheartbeatresponse_p.h \
    sendtasksuccessrequest.h \
    sendtasksuccessrequest_p.h \
    sendtasksuccessresponse.h \
    sendtasksuccessresponse_p.h \
    sfnclient.h \
    sfnclient_p.h \
    startexecutionrequest.h \
    startexecutionrequest_p.h \
    startexecutionresponse.h \
    startexecutionresponse_p.h \
    stopexecutionrequest.h \
    stopexecutionrequest_p.h \
    stopexecutionresponse.h \
    stopexecutionresponse_p.h \
    updatestatemachinerequest.h \
    updatestatemachinerequest_p.h \
    updatestatemachineresponse.h \
    updatestatemachineresponse_p.h \

SOURCES += \
    createactivityrequest.cpp \
    createactivityresponse.cpp \
    createstatemachinerequest.cpp \
    createstatemachineresponse.cpp \
    deleteactivityrequest.cpp \
    deleteactivityresponse.cpp \
    deletestatemachinerequest.cpp \
    deletestatemachineresponse.cpp \
    describeactivityrequest.cpp \
    describeactivityresponse.cpp \
    describeexecutionrequest.cpp \
    describeexecutionresponse.cpp \
    describestatemachineforexecutionrequest.cpp \
    describestatemachineforexecutionresponse.cpp \
    describestatemachinerequest.cpp \
    describestatemachineresponse.cpp \
    getactivitytaskrequest.cpp \
    getactivitytaskresponse.cpp \
    getexecutionhistoryrequest.cpp \
    getexecutionhistoryresponse.cpp \
    listactivitiesrequest.cpp \
    listactivitiesresponse.cpp \
    listexecutionsrequest.cpp \
    listexecutionsresponse.cpp \
    liststatemachinesrequest.cpp \
    liststatemachinesresponse.cpp \
    sendtaskfailurerequest.cpp \
    sendtaskfailureresponse.cpp \
    sendtaskheartbeatrequest.cpp \
    sendtaskheartbeatresponse.cpp \
    sendtasksuccessrequest.cpp \
    sendtasksuccessresponse.cpp \
    sfnclient.cpp \
    startexecutionrequest.cpp \
    startexecutionresponse.cpp \
    stopexecutionrequest.cpp \
    stopexecutionresponse.cpp \
    updatestatemachinerequest.cpp \
    updatestatemachineresponse.cpp \

win32:CONFIG += skip_target_version_ext
