find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIoTSecureTunneling
  closetunnelrequest.h
  closetunnelrequest_p.h
  closetunnelresponse.h
  closetunnelresponse_p.h
  describetunnelrequest.h
  describetunnelrequest_p.h
  describetunnelresponse.h
  describetunnelresponse_p.h
  iotsecuretunnelingclient.h
  iotsecuretunnelingclient_p.h
  iotsecuretunnelingrequest.h
  iotsecuretunnelingrequest_p.h
  iotsecuretunnelingresponse.h
  iotsecuretunnelingresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  listtunnelsrequest.h
  listtunnelsrequest_p.h
  listtunnelsresponse.h
  listtunnelsresponse_p.h
  opentunnelrequest.h
  opentunnelrequest_p.h
  opentunnelresponse.h
  opentunnelresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  closetunnelrequest.cpp
  closetunnelresponse.cpp
  describetunnelrequest.cpp
  describetunnelresponse.cpp
  iotsecuretunnelingclient.cpp
  iotsecuretunnelingrequest.cpp
  iotsecuretunnelingresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  listtunnelsrequest.cpp
  listtunnelsresponse.cpp
  opentunnelrequest.cpp
  opentunnelresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp)

add_dependencies(QtAwsIoTSecureTunneling QtAwsCore)

target_link_libraries(QtAwsIoTSecureTunneling Qt5::Core Qt5::Network)
