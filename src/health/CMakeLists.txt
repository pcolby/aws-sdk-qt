find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsHealth
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
  describeeventdetailsrequest.h
  describeeventdetailsrequest_p.h
  describeeventdetailsresponse.h
  describeeventdetailsresponse_p.h
  describeeventsrequest.h
  describeeventsrequest_p.h
  describeeventsresponse.h
  describeeventsresponse_p.h
  describeeventtypesrequest.h
  describeeventtypesrequest_p.h
  describeeventtypesresponse.h
  describeeventtypesresponse_p.h
  healthclient.h
  healthclient_p.h
  healthrequest.h
  healthrequest_p.h
  healthresponse.h
  healthresponse_p.h
  describeaffectedentitiesrequest.cpp
  describeaffectedentitiesresponse.cpp
  describeentityaggregatesrequest.cpp
  describeentityaggregatesresponse.cpp
  describeeventaggregatesrequest.cpp
  describeeventaggregatesresponse.cpp
  describeeventdetailsrequest.cpp
  describeeventdetailsresponse.cpp
  describeeventsrequest.cpp
  describeeventsresponse.cpp
  describeeventtypesrequest.cpp
  describeeventtypesresponse.cpp
  healthclient.cpp
  healthrequest.cpp
  healthresponse.cpp)

add_dependencies(QtAwsHealth QtAwsCore)

target_link_libraries(QtAwsHealth Qt5::Core Qt5::Network)
