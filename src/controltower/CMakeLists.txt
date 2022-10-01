# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSCONTROLTOWER_LIBRARY)

add_library(QtAwsControlTower
  qtawscontroltowerglobal.h
  controltowerclient.h
  controltowerclient_p.h
  controltowerrequest.h
  controltowerrequest_p.h
  controltowerresponse.h
  controltowerresponse_p.h
  disablecontrolrequest.h
  disablecontrolrequest_p.h
  disablecontrolresponse.h
  disablecontrolresponse_p.h
  enablecontrolrequest.h
  enablecontrolrequest_p.h
  enablecontrolresponse.h
  enablecontrolresponse_p.h
  getcontroloperationrequest.h
  getcontroloperationrequest_p.h
  getcontroloperationresponse.h
  getcontroloperationresponse_p.h
  listenabledcontrolsrequest.h
  listenabledcontrolsrequest_p.h
  listenabledcontrolsresponse.h
  listenabledcontrolsresponse_p.h
  controltowerclient.cpp
  controltowerrequest.cpp
  controltowerresponse.cpp
  disablecontrolrequest.cpp
  disablecontrolresponse.cpp
  enablecontrolrequest.cpp
  enablecontrolresponse.cpp
  getcontroloperationrequest.cpp
  getcontroloperationresponse.cpp
  listenabledcontrolsrequest.cpp
  listenabledcontrolsresponse.cpp)

target_link_libraries(QtAwsControlTower
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
