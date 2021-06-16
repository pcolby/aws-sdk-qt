find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsForecastQueryService
  forecastqueryserviceclient.h
  forecastqueryserviceclient_p.h
  forecastqueryservicerequest.h
  forecastqueryservicerequest_p.h
  forecastqueryserviceresponse.h
  forecastqueryserviceresponse_p.h
  queryforecastrequest.h
  queryforecastrequest_p.h
  queryforecastresponse.h
  queryforecastresponse_p.h
  forecastqueryserviceclient.cpp
  forecastqueryservicerequest.cpp
  forecastqueryserviceresponse.cpp
  queryforecastrequest.cpp
  queryforecastresponse.cpp)

add_dependencies(QtAwsForecastQueryService QtAwsCore)

target_link_libraries(QtAwsForecastQueryService Qt5::Core Qt5::Network)
