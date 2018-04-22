include(../../common.pri)

TARGET = QtAwsCloudHSMV2
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cloudhsmv2client.h \
    cloudhsmv2client_p.h \
    cloudhsmv2request.h \
    cloudhsmv2request_p.h \
    cloudhsmv2response.h \
    cloudhsmv2response_p.h \
    createclusterrequest.h \
    createclusterrequest_p.h \
    createclusterresponse.h \
    createclusterresponse_p.h \
    createhsmrequest.h \
    createhsmrequest_p.h \
    createhsmresponse.h \
    createhsmresponse_p.h \
    deleteclusterrequest.h \
    deleteclusterrequest_p.h \
    deleteclusterresponse.h \
    deleteclusterresponse_p.h \
    deletehsmrequest.h \
    deletehsmrequest_p.h \
    deletehsmresponse.h \
    deletehsmresponse_p.h \
    describebackupsrequest.h \
    describebackupsrequest_p.h \
    describebackupsresponse.h \
    describebackupsresponse_p.h \
    describeclustersrequest.h \
    describeclustersrequest_p.h \
    describeclustersresponse.h \
    describeclustersresponse_p.h \
    initializeclusterrequest.h \
    initializeclusterrequest_p.h \
    initializeclusterresponse.h \
    initializeclusterresponse_p.h \
    listtagsrequest.h \
    listtagsrequest_p.h \
    listtagsresponse.h \
    listtagsresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \

SOURCES += \
    cloudhsmv2client.cpp \
    cloudhsmv2request.cpp \
    cloudhsmv2response.cpp \
    createclusterrequest.cpp \
    createclusterresponse.cpp \
    createhsmrequest.cpp \
    createhsmresponse.cpp \
    deleteclusterrequest.cpp \
    deleteclusterresponse.cpp \
    deletehsmrequest.cpp \
    deletehsmresponse.cpp \
    describebackupsrequest.cpp \
    describebackupsresponse.cpp \
    describeclustersrequest.cpp \
    describeclustersresponse.cpp \
    initializeclusterrequest.cpp \
    initializeclusterresponse.cpp \
    listtagsrequest.cpp \
    listtagsresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \

win32:CONFIG += skip_target_version_ext
