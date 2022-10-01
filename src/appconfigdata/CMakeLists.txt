add_compile_definitions(QTAWSAPPCONFIGDATA_LIBRARY)

add_library(QtAwsAppConfigData
  qtawsappconfigdataglobal.h
  appconfigdataclient.h
  appconfigdataclient_p.h
  appconfigdatarequest.h
  appconfigdatarequest_p.h
  appconfigdataresponse.h
  appconfigdataresponse_p.h
  getlatestconfigurationrequest.h
  getlatestconfigurationrequest_p.h
  getlatestconfigurationresponse.h
  getlatestconfigurationresponse_p.h
  startconfigurationsessionrequest.h
  startconfigurationsessionrequest_p.h
  startconfigurationsessionresponse.h
  startconfigurationsessionresponse_p.h
  appconfigdataclient.cpp
  appconfigdatarequest.cpp
  appconfigdataresponse.cpp
  getlatestconfigurationrequest.cpp
  getlatestconfigurationresponse.cpp
  startconfigurationsessionrequest.cpp
  startconfigurationsessionresponse.cpp)

target_link_libraries(QtAwsAppConfigData
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
