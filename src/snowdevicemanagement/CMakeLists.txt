# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsSnowDeviceManagement
  qtawssnowdevicemanagementglobal.h
  snowdevicemanagementclient.h
  snowdevicemanagementclient_p.h
  snowdevicemanagementrequest.h
  snowdevicemanagementrequest_p.h
  snowdevicemanagementresponse.h
  snowdevicemanagementresponse_p.h
  canceltaskrequest.h
  canceltaskrequest_p.h
  canceltaskresponse.h
  canceltaskresponse_p.h
  createtaskrequest.h
  createtaskrequest_p.h
  createtaskresponse.h
  createtaskresponse_p.h
  describedevicerequest.h
  describedevicerequest_p.h
  describedeviceresponse.h
  describedeviceresponse_p.h
  describedeviceec2instancesrequest.h
  describedeviceec2instancesrequest_p.h
  describedeviceec2instancesresponse.h
  describedeviceec2instancesresponse_p.h
  describeexecutionrequest.h
  describeexecutionrequest_p.h
  describeexecutionresponse.h
  describeexecutionresponse_p.h
  describetaskrequest.h
  describetaskrequest_p.h
  describetaskresponse.h
  describetaskresponse_p.h
  listdeviceresourcesrequest.h
  listdeviceresourcesrequest_p.h
  listdeviceresourcesresponse.h
  listdeviceresourcesresponse_p.h
  listdevicesrequest.h
  listdevicesrequest_p.h
  listdevicesresponse.h
  listdevicesresponse_p.h
  listexecutionsrequest.h
  listexecutionsrequest_p.h
  listexecutionsresponse.h
  listexecutionsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  listtasksrequest.h
  listtasksrequest_p.h
  listtasksresponse.h
  listtasksresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  snowdevicemanagementclient.cpp
  snowdevicemanagementrequest.cpp
  snowdevicemanagementresponse.cpp
  canceltaskrequest.cpp
  canceltaskresponse.cpp
  createtaskrequest.cpp
  createtaskresponse.cpp
  describedevicerequest.cpp
  describedeviceresponse.cpp
  describedeviceec2instancesrequest.cpp
  describedeviceec2instancesresponse.cpp
  describeexecutionrequest.cpp
  describeexecutionresponse.cpp
  describetaskrequest.cpp
  describetaskresponse.cpp
  listdeviceresourcesrequest.cpp
  listdeviceresourcesresponse.cpp
  listdevicesrequest.cpp
  listdevicesresponse.cpp
  listexecutionsrequest.cpp
  listexecutionsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  listtasksrequest.cpp
  listtasksresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
)

target_link_libraries(QtAwsSnowDeviceManagement
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsSnowDeviceManagement PRIVATE QTAWSSNOWDEVICEMANAGEMENT_LIBRARY)
