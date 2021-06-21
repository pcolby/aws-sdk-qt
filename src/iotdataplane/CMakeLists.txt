set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIoTDataPlane
  deletethingshadowrequest.h
  deletethingshadowrequest_p.h
  deletethingshadowresponse.h
  deletethingshadowresponse_p.h
  getthingshadowrequest.h
  getthingshadowrequest_p.h
  getthingshadowresponse.h
  getthingshadowresponse_p.h
  iotdataplaneclient.h
  iotdataplaneclient_p.h
  iotdataplanerequest.h
  iotdataplanerequest_p.h
  iotdataplaneresponse.h
  iotdataplaneresponse_p.h
  listnamedshadowsforthingrequest.h
  listnamedshadowsforthingrequest_p.h
  listnamedshadowsforthingresponse.h
  listnamedshadowsforthingresponse_p.h
  publishrequest.h
  publishrequest_p.h
  publishresponse.h
  publishresponse_p.h
  updatethingshadowrequest.h
  updatethingshadowrequest_p.h
  updatethingshadowresponse.h
  updatethingshadowresponse_p.h
  deletethingshadowrequest.cpp
  deletethingshadowresponse.cpp
  getthingshadowrequest.cpp
  getthingshadowresponse.cpp
  iotdataplaneclient.cpp
  iotdataplanerequest.cpp
  iotdataplaneresponse.cpp
  listnamedshadowsforthingrequest.cpp
  listnamedshadowsforthingresponse.cpp
  publishrequest.cpp
  publishresponse.cpp
  updatethingshadowrequest.cpp
  updatethingshadowresponse.cpp)

add_dependencies(QtAwsIoTDataPlane QtAwsCore)

target_link_libraries(QtAwsIoTDataPlane PRIVATE Qt5::Core Qt5::Network)
