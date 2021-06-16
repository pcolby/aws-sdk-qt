find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsPersonalizeEvents
  personalizeeventsclient.h
  personalizeeventsclient_p.h
  personalizeeventsrequest.h
  personalizeeventsrequest_p.h
  personalizeeventsresponse.h
  personalizeeventsresponse_p.h
  puteventsrequest.h
  puteventsrequest_p.h
  puteventsresponse.h
  puteventsresponse_p.h
  putitemsrequest.h
  putitemsrequest_p.h
  putitemsresponse.h
  putitemsresponse_p.h
  putusersrequest.h
  putusersrequest_p.h
  putusersresponse.h
  putusersresponse_p.h
  personalizeeventsclient.cpp
  personalizeeventsrequest.cpp
  personalizeeventsresponse.cpp
  puteventsrequest.cpp
  puteventsresponse.cpp
  putitemsrequest.cpp
  putitemsresponse.cpp
  putusersrequest.cpp
  putusersresponse.cpp)

add_dependencies(QtAwsPersonalizeEvents QtAwsCore)

target_link_libraries(QtAwsPersonalizeEvents Qt5::Core Qt5::Network)
