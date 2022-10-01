# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSLEXRUNTIME_LIBRARY)

add_library(QtAwsLexRuntime
  qtawslexruntimeglobal.h
  lexruntimeclient.h
  lexruntimeclient_p.h
  lexruntimerequest.h
  lexruntimerequest_p.h
  lexruntimeresponse.h
  lexruntimeresponse_p.h
  deletesessionrequest.h
  deletesessionrequest_p.h
  deletesessionresponse.h
  deletesessionresponse_p.h
  getsessionrequest.h
  getsessionrequest_p.h
  getsessionresponse.h
  getsessionresponse_p.h
  postcontentrequest.h
  postcontentrequest_p.h
  postcontentresponse.h
  postcontentresponse_p.h
  posttextrequest.h
  posttextrequest_p.h
  posttextresponse.h
  posttextresponse_p.h
  putsessionrequest.h
  putsessionrequest_p.h
  putsessionresponse.h
  putsessionresponse_p.h
  lexruntimeclient.cpp
  lexruntimerequest.cpp
  lexruntimeresponse.cpp
  deletesessionrequest.cpp
  deletesessionresponse.cpp
  getsessionrequest.cpp
  getsessionresponse.cpp
  postcontentrequest.cpp
  postcontentresponse.cpp
  posttextrequest.cpp
  posttextresponse.cpp
  putsessionrequest.cpp
  putsessionresponse.cpp)

target_link_libraries(QtAwsLexRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
