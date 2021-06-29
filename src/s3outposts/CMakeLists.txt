add_library(QtAwsS3Outposts
  createendpointrequest.h
  createendpointrequest_p.h
  createendpointresponse.h
  createendpointresponse_p.h
  deleteendpointrequest.h
  deleteendpointrequest_p.h
  deleteendpointresponse.h
  deleteendpointresponse_p.h
  listendpointsrequest.h
  listendpointsrequest_p.h
  listendpointsresponse.h
  listendpointsresponse_p.h
  s3outpostsclient.h
  s3outpostsclient_p.h
  s3outpostsrequest.h
  s3outpostsrequest_p.h
  s3outpostsresponse.h
  s3outpostsresponse_p.h
  createendpointrequest.cpp
  createendpointresponse.cpp
  deleteendpointrequest.cpp
  deleteendpointresponse.cpp
  listendpointsrequest.cpp
  listendpointsresponse.cpp
  s3outpostsclient.cpp
  s3outpostsrequest.cpp
  s3outpostsresponse.cpp)

target_link_libraries(QtAwsS3Outposts
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
