include(../../common.pri)

TARGET = clouddirectory
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addfacettoobjectrequest.h \
    addfacettoobjectrequest_p.h \
    addfacettoobjectresponse.h \
    addfacettoobjectresponse_p.h \
    applyschemarequest.h \
    applyschemarequest_p.h \
    applyschemaresponse.h \
    applyschemaresponse_p.h \
    attachobjectrequest.h \
    attachobjectrequest_p.h \
    attachobjectresponse.h \
    attachobjectresponse_p.h \
    attachpolicyrequest.h \
    attachpolicyrequest_p.h \
    attachpolicyresponse.h \
    attachpolicyresponse_p.h \
    attachtoindexrequest.h \
    attachtoindexrequest_p.h \
    attachtoindexresponse.h \
    attachtoindexresponse_p.h \
    attachtypedlinkrequest.h \
    attachtypedlinkrequest_p.h \
    attachtypedlinkresponse.h \
    attachtypedlinkresponse_p.h \
    batchreadrequest.h \
    batchreadrequest_p.h \
    batchreadresponse.h \
    batchreadresponse_p.h \
    batchwriterequest.h \
    batchwriterequest_p.h \
    batchwriteresponse.h \
    batchwriteresponse_p.h \
    clouddirectoryclient.h \
    clouddirectoryclient_p.h \
    clouddirectoryclientrequest.h \
    clouddirectoryclientrequest_p.h \
    clouddirectoryclientresponse.h \
    clouddirectoryclientresponse_p.h \
    createdirectoryrequest.h \
    createdirectoryrequest_p.h \
    createdirectoryresponse.h \
    createdirectoryresponse_p.h \
    createfacetrequest.h \
    createfacetrequest_p.h \
    createfacetresponse.h \
    createfacetresponse_p.h \
    createindexrequest.h \
    createindexrequest_p.h \
    createindexresponse.h \
    createindexresponse_p.h \
    createobjectrequest.h \
    createobjectrequest_p.h \
    createobjectresponse.h \
    createobjectresponse_p.h \
    createschemarequest.h \
    createschemarequest_p.h \
    createschemaresponse.h \
    createschemaresponse_p.h \
    createtypedlinkfacetrequest.h \
    createtypedlinkfacetrequest_p.h \
    createtypedlinkfacetresponse.h \
    createtypedlinkfacetresponse_p.h \
    deletedirectoryrequest.h \
    deletedirectoryrequest_p.h \
    deletedirectoryresponse.h \
    deletedirectoryresponse_p.h \
    deletefacetrequest.h \
    deletefacetrequest_p.h \
    deletefacetresponse.h \
    deletefacetresponse_p.h \
    deleteobjectrequest.h \
    deleteobjectrequest_p.h \
    deleteobjectresponse.h \
    deleteobjectresponse_p.h \
    deleteschemarequest.h \
    deleteschemarequest_p.h \
    deleteschemaresponse.h \
    deleteschemaresponse_p.h \
    deletetypedlinkfacetrequest.h \
    deletetypedlinkfacetrequest_p.h \
    deletetypedlinkfacetresponse.h \
    deletetypedlinkfacetresponse_p.h \
    detachfromindexrequest.h \
    detachfromindexrequest_p.h \
    detachfromindexresponse.h \
    detachfromindexresponse_p.h \
    detachobjectrequest.h \
    detachobjectrequest_p.h \
    detachobjectresponse.h \
    detachobjectresponse_p.h \
    detachpolicyrequest.h \
    detachpolicyrequest_p.h \
    detachpolicyresponse.h \
    detachpolicyresponse_p.h \
    detachtypedlinkrequest.h \
    detachtypedlinkrequest_p.h \
    detachtypedlinkresponse.h \
    detachtypedlinkresponse_p.h \
    disabledirectoryrequest.h \
    disabledirectoryrequest_p.h \
    disabledirectoryresponse.h \
    disabledirectoryresponse_p.h \
    enabledirectoryrequest.h \
    enabledirectoryrequest_p.h \
    enabledirectoryresponse.h \
    enabledirectoryresponse_p.h \
    getappliedschemaversionrequest.h \
    getappliedschemaversionrequest_p.h \
    getappliedschemaversionresponse.h \
    getappliedschemaversionresponse_p.h \
    getdirectoryrequest.h \
    getdirectoryrequest_p.h \
    getdirectoryresponse.h \
    getdirectoryresponse_p.h \
    getfacetrequest.h \
    getfacetrequest_p.h \
    getfacetresponse.h \
    getfacetresponse_p.h \
    getobjectinformationrequest.h \
    getobjectinformationrequest_p.h \
    getobjectinformationresponse.h \
    getobjectinformationresponse_p.h \
    getschemaasjsonrequest.h \
    getschemaasjsonrequest_p.h \
    getschemaasjsonresponse.h \
    getschemaasjsonresponse_p.h \
    gettypedlinkfacetinformationrequest.h \
    gettypedlinkfacetinformationrequest_p.h \
    gettypedlinkfacetinformationresponse.h \
    gettypedlinkfacetinformationresponse_p.h \
    listappliedschemaarnsrequest.h \
    listappliedschemaarnsrequest_p.h \
    listappliedschemaarnsresponse.h \
    listappliedschemaarnsresponse_p.h \
    listattachedindicesrequest.h \
    listattachedindicesrequest_p.h \
    listattachedindicesresponse.h \
    listattachedindicesresponse_p.h \
    listdevelopmentschemaarnsrequest.h \
    listdevelopmentschemaarnsrequest_p.h \
    listdevelopmentschemaarnsresponse.h \
    listdevelopmentschemaarnsresponse_p.h \
    listdirectoriesrequest.h \
    listdirectoriesrequest_p.h \
    listdirectoriesresponse.h \
    listdirectoriesresponse_p.h \
    listfacetattributesrequest.h \
    listfacetattributesrequest_p.h \
    listfacetattributesresponse.h \
    listfacetattributesresponse_p.h \
    listfacetnamesrequest.h \
    listfacetnamesrequest_p.h \
    listfacetnamesresponse.h \
    listfacetnamesresponse_p.h \
    listincomingtypedlinksrequest.h \
    listincomingtypedlinksrequest_p.h \
    listincomingtypedlinksresponse.h \
    listincomingtypedlinksresponse_p.h \
    listindexrequest.h \
    listindexrequest_p.h \
    listindexresponse.h \
    listindexresponse_p.h \
    listobjectattributesrequest.h \
    listobjectattributesrequest_p.h \
    listobjectattributesresponse.h \
    listobjectattributesresponse_p.h \
    listobjectchildrenrequest.h \
    listobjectchildrenrequest_p.h \
    listobjectchildrenresponse.h \
    listobjectchildrenresponse_p.h \
    listobjectparentpathsrequest.h \
    listobjectparentpathsrequest_p.h \
    listobjectparentpathsresponse.h \
    listobjectparentpathsresponse_p.h \
    listobjectparentsrequest.h \
    listobjectparentsrequest_p.h \
    listobjectparentsresponse.h \
    listobjectparentsresponse_p.h \
    listobjectpoliciesrequest.h \
    listobjectpoliciesrequest_p.h \
    listobjectpoliciesresponse.h \
    listobjectpoliciesresponse_p.h \
    listoutgoingtypedlinksrequest.h \
    listoutgoingtypedlinksrequest_p.h \
    listoutgoingtypedlinksresponse.h \
    listoutgoingtypedlinksresponse_p.h \
    listpolicyattachmentsrequest.h \
    listpolicyattachmentsrequest_p.h \
    listpolicyattachmentsresponse.h \
    listpolicyattachmentsresponse_p.h \
    listpublishedschemaarnsrequest.h \
    listpublishedschemaarnsrequest_p.h \
    listpublishedschemaarnsresponse.h \
    listpublishedschemaarnsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listtypedlinkfacetattributesrequest.h \
    listtypedlinkfacetattributesrequest_p.h \
    listtypedlinkfacetattributesresponse.h \
    listtypedlinkfacetattributesresponse_p.h \
    listtypedlinkfacetnamesrequest.h \
    listtypedlinkfacetnamesrequest_p.h \
    listtypedlinkfacetnamesresponse.h \
    listtypedlinkfacetnamesresponse_p.h \
    lookuppolicyrequest.h \
    lookuppolicyrequest_p.h \
    lookuppolicyresponse.h \
    lookuppolicyresponse_p.h \
    publishschemarequest.h \
    publishschemarequest_p.h \
    publishschemaresponse.h \
    publishschemaresponse_p.h \
    putschemafromjsonrequest.h \
    putschemafromjsonrequest_p.h \
    putschemafromjsonresponse.h \
    putschemafromjsonresponse_p.h \
    removefacetfromobjectrequest.h \
    removefacetfromobjectrequest_p.h \
    removefacetfromobjectresponse.h \
    removefacetfromobjectresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatefacetrequest.h \
    updatefacetrequest_p.h \
    updatefacetresponse.h \
    updatefacetresponse_p.h \
    updateobjectattributesrequest.h \
    updateobjectattributesrequest_p.h \
    updateobjectattributesresponse.h \
    updateobjectattributesresponse_p.h \
    updateschemarequest.h \
    updateschemarequest_p.h \
    updateschemaresponse.h \
    updateschemaresponse_p.h \
    updatetypedlinkfacetrequest.h \
    updatetypedlinkfacetrequest_p.h \
    updatetypedlinkfacetresponse.h \
    updatetypedlinkfacetresponse_p.h \
    upgradeappliedschemarequest.h \
    upgradeappliedschemarequest_p.h \
    upgradeappliedschemaresponse.h \
    upgradeappliedschemaresponse_p.h \
    upgradepublishedschemarequest.h \
    upgradepublishedschemarequest_p.h \
    upgradepublishedschemaresponse.h \
    upgradepublishedschemaresponse_p.h \

