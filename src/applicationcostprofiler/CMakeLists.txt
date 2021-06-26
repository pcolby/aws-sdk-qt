set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsApplicationCostProfiler
  applicationcostprofilerclient.h
  applicationcostprofilerclient_p.h
  applicationcostprofilerrequest.h
  applicationcostprofilerrequest_p.h
  applicationcostprofilerresponse.h
  applicationcostprofilerresponse_p.h
  deletereportdefinitionrequest.h
  deletereportdefinitionrequest_p.h
  deletereportdefinitionresponse.h
  deletereportdefinitionresponse_p.h
  getreportdefinitionrequest.h
  getreportdefinitionrequest_p.h
  getreportdefinitionresponse.h
  getreportdefinitionresponse_p.h
  importapplicationusagerequest.h
  importapplicationusagerequest_p.h
  importapplicationusageresponse.h
  importapplicationusageresponse_p.h
  listreportdefinitionsrequest.h
  listreportdefinitionsrequest_p.h
  listreportdefinitionsresponse.h
  listreportdefinitionsresponse_p.h
  putreportdefinitionrequest.h
  putreportdefinitionrequest_p.h
  putreportdefinitionresponse.h
  putreportdefinitionresponse_p.h
  updatereportdefinitionrequest.h
  updatereportdefinitionrequest_p.h
  updatereportdefinitionresponse.h
  updatereportdefinitionresponse_p.h
  applicationcostprofilerclient.cpp
  applicationcostprofilerrequest.cpp
  applicationcostprofilerresponse.cpp
  deletereportdefinitionrequest.cpp
  deletereportdefinitionresponse.cpp
  getreportdefinitionrequest.cpp
  getreportdefinitionresponse.cpp
  importapplicationusagerequest.cpp
  importapplicationusageresponse.cpp
  listreportdefinitionsrequest.cpp
  listreportdefinitionsresponse.cpp
  putreportdefinitionrequest.cpp
  putreportdefinitionresponse.cpp
  updatereportdefinitionrequest.cpp
  updatereportdefinitionresponse.cpp)

add_dependencies(QtAwsApplicationCostProfiler QtAwsCore)

target_link_libraries(QtAwsApplicationCostProfiler
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
