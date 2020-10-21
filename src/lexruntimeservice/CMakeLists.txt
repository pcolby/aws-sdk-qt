find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsLexRuntimeService
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
  lexruntimeserviceclient.cpp
  lexruntimeservicerequest.cpp
  lexruntimeserviceresponse.cpp
  postcontentrequest.cpp
  postcontentresponse.cpp
  posttextrequest.cpp
  posttextresponse.cpp)

add_dependencies(QtAwsLexRuntimeService QtAwsCore)

target_link_libraries(QtAwsLexRuntimeService Qt5::Core Qt5::Network)
