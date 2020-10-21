find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsComprehendMedical
  comprehendmedicalclient.h
  comprehendmedicalclient_p.h
  comprehendmedicalrequest.h
  comprehendmedicalrequest_p.h
  comprehendmedicalresponse.h
  comprehendmedicalresponse_p.h
  detectentitiesrequest.h
  detectentitiesrequest_p.h
  detectentitiesresponse.h
  detectentitiesresponse_p.h
  detectphirequest.h
  detectphirequest_p.h
  detectphiresponse.h
  detectphiresponse_p.h
  comprehendmedicalclient.cpp
  comprehendmedicalrequest.cpp
  comprehendmedicalresponse.cpp
  detectentitiesrequest.cpp
  detectentitiesresponse.cpp
  detectphirequest.cpp
  detectphiresponse.cpp)

add_dependencies(QtAwsComprehendMedical QtAwsCore)

target_link_libraries(QtAwsComprehendMedical Qt5::Core Qt5::Network)
