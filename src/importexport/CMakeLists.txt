add_library(QtAwsImportExport
  canceljobrequest.h
  canceljobrequest_p.h
  canceljobresponse.h
  canceljobresponse_p.h
  createjobrequest.h
  createjobrequest_p.h
  createjobresponse.h
  createjobresponse_p.h
  getshippinglabelrequest.h
  getshippinglabelrequest_p.h
  getshippinglabelresponse.h
  getshippinglabelresponse_p.h
  getstatusrequest.h
  getstatusrequest_p.h
  getstatusresponse.h
  getstatusresponse_p.h
  importexportclient.h
  importexportclient_p.h
  importexportrequest.h
  importexportrequest_p.h
  importexportresponse.h
  importexportresponse_p.h
  listjobsrequest.h
  listjobsrequest_p.h
  listjobsresponse.h
  listjobsresponse_p.h
  updatejobrequest.h
  updatejobrequest_p.h
  updatejobresponse.h
  updatejobresponse_p.h
  canceljobrequest.cpp
  canceljobresponse.cpp
  createjobrequest.cpp
  createjobresponse.cpp
  getshippinglabelrequest.cpp
  getshippinglabelresponse.cpp
  getstatusrequest.cpp
  getstatusresponse.cpp
  importexportclient.cpp
  importexportrequest.cpp
  importexportresponse.cpp
  listjobsrequest.cpp
  listjobsresponse.cpp
  updatejobrequest.cpp
  updatejobresponse.cpp)

add_dependencies(QtAwsImportExport QtAwsCore)

target_link_libraries(QtAwsImportExport
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
