add_compile_definitions(QTAWSMARKETPLACEENTITLEMENT_LIBRARY)

add_library(QtAwsMarketplaceEntitlement
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
  getentitlementsresponse.cpp)

target_link_libraries(QtAwsMarketplaceEntitlement
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
