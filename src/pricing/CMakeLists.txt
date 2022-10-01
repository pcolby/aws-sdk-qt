# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsPricing
  qtawspricingglobal.h
  pricingclient.h
  pricingclient_p.h
  pricingrequest.h
  pricingrequest_p.h
  pricingresponse.h
  pricingresponse_p.h
  describeservicesrequest.h
  describeservicesrequest_p.h
  describeservicesresponse.h
  describeservicesresponse_p.h
  getattributevaluesrequest.h
  getattributevaluesrequest_p.h
  getattributevaluesresponse.h
  getattributevaluesresponse_p.h
  getproductsrequest.h
  getproductsrequest_p.h
  getproductsresponse.h
  getproductsresponse_p.h
  pricingclient.cpp
  pricingrequest.cpp
  pricingresponse.cpp
  describeservicesrequest.cpp
  describeservicesresponse.cpp
  getattributevaluesrequest.cpp
  getattributevaluesresponse.cpp
  getproductsrequest.cpp
  getproductsresponse.cpp
)

target_link_libraries(QtAwsPricing
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsPricing PRIVATE QTAWSPRICING_LIBRARY)
