set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIoTFleetHub
  createapplicationrequest.h
  createapplicationrequest_p.h
  createapplicationresponse.h
  createapplicationresponse_p.h
  deleteapplicationrequest.h
  deleteapplicationrequest_p.h
  deleteapplicationresponse.h
  deleteapplicationresponse_p.h
  describeapplicationrequest.h
  describeapplicationrequest_p.h
  describeapplicationresponse.h
  describeapplicationresponse_p.h
  iotfleethubclient.h
  iotfleethubclient_p.h
  iotfleethubrequest.h
  iotfleethubrequest_p.h
  iotfleethubresponse.h
  iotfleethubresponse_p.h
  listapplicationsrequest.h
  listapplicationsrequest_p.h
  listapplicationsresponse.h
  listapplicationsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateapplicationrequest.h
  updateapplicationrequest_p.h
  updateapplicationresponse.h
  updateapplicationresponse_p.h
  createapplicationrequest.cpp
  createapplicationresponse.cpp
  deleteapplicationrequest.cpp
  deleteapplicationresponse.cpp
  describeapplicationrequest.cpp
  describeapplicationresponse.cpp
  iotfleethubclient.cpp
  iotfleethubrequest.cpp
  iotfleethubresponse.cpp
  listapplicationsrequest.cpp
  listapplicationsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateapplicationrequest.cpp
  updateapplicationresponse.cpp)

add_dependencies(QtAwsIoTFleetHub QtAwsCore)

target_link_libraries(QtAwsIoTFleetHub PRIVATE Qt5::Core Qt5::Network)
