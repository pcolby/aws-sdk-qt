add_library(QtAwsSageMakerRuntime
  invokeendpointrequest.h
  invokeendpointrequest_p.h
  invokeendpointresponse.h
  invokeendpointresponse_p.h
  sagemakerruntimeclient.h
  sagemakerruntimeclient_p.h
  sagemakerruntimerequest.h
  sagemakerruntimerequest_p.h
  sagemakerruntimeresponse.h
  sagemakerruntimeresponse_p.h
  invokeendpointrequest.cpp
  invokeendpointresponse.cpp
  sagemakerruntimeclient.cpp
  sagemakerruntimerequest.cpp
  sagemakerruntimeresponse.cpp)

target_link_libraries(QtAwsSageMakerRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
