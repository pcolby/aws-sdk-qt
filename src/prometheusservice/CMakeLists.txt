add_library(QtAwsPrometheusService
  createworkspacerequest.h
  createworkspacerequest_p.h
  createworkspaceresponse.h
  createworkspaceresponse_p.h
  deleteworkspacerequest.h
  deleteworkspacerequest_p.h
  deleteworkspaceresponse.h
  deleteworkspaceresponse_p.h
  describeworkspacerequest.h
  describeworkspacerequest_p.h
  describeworkspaceresponse.h
  describeworkspaceresponse_p.h
  listworkspacesrequest.h
  listworkspacesrequest_p.h
  listworkspacesresponse.h
  listworkspacesresponse_p.h
  prometheusserviceclient.h
  prometheusserviceclient_p.h
  prometheusservicerequest.h
  prometheusservicerequest_p.h
  prometheusserviceresponse.h
  prometheusserviceresponse_p.h
  updateworkspacealiasrequest.h
  updateworkspacealiasrequest_p.h
  updateworkspacealiasresponse.h
  updateworkspacealiasresponse_p.h
  createworkspacerequest.cpp
  createworkspaceresponse.cpp
  deleteworkspacerequest.cpp
  deleteworkspaceresponse.cpp
  describeworkspacerequest.cpp
  describeworkspaceresponse.cpp
  listworkspacesrequest.cpp
  listworkspacesresponse.cpp
  prometheusserviceclient.cpp
  prometheusservicerequest.cpp
  prometheusserviceresponse.cpp
  updateworkspacealiasrequest.cpp
  updateworkspacealiasresponse.cpp)

add_dependencies(QtAwsPrometheusService QtAwsCore)

target_link_libraries(QtAwsPrometheusService
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
