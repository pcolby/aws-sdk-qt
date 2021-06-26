set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsPinpointSMSVoice
  createconfigurationseteventdestinationrequest.h
  createconfigurationseteventdestinationrequest_p.h
  createconfigurationseteventdestinationresponse.h
  createconfigurationseteventdestinationresponse_p.h
  createconfigurationsetrequest.h
  createconfigurationsetrequest_p.h
  createconfigurationsetresponse.h
  createconfigurationsetresponse_p.h
  deleteconfigurationseteventdestinationrequest.h
  deleteconfigurationseteventdestinationrequest_p.h
  deleteconfigurationseteventdestinationresponse.h
  deleteconfigurationseteventdestinationresponse_p.h
  deleteconfigurationsetrequest.h
  deleteconfigurationsetrequest_p.h
  deleteconfigurationsetresponse.h
  deleteconfigurationsetresponse_p.h
  getconfigurationseteventdestinationsrequest.h
  getconfigurationseteventdestinationsrequest_p.h
  getconfigurationseteventdestinationsresponse.h
  getconfigurationseteventdestinationsresponse_p.h
  listconfigurationsetsrequest.h
  listconfigurationsetsrequest_p.h
  listconfigurationsetsresponse.h
  listconfigurationsetsresponse_p.h
  pinpointsmsvoiceclient.h
  pinpointsmsvoiceclient_p.h
  pinpointsmsvoicerequest.h
  pinpointsmsvoicerequest_p.h
  pinpointsmsvoiceresponse.h
  pinpointsmsvoiceresponse_p.h
  sendvoicemessagerequest.h
  sendvoicemessagerequest_p.h
  sendvoicemessageresponse.h
  sendvoicemessageresponse_p.h
  updateconfigurationseteventdestinationrequest.h
  updateconfigurationseteventdestinationrequest_p.h
  updateconfigurationseteventdestinationresponse.h
  updateconfigurationseteventdestinationresponse_p.h
  createconfigurationseteventdestinationrequest.cpp
  createconfigurationseteventdestinationresponse.cpp
  createconfigurationsetrequest.cpp
  createconfigurationsetresponse.cpp
  deleteconfigurationseteventdestinationrequest.cpp
  deleteconfigurationseteventdestinationresponse.cpp
  deleteconfigurationsetrequest.cpp
  deleteconfigurationsetresponse.cpp
  getconfigurationseteventdestinationsrequest.cpp
  getconfigurationseteventdestinationsresponse.cpp
  listconfigurationsetsrequest.cpp
  listconfigurationsetsresponse.cpp
  pinpointsmsvoiceclient.cpp
  pinpointsmsvoicerequest.cpp
  pinpointsmsvoiceresponse.cpp
  sendvoicemessagerequest.cpp
  sendvoicemessageresponse.cpp
  updateconfigurationseteventdestinationrequest.cpp
  updateconfigurationseteventdestinationresponse.cpp)

add_dependencies(QtAwsPinpointSMSVoice QtAwsCore)

target_link_libraries(QtAwsPinpointSMSVoice
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
