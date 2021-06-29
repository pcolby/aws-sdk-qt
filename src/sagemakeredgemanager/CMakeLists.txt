add_library(QtAwsSagemakerEdgeManager
  getdeviceregistrationrequest.h
  getdeviceregistrationrequest_p.h
  getdeviceregistrationresponse.h
  getdeviceregistrationresponse_p.h
  sagemakeredgemanagerclient.h
  sagemakeredgemanagerclient_p.h
  sagemakeredgemanagerrequest.h
  sagemakeredgemanagerrequest_p.h
  sagemakeredgemanagerresponse.h
  sagemakeredgemanagerresponse_p.h
  sendheartbeatrequest.h
  sendheartbeatrequest_p.h
  sendheartbeatresponse.h
  sendheartbeatresponse_p.h
  getdeviceregistrationrequest.cpp
  getdeviceregistrationresponse.cpp
  sagemakeredgemanagerclient.cpp
  sagemakeredgemanagerrequest.cpp
  sagemakeredgemanagerresponse.cpp
  sendheartbeatrequest.cpp
  sendheartbeatresponse.cpp)

add_dependencies(QtAwsSagemakerEdgeManager QtAwsCore)

target_link_libraries(QtAwsSagemakerEdgeManager
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
