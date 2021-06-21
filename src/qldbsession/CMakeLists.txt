set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsQLDBSession
  qldbsessionclient.h
  qldbsessionclient_p.h
  qldbsessionrequest.h
  qldbsessionrequest_p.h
  qldbsessionresponse.h
  qldbsessionresponse_p.h
  sendcommandrequest.h
  sendcommandrequest_p.h
  sendcommandresponse.h
  sendcommandresponse_p.h
  qldbsessionclient.cpp
  qldbsessionrequest.cpp
  qldbsessionresponse.cpp
  sendcommandrequest.cpp
  sendcommandresponse.cpp)

add_dependencies(QtAwsQLDBSession QtAwsCore)

target_link_libraries(QtAwsQLDBSession PRIVATE Qt5::Core Qt5::Network)
