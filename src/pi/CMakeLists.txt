# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsPi
  qtawspiglobal.h
  piclient.h
  piclient_p.h
  pirequest.h
  pirequest_p.h
  piresponse.h
  piresponse_p.h
  describedimensionkeysrequest.h
  describedimensionkeysrequest_p.h
  describedimensionkeysresponse.h
  describedimensionkeysresponse_p.h
  getdimensionkeydetailsrequest.h
  getdimensionkeydetailsrequest_p.h
  getdimensionkeydetailsresponse.h
  getdimensionkeydetailsresponse_p.h
  getresourcemetadatarequest.h
  getresourcemetadatarequest_p.h
  getresourcemetadataresponse.h
  getresourcemetadataresponse_p.h
  getresourcemetricsrequest.h
  getresourcemetricsrequest_p.h
  getresourcemetricsresponse.h
  getresourcemetricsresponse_p.h
  listavailableresourcedimensionsrequest.h
  listavailableresourcedimensionsrequest_p.h
  listavailableresourcedimensionsresponse.h
  listavailableresourcedimensionsresponse_p.h
  listavailableresourcemetricsrequest.h
  listavailableresourcemetricsrequest_p.h
  listavailableresourcemetricsresponse.h
  listavailableresourcemetricsresponse_p.h
  piclient.cpp
  pirequest.cpp
  piresponse.cpp
  describedimensionkeysrequest.cpp
  describedimensionkeysresponse.cpp
  getdimensionkeydetailsrequest.cpp
  getdimensionkeydetailsresponse.cpp
  getresourcemetadatarequest.cpp
  getresourcemetadataresponse.cpp
  getresourcemetricsrequest.cpp
  getresourcemetricsresponse.cpp
  listavailableresourcedimensionsrequest.cpp
  listavailableresourcedimensionsresponse.cpp
  listavailableresourcemetricsrequest.cpp
  listavailableresourcemetricsresponse.cpp
)

target_link_libraries(QtAwsPi
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsPi PRIVATE QTAWSPI_LIBRARY)
