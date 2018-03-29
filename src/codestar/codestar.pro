include(../../common.pri)

TARGET = codestar
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associateteammemberrequest.h \
    associateteammemberrequest_p.h \
    associateteammemberresponse.h \
    associateteammemberresponse_p.h \
    codestarclient.h \
    codestarclient_p.h \
    codestarrequest.h \
    codestarrequest_p.h \
    codestarresponse.h \
    codestarresponse_p.h \
    createprojectrequest.h \
    createprojectrequest_p.h \
    createprojectresponse.h \
    createprojectresponse_p.h \
    createuserprofilerequest.h \
    createuserprofilerequest_p.h \
    createuserprofileresponse.h \
    createuserprofileresponse_p.h \
    deleteprojectrequest.h \
    deleteprojectrequest_p.h \
    deleteprojectresponse.h \
    deleteprojectresponse_p.h \
    deleteuserprofilerequest.h \
    deleteuserprofilerequest_p.h \
    deleteuserprofileresponse.h \
    deleteuserprofileresponse_p.h \
    describeprojectrequest.h \
    describeprojectrequest_p.h \
    describeprojectresponse.h \
    describeprojectresponse_p.h \
    describeuserprofilerequest.h \
    describeuserprofilerequest_p.h \
    describeuserprofileresponse.h \
    describeuserprofileresponse_p.h \
    disassociateteammemberrequest.h \
    disassociateteammemberrequest_p.h \
    disassociateteammemberresponse.h \
    disassociateteammemberresponse_p.h \
    listprojectsrequest.h \
    listprojectsrequest_p.h \
    listprojectsresponse.h \
    listprojectsresponse_p.h \
    listresourcesrequest.h \
    listresourcesrequest_p.h \
    listresourcesresponse.h \
    listresourcesresponse_p.h \
    listtagsforprojectrequest.h \
    listtagsforprojectrequest_p.h \
    listtagsforprojectresponse.h \
    listtagsforprojectresponse_p.h \
    listteammembersrequest.h \
    listteammembersrequest_p.h \
    listteammembersresponse.h \
    listteammembersresponse_p.h \
    listuserprofilesrequest.h \
    listuserprofilesrequest_p.h \
    listuserprofilesresponse.h \
    listuserprofilesresponse_p.h \
    tagprojectrequest.h \
    tagprojectrequest_p.h \
    tagprojectresponse.h \
    tagprojectresponse_p.h \
    untagprojectrequest.h \
    untagprojectrequest_p.h \
    untagprojectresponse.h \
    untagprojectresponse_p.h \
    updateprojectrequest.h \
    updateprojectrequest_p.h \
    updateprojectresponse.h \
    updateprojectresponse_p.h \
    updateteammemberrequest.h \
    updateteammemberrequest_p.h \
    updateteammemberresponse.h \
    updateteammemberresponse_p.h \
    updateuserprofilerequest.h \
    updateuserprofilerequest_p.h \
    updateuserprofileresponse.h \
    updateuserprofileresponse_p.h \

SOURCES += \
    associateteammemberrequest.cpp \
    associateteammemberresponse.cpp \
    codestarclient.cpp \
    codestarrequest.cpp \
    codestarresponse.cpp \
    createprojectrequest.cpp \
    createprojectresponse.cpp \
    createuserprofilerequest.cpp \
    createuserprofileresponse.cpp \
    deleteprojectrequest.cpp \
    deleteprojectresponse.cpp \
    deleteuserprofilerequest.cpp \
    deleteuserprofileresponse.cpp \
    describeprojectrequest.cpp \
    describeprojectresponse.cpp \
    describeuserprofilerequest.cpp \
    describeuserprofileresponse.cpp \
    disassociateteammemberrequest.cpp \
    disassociateteammemberresponse.cpp \
    listprojectsrequest.cpp \
    listprojectsresponse.cpp \
    listresourcesrequest.cpp \
    listresourcesresponse.cpp \
    listtagsforprojectrequest.cpp \
    listtagsforprojectresponse.cpp \
    listteammembersrequest.cpp \
    listteammembersresponse.cpp \
    listuserprofilesrequest.cpp \
    listuserprofilesresponse.cpp \
    tagprojectrequest.cpp \
    tagprojectresponse.cpp \
    untagprojectrequest.cpp \
    untagprojectresponse.cpp \
    updateprojectrequest.cpp \
    updateprojectresponse.cpp \
    updateteammemberrequest.cpp \
    updateteammemberresponse.cpp \
    updateuserprofilerequest.cpp \
    updateuserprofileresponse.cpp \

win32:CONFIG += skip_target_version_ext
