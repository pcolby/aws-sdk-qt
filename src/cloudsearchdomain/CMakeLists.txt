add_library(QtAwsCloudSearchDomain
  cloudsearchdomainclient.h
  cloudsearchdomainclient_p.h
  cloudsearchdomainrequest.h
  cloudsearchdomainrequest_p.h
  cloudsearchdomainresponse.h
  cloudsearchdomainresponse_p.h
  searchrequest.h
  searchrequest_p.h
  searchresponse.h
  searchresponse_p.h
  suggestrequest.h
  suggestrequest_p.h
  suggestresponse.h
  suggestresponse_p.h
  uploaddocumentsrequest.h
  uploaddocumentsrequest_p.h
  uploaddocumentsresponse.h
  uploaddocumentsresponse_p.h
  cloudsearchdomainclient.cpp
  cloudsearchdomainrequest.cpp
  cloudsearchdomainresponse.cpp
  searchrequest.cpp
  searchresponse.cpp
  suggestrequest.cpp
  suggestresponse.cpp
  uploaddocumentsrequest.cpp
  uploaddocumentsresponse.cpp)

add_dependencies(QtAwsCloudSearchDomain QtAwsCore)

target_link_libraries(QtAwsCloudSearchDomain
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
