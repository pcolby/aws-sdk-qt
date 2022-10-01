add_compile_definitions(QTAWSACCOUNT_LIBRARY)

add_library(QtAwsAccount
  qtawsaccountglobal.h
  accountclient.h
  accountclient_p.h
  accountrequest.h
  accountrequest_p.h
  accountresponse.h
  accountresponse_p.h
  deletealternatecontactrequest.h
  deletealternatecontactrequest_p.h
  deletealternatecontactresponse.h
  deletealternatecontactresponse_p.h
  getalternatecontactrequest.h
  getalternatecontactrequest_p.h
  getalternatecontactresponse.h
  getalternatecontactresponse_p.h
  getcontactinformationrequest.h
  getcontactinformationrequest_p.h
  getcontactinformationresponse.h
  getcontactinformationresponse_p.h
  putalternatecontactrequest.h
  putalternatecontactrequest_p.h
  putalternatecontactresponse.h
  putalternatecontactresponse_p.h
  putcontactinformationrequest.h
  putcontactinformationrequest_p.h
  putcontactinformationresponse.h
  putcontactinformationresponse_p.h
  accountclient.cpp
  accountrequest.cpp
  accountresponse.cpp
  deletealternatecontactrequest.cpp
  deletealternatecontactresponse.cpp
  getalternatecontactrequest.cpp
  getalternatecontactresponse.cpp
  getcontactinformationrequest.cpp
  getcontactinformationresponse.cpp
  putalternatecontactrequest.cpp
  putalternatecontactresponse.cpp
  putcontactinformationrequest.cpp
  putcontactinformationresponse.cpp)

target_link_libraries(QtAwsAccount
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
