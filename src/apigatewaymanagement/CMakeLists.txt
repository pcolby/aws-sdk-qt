# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsApiGatewayManagement
  qtawsapigatewaymanagementglobal.h
  apigatewaymanagementclient.h
  apigatewaymanagementclient_p.h
  apigatewaymanagementrequest.h
  apigatewaymanagementrequest_p.h
  apigatewaymanagementresponse.h
  apigatewaymanagementresponse_p.h
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
  apigatewaymanagementclient.cpp
  apigatewaymanagementrequest.cpp
  apigatewaymanagementresponse.cpp
  deleteconnectionrequest.cpp
  deleteconnectionresponse.cpp
  getconnectionrequest.cpp
  getconnectionresponse.cpp
  posttoconnectionrequest.cpp
  posttoconnectionresponse.cpp
)

target_link_libraries(QtAwsApiGatewayManagement
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsApiGatewayManagement PRIVATE QTAWSAPIGATEWAYMANAGEMENT_LIBRARY)
