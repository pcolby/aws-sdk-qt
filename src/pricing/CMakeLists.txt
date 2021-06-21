set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsPricing
  describeservicesrequest.h
  describeservicesrequest_p.h
  describeservicesresponse.h
  describeservicesresponse_p.h
  getattributevaluesrequest.h
  getattributevaluesrequest_p.h
  getattributevaluesresponse.h
  getattributevaluesresponse_p.h
  getproductsrequest.h
  getproductsrequest_p.h
  getproductsresponse.h
  getproductsresponse_p.h
  pricingclient.h
  pricingclient_p.h
  pricingrequest.h
  pricingrequest_p.h
  pricingresponse.h
  pricingresponse_p.h
  describeservicesrequest.cpp
  describeservicesresponse.cpp
  getattributevaluesrequest.cpp
  getattributevaluesresponse.cpp
  getproductsrequest.cpp
  getproductsresponse.cpp
  pricingclient.cpp
  pricingrequest.cpp
  pricingresponse.cpp)

add_dependencies(QtAwsPricing QtAwsCore)

target_link_libraries(QtAwsPricing PRIVATE Qt5::Core Qt5::Network)
