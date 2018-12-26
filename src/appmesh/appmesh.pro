include(../../common.pri)

TARGET = QtAwsAppMesh
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    appmeshclient.h \
    appmeshclient_p.h \
    appmeshrequest.h \
    appmeshrequest_p.h \
    appmeshresponse.h \
    appmeshresponse_p.h \
    createmeshrequest.h \
    createmeshrequest_p.h \
    createmeshresponse.h \
    createmeshresponse_p.h \
    createrouterequest.h \
    createrouterequest_p.h \
    createrouteresponse.h \
    createrouteresponse_p.h \
    createvirtualnoderequest.h \
    createvirtualnoderequest_p.h \
    createvirtualnoderesponse.h \
    createvirtualnoderesponse_p.h \
    createvirtualrouterrequest.h \
    createvirtualrouterrequest_p.h \
    createvirtualrouterresponse.h \
    createvirtualrouterresponse_p.h \
    deletemeshrequest.h \
    deletemeshrequest_p.h \
    deletemeshresponse.h \
    deletemeshresponse_p.h \
    deleterouterequest.h \
    deleterouterequest_p.h \
    deleterouteresponse.h \
    deleterouteresponse_p.h \
    deletevirtualnoderequest.h \
    deletevirtualnoderequest_p.h \
    deletevirtualnoderesponse.h \
    deletevirtualnoderesponse_p.h \
    deletevirtualrouterrequest.h \
    deletevirtualrouterrequest_p.h \
    deletevirtualrouterresponse.h \
    deletevirtualrouterresponse_p.h \
    describemeshrequest.h \
    describemeshrequest_p.h \
    describemeshresponse.h \
    describemeshresponse_p.h \
    describerouterequest.h \
    describerouterequest_p.h \
    describerouteresponse.h \
    describerouteresponse_p.h \
    describevirtualnoderequest.h \
    describevirtualnoderequest_p.h \
    describevirtualnoderesponse.h \
    describevirtualnoderesponse_p.h \
    describevirtualrouterrequest.h \
    describevirtualrouterrequest_p.h \
    describevirtualrouterresponse.h \
    describevirtualrouterresponse_p.h \
    listmeshesrequest.h \
    listmeshesrequest_p.h \
    listmeshesresponse.h \
    listmeshesresponse_p.h \
    listroutesrequest.h \
    listroutesrequest_p.h \
    listroutesresponse.h \
    listroutesresponse_p.h \
    listvirtualnodesrequest.h \
    listvirtualnodesrequest_p.h \
    listvirtualnodesresponse.h \
    listvirtualnodesresponse_p.h \
    listvirtualroutersrequest.h \
    listvirtualroutersrequest_p.h \
    listvirtualroutersresponse.h \
    listvirtualroutersresponse_p.h \
    updaterouterequest.h \
    updaterouterequest_p.h \
    updaterouteresponse.h \
    updaterouteresponse_p.h \
    updatevirtualnoderequest.h \
    updatevirtualnoderequest_p.h \
    updatevirtualnoderesponse.h \
    updatevirtualnoderesponse_p.h \
    updatevirtualrouterrequest.h \
    updatevirtualrouterrequest_p.h \
    updatevirtualrouterresponse.h \
    updatevirtualrouterresponse_p.h \

SOURCES += \
    appmeshclient.cpp \
    appmeshrequest.cpp \
    appmeshresponse.cpp \
    createmeshrequest.cpp \
    createmeshresponse.cpp \
    createrouterequest.cpp \
    createrouteresponse.cpp \
    createvirtualnoderequest.cpp \
    createvirtualnoderesponse.cpp \
    createvirtualrouterrequest.cpp \
    createvirtualrouterresponse.cpp \
    deletemeshrequest.cpp \
    deletemeshresponse.cpp \
    deleterouterequest.cpp \
    deleterouteresponse.cpp \
    deletevirtualnoderequest.cpp \
    deletevirtualnoderesponse.cpp \
    deletevirtualrouterrequest.cpp \
    deletevirtualrouterresponse.cpp \
    describemeshrequest.cpp \
    describemeshresponse.cpp \
    describerouterequest.cpp \
    describerouteresponse.cpp \
    describevirtualnoderequest.cpp \
    describevirtualnoderesponse.cpp \
    describevirtualrouterrequest.cpp \
    describevirtualrouterresponse.cpp \
    listmeshesrequest.cpp \
    listmeshesresponse.cpp \
    listroutesrequest.cpp \
    listroutesresponse.cpp \
    listvirtualnodesrequest.cpp \
    listvirtualnodesresponse.cpp \
    listvirtualroutersrequest.cpp \
    listvirtualroutersresponse.cpp \
    updaterouterequest.cpp \
    updaterouteresponse.cpp \
    updatevirtualnoderequest.cpp \
    updatevirtualnoderesponse.cpp \
    updatevirtualrouterrequest.cpp \
    updatevirtualrouterresponse.cpp \

win32:CONFIG += skip_target_version_ext
