# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsElasticInference
  qtawselasticinferenceglobal.h
  elasticinferenceclient.h
  elasticinferenceclient_p.h
  elasticinferencerequest.h
  elasticinferencerequest_p.h
  elasticinferenceresponse.h
  elasticinferenceresponse_p.h
  describeacceleratorofferingsrequest.h
  describeacceleratorofferingsrequest_p.h
  describeacceleratorofferingsresponse.h
  describeacceleratorofferingsresponse_p.h
  describeacceleratortypesrequest.h
  describeacceleratortypesrequest_p.h
  describeacceleratortypesresponse.h
  describeacceleratortypesresponse_p.h
  describeacceleratorsrequest.h
  describeacceleratorsrequest_p.h
  describeacceleratorsresponse.h
  describeacceleratorsresponse_p.h
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
  elasticinferenceclient.cpp
  elasticinferencerequest.cpp
  elasticinferenceresponse.cpp
  describeacceleratorofferingsrequest.cpp
  describeacceleratorofferingsresponse.cpp
  describeacceleratortypesrequest.cpp
  describeacceleratortypesresponse.cpp
  describeacceleratorsrequest.cpp
  describeacceleratorsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
)

target_link_libraries(QtAwsElasticInference
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsElasticInference PRIVATE QTAWSELASTICINFERENCE_LIBRARY)
