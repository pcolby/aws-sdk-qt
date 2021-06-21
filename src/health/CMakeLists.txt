set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsHealth
  describeaffectedaccountsfororganizationrequest.h
  describeaffectedaccountsfororganizationrequest_p.h
  describeaffectedaccountsfororganizationresponse.h
  describeaffectedaccountsfororganizationresponse_p.h
  describeaffectedentitiesfororganizationrequest.h
  describeaffectedentitiesfororganizationrequest_p.h
  describeaffectedentitiesfororganizationresponse.h
  describeaffectedentitiesfororganizationresponse_p.h
  describeaffectedentitiesrequest.h
  describeaffectedentitiesrequest_p.h
  describeaffectedentitiesresponse.h
  describeaffectedentitiesresponse_p.h
  describeentityaggregatesrequest.h
  describeentityaggregatesrequest_p.h
  describeentityaggregatesresponse.h
  describeentityaggregatesresponse_p.h
  describeeventaggregatesrequest.h
  describeeventaggregatesrequest_p.h
  describeeventaggregatesresponse.h
  describeeventaggregatesresponse_p.h
  describeeventdetailsfororganizationrequest.h
  describeeventdetailsfororganizationrequest_p.h
  describeeventdetailsfororganizationresponse.h
  describeeventdetailsfororganizationresponse_p.h
  describeeventdetailsrequest.h
  describeeventdetailsrequest_p.h
  describeeventdetailsresponse.h
  describeeventdetailsresponse_p.h
  describeeventsfororganizationrequest.h
  describeeventsfororganizationrequest_p.h
  describeeventsfororganizationresponse.h
  describeeventsfororganizationresponse_p.h
  describeeventsrequest.h
  describeeventsrequest_p.h
  describeeventsresponse.h
  describeeventsresponse_p.h
  describeeventtypesrequest.h
  describeeventtypesrequest_p.h
  describeeventtypesresponse.h
  describeeventtypesresponse_p.h
  describehealthservicestatusfororganizationrequest.h
  describehealthservicestatusfororganizationrequest_p.h
  describehealthservicestatusfororganizationresponse.h
  describehealthservicestatusfororganizationresponse_p.h
  disablehealthserviceaccessfororganizationrequest.h
  disablehealthserviceaccessfororganizationrequest_p.h
  disablehealthserviceaccessfororganizationresponse.h
  disablehealthserviceaccessfororganizationresponse_p.h
  enablehealthserviceaccessfororganizationrequest.h
  enablehealthserviceaccessfororganizationrequest_p.h
  enablehealthserviceaccessfororganizationresponse.h
  enablehealthserviceaccessfororganizationresponse_p.h
  healthclient.h
  healthclient_p.h
  healthrequest.h
  healthrequest_p.h
  healthresponse.h
  healthresponse_p.h
  describeaffectedaccountsfororganizationrequest.cpp
  describeaffectedaccountsfororganizationresponse.cpp
  describeaffectedentitiesfororganizationrequest.cpp
  describeaffectedentitiesfororganizationresponse.cpp
  describeaffectedentitiesrequest.cpp
  describeaffectedentitiesresponse.cpp
  describeentityaggregatesrequest.cpp
  describeentityaggregatesresponse.cpp
  describeeventaggregatesrequest.cpp
  describeeventaggregatesresponse.cpp
  describeeventdetailsfororganizationrequest.cpp
  describeeventdetailsfororganizationresponse.cpp
  describeeventdetailsrequest.cpp
  describeeventdetailsresponse.cpp
  describeeventsfororganizationrequest.cpp
  describeeventsfororganizationresponse.cpp
  describeeventsrequest.cpp
  describeeventsresponse.cpp
  describeeventtypesrequest.cpp
  describeeventtypesresponse.cpp
  describehealthservicestatusfororganizationrequest.cpp
  describehealthservicestatusfororganizationresponse.cpp
  disablehealthserviceaccessfororganizationrequest.cpp
  disablehealthserviceaccessfororganizationresponse.cpp
  enablehealthserviceaccessfororganizationrequest.cpp
  enablehealthserviceaccessfororganizationresponse.cpp
  healthclient.cpp
  healthrequest.cpp
  healthresponse.cpp)

add_dependencies(QtAwsHealth QtAwsCore)

target_link_libraries(QtAwsHealth PRIVATE Qt5::Core Qt5::Network)
