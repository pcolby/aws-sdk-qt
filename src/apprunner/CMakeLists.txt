add_compile_definitions(QTAWSAPPRUNNER_LIBRARY)

add_library(QtAwsAppRunner
  apprunnerclient.h
  apprunnerclient_p.h
  apprunnerrequest.h
  apprunnerrequest_p.h
  apprunnerresponse.h
  apprunnerresponse_p.h
  associatecustomdomainrequest.h
  associatecustomdomainrequest_p.h
  associatecustomdomainresponse.h
  associatecustomdomainresponse_p.h
  createautoscalingconfigurationrequest.h
  createautoscalingconfigurationrequest_p.h
  createautoscalingconfigurationresponse.h
  createautoscalingconfigurationresponse_p.h
  createconnectionrequest.h
  createconnectionrequest_p.h
  createconnectionresponse.h
  createconnectionresponse_p.h
  createservicerequest.h
  createservicerequest_p.h
  createserviceresponse.h
  createserviceresponse_p.h
  deleteautoscalingconfigurationrequest.h
  deleteautoscalingconfigurationrequest_p.h
  deleteautoscalingconfigurationresponse.h
  deleteautoscalingconfigurationresponse_p.h
  deleteconnectionrequest.h
  deleteconnectionrequest_p.h
  deleteconnectionresponse.h
  deleteconnectionresponse_p.h
  deleteservicerequest.h
  deleteservicerequest_p.h
  deleteserviceresponse.h
  deleteserviceresponse_p.h
  describeautoscalingconfigurationrequest.h
  describeautoscalingconfigurationrequest_p.h
  describeautoscalingconfigurationresponse.h
  describeautoscalingconfigurationresponse_p.h
  describecustomdomainsrequest.h
  describecustomdomainsrequest_p.h
  describecustomdomainsresponse.h
  describecustomdomainsresponse_p.h
  describeservicerequest.h
  describeservicerequest_p.h
  describeserviceresponse.h
  describeserviceresponse_p.h
  disassociatecustomdomainrequest.h
  disassociatecustomdomainrequest_p.h
  disassociatecustomdomainresponse.h
  disassociatecustomdomainresponse_p.h
  listautoscalingconfigurationsrequest.h
  listautoscalingconfigurationsrequest_p.h
  listautoscalingconfigurationsresponse.h
  listautoscalingconfigurationsresponse_p.h
  listconnectionsrequest.h
  listconnectionsrequest_p.h
  listconnectionsresponse.h
  listconnectionsresponse_p.h
  listoperationsrequest.h
  listoperationsrequest_p.h
  listoperationsresponse.h
  listoperationsresponse_p.h
  listservicesrequest.h
  listservicesrequest_p.h
  listservicesresponse.h
  listservicesresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  pauseservicerequest.h
  pauseservicerequest_p.h
  pauseserviceresponse.h
  pauseserviceresponse_p.h
  qtawsapprunnerglobal.h
  resumeservicerequest.h
  resumeservicerequest_p.h
  resumeserviceresponse.h
  resumeserviceresponse_p.h
  startdeploymentrequest.h
  startdeploymentrequest_p.h
  startdeploymentresponse.h
  startdeploymentresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateservicerequest.h
  updateservicerequest_p.h
  updateserviceresponse.h
  updateserviceresponse_p.h
  apprunnerclient.cpp
  apprunnerrequest.cpp
  apprunnerresponse.cpp
  associatecustomdomainrequest.cpp
  associatecustomdomainresponse.cpp
  createautoscalingconfigurationrequest.cpp
  createautoscalingconfigurationresponse.cpp
  createconnectionrequest.cpp
  createconnectionresponse.cpp
  createservicerequest.cpp
  createserviceresponse.cpp
  deleteautoscalingconfigurationrequest.cpp
  deleteautoscalingconfigurationresponse.cpp
  deleteconnectionrequest.cpp
  deleteconnectionresponse.cpp
  deleteservicerequest.cpp
  deleteserviceresponse.cpp
  describeautoscalingconfigurationrequest.cpp
  describeautoscalingconfigurationresponse.cpp
  describecustomdomainsrequest.cpp
  describecustomdomainsresponse.cpp
  describeservicerequest.cpp
  describeserviceresponse.cpp
  disassociatecustomdomainrequest.cpp
  disassociatecustomdomainresponse.cpp
  listautoscalingconfigurationsrequest.cpp
  listautoscalingconfigurationsresponse.cpp
  listconnectionsrequest.cpp
  listconnectionsresponse.cpp
  listoperationsrequest.cpp
  listoperationsresponse.cpp
  listservicesrequest.cpp
  listservicesresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  pauseservicerequest.cpp
  pauseserviceresponse.cpp
  resumeservicerequest.cpp
  resumeserviceresponse.cpp
  startdeploymentrequest.cpp
  startdeploymentresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateservicerequest.cpp
  updateserviceresponse.cpp)

target_link_libraries(QtAwsAppRunner
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
