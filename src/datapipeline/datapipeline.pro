include(../../common.pri)

TARGET = datapipeline
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    activatepipelinerequest.h \
    activatepipelinerequest_p.h \
    activatepipelineresponse.h \
    activatepipelineresponse_p.h \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    createpipelinerequest.h \
    createpipelinerequest_p.h \
    createpipelineresponse.h \
    createpipelineresponse_p.h \
    datapipelineclient.h \
    datapipelineclient_p.h \
    datapipelinerequest.h \
    datapipelinerequest_p.h \
    datapipelineresponse.h \
    datapipelineresponse_p.h \
    deactivatepipelinerequest.h \
    deactivatepipelinerequest_p.h \
    deactivatepipelineresponse.h \
    deactivatepipelineresponse_p.h \
    deletepipelinerequest.h \
    deletepipelinerequest_p.h \
    deletepipelineresponse.h \
    deletepipelineresponse_p.h \
    describeobjectsrequest.h \
    describeobjectsrequest_p.h \
    describeobjectsresponse.h \
    describeobjectsresponse_p.h \
    describepipelinesrequest.h \
    describepipelinesrequest_p.h \
    describepipelinesresponse.h \
    describepipelinesresponse_p.h \
    evaluateexpressionrequest.h \
    evaluateexpressionrequest_p.h \
    evaluateexpressionresponse.h \
    evaluateexpressionresponse_p.h \
    getpipelinedefinitionrequest.h \
    getpipelinedefinitionrequest_p.h \
    getpipelinedefinitionresponse.h \
    getpipelinedefinitionresponse_p.h \
    listpipelinesrequest.h \
    listpipelinesrequest_p.h \
    listpipelinesresponse.h \
    listpipelinesresponse_p.h \
    pollfortaskrequest.h \
    pollfortaskrequest_p.h \
    pollfortaskresponse.h \
    pollfortaskresponse_p.h \
    putpipelinedefinitionrequest.h \
    putpipelinedefinitionrequest_p.h \
    putpipelinedefinitionresponse.h \
    putpipelinedefinitionresponse_p.h \
    queryobjectsrequest.h \
    queryobjectsrequest_p.h \
    queryobjectsresponse.h \
    queryobjectsresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    reporttaskprogressrequest.h \
    reporttaskprogressrequest_p.h \
    reporttaskprogressresponse.h \
    reporttaskprogressresponse_p.h \
    reporttaskrunnerheartbeatrequest.h \
    reporttaskrunnerheartbeatrequest_p.h \
    reporttaskrunnerheartbeatresponse.h \
    reporttaskrunnerheartbeatresponse_p.h \
    setstatusrequest.h \
    setstatusrequest_p.h \
    setstatusresponse.h \
    setstatusresponse_p.h \
    settaskstatusrequest.h \
    settaskstatusrequest_p.h \
    settaskstatusresponse.h \
    settaskstatusresponse_p.h \
    validatepipelinedefinitionrequest.h \
    validatepipelinedefinitionrequest_p.h \
    validatepipelinedefinitionresponse.h \
    validatepipelinedefinitionresponse_p.h \

SOURCES += \
    activatepipelinerequest.cpp \
    activatepipelineresponse.cpp \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    createpipelinerequest.cpp \
    createpipelineresponse.cpp \
    datapipelineclient.cpp \
    datapipelinerequest.cpp \
    datapipelineresponse.cpp \
    deactivatepipelinerequest.cpp \
    deactivatepipelineresponse.cpp \
    deletepipelinerequest.cpp \
    deletepipelineresponse.cpp \
    describeobjectsrequest.cpp \
    describeobjectsresponse.cpp \
    describepipelinesrequest.cpp \
    describepipelinesresponse.cpp \
    evaluateexpressionrequest.cpp \
    evaluateexpressionresponse.cpp \
    getpipelinedefinitionrequest.cpp \
    getpipelinedefinitionresponse.cpp \
    listpipelinesrequest.cpp \
    listpipelinesresponse.cpp \
    pollfortaskrequest.cpp \
    pollfortaskresponse.cpp \
    putpipelinedefinitionrequest.cpp \
    putpipelinedefinitionresponse.cpp \
    queryobjectsrequest.cpp \
    queryobjectsresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    reporttaskprogressrequest.cpp \
    reporttaskprogressresponse.cpp \
    reporttaskrunnerheartbeatrequest.cpp \
    reporttaskrunnerheartbeatresponse.cpp \
    setstatusrequest.cpp \
    setstatusresponse.cpp \
    settaskstatusrequest.cpp \
    settaskstatusresponse.cpp \
    validatepipelinedefinitionrequest.cpp \
    validatepipelinedefinitionresponse.cpp \

win32:CONFIG += skip_target_version_ext
