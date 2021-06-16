find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsFinSpaceData
  createchangesetrequest.h
  createchangesetrequest_p.h
  createchangesetresponse.h
  createchangesetresponse_p.h
  finspacedataclient.h
  finspacedataclient_p.h
  finspacedatarequest.h
  finspacedatarequest_p.h
  finspacedataresponse.h
  finspacedataresponse_p.h
  getprogrammaticaccesscredentialsrequest.h
  getprogrammaticaccesscredentialsrequest_p.h
  getprogrammaticaccesscredentialsresponse.h
  getprogrammaticaccesscredentialsresponse_p.h
  getworkinglocationrequest.h
  getworkinglocationrequest_p.h
  getworkinglocationresponse.h
  getworkinglocationresponse_p.h
  createchangesetrequest.cpp
  createchangesetresponse.cpp
  finspacedataclient.cpp
  finspacedatarequest.cpp
  finspacedataresponse.cpp
  getprogrammaticaccesscredentialsrequest.cpp
  getprogrammaticaccesscredentialsresponse.cpp
  getworkinglocationrequest.cpp
  getworkinglocationresponse.cpp)

add_dependencies(QtAwsFinSpaceData QtAwsCore)

target_link_libraries(QtAwsFinSpaceData Qt5::Core Qt5::Network)
