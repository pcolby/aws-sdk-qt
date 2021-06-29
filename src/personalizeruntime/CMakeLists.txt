add_compile_definitions(QTAWSPERSONALIZERUNTIME_LIBRARY)

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
  qtawspersonalizeruntimeglobal.h
  getpersonalizedrankingrequest.cpp
  getpersonalizedrankingresponse.cpp
  getrecommendationsrequest.cpp
  getrecommendationsresponse.cpp
  personalizeruntimeclient.cpp
  personalizeruntimerequest.cpp
  personalizeruntimeresponse.cpp)

target_link_libraries(QtAwsPersonalizeRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
