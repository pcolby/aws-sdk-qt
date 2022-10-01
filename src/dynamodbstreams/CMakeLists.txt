# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsDynamoDbStreams
  qtawsdynamodbstreamsglobal.h
  dynamodbstreamsclient.h
  dynamodbstreamsclient_p.h
  dynamodbstreamsrequest.h
  dynamodbstreamsrequest_p.h
  dynamodbstreamsresponse.h
  dynamodbstreamsresponse_p.h
  describestreamrequest.h
  describestreamrequest_p.h
  describestreamresponse.h
  describestreamresponse_p.h
  getrecordsrequest.h
  getrecordsrequest_p.h
  getrecordsresponse.h
  getrecordsresponse_p.h
  getsharditeratorrequest.h
  getsharditeratorrequest_p.h
  getsharditeratorresponse.h
  getsharditeratorresponse_p.h
  liststreamsrequest.h
  liststreamsrequest_p.h
  liststreamsresponse.h
  liststreamsresponse_p.h
  dynamodbstreamsclient.cpp
  dynamodbstreamsrequest.cpp
  dynamodbstreamsresponse.cpp
  describestreamrequest.cpp
  describestreamresponse.cpp
  getrecordsrequest.cpp
  getrecordsresponse.cpp
  getsharditeratorrequest.cpp
  getsharditeratorresponse.cpp
  liststreamsrequest.cpp
  liststreamsresponse.cpp
)

target_link_libraries(QtAwsDynamoDbStreams
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsDynamoDbStreams PRIVATE QTAWSDYNAMODBSTREAMS_LIBRARY)
