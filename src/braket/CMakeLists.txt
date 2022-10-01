# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsBraket
  qtawsbraketglobal.h
  braketclient.h
  braketclient_p.h
  braketrequest.h
  braketrequest_p.h
  braketresponse.h
  braketresponse_p.h
  canceljobrequest.h
  canceljobrequest_p.h
  canceljobresponse.h
  canceljobresponse_p.h
  cancelquantumtaskrequest.h
  cancelquantumtaskrequest_p.h
  cancelquantumtaskresponse.h
  cancelquantumtaskresponse_p.h
  createjobrequest.h
  createjobrequest_p.h
  createjobresponse.h
  createjobresponse_p.h
  createquantumtaskrequest.h
  createquantumtaskrequest_p.h
  createquantumtaskresponse.h
  createquantumtaskresponse_p.h
  getdevicerequest.h
  getdevicerequest_p.h
  getdeviceresponse.h
  getdeviceresponse_p.h
  getjobrequest.h
  getjobrequest_p.h
  getjobresponse.h
  getjobresponse_p.h
  getquantumtaskrequest.h
  getquantumtaskrequest_p.h
  getquantumtaskresponse.h
  getquantumtaskresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  searchdevicesrequest.h
  searchdevicesrequest_p.h
  searchdevicesresponse.h
  searchdevicesresponse_p.h
  searchjobsrequest.h
  searchjobsrequest_p.h
  searchjobsresponse.h
  searchjobsresponse_p.h
  searchquantumtasksrequest.h
  searchquantumtasksrequest_p.h
  searchquantumtasksresponse.h
  searchquantumtasksresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  braketclient.cpp
  braketrequest.cpp
  braketresponse.cpp
  canceljobrequest.cpp
  canceljobresponse.cpp
  cancelquantumtaskrequest.cpp
  cancelquantumtaskresponse.cpp
  createjobrequest.cpp
  createjobresponse.cpp
  createquantumtaskrequest.cpp
  createquantumtaskresponse.cpp
  getdevicerequest.cpp
  getdeviceresponse.cpp
  getjobrequest.cpp
  getjobresponse.cpp
  getquantumtaskrequest.cpp
  getquantumtaskresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  searchdevicesrequest.cpp
  searchdevicesresponse.cpp
  searchjobsrequest.cpp
  searchjobsresponse.cpp
  searchquantumtasksrequest.cpp
  searchquantumtasksresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
)

target_link_libraries(QtAwsBraket
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsBraket PRIVATE QTAWSBRAKET_LIBRARY)
