find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsCostExplorer
  costexplorerclient.h
  costexplorerclient_p.h
  costexplorerrequest.h
  costexplorerrequest_p.h
  costexplorerresponse.h
  costexplorerresponse_p.h
  getcostandusagerequest.h
  getcostandusagerequest_p.h
  getcostandusageresponse.h
  getcostandusageresponse_p.h
  getcostforecastrequest.h
  getcostforecastrequest_p.h
  getcostforecastresponse.h
  getcostforecastresponse_p.h
  getdimensionvaluesrequest.h
  getdimensionvaluesrequest_p.h
  getdimensionvaluesresponse.h
  getdimensionvaluesresponse_p.h
  getreservationcoveragerequest.h
  getreservationcoveragerequest_p.h
  getreservationcoverageresponse.h
  getreservationcoverageresponse_p.h
  getreservationpurchaserecommendationrequest.h
  getreservationpurchaserecommendationrequest_p.h
  getreservationpurchaserecommendationresponse.h
  getreservationpurchaserecommendationresponse_p.h
  getreservationutilizationrequest.h
  getreservationutilizationrequest_p.h
  getreservationutilizationresponse.h
  getreservationutilizationresponse_p.h
  gettagsrequest.h
  gettagsrequest_p.h
  gettagsresponse.h
  gettagsresponse_p.h
  getusageforecastrequest.h
  getusageforecastrequest_p.h
  getusageforecastresponse.h
  getusageforecastresponse_p.h
  costexplorerclient.cpp
  costexplorerrequest.cpp
  costexplorerresponse.cpp
  getcostandusagerequest.cpp
  getcostandusageresponse.cpp
  getcostforecastrequest.cpp
  getcostforecastresponse.cpp
  getdimensionvaluesrequest.cpp
  getdimensionvaluesresponse.cpp
  getreservationcoveragerequest.cpp
  getreservationcoverageresponse.cpp
  getreservationpurchaserecommendationrequest.cpp
  getreservationpurchaserecommendationresponse.cpp
  getreservationutilizationrequest.cpp
  getreservationutilizationresponse.cpp
  gettagsrequest.cpp
  gettagsresponse.cpp
  getusageforecastrequest.cpp
  getusageforecastresponse.cpp)

add_dependencies(QtAwsCostExplorer QtAwsCore)

target_link_libraries(QtAwsCostExplorer Qt5::Core Qt5::Network)
