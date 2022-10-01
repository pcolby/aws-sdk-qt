// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODECLIENT_H
#define QTAWS_HONEYCODECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawshoneycodeglobal.h"

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
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class QueryTableRowsRequest;
class QueryTableRowsResponse;
class StartTableDataImportJobRequest;
class StartTableDataImportJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSHONEYCODE_EXPORT HoneycodeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    HoneycodeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit HoneycodeClient(
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
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    QueryTableRowsResponse * queryTableRows(const QueryTableRowsRequest &request);
    StartTableDataImportJobResponse * startTableDataImportJob(const StartTableDataImportJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(HoneycodeClient)
    Q_DISABLE_COPY(HoneycodeClient)

};

} // namespace Honeycode
} // namespace QtAws

#endif
