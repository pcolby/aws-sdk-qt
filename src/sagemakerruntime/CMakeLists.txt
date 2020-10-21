find_package(Qt5 COMPONENTS Core Network REQUIRED)

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

target_link_libraries(QtAwsSageMakerRuntime Qt5::Core Qt5::Network)
