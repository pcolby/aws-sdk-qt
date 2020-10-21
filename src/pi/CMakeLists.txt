find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsPi
  describedimensionkeysrequest.h
  describedimensionkeysrequest_p.h
  describedimensionkeysresponse.h
  describedimensionkeysresponse_p.h
  getresourcemetricsrequest.h
  getresourcemetricsrequest_p.h
  getresourcemetricsresponse.h
  getresourcemetricsresponse_p.h
  piclient.h
  piclient_p.h
  pirequest.h
  pirequest_p.h
  piresponse.h
  piresponse_p.h
  describedimensionkeysrequest.cpp
  describedimensionkeysresponse.cpp
  getresourcemetricsrequest.cpp
  getresourcemetricsresponse.cpp
  piclient.cpp
  pirequest.cpp
  piresponse.cpp)

add_dependencies(QtAwsPi QtAwsCore)

target_link_libraries(QtAwsPi Qt5::Core Qt5::Network)
