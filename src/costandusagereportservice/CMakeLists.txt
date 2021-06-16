find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsCostandUsageReportService
  costandusagereportserviceclient.h
  costandusagereportserviceclient_p.h
  costandusagereportservicerequest.h
  costandusagereportservicerequest_p.h
  costandusagereportserviceresponse.h
  costandusagereportserviceresponse_p.h
  deletereportdefinitionrequest.h
  deletereportdefinitionrequest_p.h
  deletereportdefinitionresponse.h
  deletereportdefinitionresponse_p.h
  describereportdefinitionsrequest.h
  describereportdefinitionsrequest_p.h
  describereportdefinitionsresponse.h
  describereportdefinitionsresponse_p.h
  modifyreportdefinitionrequest.h
  modifyreportdefinitionrequest_p.h
  modifyreportdefinitionresponse.h
  modifyreportdefinitionresponse_p.h
  putreportdefinitionrequest.h
  putreportdefinitionrequest_p.h
  putreportdefinitionresponse.h
  putreportdefinitionresponse_p.h
  costandusagereportserviceclient.cpp
  costandusagereportservicerequest.cpp
  costandusagereportserviceresponse.cpp
  deletereportdefinitionrequest.cpp
  deletereportdefinitionresponse.cpp
  describereportdefinitionsrequest.cpp
  describereportdefinitionsresponse.cpp
  modifyreportdefinitionrequest.cpp
  modifyreportdefinitionresponse.cpp
  putreportdefinitionrequest.cpp
  putreportdefinitionresponse.cpp)

add_dependencies(QtAwsCostandUsageReportService QtAwsCore)

target_link_libraries(QtAwsCostandUsageReportService Qt5::Core Qt5::Network)
