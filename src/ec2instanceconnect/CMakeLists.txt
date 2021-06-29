add_library(QtAwsEC2InstanceConnect
  ec2instanceconnectclient.h
  ec2instanceconnectclient_p.h
  ec2instanceconnectrequest.h
  ec2instanceconnectrequest_p.h
  ec2instanceconnectresponse.h
  ec2instanceconnectresponse_p.h
  sendserialconsolesshpublickeyrequest.h
  sendserialconsolesshpublickeyrequest_p.h
  sendserialconsolesshpublickeyresponse.h
  sendserialconsolesshpublickeyresponse_p.h
  sendsshpublickeyrequest.h
  sendsshpublickeyrequest_p.h
  sendsshpublickeyresponse.h
  sendsshpublickeyresponse_p.h
  ec2instanceconnectclient.cpp
  ec2instanceconnectrequest.cpp
  ec2instanceconnectresponse.cpp
  sendserialconsolesshpublickeyrequest.cpp
  sendserialconsolesshpublickeyresponse.cpp
  sendsshpublickeyrequest.cpp
  sendsshpublickeyresponse.cpp)

add_dependencies(QtAwsEC2InstanceConnect QtAwsCore)

target_link_libraries(QtAwsEC2InstanceConnect
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
