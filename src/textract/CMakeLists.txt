add_compile_definitions(QTAWSTEXTRACT_LIBRARY)

add_library(QtAwsTextract
  analyzedocumentrequest.h
  analyzedocumentrequest_p.h
  analyzedocumentresponse.h
  analyzedocumentresponse_p.h
  detectdocumenttextrequest.h
  detectdocumenttextrequest_p.h
  detectdocumenttextresponse.h
  detectdocumenttextresponse_p.h
  getdocumentanalysisrequest.h
  getdocumentanalysisrequest_p.h
  getdocumentanalysisresponse.h
  getdocumentanalysisresponse_p.h
  getdocumenttextdetectionrequest.h
  getdocumenttextdetectionrequest_p.h
  getdocumenttextdetectionresponse.h
  getdocumenttextdetectionresponse_p.h
  qtawstextractglobal.h
  startdocumentanalysisrequest.h
  startdocumentanalysisrequest_p.h
  startdocumentanalysisresponse.h
  startdocumentanalysisresponse_p.h
  startdocumenttextdetectionrequest.h
  startdocumenttextdetectionrequest_p.h
  startdocumenttextdetectionresponse.h
  startdocumenttextdetectionresponse_p.h
  textractclient.h
  textractclient_p.h
  textractrequest.h
  textractrequest_p.h
  textractresponse.h
  textractresponse_p.h
  analyzedocumentrequest.cpp
  analyzedocumentresponse.cpp
  detectdocumenttextrequest.cpp
  detectdocumenttextresponse.cpp
  getdocumentanalysisrequest.cpp
  getdocumentanalysisresponse.cpp
  getdocumenttextdetectionrequest.cpp
  getdocumenttextdetectionresponse.cpp
  startdocumentanalysisrequest.cpp
  startdocumentanalysisresponse.cpp
  startdocumenttextdetectionrequest.cpp
  startdocumenttextdetectionresponse.cpp
  textractclient.cpp
  textractrequest.cpp
  textractresponse.cpp)

target_link_libraries(QtAwsTextract
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
