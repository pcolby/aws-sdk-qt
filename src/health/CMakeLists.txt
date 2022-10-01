# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsHealth
  qtawshealthglobal.h
  healthclient.h
  healthclient_p.h
  healthrequest.h
  healthrequest_p.h
  healthresponse.h
  healthresponse_p.h
  describeaffectedaccountsfororganizationrequest.h
  describeaffectedaccountsfororganizationrequest_p.h
  describeaffectedaccountsfororganizationresponse.h
  describeaffectedaccountsfororganizationresponse_p.h
  describeaffectedentitiesrequest.h
  describeaffectedentitiesrequest_p.h
  describeaffectedentitiesresponse.h
  describeaffectedentitiesresponse_p.h
  describeaffectedentitiesfororganizationrequest.h
  describeaffectedentitiesfororganizationrequest_p.h
  describeaffectedentitiesfororganizationresponse.h
  describeaffectedentitiesfororganizationresponse_p.h
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
  describeeventdetailsfororganizationrequest.h
  describeeventdetailsfororganizationrequest_p.h
  describeeventdetailsfororganizationresponse.h
  describeeventdetailsfororganizationresponse_p.h
  describeeventtypesrequest.h
  describeeventtypesrequest_p.h
  describeeventtypesresponse.h
  describeeventtypesresponse_p.h
  describeeventsrequest.h
  describeeventsrequest_p.h
  describeeventsresponse.h
  describeeventsresponse_p.h
  describeeventsfororganizationrequest.h
  describeeventsfororganizationrequest_p.h
  describeeventsfororganizationresponse.h
  describeeventsfororganizationresponse_p.h
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
  healthclient.cpp
  healthrequest.cpp
  healthresponse.cpp
  describeaffectedaccountsfororganizationrequest.cpp
  describeaffectedaccountsfororganizationresponse.cpp
  describeaffectedentitiesrequest.cpp
  describeaffectedentitiesresponse.cpp
  describeaffectedentitiesfororganizationrequest.cpp
  describeaffectedentitiesfororganizationresponse.cpp
  describeentityaggregatesrequest.cpp
  describeentityaggregatesresponse.cpp
  describeeventaggregatesrequest.cpp
  describeeventaggregatesresponse.cpp
  describeeventdetailsrequest.cpp
  describeeventdetailsresponse.cpp
  describeeventdetailsfororganizationrequest.cpp
  describeeventdetailsfororganizationresponse.cpp
  describeeventtypesrequest.cpp
  describeeventtypesresponse.cpp
  describeeventsrequest.cpp
  describeeventsresponse.cpp
  describeeventsfororganizationrequest.cpp
  describeeventsfororganizationresponse.cpp
  describehealthservicestatusfororganizationrequest.cpp
  describehealthservicestatusfororganizationresponse.cpp
  disablehealthserviceaccessfororganizationrequest.cpp
  disablehealthserviceaccessfororganizationresponse.cpp
  enablehealthserviceaccessfororganizationrequest.cpp
  enablehealthserviceaccessfororganizationresponse.cpp
)

target_link_libraries(QtAwsHealth
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsHealth PRIVATE QTAWSHEALTH_LIBRARY)
