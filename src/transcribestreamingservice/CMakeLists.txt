set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsTranscribeStreamingService
  startmedicalstreamtranscriptionrequest.h
  startmedicalstreamtranscriptionrequest_p.h
  startmedicalstreamtranscriptionresponse.h
  startmedicalstreamtranscriptionresponse_p.h
  startstreamtranscriptionrequest.h
  startstreamtranscriptionrequest_p.h
  startstreamtranscriptionresponse.h
  startstreamtranscriptionresponse_p.h
  transcribestreamingserviceclient.h
  transcribestreamingserviceclient_p.h
  transcribestreamingservicerequest.h
  transcribestreamingservicerequest_p.h
  transcribestreamingserviceresponse.h
  transcribestreamingserviceresponse_p.h
  startmedicalstreamtranscriptionrequest.cpp
  startmedicalstreamtranscriptionresponse.cpp
  startstreamtranscriptionrequest.cpp
  startstreamtranscriptionresponse.cpp
  transcribestreamingserviceclient.cpp
  transcribestreamingservicerequest.cpp
  transcribestreamingserviceresponse.cpp)

add_dependencies(QtAwsTranscribeStreamingService QtAwsCore)

target_link_libraries(QtAwsTranscribeStreamingService PRIVATE Qt5::Core Qt5::Network)
