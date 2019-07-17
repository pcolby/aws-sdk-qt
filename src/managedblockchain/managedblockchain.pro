include(../../common.pri)

TARGET = QtAwsManagedBlockchain
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    creatememberrequest.h \
    creatememberrequest_p.h \
    creatememberresponse.h \
    creatememberresponse_p.h \
    createnetworkrequest.h \
    createnetworkrequest_p.h \
    createnetworkresponse.h \
    createnetworkresponse_p.h \
    createnoderequest.h \
    createnoderequest_p.h \
    createnoderesponse.h \
    createnoderesponse_p.h \
    createproposalrequest.h \
    createproposalrequest_p.h \
    createproposalresponse.h \
    createproposalresponse_p.h \
    deletememberrequest.h \
    deletememberrequest_p.h \
    deletememberresponse.h \
    deletememberresponse_p.h \
    deletenoderequest.h \
    deletenoderequest_p.h \
    deletenoderesponse.h \
    deletenoderesponse_p.h \
    getmemberrequest.h \
    getmemberrequest_p.h \
    getmemberresponse.h \
    getmemberresponse_p.h \
    getnetworkrequest.h \
    getnetworkrequest_p.h \
    getnetworkresponse.h \
    getnetworkresponse_p.h \
    getnoderequest.h \
    getnoderequest_p.h \
    getnoderesponse.h \
    getnoderesponse_p.h \
    getproposalrequest.h \
    getproposalrequest_p.h \
    getproposalresponse.h \
    getproposalresponse_p.h \
    listinvitationsrequest.h \
    listinvitationsrequest_p.h \
    listinvitationsresponse.h \
    listinvitationsresponse_p.h \
    listmembersrequest.h \
    listmembersrequest_p.h \
    listmembersresponse.h \
    listmembersresponse_p.h \
    listnetworksrequest.h \
    listnetworksrequest_p.h \
    listnetworksresponse.h \
    listnetworksresponse_p.h \
    listnodesrequest.h \
    listnodesrequest_p.h \
    listnodesresponse.h \
    listnodesresponse_p.h \
    listproposalsrequest.h \
    listproposalsrequest_p.h \
    listproposalsresponse.h \
    listproposalsresponse_p.h \
    listproposalvotesrequest.h \
    listproposalvotesrequest_p.h \
    listproposalvotesresponse.h \
    listproposalvotesresponse_p.h \
    managedblockchainclient.h \
    managedblockchainclient_p.h \
    managedblockchainrequest.h \
    managedblockchainrequest_p.h \
    managedblockchainresponse.h \
    managedblockchainresponse_p.h \
    rejectinvitationrequest.h \
    rejectinvitationrequest_p.h \
    rejectinvitationresponse.h \
    rejectinvitationresponse_p.h \
    voteonproposalrequest.h \
    voteonproposalrequest_p.h \
    voteonproposalresponse.h \
    voteonproposalresponse_p.h \

SOURCES += \
    creatememberrequest.cpp \
    creatememberresponse.cpp \
    createnetworkrequest.cpp \
    createnetworkresponse.cpp \
    createnoderequest.cpp \
    createnoderesponse.cpp \
    createproposalrequest.cpp \
    createproposalresponse.cpp \
    deletememberrequest.cpp \
    deletememberresponse.cpp \
    deletenoderequest.cpp \
    deletenoderesponse.cpp \
    getmemberrequest.cpp \
    getmemberresponse.cpp \
    getnetworkrequest.cpp \
    getnetworkresponse.cpp \
    getnoderequest.cpp \
    getnoderesponse.cpp \
    getproposalrequest.cpp \
    getproposalresponse.cpp \
    listinvitationsrequest.cpp \
    listinvitationsresponse.cpp \
    listmembersrequest.cpp \
    listmembersresponse.cpp \
    listnetworksrequest.cpp \
    listnetworksresponse.cpp \
    listnodesrequest.cpp \
    listnodesresponse.cpp \
    listproposalsrequest.cpp \
    listproposalsresponse.cpp \
    listproposalvotesrequest.cpp \
    listproposalvotesresponse.cpp \
    managedblockchainclient.cpp \
    managedblockchainrequest.cpp \
    managedblockchainresponse.cpp \
    rejectinvitationrequest.cpp \
    rejectinvitationresponse.cpp \
    voteonproposalrequest.cpp \
    voteonproposalresponse.cpp \

win32:CONFIG += skip_target_version_ext
