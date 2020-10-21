find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsDlm
  createlifecyclepolicyrequest.h
  createlifecyclepolicyrequest_p.h
  createlifecyclepolicyresponse.h
  createlifecyclepolicyresponse_p.h
  deletelifecyclepolicyrequest.h
  deletelifecyclepolicyrequest_p.h
  deletelifecyclepolicyresponse.h
  deletelifecyclepolicyresponse_p.h
  dlmclient.h
  dlmclient_p.h
  dlmrequest.h
  dlmrequest_p.h
  dlmresponse.h
  dlmresponse_p.h
  getlifecyclepoliciesrequest.h
  getlifecyclepoliciesrequest_p.h
  getlifecyclepoliciesresponse.h
  getlifecyclepoliciesresponse_p.h
  getlifecyclepolicyrequest.h
  getlifecyclepolicyrequest_p.h
  getlifecyclepolicyresponse.h
  getlifecyclepolicyresponse_p.h
  updatelifecyclepolicyrequest.h
  updatelifecyclepolicyrequest_p.h
  updatelifecyclepolicyresponse.h
  updatelifecyclepolicyresponse_p.h
  createlifecyclepolicyrequest.cpp
  createlifecyclepolicyresponse.cpp
  deletelifecyclepolicyrequest.cpp
  deletelifecyclepolicyresponse.cpp
  dlmclient.cpp
  dlmrequest.cpp
  dlmresponse.cpp
  getlifecyclepoliciesrequest.cpp
  getlifecyclepoliciesresponse.cpp
  getlifecyclepolicyrequest.cpp
  getlifecyclepolicyresponse.cpp
  updatelifecyclepolicyrequest.cpp
  updatelifecyclepolicyresponse.cpp)

add_dependencies(QtAwsDlm QtAwsCore)

target_link_libraries(QtAwsDlm Qt5::Core Qt5::Network)
