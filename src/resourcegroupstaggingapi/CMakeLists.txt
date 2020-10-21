find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsResourceGroupsTaggingAPI
  getresourcesrequest.h
  getresourcesrequest_p.h
  getresourcesresponse.h
  getresourcesresponse_p.h
  gettagkeysrequest.h
  gettagkeysrequest_p.h
  gettagkeysresponse.h
  gettagkeysresponse_p.h
  gettagvaluesrequest.h
  gettagvaluesrequest_p.h
  gettagvaluesresponse.h
  gettagvaluesresponse_p.h
  resourcegroupstaggingapiclient.h
  resourcegroupstaggingapiclient_p.h
  resourcegroupstaggingapirequest.h
  resourcegroupstaggingapirequest_p.h
  resourcegroupstaggingapiresponse.h
  resourcegroupstaggingapiresponse_p.h
  tagresourcesrequest.h
  tagresourcesrequest_p.h
  tagresourcesresponse.h
  tagresourcesresponse_p.h
  untagresourcesrequest.h
  untagresourcesrequest_p.h
  untagresourcesresponse.h
  untagresourcesresponse_p.h
  getresourcesrequest.cpp
  getresourcesresponse.cpp
  gettagkeysrequest.cpp
  gettagkeysresponse.cpp
  gettagvaluesrequest.cpp
  gettagvaluesresponse.cpp
  resourcegroupstaggingapiclient.cpp
  resourcegroupstaggingapirequest.cpp
  resourcegroupstaggingapiresponse.cpp
  tagresourcesrequest.cpp
  tagresourcesresponse.cpp
  untagresourcesrequest.cpp
  untagresourcesresponse.cpp)

add_dependencies(QtAwsResourceGroupsTaggingAPI QtAwsCore)

target_link_libraries(QtAwsResourceGroupsTaggingAPI Qt5::Core Qt5::Network)
