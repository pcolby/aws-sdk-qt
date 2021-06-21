set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Network REQUIRED)

add_library(QtAwsMigrationHubConfig
  createhomeregioncontrolrequest.h
  createhomeregioncontrolrequest_p.h
  createhomeregioncontrolresponse.h
  createhomeregioncontrolresponse_p.h
  describehomeregioncontrolsrequest.h
  describehomeregioncontrolsrequest_p.h
  describehomeregioncontrolsresponse.h
  describehomeregioncontrolsresponse_p.h
  gethomeregionrequest.h
  gethomeregionrequest_p.h
  gethomeregionresponse.h
  gethomeregionresponse_p.h
  migrationhubconfigclient.h
  migrationhubconfigclient_p.h
  migrationhubconfigrequest.h
  migrationhubconfigrequest_p.h
  migrationhubconfigresponse.h
  migrationhubconfigresponse_p.h
  createhomeregioncontrolrequest.cpp
  createhomeregioncontrolresponse.cpp
  describehomeregioncontrolsrequest.cpp
  describehomeregioncontrolsresponse.cpp
  gethomeregionrequest.cpp
  gethomeregionresponse.cpp
  migrationhubconfigclient.cpp
  migrationhubconfigrequest.cpp
  migrationhubconfigresponse.cpp)

add_dependencies(QtAwsMigrationHubConfig QtAwsCore)

target_link_libraries(QtAwsMigrationHubConfig PRIVATE Qt5::Core Qt5::Network)
