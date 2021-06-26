set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsConnectParticipant
  completeattachmentuploadrequest.h
  completeattachmentuploadrequest_p.h
  completeattachmentuploadresponse.h
  completeattachmentuploadresponse_p.h
  connectparticipantclient.h
  connectparticipantclient_p.h
  connectparticipantrequest.h
  connectparticipantrequest_p.h
  connectparticipantresponse.h
  connectparticipantresponse_p.h
  createparticipantconnectionrequest.h
  createparticipantconnectionrequest_p.h
  createparticipantconnectionresponse.h
  createparticipantconnectionresponse_p.h
  disconnectparticipantrequest.h
  disconnectparticipantrequest_p.h
  disconnectparticipantresponse.h
  disconnectparticipantresponse_p.h
  getattachmentrequest.h
  getattachmentrequest_p.h
  getattachmentresponse.h
  getattachmentresponse_p.h
  gettranscriptrequest.h
  gettranscriptrequest_p.h
  gettranscriptresponse.h
  gettranscriptresponse_p.h
  sendeventrequest.h
  sendeventrequest_p.h
  sendeventresponse.h
  sendeventresponse_p.h
  sendmessagerequest.h
  sendmessagerequest_p.h
  sendmessageresponse.h
  sendmessageresponse_p.h
  startattachmentuploadrequest.h
  startattachmentuploadrequest_p.h
  startattachmentuploadresponse.h
  startattachmentuploadresponse_p.h
  completeattachmentuploadrequest.cpp
  completeattachmentuploadresponse.cpp
  connectparticipantclient.cpp
  connectparticipantrequest.cpp
  connectparticipantresponse.cpp
  createparticipantconnectionrequest.cpp
  createparticipantconnectionresponse.cpp
  disconnectparticipantrequest.cpp
  disconnectparticipantresponse.cpp
  getattachmentrequest.cpp
  getattachmentresponse.cpp
  gettranscriptrequest.cpp
  gettranscriptresponse.cpp
  sendeventrequest.cpp
  sendeventresponse.cpp
  sendmessagerequest.cpp
  sendmessageresponse.cpp
  startattachmentuploadrequest.cpp
  startattachmentuploadresponse.cpp)

add_dependencies(QtAwsConnectParticipant QtAwsCore)

target_link_libraries(QtAwsConnectParticipant
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
