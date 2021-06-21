set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsBraket
  braketclient.h
  braketclient_p.h
  braketrequest.h
  braketrequest_p.h
  braketresponse.h
  braketresponse_p.h
  cancelquantumtaskrequest.h
  cancelquantumtaskrequest_p.h
  cancelquantumtaskresponse.h
  cancelquantumtaskresponse_p.h
  createquantumtaskrequest.h
  createquantumtaskrequest_p.h
  createquantumtaskresponse.h
  createquantumtaskresponse_p.h
  getdevicerequest.h
  getdevicerequest_p.h
  getdeviceresponse.h
  getdeviceresponse_p.h
  getquantumtaskrequest.h
  getquantumtaskrequest_p.h
  getquantumtaskresponse.h
  getquantumtaskresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  searchdevicesrequest.h
  searchdevicesrequest_p.h
  searchdevicesresponse.h
  searchdevicesresponse_p.h
  searchquantumtasksrequest.h
  searchquantumtasksrequest_p.h
  searchquantumtasksresponse.h
  searchquantumtasksresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  braketclient.cpp
  braketrequest.cpp
  braketresponse.cpp
  cancelquantumtaskrequest.cpp
  cancelquantumtaskresponse.cpp
  createquantumtaskrequest.cpp
  createquantumtaskresponse.cpp
  getdevicerequest.cpp
  getdeviceresponse.cpp
  getquantumtaskrequest.cpp
  getquantumtaskresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  searchdevicesrequest.cpp
  searchdevicesresponse.cpp
  searchquantumtasksrequest.cpp
  searchquantumtasksresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp)

add_dependencies(QtAwsBraket QtAwsCore)

target_link_libraries(QtAwsBraket PRIVATE Qt5::Core Qt5::Network)
