add_compile_definitions(QTAWSKINESISVIDEOMEDIA_LIBRARY)

add_library(QtAwsKinesisVideoMedia
  qtawskinesisvideomediaglobal.h
  kinesisvideomediaclient.h
  kinesisvideomediaclient_p.h
  kinesisvideomediarequest.h
  kinesisvideomediarequest_p.h
  kinesisvideomediaresponse.h
  kinesisvideomediaresponse_p.h
  getmediarequest.h
  getmediarequest_p.h
  getmediaresponse.h
  getmediaresponse_p.h
  kinesisvideomediaclient.cpp
  kinesisvideomediarequest.cpp
  kinesisvideomediaresponse.cpp
  getmediarequest.cpp
  getmediaresponse.cpp)

target_link_libraries(QtAwsKinesisVideoMedia
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
