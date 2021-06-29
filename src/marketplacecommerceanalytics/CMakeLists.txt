add_compile_definitions(QTAWSMARKETPLACECOMMERCEANALYTICS_LIBRARY)

add_library(QtAwsMarketplaceCommerceAnalytics
  generatedatasetrequest.h
  generatedatasetrequest_p.h
  generatedatasetresponse.h
  generatedatasetresponse_p.h
  marketplacecommerceanalyticsclient.h
  marketplacecommerceanalyticsclient_p.h
  marketplacecommerceanalyticsrequest.h
  marketplacecommerceanalyticsrequest_p.h
  marketplacecommerceanalyticsresponse.h
  marketplacecommerceanalyticsresponse_p.h
  qtawsmarketplacecommerceanalyticsglobal.h
  startsupportdataexportrequest.h
  startsupportdataexportrequest_p.h
  startsupportdataexportresponse.h
  startsupportdataexportresponse_p.h
  generatedatasetrequest.cpp
  generatedatasetresponse.cpp
  marketplacecommerceanalyticsclient.cpp
  marketplacecommerceanalyticsrequest.cpp
  marketplacecommerceanalyticsresponse.cpp
  startsupportdataexportrequest.cpp
  startsupportdataexportresponse.cpp)

target_link_libraries(QtAwsMarketplaceCommerceAnalytics
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
