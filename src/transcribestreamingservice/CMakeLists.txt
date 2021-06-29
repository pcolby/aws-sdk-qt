add_compile_definitions(QTAWSTRANSCRIBESTREAMINGSERVICE_LIBRARY)

add_library(QtAwsTranscribeStreamingService
  qtawstranscribestreamingserviceglobal.h
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

target_link_libraries(QtAwsTranscribeStreamingService
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
