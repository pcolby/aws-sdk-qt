find_package(Qt5 COMPONENTS Core Network REQUIRED)

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

add_dependencies(QtAwsKinesisVideoMedia QtAwsCore)

target_link_libraries(QtAwsKinesisVideoMedia Qt5::Core Qt5::Network)
