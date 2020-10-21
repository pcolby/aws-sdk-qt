find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsMobileAnalytics
  mobileanalyticsclient.h
  mobileanalyticsclient_p.h
  mobileanalyticsrequest.h
  mobileanalyticsrequest_p.h
  mobileanalyticsresponse.h
  mobileanalyticsresponse_p.h
  puteventsrequest.h
  puteventsrequest_p.h
  puteventsresponse.h
  puteventsresponse_p.h
  mobileanalyticsclient.cpp
  mobileanalyticsrequest.cpp
  mobileanalyticsresponse.cpp
  puteventsrequest.cpp
  puteventsresponse.cpp)

add_dependencies(QtAwsMobileAnalytics QtAwsCore)

target_link_libraries(QtAwsMobileAnalytics Qt5::Core Qt5::Network)
