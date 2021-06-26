set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsMarketplaceCatalog
  cancelchangesetrequest.h
  cancelchangesetrequest_p.h
  cancelchangesetresponse.h
  cancelchangesetresponse_p.h
  describechangesetrequest.h
  describechangesetrequest_p.h
  describechangesetresponse.h
  describechangesetresponse_p.h
  describeentityrequest.h
  describeentityrequest_p.h
  describeentityresponse.h
  describeentityresponse_p.h
  listchangesetsrequest.h
  listchangesetsrequest_p.h
  listchangesetsresponse.h
  listchangesetsresponse_p.h
  listentitiesrequest.h
  listentitiesrequest_p.h
  listentitiesresponse.h
  listentitiesresponse_p.h
  marketplacecatalogclient.h
  marketplacecatalogclient_p.h
  marketplacecatalogrequest.h
  marketplacecatalogrequest_p.h
  marketplacecatalogresponse.h
  marketplacecatalogresponse_p.h
  startchangesetrequest.h
  startchangesetrequest_p.h
  startchangesetresponse.h
  startchangesetresponse_p.h
  cancelchangesetrequest.cpp
  cancelchangesetresponse.cpp
  describechangesetrequest.cpp
  describechangesetresponse.cpp
  describeentityrequest.cpp
  describeentityresponse.cpp
  listchangesetsrequest.cpp
  listchangesetsresponse.cpp
  listentitiesrequest.cpp
  listentitiesresponse.cpp
  marketplacecatalogclient.cpp
  marketplacecatalogrequest.cpp
  marketplacecatalogresponse.cpp
  startchangesetrequest.cpp
  startchangesetresponse.cpp)

add_dependencies(QtAwsMarketplaceCatalog QtAwsCore)

target_link_libraries(QtAwsMarketplaceCatalog
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
