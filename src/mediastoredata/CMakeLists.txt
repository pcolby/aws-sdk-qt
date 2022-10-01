# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsMediaStoreData
  qtawsmediastoredataglobal.h
  mediastoredataclient.h
  mediastoredataclient_p.h
  mediastoredatarequest.h
  mediastoredatarequest_p.h
  mediastoredataresponse.h
  mediastoredataresponse_p.h
  deleteobjectrequest.h
  deleteobjectrequest_p.h
  deleteobjectresponse.h
  deleteobjectresponse_p.h
  describeobjectrequest.h
  describeobjectrequest_p.h
  describeobjectresponse.h
  describeobjectresponse_p.h
  getobjectrequest.h
  getobjectrequest_p.h
  getobjectresponse.h
  getobjectresponse_p.h
  listitemsrequest.h
  listitemsrequest_p.h
  listitemsresponse.h
  listitemsresponse_p.h
  putobjectrequest.h
  putobjectrequest_p.h
  putobjectresponse.h
  putobjectresponse_p.h
  mediastoredataclient.cpp
  mediastoredatarequest.cpp
  mediastoredataresponse.cpp
  deleteobjectrequest.cpp
  deleteobjectresponse.cpp
  describeobjectrequest.cpp
  describeobjectresponse.cpp
  getobjectrequest.cpp
  getobjectresponse.cpp
  listitemsrequest.cpp
  listitemsresponse.cpp
  putobjectrequest.cpp
  putobjectresponse.cpp
)

target_link_libraries(QtAwsMediaStoreData
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsMediaStoreData PRIVATE QTAWSMEDIASTOREDATA_LIBRARY)
