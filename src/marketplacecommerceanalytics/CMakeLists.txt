# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSMARKETPLACECOMMERCEANALYTICS_LIBRARY)

add_library(QtAwsMarketplaceCommerceAnalytics
  qtawsmarketplacecommerceanalyticsglobal.h
  marketplacecommerceanalyticsclient.h
  marketplacecommerceanalyticsclient_p.h
  marketplacecommerceanalyticsrequest.h
  marketplacecommerceanalyticsrequest_p.h
  marketplacecommerceanalyticsresponse.h
  marketplacecommerceanalyticsresponse_p.h
  generatedatasetrequest.h
  generatedatasetrequest_p.h
  generatedatasetresponse.h
  generatedatasetresponse_p.h
  startsupportdataexportrequest.h
  startsupportdataexportrequest_p.h
  startsupportdataexportresponse.h
  startsupportdataexportresponse_p.h
  marketplacecommerceanalyticsclient.cpp
  marketplacecommerceanalyticsrequest.cpp
  marketplacecommerceanalyticsresponse.cpp
  generatedatasetrequest.cpp
  generatedatasetresponse.cpp
  startsupportdataexportrequest.cpp
  startsupportdataexportresponse.cpp)

target_link_libraries(QtAwsMarketplaceCommerceAnalytics
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
