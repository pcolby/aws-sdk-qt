include(../../common.pri)

TARGET = QtAwsConnect
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    connectclient.h \
    connectclient_p.h \
    connectrequest.h \
    connectrequest_p.h \
    connectresponse.h \
    connectresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    describeuserhierarchygrouprequest.h \
    describeuserhierarchygrouprequest_p.h \
    describeuserhierarchygroupresponse.h \
    describeuserhierarchygroupresponse_p.h \
    describeuserhierarchystructurerequest.h \
    describeuserhierarchystructurerequest_p.h \
    describeuserhierarchystructureresponse.h \
    describeuserhierarchystructureresponse_p.h \
    describeuserrequest.h \
    describeuserrequest_p.h \
    describeuserresponse.h \
    describeuserresponse_p.h \
    getcontactattributesrequest.h \
    getcontactattributesrequest_p.h \
    getcontactattributesresponse.h \
    getcontactattributesresponse_p.h \
    getcurrentmetricdatarequest.h \
    getcurrentmetricdatarequest_p.h \
    getcurrentmetricdataresponse.h \
    getcurrentmetricdataresponse_p.h \
    getfederationtokenrequest.h \
    getfederationtokenrequest_p.h \
    getfederationtokenresponse.h \
    getfederationtokenresponse_p.h \
    getmetricdatarequest.h \
    getmetricdatarequest_p.h \
    getmetricdataresponse.h \
    getmetricdataresponse_p.h \
    listroutingprofilesrequest.h \
    listroutingprofilesrequest_p.h \
    listroutingprofilesresponse.h \
    listroutingprofilesresponse_p.h \
    listsecurityprofilesrequest.h \
    listsecurityprofilesrequest_p.h \
    listsecurityprofilesresponse.h \
    listsecurityprofilesresponse_p.h \
    listuserhierarchygroupsrequest.h \
    listuserhierarchygroupsrequest_p.h \
    listuserhierarchygroupsresponse.h \
    listuserhierarchygroupsresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    startoutboundvoicecontactrequest.h \
    startoutboundvoicecontactrequest_p.h \
    startoutboundvoicecontactresponse.h \
    startoutboundvoicecontactresponse_p.h \
    stopcontactrequest.h \
    stopcontactrequest_p.h \
    stopcontactresponse.h \
    stopcontactresponse_p.h \
    updatecontactattributesrequest.h \
    updatecontactattributesrequest_p.h \
    updatecontactattributesresponse.h \
    updatecontactattributesresponse_p.h \
    updateuserhierarchyrequest.h \
    updateuserhierarchyrequest_p.h \
    updateuserhierarchyresponse.h \
    updateuserhierarchyresponse_p.h \
    updateuseridentityinforequest.h \
    updateuseridentityinforequest_p.h \
    updateuseridentityinforesponse.h \
    updateuseridentityinforesponse_p.h \
    updateuserphoneconfigrequest.h \
    updateuserphoneconfigrequest_p.h \
    updateuserphoneconfigresponse.h \
    updateuserphoneconfigresponse_p.h \
    updateuserroutingprofilerequest.h \
    updateuserroutingprofilerequest_p.h \
    updateuserroutingprofileresponse.h \
    updateuserroutingprofileresponse_p.h \
    updateusersecurityprofilesrequest.h \
    updateusersecurityprofilesrequest_p.h \
    updateusersecurityprofilesresponse.h \
    updateusersecurityprofilesresponse_p.h \

SOURCES += \
    connectclient.cpp \
    connectrequest.cpp \
    connectresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    describeuserhierarchygrouprequest.cpp \
    describeuserhierarchygroupresponse.cpp \
    describeuserhierarchystructurerequest.cpp \
    describeuserhierarchystructureresponse.cpp \
    describeuserrequest.cpp \
    describeuserresponse.cpp \
    getcontactattributesrequest.cpp \
    getcontactattributesresponse.cpp \
    getcurrentmetricdatarequest.cpp \
    getcurrentmetricdataresponse.cpp \
    getfederationtokenrequest.cpp \
    getfederationtokenresponse.cpp \
    getmetricdatarequest.cpp \
    getmetricdataresponse.cpp \
    listroutingprofilesrequest.cpp \
    listroutingprofilesresponse.cpp \
    listsecurityprofilesrequest.cpp \
    listsecurityprofilesresponse.cpp \
    listuserhierarchygroupsrequest.cpp \
    listuserhierarchygroupsresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    startoutboundvoicecontactrequest.cpp \
    startoutboundvoicecontactresponse.cpp \
    stopcontactrequest.cpp \
    stopcontactresponse.cpp \
    updatecontactattributesrequest.cpp \
    updatecontactattributesresponse.cpp \
    updateuserhierarchyrequest.cpp \
    updateuserhierarchyresponse.cpp \
    updateuseridentityinforequest.cpp \
    updateuseridentityinforesponse.cpp \
    updateuserphoneconfigrequest.cpp \
    updateuserphoneconfigresponse.cpp \
    updateuserroutingprofilerequest.cpp \
    updateuserroutingprofileresponse.cpp \
    updateusersecurityprofilesrequest.cpp \
    updateusersecurityprofilesresponse.cpp \

win32:CONFIG += skip_target_version_ext
