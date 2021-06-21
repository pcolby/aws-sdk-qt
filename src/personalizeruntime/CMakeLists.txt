set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsPersonalizeRuntime
  getpersonalizedrankingrequest.h
  getpersonalizedrankingrequest_p.h
  getpersonalizedrankingresponse.h
  getpersonalizedrankingresponse_p.h
  getrecommendationsrequest.h
  getrecommendationsrequest_p.h
  getrecommendationsresponse.h
  getrecommendationsresponse_p.h
  personalizeruntimeclient.h
  personalizeruntimeclient_p.h
  personalizeruntimerequest.h
  personalizeruntimerequest_p.h
  personalizeruntimeresponse.h
  personalizeruntimeresponse_p.h
  getpersonalizedrankingrequest.cpp
  getpersonalizedrankingresponse.cpp
  getrecommendationsrequest.cpp
  getrecommendationsresponse.cpp
  personalizeruntimeclient.cpp
  personalizeruntimerequest.cpp
  personalizeruntimeresponse.cpp)

add_dependencies(QtAwsPersonalizeRuntime QtAwsCore)

target_link_libraries(QtAwsPersonalizeRuntime PRIVATE Qt5::Core Qt5::Network)
