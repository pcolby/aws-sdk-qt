add_library(QtAwsKinesisVideoSignalingChannels
  geticeserverconfigrequest.h
  geticeserverconfigrequest_p.h
  geticeserverconfigresponse.h
  geticeserverconfigresponse_p.h
  kinesisvideosignalingchannelsclient.h
  kinesisvideosignalingchannelsclient_p.h
  kinesisvideosignalingchannelsrequest.h
  kinesisvideosignalingchannelsrequest_p.h
  kinesisvideosignalingchannelsresponse.h
  kinesisvideosignalingchannelsresponse_p.h
  sendalexaoffertomasterrequest.h
  sendalexaoffertomasterrequest_p.h
  sendalexaoffertomasterresponse.h
  sendalexaoffertomasterresponse_p.h
  geticeserverconfigrequest.cpp
  geticeserverconfigresponse.cpp
  kinesisvideosignalingchannelsclient.cpp
  kinesisvideosignalingchannelsrequest.cpp
  kinesisvideosignalingchannelsresponse.cpp
  sendalexaoffertomasterrequest.cpp
  sendalexaoffertomasterresponse.cpp)

target_link_libraries(QtAwsKinesisVideoSignalingChannels
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
