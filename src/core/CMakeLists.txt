set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(
  QtAwsCore
  awsabstractclient.cpp
  awsabstractclient.h
  awsabstractclient_p.h
  awsabstractcredentials.cpp
  awsabstractcredentials.h
  awsabstractcredentials_p.h
  awsabstractrequest.cpp
  awsabstractrequest.h
  awsabstractrequest_p.h
  awsabstractresponse.cpp
  awsabstractresponse.h
  awsabstractresponse_p.h
  awsabstractsignature.cpp
  awsabstractsignature.h
  awsabstractsignature_p.h
  awsanonymouscredentials.cpp
  awsanonymouscredentials.h
  awsbasiccredentials.cpp
  awsbasiccredentials.h
  awsbasiccredentials_p.h
  awsendpoint.cpp
  awsendpoint.h
  awsendpoint_p.h
  awsregion.cpp
  awsregion.h
  awsregion_p.h
  awssignaturev0.cpp
  awssignaturev0.h
  awssignaturev0_p.h
  awssignaturev1.cpp
  awssignaturev1.h
  awssignaturev1_p.h
  awssignaturev2.cpp
  awssignaturev2.h
  awssignaturev2_p.h
  awssignaturev3.cpp
  awssignaturev3.h
  awssignaturev3_p.h
  awssignaturev4.cpp
  awssignaturev4.h
  awssignaturev4_p.h)

target_link_libraries(QtAwsCore PRIVATE Qt5::Core Qt5::Network)
