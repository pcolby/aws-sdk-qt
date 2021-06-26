set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_library(QtAwsHealthLake
  createfhirdatastorerequest.h
  createfhirdatastorerequest_p.h
  createfhirdatastoreresponse.h
  createfhirdatastoreresponse_p.h
  deletefhirdatastorerequest.h
  deletefhirdatastorerequest_p.h
  deletefhirdatastoreresponse.h
  deletefhirdatastoreresponse_p.h
  describefhirdatastorerequest.h
  describefhirdatastorerequest_p.h
  describefhirdatastoreresponse.h
  describefhirdatastoreresponse_p.h
  describefhirexportjobrequest.h
  describefhirexportjobrequest_p.h
  describefhirexportjobresponse.h
  describefhirexportjobresponse_p.h
  describefhirimportjobrequest.h
  describefhirimportjobrequest_p.h
  describefhirimportjobresponse.h
  describefhirimportjobresponse_p.h
  healthlakeclient.h
  healthlakeclient_p.h
  healthlakerequest.h
  healthlakerequest_p.h
  healthlakeresponse.h
  healthlakeresponse_p.h
  listfhirdatastoresrequest.h
  listfhirdatastoresrequest_p.h
  listfhirdatastoresresponse.h
  listfhirdatastoresresponse_p.h
  startfhirexportjobrequest.h
  startfhirexportjobrequest_p.h
  startfhirexportjobresponse.h
  startfhirexportjobresponse_p.h
  startfhirimportjobrequest.h
  startfhirimportjobrequest_p.h
  startfhirimportjobresponse.h
  startfhirimportjobresponse_p.h
  createfhirdatastorerequest.cpp
  createfhirdatastoreresponse.cpp
  deletefhirdatastorerequest.cpp
  deletefhirdatastoreresponse.cpp
  describefhirdatastorerequest.cpp
  describefhirdatastoreresponse.cpp
  describefhirexportjobrequest.cpp
  describefhirexportjobresponse.cpp
  describefhirimportjobrequest.cpp
  describefhirimportjobresponse.cpp
  healthlakeclient.cpp
  healthlakerequest.cpp
  healthlakeresponse.cpp
  listfhirdatastoresrequest.cpp
  listfhirdatastoresresponse.cpp
  startfhirexportjobrequest.cpp
  startfhirexportjobresponse.cpp
  startfhirimportjobrequest.cpp
  startfhirimportjobresponse.cpp)

add_dependencies(QtAwsHealthLake QtAwsCore)

target_link_libraries(QtAwsHealthLake
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
