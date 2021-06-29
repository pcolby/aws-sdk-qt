add_compile_definitions(QTAWSDYNAMODBSTREAMS_LIBRARY)

add_library(QtAwsDynamoDBStreams
  describestreamrequest.h
  describestreamrequest_p.h
  describestreamresponse.h
  describestreamresponse_p.h
  dynamodbstreamsclient.h
  dynamodbstreamsclient_p.h
  dynamodbstreamsrequest.h
  dynamodbstreamsrequest_p.h
  dynamodbstreamsresponse.h
  dynamodbstreamsresponse_p.h
  getrecordsrequest.h
  getrecordsrequest_p.h
  getrecordsresponse.h
  getrecordsresponse_p.h
  getsharditeratorrequest.h
  getsharditeratorrequest_p.h
  getsharditeratorresponse.h
  getsharditeratorresponse_p.h
  liststreamsrequest.h
  liststreamsrequest_p.h
  liststreamsresponse.h
  liststreamsresponse_p.h
  qtawsdynamodbstreamsglobal.h
  describestreamrequest.cpp
  describestreamresponse.cpp
  dynamodbstreamsclient.cpp
  dynamodbstreamsrequest.cpp
  dynamodbstreamsresponse.cpp
  getrecordsrequest.cpp
  getrecordsresponse.cpp
  getsharditeratorrequest.cpp
  getsharditeratorresponse.cpp
  liststreamsrequest.cpp
  liststreamsresponse.cpp)

target_link_libraries(QtAwsDynamoDBStreams
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
