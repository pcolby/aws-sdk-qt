find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsKinesisVideoArchivedMedia
  getdashstreamingsessionurlrequest.h
  getdashstreamingsessionurlrequest_p.h
  getdashstreamingsessionurlresponse.h
  getdashstreamingsessionurlresponse_p.h
  gethlsstreamingsessionurlrequest.h
  gethlsstreamingsessionurlrequest_p.h
  gethlsstreamingsessionurlresponse.h
  gethlsstreamingsessionurlresponse_p.h
  getmediaforfragmentlistrequest.h
  getmediaforfragmentlistrequest_p.h
  getmediaforfragmentlistresponse.h
  getmediaforfragmentlistresponse_p.h
  kinesisvideoarchivedmediaclient.h
  kinesisvideoarchivedmediaclient_p.h
  kinesisvideoarchivedmediarequest.h
  kinesisvideoarchivedmediarequest_p.h
  kinesisvideoarchivedmediaresponse.h
  kinesisvideoarchivedmediaresponse_p.h
  listfragmentsrequest.h
  listfragmentsrequest_p.h
  listfragmentsresponse.h
  listfragmentsresponse_p.h
  getdashstreamingsessionurlrequest.cpp
  getdashstreamingsessionurlresponse.cpp
  gethlsstreamingsessionurlrequest.cpp
  gethlsstreamingsessionurlresponse.cpp
  getmediaforfragmentlistrequest.cpp
  getmediaforfragmentlistresponse.cpp
  kinesisvideoarchivedmediaclient.cpp
  kinesisvideoarchivedmediarequest.cpp
  kinesisvideoarchivedmediaresponse.cpp
  listfragmentsrequest.cpp
  listfragmentsresponse.cpp)

add_dependencies(QtAwsKinesisVideoArchivedMedia QtAwsCore)

target_link_libraries(QtAwsKinesisVideoArchivedMedia Qt5::Core Qt5::Network)
