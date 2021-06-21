set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsCloud9
  cloud9client.h
  cloud9client_p.h
  cloud9request.h
  cloud9request_p.h
  cloud9response.h
  cloud9response_p.h
  createenvironmentec2request.h
  createenvironmentec2request_p.h
  createenvironmentec2response.h
  createenvironmentec2response_p.h
  createenvironmentmembershiprequest.h
  createenvironmentmembershiprequest_p.h
  createenvironmentmembershipresponse.h
  createenvironmentmembershipresponse_p.h
  deleteenvironmentmembershiprequest.h
  deleteenvironmentmembershiprequest_p.h
  deleteenvironmentmembershipresponse.h
  deleteenvironmentmembershipresponse_p.h
  deleteenvironmentrequest.h
  deleteenvironmentrequest_p.h
  deleteenvironmentresponse.h
  deleteenvironmentresponse_p.h
  describeenvironmentmembershipsrequest.h
  describeenvironmentmembershipsrequest_p.h
  describeenvironmentmembershipsresponse.h
  describeenvironmentmembershipsresponse_p.h
  describeenvironmentsrequest.h
  describeenvironmentsrequest_p.h
  describeenvironmentsresponse.h
  describeenvironmentsresponse_p.h
  describeenvironmentstatusrequest.h
  describeenvironmentstatusrequest_p.h
  describeenvironmentstatusresponse.h
  describeenvironmentstatusresponse_p.h
  listenvironmentsrequest.h
  listenvironmentsrequest_p.h
  listenvironmentsresponse.h
  listenvironmentsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateenvironmentmembershiprequest.h
  updateenvironmentmembershiprequest_p.h
  updateenvironmentmembershipresponse.h
  updateenvironmentmembershipresponse_p.h
  updateenvironmentrequest.h
  updateenvironmentrequest_p.h
  updateenvironmentresponse.h
  updateenvironmentresponse_p.h
  cloud9client.cpp
  cloud9request.cpp
  cloud9response.cpp
  createenvironmentec2request.cpp
  createenvironmentec2response.cpp
  createenvironmentmembershiprequest.cpp
  createenvironmentmembershipresponse.cpp
  deleteenvironmentmembershiprequest.cpp
  deleteenvironmentmembershipresponse.cpp
  deleteenvironmentrequest.cpp
  deleteenvironmentresponse.cpp
  describeenvironmentmembershipsrequest.cpp
  describeenvironmentmembershipsresponse.cpp
  describeenvironmentsrequest.cpp
  describeenvironmentsresponse.cpp
  describeenvironmentstatusrequest.cpp
  describeenvironmentstatusresponse.cpp
  listenvironmentsrequest.cpp
  listenvironmentsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateenvironmentmembershiprequest.cpp
  updateenvironmentmembershipresponse.cpp
  updateenvironmentrequest.cpp
  updateenvironmentresponse.cpp)

add_dependencies(QtAwsCloud9 QtAwsCore)

target_link_libraries(QtAwsCloud9 PRIVATE Qt5::Core Qt5::Network)
