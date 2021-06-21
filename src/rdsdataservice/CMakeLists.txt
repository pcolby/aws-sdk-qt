set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsRDSDataService
  batchexecutestatementrequest.h
  batchexecutestatementrequest_p.h
  batchexecutestatementresponse.h
  batchexecutestatementresponse_p.h
  begintransactionrequest.h
  begintransactionrequest_p.h
  begintransactionresponse.h
  begintransactionresponse_p.h
  committransactionrequest.h
  committransactionrequest_p.h
  committransactionresponse.h
  committransactionresponse_p.h
  executesqlrequest.h
  executesqlrequest_p.h
  executesqlresponse.h
  executesqlresponse_p.h
  executestatementrequest.h
  executestatementrequest_p.h
  executestatementresponse.h
  executestatementresponse_p.h
  rdsdataserviceclient.h
  rdsdataserviceclient_p.h
  rdsdataservicerequest.h
  rdsdataservicerequest_p.h
  rdsdataserviceresponse.h
  rdsdataserviceresponse_p.h
  rollbacktransactionrequest.h
  rollbacktransactionrequest_p.h
  rollbacktransactionresponse.h
  rollbacktransactionresponse_p.h
  batchexecutestatementrequest.cpp
  batchexecutestatementresponse.cpp
  begintransactionrequest.cpp
  begintransactionresponse.cpp
  committransactionrequest.cpp
  committransactionresponse.cpp
  executesqlrequest.cpp
  executesqlresponse.cpp
  executestatementrequest.cpp
  executestatementresponse.cpp
  rdsdataserviceclient.cpp
  rdsdataservicerequest.cpp
  rdsdataserviceresponse.cpp
  rollbacktransactionrequest.cpp
  rollbacktransactionresponse.cpp)

add_dependencies(QtAwsRDSDataService QtAwsCore)

target_link_libraries(QtAwsRDSDataService PRIVATE Qt5::Core Qt5::Network)
