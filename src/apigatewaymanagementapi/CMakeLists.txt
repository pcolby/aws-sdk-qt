add_library(QtAwsApiGatewayManagementApi
  apigatewaymanagementapiclient.h
  apigatewaymanagementapiclient_p.h
  apigatewaymanagementapirequest.h
  apigatewaymanagementapirequest_p.h
  apigatewaymanagementapiresponse.h
  apigatewaymanagementapiresponse_p.h
  deleteconnectionrequest.h
  deleteconnectionrequest_p.h
  deleteconnectionresponse.h
  deleteconnectionresponse_p.h
  getconnectionrequest.h
  getconnectionrequest_p.h
  getconnectionresponse.h
  getconnectionresponse_p.h
  posttoconnectionrequest.h
  posttoconnectionrequest_p.h
  posttoconnectionresponse.h
  posttoconnectionresponse_p.h
  apigatewaymanagementapiclient.cpp
  apigatewaymanagementapirequest.cpp
  apigatewaymanagementapiresponse.cpp
  deleteconnectionrequest.cpp
  deleteconnectionresponse.cpp
  getconnectionrequest.cpp
  getconnectionresponse.cpp
  posttoconnectionrequest.cpp
  posttoconnectionresponse.cpp)

add_dependencies(QtAwsApiGatewayManagementApi QtAwsCore)

target_link_libraries(QtAwsApiGatewayManagementApi
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
