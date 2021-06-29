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

target_link_libraries(QtAwsSsooidc
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
