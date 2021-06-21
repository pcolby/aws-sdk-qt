set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsSsooidc
  createtokenrequest.h
  createtokenrequest_p.h
  createtokenresponse.h
  createtokenresponse_p.h
  registerclientrequest.h
  registerclientrequest_p.h
  registerclientresponse.h
  registerclientresponse_p.h
  ssooidcclient.h
  ssooidcclient_p.h
  ssooidcrequest.h
  ssooidcrequest_p.h
  ssooidcresponse.h
  ssooidcresponse_p.h
  startdeviceauthorizationrequest.h
  startdeviceauthorizationrequest_p.h
  startdeviceauthorizationresponse.h
  startdeviceauthorizationresponse_p.h
  createtokenrequest.cpp
  createtokenresponse.cpp
  registerclientrequest.cpp
  registerclientresponse.cpp
  ssooidcclient.cpp
  ssooidcrequest.cpp
  ssooidcresponse.cpp
  startdeviceauthorizationrequest.cpp
  startdeviceauthorizationresponse.cpp)

add_dependencies(QtAwsSsooidc QtAwsCore)

target_link_libraries(QtAwsSsooidc PRIVATE Qt5::Core Qt5::Network)
