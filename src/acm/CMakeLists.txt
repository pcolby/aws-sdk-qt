add_compile_definitions(QTAWSACM_LIBRARY)

add_library(QtAwsAcm
  acmclient.h
  acmclient_p.h
  acmrequest.h
  acmrequest_p.h
  acmresponse.h
  acmresponse_p.h
  addtagstocertificaterequest.h
  addtagstocertificaterequest_p.h
  addtagstocertificateresponse.h
  addtagstocertificateresponse_p.h
  deletecertificaterequest.h
  deletecertificaterequest_p.h
  deletecertificateresponse.h
  deletecertificateresponse_p.h
  describecertificaterequest.h
  describecertificaterequest_p.h
  describecertificateresponse.h
  describecertificateresponse_p.h
  exportcertificaterequest.h
  exportcertificaterequest_p.h
  exportcertificateresponse.h
  exportcertificateresponse_p.h
  getaccountconfigurationrequest.h
  getaccountconfigurationrequest_p.h
  getaccountconfigurationresponse.h
  getaccountconfigurationresponse_p.h
  getcertificaterequest.h
  getcertificaterequest_p.h
  getcertificateresponse.h
  getcertificateresponse_p.h
  importcertificaterequest.h
  importcertificaterequest_p.h
  importcertificateresponse.h
  importcertificateresponse_p.h
  listcertificatesrequest.h
  listcertificatesrequest_p.h
  listcertificatesresponse.h
  listcertificatesresponse_p.h
  listtagsforcertificaterequest.h
  listtagsforcertificaterequest_p.h
  listtagsforcertificateresponse.h
  listtagsforcertificateresponse_p.h
  putaccountconfigurationrequest.h
  putaccountconfigurationrequest_p.h
  putaccountconfigurationresponse.h
  putaccountconfigurationresponse_p.h
  qtawsacmglobal.h
  removetagsfromcertificaterequest.h
  removetagsfromcertificaterequest_p.h
  removetagsfromcertificateresponse.h
  removetagsfromcertificateresponse_p.h
  renewcertificaterequest.h
  renewcertificaterequest_p.h
  renewcertificateresponse.h
  renewcertificateresponse_p.h
  requestcertificaterequest.h
  requestcertificaterequest_p.h
  requestcertificateresponse.h
  requestcertificateresponse_p.h
  resendvalidationemailrequest.h
  resendvalidationemailrequest_p.h
  resendvalidationemailresponse.h
  resendvalidationemailresponse_p.h
  updatecertificateoptionsrequest.h
  updatecertificateoptionsrequest_p.h
  updatecertificateoptionsresponse.h
  updatecertificateoptionsresponse_p.h
  acmclient.cpp
  acmrequest.cpp
  acmresponse.cpp
  addtagstocertificaterequest.cpp
  addtagstocertificateresponse.cpp
  deletecertificaterequest.cpp
  deletecertificateresponse.cpp
  describecertificaterequest.cpp
  describecertificateresponse.cpp
  exportcertificaterequest.cpp
  exportcertificateresponse.cpp
  getaccountconfigurationrequest.cpp
  getaccountconfigurationresponse.cpp
  getcertificaterequest.cpp
  getcertificateresponse.cpp
  importcertificaterequest.cpp
  importcertificateresponse.cpp
  listcertificatesrequest.cpp
  listcertificatesresponse.cpp
  listtagsforcertificaterequest.cpp
  listtagsforcertificateresponse.cpp
  putaccountconfigurationrequest.cpp
  putaccountconfigurationresponse.cpp
  removetagsfromcertificaterequest.cpp
  removetagsfromcertificateresponse.cpp
  renewcertificaterequest.cpp
  renewcertificateresponse.cpp
  requestcertificaterequest.cpp
  requestcertificateresponse.cpp
  resendvalidationemailrequest.cpp
  resendvalidationemailresponse.cpp
  updatecertificateoptionsrequest.cpp
  updatecertificateoptionsresponse.cpp)

target_link_libraries(QtAwsAcm
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
