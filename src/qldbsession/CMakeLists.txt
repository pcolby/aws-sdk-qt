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

target_link_libraries(QtAwsQLDBSession
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
