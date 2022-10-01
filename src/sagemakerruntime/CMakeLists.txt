add_compile_definitions(QTAWSSAGEMAKERRUNTIME_LIBRARY)

add_library(QtAwsSageMakerRuntime
  qtawssagemakerruntimeglobal.h
  sagemakerruntimeclient.h
  sagemakerruntimeclient_p.h
  sagemakerruntimerequest.h
  sagemakerruntimerequest_p.h
  sagemakerruntimeresponse.h
  sagemakerruntimeresponse_p.h
  invokeendpointrequest.h
  invokeendpointrequest_p.h
  invokeendpointresponse.h
  invokeendpointresponse_p.h
  invokeendpointasyncrequest.h
  invokeendpointasyncrequest_p.h
  invokeendpointasyncresponse.h
  invokeendpointasyncresponse_p.h
  sagemakerruntimeclient.cpp
  sagemakerruntimerequest.cpp
  sagemakerruntimeresponse.cpp
  invokeendpointrequest.cpp
  invokeendpointresponse.cpp
  invokeendpointasyncrequest.cpp
  invokeendpointasyncresponse.cpp)

target_link_libraries(QtAwsSageMakerRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