SOURCES += \
    addfacettoobjectrequest.cpp \
    addfacettoobjectresponse.cpp \
    applyschemarequest.cpp \
    applyschemaresponse.cpp \
    attachobjectrequest.cpp \
    attachobjectresponse.cpp \
    attachpolicyrequest.cpp \
    attachpolicyresponse.cpp \
    attachtoindexrequest.cpp \
    attachtoindexresponse.cpp \
    attachtypedlinkrequest.cpp \
    attachtypedlinkresponse.cpp \
    batchreadrequest.cpp \
    batchreadresponse.cpp \
    batchwriterequest.cpp \
    batchwriteresponse.cpp \
    clouddirectoryclient.cpp \
    clouddirectoryclientrequest.cpp \
    clouddirectoryclientresponse.cpp \
    createdirectoryrequest.cpp \
    createdirectoryresponse.cpp \
    createfacetrequest.cpp \
    createfacetresponse.cpp \
    createindexrequest.cpp \
    createindexresponse.cpp \
    createobjectrequest.cpp \
    createobjectresponse.cpp \
    createschemarequest.cpp \
    createschemaresponse.cpp \
    createtypedlinkfacetrequest.cpp \
    createtypedlinkfacetresponse.cpp \
    deletedirectoryrequest.cpp \
    deletedirectoryresponse.cpp \
    deletefacetrequest.cpp \
    deletefacetresponse.cpp \
    deleteobjectrequest.cpp \
    deleteobjectresponse.cpp \
    deleteschemarequest.cpp \
    deleteschemaresponse.cpp \
    deletetypedlinkfacetrequest.cpp \
    deletetypedlinkfacetresponse.cpp \
    detachfromindexrequest.cpp \
    detachfromindexresponse.cpp \
    detachobjectrequest.cpp \
    detachobjectresponse.cpp \
    detachpolicyrequest.cpp \
    detachpolicyresponse.cpp \
    detachtypedlinkrequest.cpp \
    detachtypedlinkresponse.cpp \
    disabledirectoryrequest.cpp \
    disabledirectoryresponse.cpp \
    enabledirectoryrequest.cpp \
    enabledirectoryresponse.cpp \
    getappliedschemaversionrequest.cpp \
    getappliedschemaversionresponse.cpp \
    getdirectoryrequest.cpp \
    getdirectoryresponse.cpp \
    getfacetrequest.cpp \
    getfacetresponse.cpp \
    getobjectinformationrequest.cpp \
    getobjectinformationresponse.cpp \
    getschemaasjsonrequest.cpp \
    getschemaasjsonresponse.cpp \
    gettypedlinkfacetinformationrequest.cpp \
    gettypedlinkfacetinformationresponse.cpp \
    listappliedschemaarnsrequest.cpp \
    listappliedschemaarnsresponse.cpp \
    listattachedindicesrequest.cpp \
    listattachedindicesresponse.cpp \
    listdevelopmentschemaarnsrequest.cpp \
    listdevelopmentschemaarnsresponse.cpp \
    listdirectoriesrequest.cpp \
    listdirectoriesresponse.cpp \
    listfacetattributesrequest.cpp \
    listfacetattributesresponse.cpp \
    listfacetnamesrequest.cpp \
    listfacetnamesresponse.cpp \
    listincomingtypedlinksrequest.cpp \
    listincomingtypedlinksresponse.cpp \
    listindexrequest.cpp \
    listindexresponse.cpp \
    listobjectattributesrequest.cpp \
    listobjectattributesresponse.cpp \
    listobjectchildrenrequest.cpp \
    listobjectchildrenresponse.cpp \
    listobjectparentpathsrequest.cpp \
    listobjectparentpathsresponse.cpp \
    listobjectparentsrequest.cpp \
    listobjectparentsresponse.cpp \
    listobjectpoliciesrequest.cpp \
    listobjectpoliciesresponse.cpp \
    listoutgoingtypedlinksrequest.cpp \
    listoutgoingtypedlinksresponse.cpp \
    listpolicyattachmentsrequest.cpp \
    listpolicyattachmentsresponse.cpp \
    listpublishedschemaarnsrequest.cpp \
    listpublishedschemaarnsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listtypedlinkfacetattributesrequest.cpp \
    listtypedlinkfacetattributesresponse.cpp \
    listtypedlinkfacetnamesrequest.cpp \
    listtypedlinkfacetnamesresponse.cpp \
    lookuppolicyrequest.cpp \
    lookuppolicyresponse.cpp \
    publishschemarequest.cpp \
    publishschemaresponse.cpp \
    putschemafromjsonrequest.cpp \
    putschemafromjsonresponse.cpp \
    removefacetfromobjectrequest.cpp \
    removefacetfromobjectresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatefacetrequest.cpp \
    updatefacetresponse.cpp \
    updateobjectattributesrequest.cpp \
    updateobjectattributesresponse.cpp \
    updateschemarequest.cpp \
    updateschemaresponse.cpp \
    updatetypedlinkfacetrequest.cpp \
    updatetypedlinkfacetresponse.cpp \
    upgradeappliedschemarequest.cpp \
    upgradeappliedschemaresponse.cpp \
    upgradepublishedschemarequest.cpp \
    upgradepublishedschemaresponse.cpp \

win32:CONFIG += skip_target_version_ext
