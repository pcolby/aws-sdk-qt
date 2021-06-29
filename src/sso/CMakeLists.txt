add_compile_definitions(QTAWSSSO_LIBRARY)

add_library(QtAwsSso
  getrolecredentialsrequest.h
  getrolecredentialsrequest_p.h
  getrolecredentialsresponse.h
  getrolecredentialsresponse_p.h
  listaccountrolesrequest.h
  listaccountrolesrequest_p.h
  listaccountrolesresponse.h
  listaccountrolesresponse_p.h
  listaccountsrequest.h
  listaccountsrequest_p.h
  listaccountsresponse.h
  listaccountsresponse_p.h
  logoutrequest.h
  logoutrequest_p.h
  logoutresponse.h
  logoutresponse_p.h
  qtawsssoglobal.h
  ssoclient.h
  ssoclient_p.h
  ssorequest.h
  ssorequest_p.h
  ssoresponse.h
  ssoresponse_p.h
  getrolecredentialsrequest.cpp
  getrolecredentialsresponse.cpp
  listaccountrolesrequest.cpp
  listaccountrolesresponse.cpp
  listaccountsrequest.cpp
  listaccountsresponse.cpp
  logoutrequest.cpp
  logoutresponse.cpp
  ssoclient.cpp
  ssorequest.cpp
  ssoresponse.cpp)

target_link_libraries(QtAwsSso
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
