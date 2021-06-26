set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsLexRuntimeService
  deletesessionrequest.h
  deletesessionrequest_p.h
  deletesessionresponse.h
  deletesessionresponse_p.h
  getsessionrequest.h
  getsessionrequest_p.h
  getsessionresponse.h
  getsessionresponse_p.h
  lexruntimeserviceclient.h
  lexruntimeserviceclient_p.h
  lexruntimeservicerequest.h
  lexruntimeservicerequest_p.h
  lexruntimeserviceresponse.h
  lexruntimeserviceresponse_p.h
  postcontentrequest.h
  postcontentrequest_p.h
  postcontentresponse.h
  postcontentresponse_p.h
  posttextrequest.h
  posttextrequest_p.h
  posttextresponse.h
  posttextresponse_p.h
  putsessionrequest.h
  putsessionrequest_p.h
  putsessionresponse.h
  putsessionresponse_p.h
  deletesessionrequest.cpp
  deletesessionresponse.cpp
  getsessionrequest.cpp
  getsessionresponse.cpp
  lexruntimeserviceclient.cpp
  lexruntimeservicerequest.cpp
  lexruntimeserviceresponse.cpp
  postcontentrequest.cpp
  postcontentresponse.cpp
  posttextrequest.cpp
  posttextresponse.cpp
  putsessionrequest.cpp
  putsessionresponse.cpp)

add_dependencies(QtAwsLexRuntimeService QtAwsCore)

target_link_libraries(QtAwsLexRuntimeService
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
