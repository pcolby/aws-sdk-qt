# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsServerlessApplicationRepository
  qtawsserverlessapplicationrepositoryglobal.h
  serverlessapplicationrepositoryclient.h
  serverlessapplicationrepositoryclient_p.h
  serverlessapplicationrepositoryrequest.h
  serverlessapplicationrepositoryrequest_p.h
  serverlessapplicationrepositoryresponse.h
  serverlessapplicationrepositoryresponse_p.h
  createapplicationrequest.h
  createapplicationrequest_p.h
  createapplicationresponse.h
  createapplicationresponse_p.h
  createapplicationversionrequest.h
  createapplicationversionrequest_p.h
  createapplicationversionresponse.h
  createapplicationversionresponse_p.h
  createcloudformationchangesetrequest.h
  createcloudformationchangesetrequest_p.h
  createcloudformationchangesetresponse.h
  createcloudformationchangesetresponse_p.h
  createcloudformationtemplaterequest.h
  createcloudformationtemplaterequest_p.h
  createcloudformationtemplateresponse.h
  createcloudformationtemplateresponse_p.h
  deleteapplicationrequest.h
  deleteapplicationrequest_p.h
  deleteapplicationresponse.h
  deleteapplicationresponse_p.h
  getapplicationrequest.h
  getapplicationrequest_p.h
  getapplicationresponse.h
  getapplicationresponse_p.h
  getapplicationpolicyrequest.h
  getapplicationpolicyrequest_p.h
  getapplicationpolicyresponse.h
  getapplicationpolicyresponse_p.h
  getcloudformationtemplaterequest.h
  getcloudformationtemplaterequest_p.h
  getcloudformationtemplateresponse.h
  getcloudformationtemplateresponse_p.h
  listapplicationdependenciesrequest.h
  listapplicationdependenciesrequest_p.h
  listapplicationdependenciesresponse.h
  listapplicationdependenciesresponse_p.h
  listapplicationversionsrequest.h
  listapplicationversionsrequest_p.h
  listapplicationversionsresponse.h
  listapplicationversionsresponse_p.h
  listapplicationsrequest.h
  listapplicationsrequest_p.h
  listapplicationsresponse.h
  listapplicationsresponse_p.h
  putapplicationpolicyrequest.h
  putapplicationpolicyrequest_p.h
  putapplicationpolicyresponse.h
  putapplicationpolicyresponse_p.h
  unshareapplicationrequest.h
  unshareapplicationrequest_p.h
  unshareapplicationresponse.h
  unshareapplicationresponse_p.h
  updateapplicationrequest.h
  updateapplicationrequest_p.h
  updateapplicationresponse.h
  updateapplicationresponse_p.h
  serverlessapplicationrepositoryclient.cpp
  serverlessapplicationrepositoryrequest.cpp
  serverlessapplicationrepositoryresponse.cpp
  createapplicationrequest.cpp
  createapplicationresponse.cpp
  createapplicationversionrequest.cpp
  createapplicationversionresponse.cpp
  createcloudformationchangesetrequest.cpp
  createcloudformationchangesetresponse.cpp
  createcloudformationtemplaterequest.cpp
  createcloudformationtemplateresponse.cpp
  deleteapplicationrequest.cpp
  deleteapplicationresponse.cpp
  getapplicationrequest.cpp
  getapplicationresponse.cpp
  getapplicationpolicyrequest.cpp
  getapplicationpolicyresponse.cpp
  getcloudformationtemplaterequest.cpp
  getcloudformationtemplateresponse.cpp
  listapplicationdependenciesrequest.cpp
  listapplicationdependenciesresponse.cpp
  listapplicationversionsrequest.cpp
  listapplicationversionsresponse.cpp
  listapplicationsrequest.cpp
  listapplicationsresponse.cpp
  putapplicationpolicyrequest.cpp
  putapplicationpolicyresponse.cpp
  unshareapplicationrequest.cpp
  unshareapplicationresponse.cpp
  updateapplicationrequest.cpp
  updateapplicationresponse.cpp
)

target_link_libraries(QtAwsServerlessApplicationRepository
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsServerlessApplicationRepository PRIVATE QTAWSSERVERLESSAPPLICATIONREPOSITORY_LIBRARY)
