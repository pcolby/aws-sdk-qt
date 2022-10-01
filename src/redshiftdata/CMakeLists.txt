# SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

add_compile_definitions(QTAWSREDSHIFTDATA_LIBRARY)

add_library(QtAwsRedshiftData
  qtawsredshiftdataglobal.h
  redshiftdataclient.h
  redshiftdataclient_p.h
  redshiftdatarequest.h
  redshiftdatarequest_p.h
  redshiftdataresponse.h
  redshiftdataresponse_p.h
  batchexecutestatementrequest.h
  batchexecutestatementrequest_p.h
  batchexecutestatementresponse.h
  batchexecutestatementresponse_p.h
  cancelstatementrequest.h
  cancelstatementrequest_p.h
  cancelstatementresponse.h
  cancelstatementresponse_p.h
  describestatementrequest.h
  describestatementrequest_p.h
  describestatementresponse.h
  describestatementresponse_p.h
  describetablerequest.h
  describetablerequest_p.h
  describetableresponse.h
  describetableresponse_p.h
  executestatementrequest.h
  executestatementrequest_p.h
  executestatementresponse.h
  executestatementresponse_p.h
  getstatementresultrequest.h
  getstatementresultrequest_p.h
  getstatementresultresponse.h
  getstatementresultresponse_p.h
  listdatabasesrequest.h
  listdatabasesrequest_p.h
  listdatabasesresponse.h
  listdatabasesresponse_p.h
  listschemasrequest.h
  listschemasrequest_p.h
  listschemasresponse.h
  listschemasresponse_p.h
  liststatementsrequest.h
  liststatementsrequest_p.h
  liststatementsresponse.h
  liststatementsresponse_p.h
  listtablesrequest.h
  listtablesrequest_p.h
  listtablesresponse.h
  listtablesresponse_p.h
  redshiftdataclient.cpp
  redshiftdatarequest.cpp
  redshiftdataresponse.cpp
  batchexecutestatementrequest.cpp
  batchexecutestatementresponse.cpp
  cancelstatementrequest.cpp
  cancelstatementresponse.cpp
  describestatementrequest.cpp
  describestatementresponse.cpp
  describetablerequest.cpp
  describetableresponse.cpp
  executestatementrequest.cpp
  executestatementresponse.cpp
  getstatementresultrequest.cpp
  getstatementresultresponse.cpp
  listdatabasesrequest.cpp
  listdatabasesresponse.cpp
  listschemasrequest.cpp
  listschemasresponse.cpp
  liststatementsrequest.cpp
  liststatementsresponse.cpp
  listtablesrequest.cpp
  listtablesresponse.cpp)

target_link_libraries(QtAwsRedshiftData
  PRIVATE QtAwsCore
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Qt${QT_VERSION_MAJOR}::Network)
