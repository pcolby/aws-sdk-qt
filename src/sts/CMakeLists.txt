find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsSts
  assumerolerequest.h
  assumerolerequest_p.h
  assumeroleresponse.h
  assumeroleresponse_p.h
  assumerolewithsamlrequest.h
  assumerolewithsamlrequest_p.h
  assumerolewithsamlresponse.h
  assumerolewithsamlresponse_p.h
  assumerolewithwebidentityrequest.h
  assumerolewithwebidentityrequest_p.h
  assumerolewithwebidentityresponse.h
  assumerolewithwebidentityresponse_p.h
  decodeauthorizationmessagerequest.h
  decodeauthorizationmessagerequest_p.h
  decodeauthorizationmessageresponse.h
  decodeauthorizationmessageresponse_p.h
  getcalleridentityrequest.h
  getcalleridentityrequest_p.h
  getcalleridentityresponse.h
  getcalleridentityresponse_p.h
  getfederationtokenrequest.h
  getfederationtokenrequest_p.h
  getfederationtokenresponse.h
  getfederationtokenresponse_p.h
  getsessiontokenrequest.h
  getsessiontokenrequest_p.h
  getsessiontokenresponse.h
  getsessiontokenresponse_p.h
  stsclient.h
  stsclient_p.h
  stsrequest.h
  stsrequest_p.h
  stsresponse.h
  stsresponse_p.h
  assumerolerequest.cpp
  assumeroleresponse.cpp
  assumerolewithsamlrequest.cpp
  assumerolewithsamlresponse.cpp
  assumerolewithwebidentityrequest.cpp
  assumerolewithwebidentityresponse.cpp
  decodeauthorizationmessagerequest.cpp
  decodeauthorizationmessageresponse.cpp
  getcalleridentityrequest.cpp
  getcalleridentityresponse.cpp
  getfederationtokenrequest.cpp
  getfederationtokenresponse.cpp
  getsessiontokenrequest.cpp
  getsessiontokenresponse.cpp
  stsclient.cpp
  stsrequest.cpp
  stsresponse.cpp)

add_dependencies(QtAwsSts QtAwsCore)

target_link_libraries(QtAwsSts Qt5::Core Qt5::Network)
