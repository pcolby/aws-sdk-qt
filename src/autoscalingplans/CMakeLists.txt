set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsAutoScalingPlans
  autoscalingplansclient.h
  autoscalingplansclient_p.h
  autoscalingplansrequest.h
  autoscalingplansrequest_p.h
  autoscalingplansresponse.h
  autoscalingplansresponse_p.h
  createscalingplanrequest.h
  createscalingplanrequest_p.h
  createscalingplanresponse.h
  createscalingplanresponse_p.h
  deletescalingplanrequest.h
  deletescalingplanrequest_p.h
  deletescalingplanresponse.h
  deletescalingplanresponse_p.h
  describescalingplanresourcesrequest.h
  describescalingplanresourcesrequest_p.h
  describescalingplanresourcesresponse.h
  describescalingplanresourcesresponse_p.h
  describescalingplansrequest.h
  describescalingplansrequest_p.h
  describescalingplansresponse.h
  describescalingplansresponse_p.h
  getscalingplanresourceforecastdatarequest.h
  getscalingplanresourceforecastdatarequest_p.h
  getscalingplanresourceforecastdataresponse.h
  getscalingplanresourceforecastdataresponse_p.h
  updatescalingplanrequest.h
  updatescalingplanrequest_p.h
  updatescalingplanresponse.h
  updatescalingplanresponse_p.h
  autoscalingplansclient.cpp
  autoscalingplansrequest.cpp
  autoscalingplansresponse.cpp
  createscalingplanrequest.cpp
  createscalingplanresponse.cpp
  deletescalingplanrequest.cpp
  deletescalingplanresponse.cpp
  describescalingplanresourcesrequest.cpp
  describescalingplanresourcesresponse.cpp
  describescalingplansrequest.cpp
  describescalingplansresponse.cpp
  getscalingplanresourceforecastdatarequest.cpp
  getscalingplanresourceforecastdataresponse.cpp
  updatescalingplanrequest.cpp
  updatescalingplanresponse.cpp)

add_dependencies(QtAwsAutoScalingPlans QtAwsCore)

target_link_libraries(QtAwsAutoScalingPlans
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
