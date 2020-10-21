find_package(Qt5 COMPONENTS Core Network REQUIRED)

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

add_dependencies(QtAwsMarketplaceEntitlementService QtAwsCore)

target_link_libraries(QtAwsMarketplaceEntitlementService Qt5::Core Qt5::Network)
