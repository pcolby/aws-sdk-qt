set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsResourceGroupsTaggingAPI
  describereportcreationrequest.h
  describereportcreationrequest_p.h
  describereportcreationresponse.h
  describereportcreationresponse_p.h
  getcompliancesummaryrequest.h
  getcompliancesummaryrequest_p.h
  getcompliancesummaryresponse.h
  getcompliancesummaryresponse_p.h
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
  startreportcreationrequest.h
  startreportcreationrequest_p.h
  startreportcreationresponse.h
  startreportcreationresponse_p.h
  tagresourcesrequest.h
  tagresourcesrequest_p.h
  tagresourcesresponse.h
  tagresourcesresponse_p.h
  untagresourcesrequest.h
  untagresourcesrequest_p.h
  untagresourcesresponse.h
  untagresourcesresponse_p.h
  describereportcreationrequest.cpp
  describereportcreationresponse.cpp
  getcompliancesummaryrequest.cpp
  getcompliancesummaryresponse.cpp
  getresourcesrequest.cpp
  getresourcesresponse.cpp
  gettagkeysrequest.cpp
  gettagkeysresponse.cpp
  gettagvaluesrequest.cpp
  gettagvaluesresponse.cpp
  resourcegroupstaggingapiclient.cpp
  resourcegroupstaggingapirequest.cpp
  resourcegroupstaggingapiresponse.cpp
  startreportcreationrequest.cpp
  startreportcreationresponse.cpp
  tagresourcesrequest.cpp
  tagresourcesresponse.cpp
  untagresourcesrequest.cpp
  untagresourcesresponse.cpp)

add_dependencies(QtAwsResourceGroupsTaggingAPI QtAwsCore)

target_link_libraries(QtAwsResourceGroupsTaggingAPI
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
