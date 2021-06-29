add_compile_definitions(QTAWSAUGMENTEDAIRUNTIME_LIBRARY)

add_library(QtAwsAugmentedAIRuntime
  augmentedairuntimeclient.h
  augmentedairuntimeclient_p.h
  augmentedairuntimerequest.h
  augmentedairuntimerequest_p.h
  augmentedairuntimeresponse.h
  augmentedairuntimeresponse_p.h
  deletehumanlooprequest.h
  deletehumanlooprequest_p.h
  deletehumanloopresponse.h
  deletehumanloopresponse_p.h
  describehumanlooprequest.h
  describehumanlooprequest_p.h
  describehumanloopresponse.h
  describehumanloopresponse_p.h
  listhumanloopsrequest.h
  listhumanloopsrequest_p.h
  listhumanloopsresponse.h
  listhumanloopsresponse_p.h
  qtawsaugmentedairuntimeglobal.h
  starthumanlooprequest.h
  starthumanlooprequest_p.h
  starthumanloopresponse.h
  starthumanloopresponse_p.h
  stophumanlooprequest.h
  stophumanlooprequest_p.h
  stophumanloopresponse.h
  stophumanloopresponse_p.h
  augmentedairuntimeclient.cpp
  augmentedairuntimerequest.cpp
  augmentedairuntimeresponse.cpp
  deletehumanlooprequest.cpp
  deletehumanloopresponse.cpp
  describehumanlooprequest.cpp
  describehumanloopresponse.cpp
  listhumanloopsrequest.cpp
  listhumanloopsresponse.cpp
  starthumanlooprequest.cpp
  starthumanloopresponse.cpp
  stophumanlooprequest.cpp
  stophumanloopresponse.cpp)

target_link_libraries(QtAwsAugmentedAIRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
