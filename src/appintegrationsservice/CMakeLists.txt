set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsAppIntegrationsService
  appintegrationsserviceclient.h
  appintegrationsserviceclient_p.h
  appintegrationsservicerequest.h
  appintegrationsservicerequest_p.h
  appintegrationsserviceresponse.h
  appintegrationsserviceresponse_p.h
  createeventintegrationrequest.h
  createeventintegrationrequest_p.h
  createeventintegrationresponse.h
  createeventintegrationresponse_p.h
  deleteeventintegrationrequest.h
  deleteeventintegrationrequest_p.h
  deleteeventintegrationresponse.h
  deleteeventintegrationresponse_p.h
  geteventintegrationrequest.h
  geteventintegrationrequest_p.h
  geteventintegrationresponse.h
  geteventintegrationresponse_p.h
  listeventintegrationassociationsrequest.h
  listeventintegrationassociationsrequest_p.h
  listeventintegrationassociationsresponse.h
  listeventintegrationassociationsresponse_p.h
  listeventintegrationsrequest.h
  listeventintegrationsrequest_p.h
  listeventintegrationsresponse.h
  listeventintegrationsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateeventintegrationrequest.h
  updateeventintegrationrequest_p.h
  updateeventintegrationresponse.h
  updateeventintegrationresponse_p.h
  appintegrationsserviceclient.cpp
  appintegrationsservicerequest.cpp
  appintegrationsserviceresponse.cpp
  createeventintegrationrequest.cpp
  createeventintegrationresponse.cpp
  deleteeventintegrationrequest.cpp
  deleteeventintegrationresponse.cpp
  geteventintegrationrequest.cpp
  geteventintegrationresponse.cpp
  listeventintegrationassociationsrequest.cpp
  listeventintegrationassociationsresponse.cpp
  listeventintegrationsrequest.cpp
  listeventintegrationsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateeventintegrationrequest.cpp
  updateeventintegrationresponse.cpp)

add_dependencies(QtAwsAppIntegrationsService QtAwsCore)

target_link_libraries(QtAwsAppIntegrationsService
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
