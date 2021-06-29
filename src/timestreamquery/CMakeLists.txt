add_library(QtAwsTimestreamQuery
  cancelqueryrequest.h
  cancelqueryrequest_p.h
  cancelqueryresponse.h
  cancelqueryresponse_p.h
  describeendpointsrequest.h
  describeendpointsrequest_p.h
  describeendpointsresponse.h
  describeendpointsresponse_p.h
  queryrequest.h
  queryrequest_p.h
  queryresponse.h
  queryresponse_p.h
  timestreamqueryclient.h
  timestreamqueryclient_p.h
  timestreamqueryrequest.h
  timestreamqueryrequest_p.h
  timestreamqueryresponse.h
  timestreamqueryresponse_p.h
  cancelqueryrequest.cpp
  cancelqueryresponse.cpp
  describeendpointsrequest.cpp
  describeendpointsresponse.cpp
  queryrequest.cpp
  queryresponse.cpp
  timestreamqueryclient.cpp
  timestreamqueryrequest.cpp
  timestreamqueryresponse.cpp)

target_link_libraries(QtAwsTimestreamQuery
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
