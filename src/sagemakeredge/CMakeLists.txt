# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsSagemakerEdge
  qtawssagemakeredgeglobal.h
  sagemakeredgeclient.h
  sagemakeredgeclient_p.h
  sagemakeredgerequest.h
  sagemakeredgerequest_p.h
  sagemakeredgeresponse.h
  sagemakeredgeresponse_p.h
  getdeploymentsrequest.h
  getdeploymentsrequest_p.h
  getdeploymentsresponse.h
  getdeploymentsresponse_p.h
  getdeviceregistrationrequest.h
  getdeviceregistrationrequest_p.h
  getdeviceregistrationresponse.h
  getdeviceregistrationresponse_p.h
  sendheartbeatrequest.h
  sendheartbeatrequest_p.h
  sendheartbeatresponse.h
  sendheartbeatresponse_p.h
  sagemakeredgeclient.cpp
  sagemakeredgerequest.cpp
  sagemakeredgeresponse.cpp
  getdeploymentsrequest.cpp
  getdeploymentsresponse.cpp
  getdeviceregistrationrequest.cpp
  getdeviceregistrationresponse.cpp
  sendheartbeatrequest.cpp
  sendheartbeatresponse.cpp
)

target_link_libraries(QtAwsSagemakerEdge
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsSagemakerEdge PRIVATE QTAWSSAGEMAKEREDGE_LIBRARY)
