# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsIoTFleetHub
  qtawsiotfleethubglobal.h
  iotfleethubclient.h
  iotfleethubclient_p.h
  iotfleethubrequest.h
  iotfleethubrequest_p.h
  iotfleethubresponse.h
  iotfleethubresponse_p.h
  createapplicationrequest.h
  createapplicationrequest_p.h
  createapplicationresponse.h
  createapplicationresponse_p.h
  deleteapplicationrequest.h
  deleteapplicationrequest_p.h
  deleteapplicationresponse.h
  deleteapplicationresponse_p.h
  describeapplicationrequest.h
  describeapplicationrequest_p.h
  describeapplicationresponse.h
  describeapplicationresponse_p.h
  listapplicationsrequest.h
  listapplicationsrequest_p.h
  listapplicationsresponse.h
  listapplicationsresponse_p.h
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
  updateapplicationrequest.h
  updateapplicationrequest_p.h
  updateapplicationresponse.h
  updateapplicationresponse_p.h
  iotfleethubclient.cpp
  iotfleethubrequest.cpp
  iotfleethubresponse.cpp
  createapplicationrequest.cpp
  createapplicationresponse.cpp
  deleteapplicationrequest.cpp
  deleteapplicationresponse.cpp
  describeapplicationrequest.cpp
  describeapplicationresponse.cpp
  listapplicationsrequest.cpp
  listapplicationsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateapplicationrequest.cpp
  updateapplicationresponse.cpp
)

target_link_libraries(QtAwsIoTFleetHub
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsIoTFleetHub PRIVATE QTAWSIOTFLEETHUB_LIBRARY)
