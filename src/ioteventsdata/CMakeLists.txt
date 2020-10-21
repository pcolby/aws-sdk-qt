find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsIoTEventsData
  batchputmessagerequest.h
  batchputmessagerequest_p.h
  batchputmessageresponse.h
  batchputmessageresponse_p.h
  batchupdatedetectorrequest.h
  batchupdatedetectorrequest_p.h
  batchupdatedetectorresponse.h
  batchupdatedetectorresponse_p.h
  describedetectorrequest.h
  describedetectorrequest_p.h
  describedetectorresponse.h
  describedetectorresponse_p.h
  ioteventsdataclient.h
  ioteventsdataclient_p.h
  ioteventsdatarequest.h
  ioteventsdatarequest_p.h
  ioteventsdataresponse.h
  ioteventsdataresponse_p.h
  listdetectorsrequest.h
  listdetectorsrequest_p.h
  listdetectorsresponse.h
  listdetectorsresponse_p.h
  batchputmessagerequest.cpp
  batchputmessageresponse.cpp
  batchupdatedetectorrequest.cpp
  batchupdatedetectorresponse.cpp
  describedetectorrequest.cpp
  describedetectorresponse.cpp
  ioteventsdataclient.cpp
  ioteventsdatarequest.cpp
  ioteventsdataresponse.cpp
  listdetectorsrequest.cpp
  listdetectorsresponse.cpp)

add_dependencies(QtAwsIoTEventsData QtAwsCore)

target_link_libraries(QtAwsIoTEventsData Qt5::Core Qt5::Network)
