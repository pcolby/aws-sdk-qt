add_compile_definitions(QTAWSAPPLICATIONINSIGHTS_LIBRARY)

add_library(QtAwsApplicationInsights
  applicationinsightsclient.h
  applicationinsightsclient_p.h
  applicationinsightsrequest.h
  applicationinsightsrequest_p.h
  applicationinsightsresponse.h
  applicationinsightsresponse_p.h
  createapplicationrequest.h
  createapplicationrequest_p.h
  createapplicationresponse.h
  createapplicationresponse_p.h
  createcomponentrequest.h
  createcomponentrequest_p.h
  createcomponentresponse.h
  createcomponentresponse_p.h
  createlogpatternrequest.h
  createlogpatternrequest_p.h
  createlogpatternresponse.h
  createlogpatternresponse_p.h
  deleteapplicationrequest.h
  deleteapplicationrequest_p.h
  deleteapplicationresponse.h
  deleteapplicationresponse_p.h
  deletecomponentrequest.h
  deletecomponentrequest_p.h
  deletecomponentresponse.h
  deletecomponentresponse_p.h
  deletelogpatternrequest.h
  deletelogpatternrequest_p.h
  deletelogpatternresponse.h
  deletelogpatternresponse_p.h
  describeapplicationrequest.h
  describeapplicationrequest_p.h
  describeapplicationresponse.h
  describeapplicationresponse_p.h
  describecomponentconfigurationrecommendationrequest.h
  describecomponentconfigurationrecommendationrequest_p.h
  describecomponentconfigurationrecommendationresponse.h
  describecomponentconfigurationrecommendationresponse_p.h
  describecomponentconfigurationrequest.h
  describecomponentconfigurationrequest_p.h
  describecomponentconfigurationresponse.h
  describecomponentconfigurationresponse_p.h
  describecomponentrequest.h
  describecomponentrequest_p.h
  describecomponentresponse.h
  describecomponentresponse_p.h
  describelogpatternrequest.h
  describelogpatternrequest_p.h
  describelogpatternresponse.h
  describelogpatternresponse_p.h
  describeobservationrequest.h
  describeobservationrequest_p.h
  describeobservationresponse.h
  describeobservationresponse_p.h
  describeproblemobservationsrequest.h
  describeproblemobservationsrequest_p.h
  describeproblemobservationsresponse.h
  describeproblemobservationsresponse_p.h
  describeproblemrequest.h
  describeproblemrequest_p.h
  describeproblemresponse.h
  describeproblemresponse_p.h
  listapplicationsrequest.h
  listapplicationsrequest_p.h
  listapplicationsresponse.h
  listapplicationsresponse_p.h
  listcomponentsrequest.h
  listcomponentsrequest_p.h
  listcomponentsresponse.h
  listcomponentsresponse_p.h
  listconfigurationhistoryrequest.h
  listconfigurationhistoryrequest_p.h
  listconfigurationhistoryresponse.h
  listconfigurationhistoryresponse_p.h
  listlogpatternsetsrequest.h
  listlogpatternsetsrequest_p.h
  listlogpatternsetsresponse.h
  listlogpatternsetsresponse_p.h
  listlogpatternsrequest.h
  listlogpatternsrequest_p.h
  listlogpatternsresponse.h
  listlogpatternsresponse_p.h
  listproblemsrequest.h
  listproblemsrequest_p.h
  listproblemsresponse.h
  listproblemsresponse_p.h
  listtagsforresourcerequest.h
  listtagsforresourcerequest_p.h
  listtagsforresourceresponse.h
  listtagsforresourceresponse_p.h
  qtawsapplicationinsightsglobal.h
  tagresourcerequest.h
  tagresourcerequest_p.h
  tagresourceresponse.h
  tagresourceresponse_p.h
  untagresourcerequest.h
  untagresourcerequest_p.h
  untagresourceresponse.h
  untagresourceresponse_p.h
  updateapplicationrequest.h
  updateapplicationrequest_p.h
  updateapplicationresponse.h
  updateapplicationresponse_p.h
  updatecomponentconfigurationrequest.h
  updatecomponentconfigurationrequest_p.h
  updatecomponentconfigurationresponse.h
  updatecomponentconfigurationresponse_p.h
  updatecomponentrequest.h
  updatecomponentrequest_p.h
  updatecomponentresponse.h
  updatecomponentresponse_p.h
  updatelogpatternrequest.h
  updatelogpatternrequest_p.h
  updatelogpatternresponse.h
  updatelogpatternresponse_p.h
  applicationinsightsclient.cpp
  applicationinsightsrequest.cpp
  applicationinsightsresponse.cpp
  createapplicationrequest.cpp
  createapplicationresponse.cpp
  createcomponentrequest.cpp
  createcomponentresponse.cpp
  createlogpatternrequest.cpp
  createlogpatternresponse.cpp
  deleteapplicationrequest.cpp
  deleteapplicationresponse.cpp
  deletecomponentrequest.cpp
  deletecomponentresponse.cpp
  deletelogpatternrequest.cpp
  deletelogpatternresponse.cpp
  describeapplicationrequest.cpp
  describeapplicationresponse.cpp
  describecomponentconfigurationrecommendationrequest.cpp
  describecomponentconfigurationrecommendationresponse.cpp
  describecomponentconfigurationrequest.cpp
  describecomponentconfigurationresponse.cpp
  describecomponentrequest.cpp
  describecomponentresponse.cpp
  describelogpatternrequest.cpp
  describelogpatternresponse.cpp
  describeobservationrequest.cpp
  describeobservationresponse.cpp
  describeproblemobservationsrequest.cpp
  describeproblemobservationsresponse.cpp
  describeproblemrequest.cpp
  describeproblemresponse.cpp
  listapplicationsrequest.cpp
  listapplicationsresponse.cpp
  listcomponentsrequest.cpp
  listcomponentsresponse.cpp
  listconfigurationhistoryrequest.cpp
  listconfigurationhistoryresponse.cpp
  listlogpatternsetsrequest.cpp
  listlogpatternsetsresponse.cpp
  listlogpatternsrequest.cpp
  listlogpatternsresponse.cpp
  listproblemsrequest.cpp
  listproblemsresponse.cpp
  listtagsforresourcerequest.cpp
  listtagsforresourceresponse.cpp
  tagresourcerequest.cpp
  tagresourceresponse.cpp
  untagresourcerequest.cpp
  untagresourceresponse.cpp
  updateapplicationrequest.cpp
  updateapplicationresponse.cpp
  updatecomponentconfigurationrequest.cpp
  updatecomponentconfigurationresponse.cpp
  updatecomponentrequest.cpp
  updatecomponentresponse.cpp
  updatelogpatternrequest.cpp
  updatelogpatternresponse.cpp)

target_link_libraries(QtAwsApplicationInsights
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
