find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsMacie
  associatememberaccountrequest.h
  associatememberaccountrequest_p.h
  associatememberaccountresponse.h
  associatememberaccountresponse_p.h
  associates3resourcesrequest.h
  associates3resourcesrequest_p.h
  associates3resourcesresponse.h
  associates3resourcesresponse_p.h
  disassociatememberaccountrequest.h
  disassociatememberaccountrequest_p.h
  disassociatememberaccountresponse.h
  disassociatememberaccountresponse_p.h
  disassociates3resourcesrequest.h
  disassociates3resourcesrequest_p.h
  disassociates3resourcesresponse.h
  disassociates3resourcesresponse_p.h
  listmemberaccountsrequest.h
  listmemberaccountsrequest_p.h
  listmemberaccountsresponse.h
  listmemberaccountsresponse_p.h
  lists3resourcesrequest.h
  lists3resourcesrequest_p.h
  lists3resourcesresponse.h
  lists3resourcesresponse_p.h
  macieclient.h
  macieclient_p.h
  macierequest.h
  macierequest_p.h
  macieresponse.h
  macieresponse_p.h
  updates3resourcesrequest.h
  updates3resourcesrequest_p.h
  updates3resourcesresponse.h
  updates3resourcesresponse_p.h
  associatememberaccountrequest.cpp
  associatememberaccountresponse.cpp
  associates3resourcesrequest.cpp
  associates3resourcesresponse.cpp
  disassociatememberaccountrequest.cpp
  disassociatememberaccountresponse.cpp
  disassociates3resourcesrequest.cpp
  disassociates3resourcesresponse.cpp
  listmemberaccountsrequest.cpp
  listmemberaccountsresponse.cpp
  lists3resourcesrequest.cpp
  lists3resourcesresponse.cpp
  macieclient.cpp
  macierequest.cpp
  macieresponse.cpp
  updates3resourcesrequest.cpp
  updates3resourcesresponse.cpp)

add_dependencies(QtAwsMacie QtAwsCore)

target_link_libraries(QtAwsMacie Qt5::Core Qt5::Network)
