# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSPERSONALIZERUNTIME_LIBRARY)

add_library(QtAwsPersonalizeRuntime
  qtawspersonalizeruntimeglobal.h
  personalizeruntimeclient.h
  personalizeruntimeclient_p.h
  personalizeruntimerequest.h
  personalizeruntimerequest_p.h
  personalizeruntimeresponse.h
  personalizeruntimeresponse_p.h
  getpersonalizedrankingrequest.h
  getpersonalizedrankingrequest_p.h
  getpersonalizedrankingresponse.h
  getpersonalizedrankingresponse_p.h
  getrecommendationsrequest.h
  getrecommendationsrequest_p.h
  getrecommendationsresponse.h
  getrecommendationsresponse_p.h
  personalizeruntimeclient.cpp
  personalizeruntimerequest.cpp
  personalizeruntimeresponse.cpp
  getpersonalizedrankingrequest.cpp
  getpersonalizedrankingresponse.cpp
  getrecommendationsrequest.cpp
  getrecommendationsresponse.cpp)

target_link_libraries(QtAwsPersonalizeRuntime
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
