add_compile_definitions(QTAWSGROUNDSTATION_LIBRARY)

add_library(QtAwsGroundStation
  cancelcontactrequest.h
  cancelcontactrequest_p.h
  cancelcontactresponse.h
  cancelcontactresponse_p.h
  createconfigrequest.h
  createconfigrequest_p.h
  createconfigresponse.h
  createconfigresponse_p.h
  createdataflowendpointgrouprequest.h
  createdataflowendpointgrouprequest_p.h
  createdataflowendpointgroupresponse.h
  createdataflowendpointgroupresponse_p.h
  createmissionprofilerequest.h
  createmissionprofilerequest_p.h
  createmissionprofileresponse.h
  createmissionprofileresponse_p.h
  deleteconfigrequest.h
  deleteconfigrequest_p.h
  deleteconfigresponse.h
  deleteconfigresponse_p.h
  deletedataflowendpointgrouprequest.h
  deletedataflowendpointgrouprequest_p.h
  deletedataflowendpointgroupresponse.h
  deletedataflowendpointgroupresponse_p.h
  deletemissionprofilerequest.h
  deletemissionprofilerequest_p.h
  deletemissionprofileresponse.h
  deletemissionprofileresponse_p.h
  describecontactrequest.h
  describecontactrequest_p.h
  describecontactresponse.h
  describecontactresponse_p.h
  getconfigrequest.h
  getconfigrequest_p.h
  getconfigresponse.h
  getconfigresponse_p.h
  getdataflowendpointgrouprequest.h
  getdataflowendpointgrouprequest_p.h
  getdataflowendpointgroupresponse.h
  getdataflowendpointgroupresponse_p.h
  getminuteusagerequest.h
  getminuteusagerequest_p.h
  getminuteusageresponse.h
  getminuteusageresponse_p.h
  getmissionprofilerequest.h
  getmissionprofilerequest_p.h
  getmissionprofileresponse.h
  getmissionprofileresponse_p.h
  getsatelliterequest.h
  getsatelliterequest_p.h
  getsatelliteresponse.h
  getsatelliteresponse_p.h
  groundstationclient.h
  groundstationclient_p.h
  groundstationrequest.h
  groundstationrequest_p.h
  groundstationresponse.h
  groundstationresponse_p.h
  listconfigsrequest.h
  listconfigsrequest_p.h
  listconfigsresponse.h
  listconfigsresponse_p.h
  listcontactsrequest.h
  listcontactsrequest_p.h
  listcontactsresponse.h
  listcontactsresponse_p.h
  listdataflowendpointgroupsrequest.h
  listdataflowendpointgroupsrequest_p.h
  listdataflowendpointgroupsresponse.h
  listdataflowendpointgroupsresponse_p.h
  listgroundstationsrequest.h
  listgroundstationsrequest_p.h
  listgroundstationsresponse.h
  listgroundstationsresponse_p.h
  listmissionprofilesrequest.h
  listmissionprofilesrequest_p.h
  listmissionprofilesresponse.h
  listmissionprofilesresponse_p.h
  listsatellitesrequest.h
  listsatellitesrequest_p.h
  listsatellitesresponse.h
  listsatellitesresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  qtawsgroundstationglobal.h
  reservecontactrequest.h
  reservecontactrequest_p.h
  reservecontactresponse.h
  reservecontactresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateconfigrequest.h
  updateconfigrequest_p.h
  updateconfigresponse.h
  updateconfigresponse_p.h
  updatemissionprofilerequest.h
  updatemissionprofilerequest_p.h
  updatemissionprofileresponse.h
  updatemissionprofileresponse_p.h
  cancelcontactrequest.cpp
  cancelcontactresponse.cpp
  createconfigrequest.cpp
  createconfigresponse.cpp
  createdataflowendpointgrouprequest.cpp
  createdataflowendpointgroupresponse.cpp
  createmissionprofilerequest.cpp
  createmissionprofileresponse.cpp
  deleteconfigrequest.cpp
  deleteconfigresponse.cpp
  deletedataflowendpointgrouprequest.cpp
  deletedataflowendpointgroupresponse.cpp
  deletemissionprofilerequest.cpp
  deletemissionprofileresponse.cpp
  describecontactrequest.cpp
  describecontactresponse.cpp
  getconfigrequest.cpp
  getconfigresponse.cpp
  getdataflowendpointgrouprequest.cpp
  getdataflowendpointgroupresponse.cpp
  getminuteusagerequest.cpp
  getminuteusageresponse.cpp
  getmissionprofilerequest.cpp
  getmissionprofileresponse.cpp
  getsatelliterequest.cpp
  getsatelliteresponse.cpp
  groundstationclient.cpp
  groundstationrequest.cpp
  groundstationresponse.cpp
  listconfigsrequest.cpp
  listconfigsresponse.cpp
  listcontactsrequest.cpp
  listcontactsresponse.cpp
  listdataflowendpointgroupsrequest.cpp
  listdataflowendpointgroupsresponse.cpp
  listgroundstationsrequest.cpp
  listgroundstationsresponse.cpp
  listmissionprofilesrequest.cpp
  listmissionprofilesresponse.cpp
  listsatellitesrequest.cpp
  listsatellitesresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  reservecontactrequest.cpp
  reservecontactresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateconfigrequest.cpp
  updateconfigresponse.cpp
  updatemissionprofilerequest.cpp
  updatemissionprofileresponse.cpp)

target_link_libraries(QtAwsGroundStation
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
