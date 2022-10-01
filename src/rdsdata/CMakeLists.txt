# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(
  QtAwsRdsData
  qtawsrdsdataglobal.h
  rdsdataclient.h
  rdsdataclient_p.h
  rdsdatarequest.h
  rdsdatarequest_p.h
  rdsdataresponse.h
  rdsdataresponse_p.h
  batchexecutestatementrequest.h
  batchexecutestatementrequest_p.h
  batchexecutestatementresponse.h
  batchexecutestatementresponse_p.h
  begintransactionrequest.h
  begintransactionrequest_p.h
  begintransactionresponse.h
  begintransactionresponse_p.h
  committransactionrequest.h
  committransactionrequest_p.h
  committransactionresponse.h
  committransactionresponse_p.h
  executesqlrequest.h
  executesqlrequest_p.h
  executesqlresponse.h
  executesqlresponse_p.h
  executestatementrequest.h
  executestatementrequest_p.h
  executestatementresponse.h
  executestatementresponse_p.h
  rollbacktransactionrequest.h
  rollbacktransactionrequest_p.h
  rollbacktransactionresponse.h
  rollbacktransactionresponse_p.h
  rdsdataclient.cpp
  rdsdatarequest.cpp
  rdsdataresponse.cpp
  batchexecutestatementrequest.cpp
  batchexecutestatementresponse.cpp
  begintransactionrequest.cpp
  begintransactionresponse.cpp
  committransactionrequest.cpp
  committransactionresponse.cpp
  executesqlrequest.cpp
  executesqlresponse.cpp
  executestatementrequest.cpp
  executestatementresponse.cpp
  rollbacktransactionrequest.cpp
  rollbacktransactionresponse.cpp
)

target_link_libraries(QtAwsRdsData
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)

target_compile_definitions(QtAwsRdsData PRIVATE QTAWSRDSDATA_LIBRARY)
