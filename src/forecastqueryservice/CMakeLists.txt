add_compile_definitions(QTAWSFORECASTQUERYSERVICE_LIBRARY)

add_library(QtAwsForecastQueryService
  forecastqueryserviceclient.h
  forecastqueryserviceclient_p.h
  forecastqueryservicerequest.h
  forecastqueryservicerequest_p.h
  forecastqueryserviceresponse.h
  forecastqueryserviceresponse_p.h
  qtawsforecastqueryserviceglobal.h
  queryforecastrequest.h
  queryforecastrequest_p.h
  queryforecastresponse.h
  queryforecastresponse_p.h
  forecastqueryserviceclient.cpp
  forecastqueryservicerequest.cpp
  forecastqueryserviceresponse.cpp
  queryforecastrequest.cpp
  queryforecastresponse.cpp)

target_link_libraries(QtAwsForecastQueryService
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
