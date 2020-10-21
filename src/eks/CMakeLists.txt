find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsEks
  createclusterrequest.h
  createclusterrequest_p.h
  createclusterresponse.h
  createclusterresponse_p.h
  deleteclusterrequest.h
  deleteclusterrequest_p.h
  deleteclusterresponse.h
  deleteclusterresponse_p.h
  describeclusterrequest.h
  describeclusterrequest_p.h
  describeclusterresponse.h
  describeclusterresponse_p.h
  describeupdaterequest.h
  describeupdaterequest_p.h
  describeupdateresponse.h
  describeupdateresponse_p.h
  eksclient.h
  eksclient_p.h
  eksrequest.h
  eksrequest_p.h
  eksresponse.h
  eksresponse_p.h
  listclustersrequest.h
  listclustersrequest_p.h
  listclustersresponse.h
  listclustersresponse_p.h
  listupdatesrequest.h
  listupdatesrequest_p.h
  listupdatesresponse.h
  listupdatesresponse_p.h
  updateclusterconfigrequest.h
  updateclusterconfigrequest_p.h
  updateclusterconfigresponse.h
  updateclusterconfigresponse_p.h
  updateclusterversionrequest.h
  updateclusterversionrequest_p.h
  updateclusterversionresponse.h
  updateclusterversionresponse_p.h
  createclusterrequest.cpp
  createclusterresponse.cpp
  deleteclusterrequest.cpp
  deleteclusterresponse.cpp
  describeclusterrequest.cpp
  describeclusterresponse.cpp
  describeupdaterequest.cpp
  describeupdateresponse.cpp
  eksclient.cpp
  eksrequest.cpp
  eksresponse.cpp
  listclustersrequest.cpp
  listclustersresponse.cpp
  listupdatesrequest.cpp
  listupdatesresponse.cpp
  updateclusterconfigrequest.cpp
  updateclusterconfigresponse.cpp
  updateclusterversionrequest.cpp
  updateclusterversionresponse.cpp)

add_dependencies(QtAwsEks QtAwsCore)

target_link_libraries(QtAwsEks Qt5::Core Qt5::Network)
