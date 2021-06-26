set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsSavingsPlans
  createsavingsplanrequest.h
  createsavingsplanrequest_p.h
  createsavingsplanresponse.h
  createsavingsplanresponse_p.h
  deletequeuedsavingsplanrequest.h
  deletequeuedsavingsplanrequest_p.h
  deletequeuedsavingsplanresponse.h
  deletequeuedsavingsplanresponse_p.h
  describesavingsplanratesrequest.h
  describesavingsplanratesrequest_p.h
  describesavingsplanratesresponse.h
  describesavingsplanratesresponse_p.h
  describesavingsplansofferingratesrequest.h
  describesavingsplansofferingratesrequest_p.h
  describesavingsplansofferingratesresponse.h
  describesavingsplansofferingratesresponse_p.h
  describesavingsplansofferingsrequest.h
  describesavingsplansofferingsrequest_p.h
  describesavingsplansofferingsresponse.h
  describesavingsplansofferingsresponse_p.h
  describesavingsplansrequest.h
  describesavingsplansrequest_p.h
  describesavingsplansresponse.h
  describesavingsplansresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  savingsplansclient.h
  savingsplansclient_p.h
  savingsplansrequest.h
  savingsplansrequest_p.h
  savingsplansresponse.h
  savingsplansresponse_p.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  createsavingsplanrequest.cpp
  createsavingsplanresponse.cpp
  deletequeuedsavingsplanrequest.cpp
  deletequeuedsavingsplanresponse.cpp
  describesavingsplanratesrequest.cpp
  describesavingsplanratesresponse.cpp
  describesavingsplansofferingratesrequest.cpp
  describesavingsplansofferingratesresponse.cpp
  describesavingsplansofferingsrequest.cpp
  describesavingsplansofferingsresponse.cpp
  describesavingsplansrequest.cpp
  describesavingsplansresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  savingsplansclient.cpp
  savingsplansrequest.cpp
  savingsplansresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp)

add_dependencies(QtAwsSavingsPlans QtAwsCore)

target_link_libraries(QtAwsSavingsPlans
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
