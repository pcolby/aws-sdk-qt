set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

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

add_dependencies(QtAwsSageMakerRuntime QtAwsCore)

target_link_libraries(QtAwsSageMakerRuntime
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
