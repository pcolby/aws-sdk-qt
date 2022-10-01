# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsDlm
  qtawsdlmglobal.h
  dlmclient.h
  dlmclient_p.h
  dlmrequest.h
  dlmrequest_p.h
  dlmresponse.h
  dlmresponse_p.h
  createlifecyclepolicyrequest.h
  createlifecyclepolicyrequest_p.h
  createlifecyclepolicyresponse.h
  createlifecyclepolicyresponse_p.h
  deletelifecyclepolicyrequest.h
  deletelifecyclepolicyrequest_p.h
  deletelifecyclepolicyresponse.h
  deletelifecyclepolicyresponse_p.h
  getlifecyclepoliciesrequest.h
  getlifecyclepoliciesrequest_p.h
  getlifecyclepoliciesresponse.h
  getlifecyclepoliciesresponse_p.h
  getlifecyclepolicyrequest.h
  getlifecyclepolicyrequest_p.h
  getlifecyclepolicyresponse.h
  getlifecyclepolicyresponse_p.h
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
  updatelifecyclepolicyrequest.h
  updatelifecyclepolicyrequest_p.h
  updatelifecyclepolicyresponse.h
  updatelifecyclepolicyresponse_p.h
  dlmclient.cpp
  dlmrequest.cpp
  dlmresponse.cpp
  createlifecyclepolicyrequest.cpp
  createlifecyclepolicyresponse.cpp
  deletelifecyclepolicyrequest.cpp
  deletelifecyclepolicyresponse.cpp
  getlifecyclepoliciesrequest.cpp
  getlifecyclepoliciesresponse.cpp
  getlifecyclepolicyrequest.cpp
  getlifecyclepolicyresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updatelifecyclepolicyrequest.cpp
  updatelifecyclepolicyresponse.cpp
)

target_link_libraries(QtAwsDlm
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsDlm PRIVATE QTAWSDLM_LIBRARY)
