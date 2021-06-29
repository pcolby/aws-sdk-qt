add_library(QtAwsKinesisVideoMedia
  getmediarequest.h
  getmediarequest_p.h
  getmediaresponse.h
  getmediaresponse_p.h
  kinesisvideomediaclient.h
  kinesisvideomediaclient_p.h
  kinesisvideomediarequest.h
  kinesisvideomediarequest_p.h
  kinesisvideomediaresponse.h
  kinesisvideomediaresponse_p.h
  getmediarequest.cpp
  getmediaresponse.cpp
  kinesisvideomediaclient.cpp
  kinesisvideomediarequest.cpp
  kinesisvideomediaresponse.cpp)

target_link_libraries(QtAwsKinesisVideoMedia
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
