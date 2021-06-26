set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsLexRuntimeV2
  deletesessionrequest.h
  deletesessionrequest_p.h
  deletesessionresponse.h
  deletesessionresponse_p.h
  getsessionrequest.h
  getsessionrequest_p.h
  getsessionresponse.h
  getsessionresponse_p.h
  lexruntimev2client.h
  lexruntimev2client_p.h
  lexruntimev2request.h
  lexruntimev2request_p.h
  lexruntimev2response.h
  lexruntimev2response_p.h
  putsessionrequest.h
  putsessionrequest_p.h
  putsessionresponse.h
  putsessionresponse_p.h
  recognizetextrequest.h
  recognizetextrequest_p.h
  recognizetextresponse.h
  recognizetextresponse_p.h
  recognizeutterancerequest.h
  recognizeutterancerequest_p.h
  recognizeutteranceresponse.h
  recognizeutteranceresponse_p.h
  startconversationrequest.h
  startconversationrequest_p.h
  startconversationresponse.h
  startconversationresponse_p.h
  deletesessionrequest.cpp
  deletesessionresponse.cpp
  getsessionrequest.cpp
  getsessionresponse.cpp
  lexruntimev2client.cpp
  lexruntimev2request.cpp
  lexruntimev2response.cpp
  putsessionrequest.cpp
  putsessionresponse.cpp
  recognizetextrequest.cpp
  recognizetextresponse.cpp
  recognizeutterancerequest.cpp
  recognizeutteranceresponse.cpp
  startconversationrequest.cpp
  startconversationresponse.cpp)

add_dependencies(QtAwsLexRuntimeV2 QtAwsCore)

target_link_libraries(QtAwsLexRuntimeV2
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
