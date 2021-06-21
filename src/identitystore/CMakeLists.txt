set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIdentityStore
  describegrouprequest.h
  describegrouprequest_p.h
  describegroupresponse.h
  describegroupresponse_p.h
  describeuserrequest.h
  describeuserrequest_p.h
  describeuserresponse.h
  describeuserresponse_p.h
  identitystoreclient.h
  identitystoreclient_p.h
  identitystorerequest.h
  identitystorerequest_p.h
  identitystoreresponse.h
  identitystoreresponse_p.h
  listgroupsrequest.h
  listgroupsrequest_p.h
  listgroupsresponse.h
  listgroupsresponse_p.h
  listusersrequest.h
  listusersrequest_p.h
  listusersresponse.h
  listusersresponse_p.h
  describegrouprequest.cpp
  describegroupresponse.cpp
  describeuserrequest.cpp
  describeuserresponse.cpp
  identitystoreclient.cpp
  identitystorerequest.cpp
  identitystoreresponse.cpp
  listgroupsrequest.cpp
  listgroupsresponse.cpp
  listusersrequest.cpp
  listusersresponse.cpp)

add_dependencies(QtAwsIdentityStore QtAwsCore)

target_link_libraries(QtAwsIdentityStore PRIVATE Qt5::Core Qt5::Network)
