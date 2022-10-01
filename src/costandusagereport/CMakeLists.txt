# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSCOSTANDUSAGEREPORT_LIBRARY)

add_library(QtAwsCostandUsageReport
  qtawscostandusagereportglobal.h
  costandusagereportclient.h
  costandusagereportclient_p.h
  costandusagereportrequest.h
  costandusagereportrequest_p.h
  costandusagereportresponse.h
  costandusagereportresponse_p.h
  deletereportdefinitionrequest.h
  deletereportdefinitionrequest_p.h
  deletereportdefinitionresponse.h
  deletereportdefinitionresponse_p.h
  describereportdefinitionsrequest.h
  describereportdefinitionsrequest_p.h
  describereportdefinitionsresponse.h
  describereportdefinitionsresponse_p.h
  modifyreportdefinitionrequest.h
  modifyreportdefinitionrequest_p.h
  modifyreportdefinitionresponse.h
  modifyreportdefinitionresponse_p.h
  putreportdefinitionrequest.h
  putreportdefinitionrequest_p.h
  putreportdefinitionresponse.h
  putreportdefinitionresponse_p.h
  costandusagereportclient.cpp
  costandusagereportrequest.cpp
  costandusagereportresponse.cpp
  deletereportdefinitionrequest.cpp
  deletereportdefinitionresponse.cpp
  describereportdefinitionsrequest.cpp
  describereportdefinitionsresponse.cpp
  modifyreportdefinitionrequest.cpp
  modifyreportdefinitionresponse.cpp
  putreportdefinitionrequest.cpp
  putreportdefinitionresponse.cpp)

target_link_libraries(QtAwsCostandUsageReport
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
