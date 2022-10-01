# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsLexRuntimeV2
  qtawslexruntimev2global.h
  lexruntimev2client.h
  lexruntimev2client_p.h
  lexruntimev2request.h
  lexruntimev2request_p.h
  lexruntimev2response.h
  lexruntimev2response_p.h
  deletesessionrequest.h
  deletesessionrequest_p.h
  deletesessionresponse.h
  deletesessionresponse_p.h
  getsessionrequest.h
  getsessionrequest_p.h
  getsessionresponse.h
  getsessionresponse_p.h
  putsessionrequest.h
  putsessionrequest_p.h
  putsessionresponse.h
  putsessionresponse_p.h
  recognizetextrequest.h
  recognizetextrequest_p.h
  recognizetextresponse.h
  recognizetextresponse_p.h
  recognizeutterancerequest.h
  recognizeutterancerequest_p.h
  recognizeutteranceresponse.h
  recognizeutteranceresponse_p.h
  startconversationrequest.h
  startconversationrequest_p.h
  startconversationresponse.h
  startconversationresponse_p.h
  lexruntimev2client.cpp
  lexruntimev2request.cpp
  lexruntimev2response.cpp
  deletesessionrequest.cpp
  deletesessionresponse.cpp
  getsessionrequest.cpp
  getsessionresponse.cpp
  putsessionrequest.cpp
  putsessionresponse.cpp
  recognizetextrequest.cpp
  recognizetextresponse.cpp
  recognizeutterancerequest.cpp
  recognizeutteranceresponse.cpp
  startconversationrequest.cpp
  startconversationresponse.cpp
)

target_link_libraries(QtAwsLexRuntimeV2
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsLexRuntimeV2 PRIVATE QTAWSLEXRUNTIMEV2_LIBRARY)
