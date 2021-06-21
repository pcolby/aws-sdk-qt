set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIoTDeviceAdvisor
  createsuitedefinitionrequest.h
  createsuitedefinitionrequest_p.h
  createsuitedefinitionresponse.h
  createsuitedefinitionresponse_p.h
  deletesuitedefinitionrequest.h
  deletesuitedefinitionrequest_p.h
  deletesuitedefinitionresponse.h
  deletesuitedefinitionresponse_p.h
  getsuitedefinitionrequest.h
  getsuitedefinitionrequest_p.h
  getsuitedefinitionresponse.h
  getsuitedefinitionresponse_p.h
  getsuiterunreportrequest.h
  getsuiterunreportrequest_p.h
  getsuiterunreportresponse.h
  getsuiterunreportresponse_p.h
  getsuiterunrequest.h
  getsuiterunrequest_p.h
  getsuiterunresponse.h
  getsuiterunresponse_p.h
  iotdeviceadvisorclient.h
  iotdeviceadvisorclient_p.h
  iotdeviceadvisorrequest.h
  iotdeviceadvisorrequest_p.h
  iotdeviceadvisorresponse.h
  iotdeviceadvisorresponse_p.h
  listsuitedefinitionsrequest.h
  listsuitedefinitionsrequest_p.h
  listsuitedefinitionsresponse.h
  listsuitedefinitionsresponse_p.h
  listsuiterunsrequest.h
  listsuiterunsrequest_p.h
  listsuiterunsresponse.h
  listsuiterunsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  startsuiterunrequest.h
  startsuiterunrequest_p.h
  startsuiterunresponse.h
  startsuiterunresponse_p.h
  stopsuiterunrequest.h
  stopsuiterunrequest_p.h
  stopsuiterunresponse.h
  stopsuiterunresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updatesuitedefinitionrequest.h
  updatesuitedefinitionrequest_p.h
  updatesuitedefinitionresponse.h
  updatesuitedefinitionresponse_p.h
  createsuitedefinitionrequest.cpp
  createsuitedefinitionresponse.cpp
  deletesuitedefinitionrequest.cpp
  deletesuitedefinitionresponse.cpp
  getsuitedefinitionrequest.cpp
  getsuitedefinitionresponse.cpp
  getsuiterunreportrequest.cpp
  getsuiterunreportresponse.cpp
  getsuiterunrequest.cpp
  getsuiterunresponse.cpp
  iotdeviceadvisorclient.cpp
  iotdeviceadvisorrequest.cpp
  iotdeviceadvisorresponse.cpp
  listsuitedefinitionsrequest.cpp
  listsuitedefinitionsresponse.cpp
  listsuiterunsrequest.cpp
  listsuiterunsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  startsuiterunrequest.cpp
  startsuiterunresponse.cpp
  stopsuiterunrequest.cpp
  stopsuiterunresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updatesuitedefinitionrequest.cpp
  updatesuitedefinitionresponse.cpp)

add_dependencies(QtAwsIoTDeviceAdvisor QtAwsCore)

target_link_libraries(QtAwsIoTDeviceAdvisor PRIVATE Qt5::Core Qt5::Network)
