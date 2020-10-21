find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsS3Control
  createjobrequest.h
  createjobrequest_p.h
  createjobresponse.h
  createjobresponse_p.h
  deletepublicaccessblockrequest.h
  deletepublicaccessblockrequest_p.h
  deletepublicaccessblockresponse.h
  deletepublicaccessblockresponse_p.h
  describejobrequest.h
  describejobrequest_p.h
  describejobresponse.h
  describejobresponse_p.h
  getpublicaccessblockrequest.h
  getpublicaccessblockrequest_p.h
  getpublicaccessblockresponse.h
  getpublicaccessblockresponse_p.h
  listjobsrequest.h
  listjobsrequest_p.h
  listjobsresponse.h
  listjobsresponse_p.h
  putpublicaccessblockrequest.h
  putpublicaccessblockrequest_p.h
  putpublicaccessblockresponse.h
  putpublicaccessblockresponse_p.h
  s3controlclient.h
  s3controlclient_p.h
  s3controlrequest.h
  s3controlrequest_p.h
  s3controlresponse.h
  s3controlresponse_p.h
  updatejobpriorityrequest.h
  updatejobpriorityrequest_p.h
  updatejobpriorityresponse.h
  updatejobpriorityresponse_p.h
  updatejobstatusrequest.h
  updatejobstatusrequest_p.h
  updatejobstatusresponse.h
  updatejobstatusresponse_p.h
  createjobrequest.cpp
  createjobresponse.cpp
  deletepublicaccessblockrequest.cpp
  deletepublicaccessblockresponse.cpp
  describejobrequest.cpp
  describejobresponse.cpp
  getpublicaccessblockrequest.cpp
  getpublicaccessblockresponse.cpp
  listjobsrequest.cpp
  listjobsresponse.cpp
  putpublicaccessblockrequest.cpp
  putpublicaccessblockresponse.cpp
  s3controlclient.cpp
  s3controlrequest.cpp
  s3controlresponse.cpp
  updatejobpriorityrequest.cpp
  updatejobpriorityresponse.cpp
  updatejobstatusrequest.cpp
  updatejobstatusresponse.cpp)

add_dependencies(QtAwsS3Control QtAwsCore)

target_link_libraries(QtAwsS3Control Qt5::Core Qt5::Network)
