add_compile_definitions(QTAWSFINSPACEDATA_LIBRARY)

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
  qtawsfinspacedataglobal.h
  createchangesetrequest.cpp
  createchangesetresponse.cpp
  finspacedataclient.cpp
  finspacedatarequest.cpp
  finspacedataresponse.cpp
  getprogrammaticaccesscredentialsrequest.cpp
  getprogrammaticaccesscredentialsresponse.cpp
  getworkinglocationrequest.cpp
  getworkinglocationresponse.cpp)

target_link_libraries(QtAwsFinSpaceData
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
