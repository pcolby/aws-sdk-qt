# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsCloudControl
  qtawscloudcontrolglobal.h
  cloudcontrolclient.h
  cloudcontrolclient_p.h
  cloudcontrolrequest.h
  cloudcontrolrequest_p.h
  cloudcontrolresponse.h
  cloudcontrolresponse_p.h
  cancelresourcerequestrequest.h
  cancelresourcerequestrequest_p.h
  cancelresourcerequestresponse.h
  cancelresourcerequestresponse_p.h
  createresourcerequest.h
  createresourcerequest_p.h
  createresourceresponse.h
  createresourceresponse_p.h
  deleteresourcerequest.h
  deleteresourcerequest_p.h
  deleteresourceresponse.h
  deleteresourceresponse_p.h
  getresourcerequest.h
  getresourcerequest_p.h
  getresourceresponse.h
  getresourceresponse_p.h
  getresourcerequeststatusrequest.h
  getresourcerequeststatusrequest_p.h
  getresourcerequeststatusresponse.h
  getresourcerequeststatusresponse_p.h
  listresourcerequestsrequest.h
  listresourcerequestsrequest_p.h
  listresourcerequestsresponse.h
  listresourcerequestsresponse_p.h
  listresourcesrequest.h
  listresourcesrequest_p.h
  listresourcesresponse.h
  listresourcesresponse_p.h
  updateresourcerequest.h
  updateresourcerequest_p.h
  updateresourceresponse.h
  updateresourceresponse_p.h
  cloudcontrolclient.cpp
  cloudcontrolrequest.cpp
  cloudcontrolresponse.cpp
  cancelresourcerequestrequest.cpp
  cancelresourcerequestresponse.cpp
  createresourcerequest.cpp
  createresourceresponse.cpp
  deleteresourcerequest.cpp
  deleteresourceresponse.cpp
  getresourcerequest.cpp
  getresourceresponse.cpp
  getresourcerequeststatusrequest.cpp
  getresourcerequeststatusresponse.cpp
  listresourcerequestsrequest.cpp
  listresourcerequestsresponse.cpp
  listresourcesrequest.cpp
  listresourcesresponse.cpp
  updateresourcerequest.cpp
  updateresourceresponse.cpp
)

target_link_libraries(QtAwsCloudControl
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsCloudControl PRIVATE QTAWSCLOUDCONTROL_LIBRARY)
