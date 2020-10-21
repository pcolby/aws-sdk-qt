find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsApiGatewayManagementApi
  apigatewaymanagementapiclient.h
  apigatewaymanagementapiclient_p.h
  apigatewaymanagementapirequest.h
  apigatewaymanagementapirequest_p.h
  apigatewaymanagementapiresponse.h
  apigatewaymanagementapiresponse_p.h
  posttoconnectionrequest.h
  posttoconnectionrequest_p.h
  posttoconnectionresponse.h
  posttoconnectionresponse_p.h
  apigatewaymanagementapiclient.cpp
  apigatewaymanagementapirequest.cpp
  apigatewaymanagementapiresponse.cpp
  posttoconnectionrequest.cpp
  posttoconnectionresponse.cpp)

add_dependencies(QtAwsApiGatewayManagementApi QtAwsCore)

target_link_libraries(QtAwsApiGatewayManagementApi Qt5::Core Qt5::Network)
