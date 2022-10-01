# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsMarketplaceEntitlement
  qtawsmarketplaceentitlementglobal.h
  marketplaceentitlementclient.h
  marketplaceentitlementclient_p.h
  marketplaceentitlementrequest.h
  marketplaceentitlementrequest_p.h
  marketplaceentitlementresponse.h
  marketplaceentitlementresponse_p.h
  getentitlementsrequest.h
  getentitlementsrequest_p.h
  getentitlementsresponse.h
  getentitlementsresponse_p.h
  marketplaceentitlementclient.cpp
  marketplaceentitlementrequest.cpp
  marketplaceentitlementresponse.cpp
  getentitlementsrequest.cpp
  getentitlementsresponse.cpp
)

target_link_libraries(QtAwsMarketplaceEntitlement
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsMarketplaceEntitlement PRIVATE QTAWSMARKETPLACEENTITLEMENT_LIBRARY)
