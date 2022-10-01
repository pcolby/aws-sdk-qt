# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsMigrationHubConfig
  qtawsmigrationhubconfigglobal.h
  migrationhubconfigclient.h
  migrationhubconfigclient_p.h
  migrationhubconfigrequest.h
  migrationhubconfigrequest_p.h
  migrationhubconfigresponse.h
  migrationhubconfigresponse_p.h
  createhomeregioncontrolrequest.h
  createhomeregioncontrolrequest_p.h
  createhomeregioncontrolresponse.h
  createhomeregioncontrolresponse_p.h
  describehomeregioncontrolsrequest.h
  describehomeregioncontrolsrequest_p.h
  describehomeregioncontrolsresponse.h
  describehomeregioncontrolsresponse_p.h
  gethomeregionrequest.h
  gethomeregionrequest_p.h
  gethomeregionresponse.h
  gethomeregionresponse_p.h
  migrationhubconfigclient.cpp
  migrationhubconfigrequest.cpp
  migrationhubconfigresponse.cpp
  createhomeregioncontrolrequest.cpp
  createhomeregioncontrolresponse.cpp
  describehomeregioncontrolsrequest.cpp
  describehomeregioncontrolsresponse.cpp
  gethomeregionrequest.cpp
  gethomeregionresponse.cpp
)

target_link_libraries(QtAwsMigrationHubConfig
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsMigrationHubConfig PRIVATE QTAWSMIGRATIONHUBCONFIG_LIBRARY)
