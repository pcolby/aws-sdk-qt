# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsS3Outposts
  qtawss3outpostsglobal.h
  s3outpostsclient.h
  s3outpostsclient_p.h
  s3outpostsrequest.h
  s3outpostsrequest_p.h
  s3outpostsresponse.h
  s3outpostsresponse_p.h
  createendpointrequest.h
  createendpointrequest_p.h
  createendpointresponse.h
  createendpointresponse_p.h
  deleteendpointrequest.h
  deleteendpointrequest_p.h
  deleteendpointresponse.h
  deleteendpointresponse_p.h
  listendpointsrequest.h
  listendpointsrequest_p.h
  listendpointsresponse.h
  listendpointsresponse_p.h
  listsharedendpointsrequest.h
  listsharedendpointsrequest_p.h
  listsharedendpointsresponse.h
  listsharedendpointsresponse_p.h
  s3outpostsclient.cpp
  s3outpostsrequest.cpp
  s3outpostsresponse.cpp
  createendpointrequest.cpp
  createendpointresponse.cpp
  deleteendpointrequest.cpp
  deleteendpointresponse.cpp
  listendpointsrequest.cpp
  listendpointsresponse.cpp
  listsharedendpointsrequest.cpp
  listsharedendpointsresponse.cpp
)

target_link_libraries(QtAwsS3Outposts
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsS3Outposts PRIVATE QTAWSS3OUTPOSTS_LIBRARY)
