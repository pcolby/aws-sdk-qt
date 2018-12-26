include(../../common.pri)

TARGET = QtAwsCodeBuild
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchdeletebuildsrequest.h \
    batchdeletebuildsrequest_p.h \
    batchdeletebuildsresponse.h \
    batchdeletebuildsresponse_p.h \
    batchgetbuildsrequest.h \
    batchgetbuildsrequest_p.h \
    batchgetbuildsresponse.h \
    batchgetbuildsresponse_p.h \
    batchgetprojectsrequest.h \
    batchgetprojectsrequest_p.h \
    batchgetprojectsresponse.h \
    batchgetprojectsresponse_p.h \
    codebuildclient.h \
    codebuildclient_p.h \
    codebuildrequest.h \
    codebuildrequest_p.h \
    codebuildresponse.h \
    codebuildresponse_p.h \
    createprojectrequest.h \
    createprojectrequest_p.h \
    createprojectresponse.h \
    createprojectresponse_p.h \
    createwebhookrequest.h \
    createwebhookrequest_p.h \
    createwebhookresponse.h \
    createwebhookresponse_p.h \
    deleteprojectrequest.h \
    deleteprojectrequest_p.h \
    deleteprojectresponse.h \
    deleteprojectresponse_p.h \
    deletesourcecredentialsrequest.h \
    deletesourcecredentialsrequest_p.h \
    deletesourcecredentialsresponse.h \
    deletesourcecredentialsresponse_p.h \
    deletewebhookrequest.h \
    deletewebhookrequest_p.h \
    deletewebhookresponse.h \
    deletewebhookresponse_p.h \
    importsourcecredentialsrequest.h \
    importsourcecredentialsrequest_p.h \
    importsourcecredentialsresponse.h \
    importsourcecredentialsresponse_p.h \
    invalidateprojectcacherequest.h \
    invalidateprojectcacherequest_p.h \
    invalidateprojectcacheresponse.h \
    invalidateprojectcacheresponse_p.h \
    listbuildsforprojectrequest.h \
    listbuildsforprojectrequest_p.h \
    listbuildsforprojectresponse.h \
    listbuildsforprojectresponse_p.h \
    listbuildsrequest.h \
    listbuildsrequest_p.h \
    listbuildsresponse.h \
    listbuildsresponse_p.h \
    listcuratedenvironmentimagesrequest.h \
    listcuratedenvironmentimagesrequest_p.h \
    listcuratedenvironmentimagesresponse.h \
    listcuratedenvironmentimagesresponse_p.h \
    listprojectsrequest.h \
    listprojectsrequest_p.h \
    listprojectsresponse.h \
    listprojectsresponse_p.h \
    listsourcecredentialsrequest.h \
    listsourcecredentialsrequest_p.h \
    listsourcecredentialsresponse.h \
    listsourcecredentialsresponse_p.h \
    startbuildrequest.h \
    startbuildrequest_p.h \
    startbuildresponse.h \
    startbuildresponse_p.h \
    stopbuildrequest.h \
    stopbuildrequest_p.h \
    stopbuildresponse.h \
    stopbuildresponse_p.h \
    updateprojectrequest.h \
    updateprojectrequest_p.h \
    updateprojectresponse.h \
    updateprojectresponse_p.h \
    updatewebhookrequest.h \
    updatewebhookrequest_p.h \
    updatewebhookresponse.h \
    updatewebhookresponse_p.h \

SOURCES += \
    batchdeletebuildsrequest.cpp \
    batchdeletebuildsresponse.cpp \
    batchgetbuildsrequest.cpp \
    batchgetbuildsresponse.cpp \
    batchgetprojectsrequest.cpp \
    batchgetprojectsresponse.cpp \
    codebuildclient.cpp \
    codebuildrequest.cpp \
    codebuildresponse.cpp \
    createprojectrequest.cpp \
    createprojectresponse.cpp \
    createwebhookrequest.cpp \
    createwebhookresponse.cpp \
    deleteprojectrequest.cpp \
    deleteprojectresponse.cpp \
    deletesourcecredentialsrequest.cpp \
    deletesourcecredentialsresponse.cpp \
    deletewebhookrequest.cpp \
    deletewebhookresponse.cpp \
    importsourcecredentialsrequest.cpp \
    importsourcecredentialsresponse.cpp \
    invalidateprojectcacherequest.cpp \
    invalidateprojectcacheresponse.cpp \
    listbuildsforprojectrequest.cpp \
    listbuildsforprojectresponse.cpp \
    listbuildsrequest.cpp \
    listbuildsresponse.cpp \
    listcuratedenvironmentimagesrequest.cpp \
    listcuratedenvironmentimagesresponse.cpp \
    listprojectsrequest.cpp \
    listprojectsresponse.cpp \
    listsourcecredentialsrequest.cpp \
    listsourcecredentialsresponse.cpp \
    startbuildrequest.cpp \
    startbuildresponse.cpp \
    stopbuildrequest.cpp \
    stopbuildresponse.cpp \
    updateprojectrequest.cpp \
    updateprojectresponse.cpp \
    updatewebhookrequest.cpp \
    updatewebhookresponse.cpp \

win32:CONFIG += skip_target_version_ext
