# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsMwaa
  qtawsmwaaglobal.h
  mwaaclient.h
  mwaaclient_p.h
  mwaarequest.h
  mwaarequest_p.h
  mwaaresponse.h
  mwaaresponse_p.h
  createclitokenrequest.h
  createclitokenrequest_p.h
  createclitokenresponse.h
  createclitokenresponse_p.h
  createenvironmentrequest.h
  createenvironmentrequest_p.h
  createenvironmentresponse.h
  createenvironmentresponse_p.h
  createweblogintokenrequest.h
  createweblogintokenrequest_p.h
  createweblogintokenresponse.h
  createweblogintokenresponse_p.h
  deleteenvironmentrequest.h
  deleteenvironmentrequest_p.h
  deleteenvironmentresponse.h
  deleteenvironmentresponse_p.h
  getenvironmentrequest.h
  getenvironmentrequest_p.h
  getenvironmentresponse.h
  getenvironmentresponse_p.h
  listenvironmentsrequest.h
  listenvironmentsrequest_p.h
  listenvironmentsresponse.h
  listenvironmentsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  publishmetricsrequest.h
  publishmetricsrequest_p.h
  publishmetricsresponse.h
  publishmetricsresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateenvironmentrequest.h
  updateenvironmentrequest_p.h
  updateenvironmentresponse.h
  updateenvironmentresponse_p.h
  mwaaclient.cpp
  mwaarequest.cpp
  mwaaresponse.cpp
  createclitokenrequest.cpp
  createclitokenresponse.cpp
  createenvironmentrequest.cpp
  createenvironmentresponse.cpp
  createweblogintokenrequest.cpp
  createweblogintokenresponse.cpp
  deleteenvironmentrequest.cpp
  deleteenvironmentresponse.cpp
  getenvironmentrequest.cpp
  getenvironmentresponse.cpp
  listenvironmentsrequest.cpp
  listenvironmentsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  publishmetricsrequest.cpp
  publishmetricsresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateenvironmentrequest.cpp
  updateenvironmentresponse.cpp
)

target_link_libraries(QtAwsMwaa
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsMwaa PRIVATE QTAWSMWAA_LIBRARY)
