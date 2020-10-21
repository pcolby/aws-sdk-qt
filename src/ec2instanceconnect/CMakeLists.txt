find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsEC2InstanceConnect
  ec2instanceconnectclient.h
  ec2instanceconnectclient_p.h
  ec2instanceconnectrequest.h
  ec2instanceconnectrequest_p.h
  ec2instanceconnectresponse.h
  ec2instanceconnectresponse_p.h
  sendsshpublickeyrequest.h
  sendsshpublickeyrequest_p.h
  sendsshpublickeyresponse.h
  sendsshpublickeyresponse_p.h
  ec2instanceconnectclient.cpp
  ec2instanceconnectrequest.cpp
  ec2instanceconnectresponse.cpp
  sendsshpublickeyrequest.cpp
  sendsshpublickeyresponse.cpp)

add_dependencies(QtAwsEC2InstanceConnect QtAwsCore)

target_link_libraries(QtAwsEC2InstanceConnect Qt5::Core Qt5::Network)
