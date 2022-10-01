add_compile_definitions(QTAWSSAGEMAKEREDGE_LIBRARY)

add_library(QtAwsSagemakerEdge
  qtawssagemakeredgeglobal.h
  sagemakeredgeclient.h
  sagemakeredgeclient_p.h
  sagemakeredgerequest.h
  sagemakeredgerequest_p.h
  sagemakeredgeresponse.h
  sagemakeredgeresponse_p.h
  getdeploymentsrequest.h
  getdeploymentsrequest_p.h
  getdeploymentsresponse.h
  getdeploymentsresponse_p.h
  getdeviceregistrationrequest.h
  getdeviceregistrationrequest_p.h
  getdeviceregistrationresponse.h
  getdeviceregistrationresponse_p.h
  sendheartbeatrequest.h
  sendheartbeatrequest_p.h
  sendheartbeatresponse.h
  sendheartbeatresponse_p.h
  sagemakeredgeclient.cpp
  sagemakeredgerequest.cpp
  sagemakeredgeresponse.cpp
  getdeploymentsrequest.cpp
  getdeploymentsresponse.cpp
  getdeviceregistrationrequest.cpp
  getdeviceregistrationresponse.cpp
  sendheartbeatrequest.cpp
  sendheartbeatresponse.cpp)

target_link_libraries(QtAwsSagemakerEdge
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
