find_package(Qt5 COMPONENTS Core Network REQUIRED)

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

add_dependencies(QtAwsKinesisVideoSignalingChannels QtAwsCore)

target_link_libraries(QtAwsKinesisVideoSignalingChannels Qt5::Core Qt5::Network)
