# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSSAGEMAKERA2IRUNTIME_LIBRARY)

add_library(QtAwsSageMakerA2IRuntime
  qtawssagemakera2iruntimeglobal.h
  sagemakera2iruntimeclient.h
  sagemakera2iruntimeclient_p.h
  sagemakera2iruntimerequest.h
  sagemakera2iruntimerequest_p.h
  sagemakera2iruntimeresponse.h
  sagemakera2iruntimeresponse_p.h
  deletehumanlooprequest.h
  deletehumanlooprequest_p.h
  deletehumanloopresponse.h
  deletehumanloopresponse_p.h
  describehumanlooprequest.h
  describehumanlooprequest_p.h
  describehumanloopresponse.h
  describehumanloopresponse_p.h
  listhumanloopsrequest.h
  listhumanloopsrequest_p.h
  listhumanloopsresponse.h
  listhumanloopsresponse_p.h
  starthumanlooprequest.h
  starthumanlooprequest_p.h
  starthumanloopresponse.h
  starthumanloopresponse_p.h
  stophumanlooprequest.h
  stophumanlooprequest_p.h
  stophumanloopresponse.h
  stophumanloopresponse_p.h
  sagemakera2iruntimeclient.cpp
  sagemakera2iruntimerequest.cpp
  sagemakera2iruntimeresponse.cpp
  deletehumanlooprequest.cpp
  deletehumanloopresponse.cpp
  describehumanlooprequest.cpp
  describehumanloopresponse.cpp
  listhumanloopsrequest.cpp
  listhumanloopsresponse.cpp
  starthumanlooprequest.cpp
  starthumanloopresponse.cpp
  stophumanlooprequest.cpp
  stophumanloopresponse.cpp)

target_link_libraries(QtAwsSageMakerA2IRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
