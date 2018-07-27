include(../../common.pri)

TARGET = QtAwsMediaConvert
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    createjobrequest.h \
    createjobrequest_p.h \
    createjobresponse.h \
    createjobresponse_p.h \
    createjobtemplaterequest.h \
    createjobtemplaterequest_p.h \
    createjobtemplateresponse.h \
    createjobtemplateresponse_p.h \
    createpresetrequest.h \
    createpresetrequest_p.h \
    createpresetresponse.h \
    createpresetresponse_p.h \
    createqueuerequest.h \
    createqueuerequest_p.h \
    createqueueresponse.h \
    createqueueresponse_p.h \
    deletejobtemplaterequest.h \
    deletejobtemplaterequest_p.h \
    deletejobtemplateresponse.h \
    deletejobtemplateresponse_p.h \
    deletepresetrequest.h \
    deletepresetrequest_p.h \
    deletepresetresponse.h \
    deletepresetresponse_p.h \
    deletequeuerequest.h \
    deletequeuerequest_p.h \
    deletequeueresponse.h \
    deletequeueresponse_p.h \
    describeendpointsrequest.h \
    describeendpointsrequest_p.h \
    describeendpointsresponse.h \
    describeendpointsresponse_p.h \
    getjobrequest.h \
    getjobrequest_p.h \
    getjobresponse.h \
    getjobresponse_p.h \
    getjobtemplaterequest.h \
    getjobtemplaterequest_p.h \
    getjobtemplateresponse.h \
    getjobtemplateresponse_p.h \
    getpresetrequest.h \
    getpresetrequest_p.h \
    getpresetresponse.h \
    getpresetresponse_p.h \
    getqueuerequest.h \
    getqueuerequest_p.h \
    getqueueresponse.h \
    getqueueresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    listjobtemplatesrequest.h \
    listjobtemplatesrequest_p.h \
    listjobtemplatesresponse.h \
    listjobtemplatesresponse_p.h \
    listpresetsrequest.h \
    listpresetsrequest_p.h \
    listpresetsresponse.h \
    listpresetsresponse_p.h \
    listqueuesrequest.h \
    listqueuesrequest_p.h \
    listqueuesresponse.h \
    listqueuesresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    mediaconvertclient.h \
    mediaconvertclient_p.h \
    mediaconvertrequest.h \
    mediaconvertrequest_p.h \
    mediaconvertresponse.h \
    mediaconvertresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatejobtemplaterequest.h \
    updatejobtemplaterequest_p.h \
    updatejobtemplateresponse.h \
    updatejobtemplateresponse_p.h \
    updatepresetrequest.h \
    updatepresetrequest_p.h \
    updatepresetresponse.h \
    updatepresetresponse_p.h \
    updatequeuerequest.h \
    updatequeuerequest_p.h \
    updatequeueresponse.h \
    updatequeueresponse_p.h \

SOURCES += \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    createjobrequest.cpp \
    createjobresponse.cpp \
    createjobtemplaterequest.cpp \
    createjobtemplateresponse.cpp \
    createpresetrequest.cpp \
    createpresetresponse.cpp \
    createqueuerequest.cpp \
    createqueueresponse.cpp \
    deletejobtemplaterequest.cpp \
    deletejobtemplateresponse.cpp \
    deletepresetrequest.cpp \
    deletepresetresponse.cpp \
    deletequeuerequest.cpp \
    deletequeueresponse.cpp \
    describeendpointsrequest.cpp \
    describeendpointsresponse.cpp \
    getjobrequest.cpp \
    getjobresponse.cpp \
    getjobtemplaterequest.cpp \
    getjobtemplateresponse.cpp \
    getpresetrequest.cpp \
    getpresetresponse.cpp \
    getqueuerequest.cpp \
    getqueueresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    listjobtemplatesrequest.cpp \
    listjobtemplatesresponse.cpp \
    listpresetsrequest.cpp \
    listpresetsresponse.cpp \
    listqueuesrequest.cpp \
    listqueuesresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    mediaconvertclient.cpp \
    mediaconvertrequest.cpp \
    mediaconvertresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatejobtemplaterequest.cpp \
    updatejobtemplateresponse.cpp \
    updatepresetrequest.cpp \
    updatepresetresponse.cpp \
    updatequeuerequest.cpp \
    updatequeueresponse.cpp \

win32:CONFIG += skip_target_version_ext
