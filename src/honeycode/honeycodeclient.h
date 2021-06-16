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

#ifndef QTAWS_HONEYCODECLIENT_H
#define QTAWS_HONEYCODECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Honeycode {

class HoneycodeClientPrivate;
class BatchCreateTableRowsRequest;
class BatchCreateTableRowsResponse;
class BatchDeleteTableRowsRequest;
class BatchDeleteTableRowsResponse;
class BatchUpdateTableRowsRequest;
class BatchUpdateTableRowsResponse;
class BatchUpsertTableRowsRequest;
class BatchUpsertTableRowsResponse;
class DescribeTableDataImportJobRequest;
class DescribeTableDataImportJobResponse;
class GetScreenDataRequest;
class GetScreenDataResponse;
class InvokeScreenAutomationRequest;
class InvokeScreenAutomationResponse;
class ListTableColumnsRequest;
class ListTableColumnsResponse;
class ListTableRowsRequest;
class ListTableRowsResponse;
class ListTablesRequest;
class ListTablesResponse;
class QueryTableRowsRequest;
class QueryTableRowsResponse;
class StartTableDataImportJobRequest;
class StartTableDataImportJobResponse;

class QTAWS_EXPORT HoneycodeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    HoneycodeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    HoneycodeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCreateTableRowsResponse * batchCreateTableRows(const BatchCreateTableRowsRequest &request);
    BatchDeleteTableRowsResponse * batchDeleteTableRows(const BatchDeleteTableRowsRequest &request);
    BatchUpdateTableRowsResponse * batchUpdateTableRows(const BatchUpdateTableRowsRequest &request);
    BatchUpsertTableRowsResponse * batchUpsertTableRows(const BatchUpsertTableRowsRequest &request);
    DescribeTableDataImportJobResponse * describeTableDataImportJob(const DescribeTableDataImportJobRequest &request);
    GetScreenDataResponse * getScreenData(const GetScreenDataRequest &request);
    InvokeScreenAutomationResponse * invokeScreenAutomation(const InvokeScreenAutomationRequest &request);
    ListTableColumnsResponse * listTableColumns(const ListTableColumnsRequest &request);
    ListTableRowsResponse * listTableRows(const ListTableRowsRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    QueryTableRowsResponse * queryTableRows(const QueryTableRowsRequest &request);
    StartTableDataImportJobResponse * startTableDataImportJob(const StartTableDataImportJobRequest &request);

private:
    Q_DECLARE_PRIVATE(HoneycodeClient)
    Q_DISABLE_COPY(HoneycodeClient)

};

} // namespace Honeycode
} // namespace QtAws

#endif
