add_compile_definitions(QTAWSCONNECTCONTACTLENS_LIBRARY)

add_library(QtAwsConnectContactLens
  connectcontactlensclient.h
  connectcontactlensclient_p.h
  connectcontactlensrequest.h
  connectcontactlensrequest_p.h
  connectcontactlensresponse.h
  connectcontactlensresponse_p.h
  listrealtimecontactanalysissegmentsrequest.h
  listrealtimecontactanalysissegmentsrequest_p.h
  listrealtimecontactanalysissegmentsresponse.h
  listrealtimecontactanalysissegmentsresponse_p.h
  qtawsconnectcontactlensglobal.h
  connectcontactlensclient.cpp
  connectcontactlensrequest.cpp
  connectcontactlensresponse.cpp
  listrealtimecontactanalysissegmentsrequest.cpp
  listrealtimecontactanalysissegmentsresponse.cpp)

target_link_libraries(QtAwsConnectContactLens
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
