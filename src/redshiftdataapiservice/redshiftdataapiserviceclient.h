/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_REDSHIFTDATAAPISERVICECLIENT_H
#define QTAWS_REDSHIFTDATAAPISERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace RedshiftDataAPIService {

class RedshiftDataAPIServiceClientPrivate;
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

class QTAWS_EXPORT RedshiftDataAPIServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RedshiftDataAPIServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RedshiftDataAPIServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelStatementResponse * cancelStatement(const CancelStatementRequest &request);
    DescribeStatementResponse * describeStatement(const DescribeStatementRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    ExecuteStatementResponse * executeStatement(const ExecuteStatementRequest &request);
    GetStatementResultResponse * getStatementResult(const GetStatementResultRequest &request);
    ListDatabasesResponse * listDatabases(const ListDatabasesRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListStatementsResponse * listStatements(const ListStatementsRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);

protected:
    /// @cond internal
    RedshiftDataAPIServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    RedshiftDataAPIServiceClient(RedshiftDataAPIServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(RedshiftDataAPIServiceClient)
    Q_DISABLE_COPY(RedshiftDataAPIServiceClient)

};

} // namespace RedshiftDataAPIService
} // namespace QtAws

#endif
