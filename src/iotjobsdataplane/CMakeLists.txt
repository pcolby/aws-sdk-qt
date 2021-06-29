add_compile_definitions(QTAWSIOTJOBSDATAPLANE_LIBRARY)

add_library(QtAwsIoTJobsDataPlane
  describejobexecutionrequest.h
  describejobexecutionrequest_p.h
  describejobexecutionresponse.h
  describejobexecutionresponse_p.h
  getpendingjobexecutionsrequest.h
  getpendingjobexecutionsrequest_p.h
  getpendingjobexecutionsresponse.h
  getpendingjobexecutionsresponse_p.h
  iotjobsdataplaneclient.h
  iotjobsdataplaneclient_p.h
  iotjobsdataplanerequest.h
  iotjobsdataplanerequest_p.h
  iotjobsdataplaneresponse.h
  iotjobsdataplaneresponse_p.h
  qtawsiotjobsdataplaneglobal.h
  startnextpendingjobexecutionrequest.h
  startnextpendingjobexecutionrequest_p.h
  startnextpendingjobexecutionresponse.h
  startnextpendingjobexecutionresponse_p.h
  updatejobexecutionrequest.h
  updatejobexecutionrequest_p.h
  updatejobexecutionresponse.h
  updatejobexecutionresponse_p.h
  describejobexecutionrequest.cpp
  describejobexecutionresponse.cpp
  getpendingjobexecutionsrequest.cpp
  getpendingjobexecutionsresponse.cpp
  iotjobsdataplaneclient.cpp
  iotjobsdataplanerequest.cpp
  iotjobsdataplaneresponse.cpp
  startnextpendingjobexecutionrequest.cpp
  startnextpendingjobexecutionresponse.cpp
  updatejobexecutionrequest.cpp
  updatejobexecutionresponse.cpp)

target_link_libraries(QtAwsIoTJobsDataPlane
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
