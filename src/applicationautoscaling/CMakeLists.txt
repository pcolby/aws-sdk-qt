set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsApplicationAutoScaling
  applicationautoscalingclient.h
  applicationautoscalingclient_p.h
  applicationautoscalingrequest.h
  applicationautoscalingrequest_p.h
  applicationautoscalingresponse.h
  applicationautoscalingresponse_p.h
  deletescalingpolicyrequest.h
  deletescalingpolicyrequest_p.h
  deletescalingpolicyresponse.h
  deletescalingpolicyresponse_p.h
  deletescheduledactionrequest.h
  deletescheduledactionrequest_p.h
  deletescheduledactionresponse.h
  deletescheduledactionresponse_p.h
  deregisterscalabletargetrequest.h
  deregisterscalabletargetrequest_p.h
  deregisterscalabletargetresponse.h
  deregisterscalabletargetresponse_p.h
  describescalabletargetsrequest.h
  describescalabletargetsrequest_p.h
  describescalabletargetsresponse.h
  describescalabletargetsresponse_p.h
  describescalingactivitiesrequest.h
  describescalingactivitiesrequest_p.h
  describescalingactivitiesresponse.h
  describescalingactivitiesresponse_p.h
  describescalingpoliciesrequest.h
  describescalingpoliciesrequest_p.h
  describescalingpoliciesresponse.h
  describescalingpoliciesresponse_p.h
  describescheduledactionsrequest.h
  describescheduledactionsrequest_p.h
  describescheduledactionsresponse.h
  describescheduledactionsresponse_p.h
  putscalingpolicyrequest.h
  putscalingpolicyrequest_p.h
  putscalingpolicyresponse.h
  putscalingpolicyresponse_p.h
  putscheduledactionrequest.h
  putscheduledactionrequest_p.h
  putscheduledactionresponse.h
  putscheduledactionresponse_p.h
  registerscalabletargetrequest.h
  registerscalabletargetrequest_p.h
  registerscalabletargetresponse.h
  registerscalabletargetresponse_p.h
  applicationautoscalingclient.cpp
  applicationautoscalingrequest.cpp
  applicationautoscalingresponse.cpp
  deletescalingpolicyrequest.cpp
  deletescalingpolicyresponse.cpp
  deletescheduledactionrequest.cpp
  deletescheduledactionresponse.cpp
  deregisterscalabletargetrequest.cpp
  deregisterscalabletargetresponse.cpp
  describescalabletargetsrequest.cpp
  describescalabletargetsresponse.cpp
  describescalingactivitiesrequest.cpp
  describescalingactivitiesresponse.cpp
  describescalingpoliciesrequest.cpp
  describescalingpoliciesresponse.cpp
  describescheduledactionsrequest.cpp
  describescheduledactionsresponse.cpp
  putscalingpolicyrequest.cpp
  putscalingpolicyresponse.cpp
  putscheduledactionrequest.cpp
  putscheduledactionresponse.cpp
  registerscalabletargetrequest.cpp
  registerscalabletargetresponse.cpp)

add_dependencies(QtAwsApplicationAutoScaling QtAwsCore)

target_link_libraries(QtAwsApplicationAutoScaling PRIVATE Qt5::Core Qt5::Network)
