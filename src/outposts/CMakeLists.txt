set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsOutposts
  createoutpostrequest.h
  createoutpostrequest_p.h
  createoutpostresponse.h
  createoutpostresponse_p.h
  deleteoutpostrequest.h
  deleteoutpostrequest_p.h
  deleteoutpostresponse.h
  deleteoutpostresponse_p.h
  deletesiterequest.h
  deletesiterequest_p.h
  deletesiteresponse.h
  deletesiteresponse_p.h
  getoutpostinstancetypesrequest.h
  getoutpostinstancetypesrequest_p.h
  getoutpostinstancetypesresponse.h
  getoutpostinstancetypesresponse_p.h
  getoutpostrequest.h
  getoutpostrequest_p.h
  getoutpostresponse.h
  getoutpostresponse_p.h
  listoutpostsrequest.h
  listoutpostsrequest_p.h
  listoutpostsresponse.h
  listoutpostsresponse_p.h
  listsitesrequest.h
  listsitesrequest_p.h
  listsitesresponse.h
  listsitesresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  outpostsclient.h
  outpostsclient_p.h
  outpostsrequest.h
  outpostsrequest_p.h
  outpostsresponse.h
  outpostsresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  createoutpostrequest.cpp
  createoutpostresponse.cpp
  deleteoutpostrequest.cpp
  deleteoutpostresponse.cpp
  deletesiterequest.cpp
  deletesiteresponse.cpp
  getoutpostinstancetypesrequest.cpp
  getoutpostinstancetypesresponse.cpp
  getoutpostrequest.cpp
  getoutpostresponse.cpp
  listoutpostsrequest.cpp
  listoutpostsresponse.cpp
  listsitesrequest.cpp
  listsitesresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  outpostsclient.cpp
  outpostsrequest.cpp
  outpostsresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp)

add_dependencies(QtAwsOutposts QtAwsCore)

target_link_libraries(QtAwsOutposts
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
