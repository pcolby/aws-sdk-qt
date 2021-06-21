set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsSageMakerFeatureStoreRuntime
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
  sagemakerfeaturestoreruntimeclient.h
  sagemakerfeaturestoreruntimeclient_p.h
  sagemakerfeaturestoreruntimerequest.h
  sagemakerfeaturestoreruntimerequest_p.h
  sagemakerfeaturestoreruntimeresponse.h
  sagemakerfeaturestoreruntimeresponse_p.h
  batchgetrecordrequest.cpp
  batchgetrecordresponse.cpp
  deleterecordrequest.cpp
  deleterecordresponse.cpp
  getrecordrequest.cpp
  getrecordresponse.cpp
  putrecordrequest.cpp
  putrecordresponse.cpp
  sagemakerfeaturestoreruntimeclient.cpp
  sagemakerfeaturestoreruntimerequest.cpp
  sagemakerfeaturestoreruntimeresponse.cpp)

add_dependencies(QtAwsSageMakerFeatureStoreRuntime QtAwsCore)

target_link_libraries(QtAwsSageMakerFeatureStoreRuntime PRIVATE Qt5::Core Qt5::Network)
