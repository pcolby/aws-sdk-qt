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

target_link_libraries(QtAwsForecastQueryService
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
