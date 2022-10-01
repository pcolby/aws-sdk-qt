# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsSsoOidc
  qtawsssooidcglobal.h
  ssooidcclient.h
  ssooidcclient_p.h
  ssooidcrequest.h
  ssooidcrequest_p.h
  ssooidcresponse.h
  ssooidcresponse_p.h
  createtokenrequest.h
  createtokenrequest_p.h
  createtokenresponse.h
  createtokenresponse_p.h
  registerclientrequest.h
  registerclientrequest_p.h
  registerclientresponse.h
  registerclientresponse_p.h
  startdeviceauthorizationrequest.h
  startdeviceauthorizationrequest_p.h
  startdeviceauthorizationresponse.h
  startdeviceauthorizationresponse_p.h
  ssooidcclient.cpp
  ssooidcrequest.cpp
  ssooidcresponse.cpp
  createtokenrequest.cpp
  createtokenresponse.cpp
  registerclientrequest.cpp
  registerclientresponse.cpp
  startdeviceauthorizationrequest.cpp
  startdeviceauthorizationresponse.cpp
)

target_link_libraries(QtAwsSsoOidc
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsSsoOidc PRIVATE QTAWSSSOOIDC_LIBRARY)
