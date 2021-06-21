set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsElasticInference
  describeacceleratorofferingsrequest.h
  describeacceleratorofferingsrequest_p.h
  describeacceleratorofferingsresponse.h
  describeacceleratorofferingsresponse_p.h
  describeacceleratorsrequest.h
  describeacceleratorsrequest_p.h
  describeacceleratorsresponse.h
  describeacceleratorsresponse_p.h
  describeacceleratortypesrequest.h
  describeacceleratortypesrequest_p.h
  describeacceleratortypesresponse.h
  describeacceleratortypesresponse_p.h
  elasticinferenceclient.h
  elasticinferenceclient_p.h
  elasticinferencerequest.h
  elasticinferencerequest_p.h
  elasticinferenceresponse.h
  elasticinferenceresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  describeacceleratorofferingsrequest.cpp
  describeacceleratorofferingsresponse.cpp
  describeacceleratorsrequest.cpp
  describeacceleratorsresponse.cpp
  describeacceleratortypesrequest.cpp
  describeacceleratortypesresponse.cpp
  elasticinferenceclient.cpp
  elasticinferencerequest.cpp
  elasticinferenceresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp)

add_dependencies(QtAwsElasticInference QtAwsCore)

target_link_libraries(QtAwsElasticInference PRIVATE Qt5::Core Qt5::Network)
