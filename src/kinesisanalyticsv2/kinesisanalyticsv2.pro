include(../../common.pri)

TARGET = QtAwsKinesisAnalyticsV2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addapplicationcloudwatchloggingoptionrequest.h \
    addapplicationcloudwatchloggingoptionrequest_p.h \
    addapplicationcloudwatchloggingoptionresponse.h \
    addapplicationcloudwatchloggingoptionresponse_p.h \
    addapplicationinputprocessingconfigurationrequest.h \
    addapplicationinputprocessingconfigurationrequest_p.h \
    addapplicationinputprocessingconfigurationresponse.h \
    addapplicationinputprocessingconfigurationresponse_p.h \
    addapplicationinputrequest.h \
    addapplicationinputrequest_p.h \
    addapplicationinputresponse.h \
    addapplicationinputresponse_p.h \
    addapplicationoutputrequest.h \
    addapplicationoutputrequest_p.h \
    addapplicationoutputresponse.h \
    addapplicationoutputresponse_p.h \
    addapplicationreferencedatasourcerequest.h \
    addapplicationreferencedatasourcerequest_p.h \
    addapplicationreferencedatasourceresponse.h \
    addapplicationreferencedatasourceresponse_p.h \
    createapplicationrequest.h \
    createapplicationrequest_p.h \
    createapplicationresponse.h \
    createapplicationresponse_p.h \
    createapplicationsnapshotrequest.h \
    createapplicationsnapshotrequest_p.h \
    createapplicationsnapshotresponse.h \
    createapplicationsnapshotresponse_p.h \
    deleteapplicationcloudwatchloggingoptionrequest.h \
    deleteapplicationcloudwatchloggingoptionrequest_p.h \
    deleteapplicationcloudwatchloggingoptionresponse.h \
    deleteapplicationcloudwatchloggingoptionresponse_p.h \
    deleteapplicationinputprocessingconfigurationrequest.h \
    deleteapplicationinputprocessingconfigurationrequest_p.h \
    deleteapplicationinputprocessingconfigurationresponse.h \
    deleteapplicationinputprocessingconfigurationresponse_p.h \
    deleteapplicationoutputrequest.h \
    deleteapplicationoutputrequest_p.h \
    deleteapplicationoutputresponse.h \
    deleteapplicationoutputresponse_p.h \
    deleteapplicationreferencedatasourcerequest.h \
    deleteapplicationreferencedatasourcerequest_p.h \
    deleteapplicationreferencedatasourceresponse.h \
    deleteapplicationreferencedatasourceresponse_p.h \
    deleteapplicationrequest.h \
    deleteapplicationrequest_p.h \
    deleteapplicationresponse.h \
    deleteapplicationresponse_p.h \
    deleteapplicationsnapshotrequest.h \
    deleteapplicationsnapshotrequest_p.h \
    deleteapplicationsnapshotresponse.h \
    deleteapplicationsnapshotresponse_p.h \
    describeapplicationrequest.h \
    describeapplicationrequest_p.h \
    describeapplicationresponse.h \
    describeapplicationresponse_p.h \
    describeapplicationsnapshotrequest.h \
    describeapplicationsnapshotrequest_p.h \
    describeapplicationsnapshotresponse.h \
    describeapplicationsnapshotresponse_p.h \
    discoverinputschemarequest.h \
    discoverinputschemarequest_p.h \
    discoverinputschemaresponse.h \
    discoverinputschemaresponse_p.h \
    kinesisanalyticsv2client.h \
    kinesisanalyticsv2client_p.h \
    kinesisanalyticsv2request.h \
    kinesisanalyticsv2request_p.h \
    kinesisanalyticsv2response.h \
    kinesisanalyticsv2response_p.h \
    listapplicationsnapshotsrequest.h \
    listapplicationsnapshotsrequest_p.h \
    listapplicationsnapshotsresponse.h \
    listapplicationsnapshotsresponse_p.h \
    listapplicationsrequest.h \
    listapplicationsrequest_p.h \
    listapplicationsresponse.h \
    listapplicationsresponse_p.h \
    startapplicationrequest.h \
    startapplicationrequest_p.h \
    startapplicationresponse.h \
    startapplicationresponse_p.h \
    stopapplicationrequest.h \
    stopapplicationrequest_p.h \
    stopapplicationresponse.h \
    stopapplicationresponse_p.h \
    updateapplicationrequest.h \
    updateapplicationrequest_p.h \
    updateapplicationresponse.h \
    updateapplicationresponse_p.h \

SOURCES += \
    addapplicationcloudwatchloggingoptionrequest.cpp \
    addapplicationcloudwatchloggingoptionresponse.cpp \
    addapplicationinputprocessingconfigurationrequest.cpp \
    addapplicationinputprocessingconfigurationresponse.cpp \
    addapplicationinputrequest.cpp \
    addapplicationinputresponse.cpp \
    addapplicationoutputrequest.cpp \
    addapplicationoutputresponse.cpp \
    addapplicationreferencedatasourcerequest.cpp \
    addapplicationreferencedatasourceresponse.cpp \
    createapplicationrequest.cpp \
    createapplicationresponse.cpp \
    createapplicationsnapshotrequest.cpp \
    createapplicationsnapshotresponse.cpp \
    deleteapplicationcloudwatchloggingoptionrequest.cpp \
    deleteapplicationcloudwatchloggingoptionresponse.cpp \
    deleteapplicationinputprocessingconfigurationrequest.cpp \
    deleteapplicationinputprocessingconfigurationresponse.cpp \
    deleteapplicationoutputrequest.cpp \
    deleteapplicationoutputresponse.cpp \
    deleteapplicationreferencedatasourcerequest.cpp \
    deleteapplicationreferencedatasourceresponse.cpp \
    deleteapplicationrequest.cpp \
    deleteapplicationresponse.cpp \
    deleteapplicationsnapshotrequest.cpp \
    deleteapplicationsnapshotresponse.cpp \
    describeapplicationrequest.cpp \
    describeapplicationresponse.cpp \
    describeapplicationsnapshotrequest.cpp \
    describeapplicationsnapshotresponse.cpp \
    discoverinputschemarequest.cpp \
    discoverinputschemaresponse.cpp \
    kinesisanalyticsv2client.cpp \
    kinesisanalyticsv2request.cpp \
    kinesisanalyticsv2response.cpp \
    listapplicationsnapshotsrequest.cpp \
    listapplicationsnapshotsresponse.cpp \
    listapplicationsrequest.cpp \
    listapplicationsresponse.cpp \
    startapplicationrequest.cpp \
    startapplicationresponse.cpp \
    stopapplicationrequest.cpp \
    stopapplicationresponse.cpp \
    updateapplicationrequest.cpp \
    updateapplicationresponse.cpp \

win32:CONFIG += skip_target_version_ext
