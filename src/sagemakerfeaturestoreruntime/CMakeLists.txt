add_compile_definitions(QTAWSSAGEMAKERFEATURESTORERUNTIME_LIBRARY)

add_library(QtAwsSageMakerFeatureStoreRuntime
  qtawssagemakerfeaturestoreruntimeglobal.h
  sagemakerfeaturestoreruntimeclient.h
  sagemakerfeaturestoreruntimeclient_p.h
  sagemakerfeaturestoreruntimerequest.h
  sagemakerfeaturestoreruntimerequest_p.h
  sagemakerfeaturestoreruntimeresponse.h
  sagemakerfeaturestoreruntimeresponse_p.h
  batchgetrecordrequest.h
  batchgetrecordrequest_p.h
  batchgetrecordresponse.h
  batchgetrecordresponse_p.h
  deleterecordrequest.h
  deleterecordrequest_p.h
  deleterecordresponse.h
  deleterecordresponse_p.h
  getrecordrequest.h
  getrecordrequest_p.h
  getrecordresponse.h
  getrecordresponse_p.h
  putrecordrequest.h
  putrecordrequest_p.h
  putrecordresponse.h
  putrecordresponse_p.h
  sagemakerfeaturestoreruntimeclient.cpp
  sagemakerfeaturestoreruntimerequest.cpp
  sagemakerfeaturestoreruntimeresponse.cpp
  batchgetrecordrequest.cpp
  batchgetrecordresponse.cpp
  deleterecordrequest.cpp
  deleterecordresponse.cpp
  getrecordrequest.cpp
  getrecordresponse.cpp
  putrecordrequest.cpp
  putrecordresponse.cpp)

target_link_libraries(QtAwsSageMakerFeatureStoreRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
