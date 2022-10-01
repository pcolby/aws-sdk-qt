# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsForecastQuery
  qtawsforecastqueryglobal.h
  forecastqueryclient.h
  forecastqueryclient_p.h
  forecastqueryrequest.h
  forecastqueryrequest_p.h
  forecastqueryresponse.h
  forecastqueryresponse_p.h
  queryforecastrequest.h
  queryforecastrequest_p.h
  queryforecastresponse.h
  queryforecastresponse_p.h
  querywhatifforecastrequest.h
  querywhatifforecastrequest_p.h
  querywhatifforecastresponse.h
  querywhatifforecastresponse_p.h
  forecastqueryclient.cpp
  forecastqueryrequest.cpp
  forecastqueryresponse.cpp
  queryforecastrequest.cpp
  queryforecastresponse.cpp
  querywhatifforecastrequest.cpp
  querywhatifforecastresponse.cpp
)

target_link_libraries(QtAwsForecastQuery
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsForecastQuery PRIVATE QTAWSFORECASTQUERY_LIBRARY)
