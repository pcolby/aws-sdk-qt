add_library(QtAwsMarketplaceEntitlementService
  getentitlementsrequest.h
  getentitlementsrequest_p.h
  getentitlementsresponse.h
  getentitlementsresponse_p.h
  marketplaceentitlementserviceclient.h
  marketplaceentitlementserviceclient_p.h
  marketplaceentitlementservicerequest.h
  marketplaceentitlementservicerequest_p.h
  marketplaceentitlementserviceresponse.h
  marketplaceentitlementserviceresponse_p.h
  getentitlementsrequest.cpp
  getentitlementsresponse.cpp
  marketplaceentitlementserviceclient.cpp
  marketplaceentitlementservicerequest.cpp
  marketplaceentitlementserviceresponse.cpp)

target_link_libraries(QtAwsMarketplaceEntitlementService
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
