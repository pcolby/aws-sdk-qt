// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATACLIENT_H
#define QTAWS_REDSHIFTDATACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsredshiftdataglobal.h"

class QNetworkReply;

namespace QtAws {
namespace RedshiftData {

class RedshiftDataClientPrivate;
class BatchExecuteStatementRequest;
class BatchExecuteStatementResponse;
class CancelStatementRequest;
class CancelStatementResponse;
class DescribeStatementRequest;
class DescribeStatementResponse;
class DescribeTableRequest;
class DescribeTableResponse;
class ExecuteStatementRequest;
class ExecuteStatementResponse;
class GetStatementResultRequest;
class GetStatementResultResponse;
class ListDatabasesRequest;
class ListDatabasesResponse;
class ListSchemasRequest;
class ListSchemasResponse;
class ListStatementsRequest;
class ListStatementsResponse;
class ListTablesRequest;
class ListTablesResponse;

class QTAWSREDSHIFTDATA_EXPORT RedshiftDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RedshiftDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit RedshiftDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchExecuteStatementResponse * batchExecuteStatement(const BatchExecuteStatementRequest &request);
    CancelStatementResponse * cancelStatement(const CancelStatementRequest &request);
    DescribeStatementResponse * describeStatement(const DescribeStatementRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    ExecuteStatementResponse * executeStatement(const ExecuteStatementRequest &request);
    GetStatementResultResponse * getStatementResult(const GetStatementResultRequest &request);
    ListDatabasesResponse * listDatabases(const ListDatabasesRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListStatementsResponse * listStatements(const ListStatementsRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);

private:
    Q_DECLARE_PRIVATE(RedshiftDataClient)
    Q_DISABLE_COPY(RedshiftDataClient)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
