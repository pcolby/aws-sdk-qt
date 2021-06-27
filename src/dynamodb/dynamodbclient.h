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

#ifndef QTAWS_DYNAMODBCLIENT_H
#define QTAWS_DYNAMODBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DynamoDB {

class DynamoDBClientPrivate;
class BatchExecuteStatementRequest;
class BatchExecuteStatementResponse;
class BatchGetItemRequest;
class BatchGetItemResponse;
class BatchWriteItemRequest;
class BatchWriteItemResponse;
class CreateBackupRequest;
class CreateBackupResponse;
class CreateGlobalTableRequest;
class CreateGlobalTableResponse;
class CreateTableRequest;
class CreateTableResponse;
class DeleteBackupRequest;
class DeleteBackupResponse;
class DeleteItemRequest;
class DeleteItemResponse;
class DeleteTableRequest;
class DeleteTableResponse;
class DescribeBackupRequest;
class DescribeBackupResponse;
class DescribeContinuousBackupsRequest;
class DescribeContinuousBackupsResponse;
class DescribeContributorInsightsRequest;
class DescribeContributorInsightsResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class DescribeExportRequest;
class DescribeExportResponse;
class DescribeGlobalTableRequest;
class DescribeGlobalTableResponse;
class DescribeGlobalTableSettingsRequest;
class DescribeGlobalTableSettingsResponse;
class DescribeKinesisStreamingDestinationRequest;
class DescribeKinesisStreamingDestinationResponse;
class DescribeLimitsRequest;
class DescribeLimitsResponse;
class DescribeTableRequest;
class DescribeTableResponse;
class DescribeTableReplicaAutoScalingRequest;
class DescribeTableReplicaAutoScalingResponse;
class DescribeTimeToLiveRequest;
class DescribeTimeToLiveResponse;
class DisableKinesisStreamingDestinationRequest;
class DisableKinesisStreamingDestinationResponse;
class EnableKinesisStreamingDestinationRequest;
class EnableKinesisStreamingDestinationResponse;
class ExecuteStatementRequest;
class ExecuteStatementResponse;
class ExecuteTransactionRequest;
class ExecuteTransactionResponse;
class ExportTableToPointInTimeRequest;
class ExportTableToPointInTimeResponse;
class GetItemRequest;
class GetItemResponse;
class ListBackupsRequest;
class ListBackupsResponse;
class ListContributorInsightsRequest;
class ListContributorInsightsResponse;
class ListExportsRequest;
class ListExportsResponse;
class ListGlobalTablesRequest;
class ListGlobalTablesResponse;
class ListTablesRequest;
class ListTablesResponse;
class ListTagsOfResourceRequest;
class ListTagsOfResourceResponse;
class PutItemRequest;
class PutItemResponse;
class QueryRequest;
class QueryResponse;
class RestoreTableFromBackupRequest;
class RestoreTableFromBackupResponse;
class RestoreTableToPointInTimeRequest;
class RestoreTableToPointInTimeResponse;
class ScanRequest;
class ScanResponse;
class TagResourceRequest;
class TagResourceResponse;
class TransactGetItemsRequest;
class TransactGetItemsResponse;
class TransactWriteItemsRequest;
class TransactWriteItemsResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContinuousBackupsRequest;
class UpdateContinuousBackupsResponse;
class UpdateContributorInsightsRequest;
class UpdateContributorInsightsResponse;
class UpdateGlobalTableRequest;
class UpdateGlobalTableResponse;
class UpdateGlobalTableSettingsRequest;
class UpdateGlobalTableSettingsResponse;
class UpdateItemRequest;
class UpdateItemResponse;
class UpdateTableRequest;
class UpdateTableResponse;
class UpdateTableReplicaAutoScalingRequest;
class UpdateTableReplicaAutoScalingResponse;
class UpdateTimeToLiveRequest;
class UpdateTimeToLiveResponse;

class QTAWS_EXPORT DynamoDBClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDBClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DynamoDBClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchExecuteStatementResponse * batchExecuteStatement(const BatchExecuteStatementRequest &request);
    BatchGetItemResponse * batchGetItem(const BatchGetItemRequest &request);
    BatchWriteItemResponse * batchWriteItem(const BatchWriteItemRequest &request);
    CreateBackupResponse * createBackup(const CreateBackupRequest &request);
    CreateGlobalTableResponse * createGlobalTable(const CreateGlobalTableRequest &request);
    CreateTableResponse * createTable(const CreateTableRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteItemResponse * deleteItem(const DeleteItemRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    DescribeBackupResponse * describeBackup(const DescribeBackupRequest &request);
    DescribeContinuousBackupsResponse * describeContinuousBackups(const DescribeContinuousBackupsRequest &request);
    DescribeContributorInsightsResponse * describeContributorInsights(const DescribeContributorInsightsRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeExportResponse * describeExport(const DescribeExportRequest &request);
    DescribeGlobalTableResponse * describeGlobalTable(const DescribeGlobalTableRequest &request);
    DescribeGlobalTableSettingsResponse * describeGlobalTableSettings(const DescribeGlobalTableSettingsRequest &request);
    DescribeKinesisStreamingDestinationResponse * describeKinesisStreamingDestination(const DescribeKinesisStreamingDestinationRequest &request);
    DescribeLimitsResponse * describeLimits(const DescribeLimitsRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    DescribeTableReplicaAutoScalingResponse * describeTableReplicaAutoScaling(const DescribeTableReplicaAutoScalingRequest &request);
    DescribeTimeToLiveResponse * describeTimeToLive(const DescribeTimeToLiveRequest &request);
    DisableKinesisStreamingDestinationResponse * disableKinesisStreamingDestination(const DisableKinesisStreamingDestinationRequest &request);
    EnableKinesisStreamingDestinationResponse * enableKinesisStreamingDestination(const EnableKinesisStreamingDestinationRequest &request);
    ExecuteStatementResponse * executeStatement(const ExecuteStatementRequest &request);
    ExecuteTransactionResponse * executeTransaction(const ExecuteTransactionRequest &request);
    ExportTableToPointInTimeResponse * exportTableToPointInTime(const ExportTableToPointInTimeRequest &request);
    GetItemResponse * getItem(const GetItemRequest &request);
    ListBackupsResponse * listBackups(const ListBackupsRequest &request);
    ListContributorInsightsResponse * listContributorInsights(const ListContributorInsightsRequest &request);
    ListExportsResponse * listExports(const ListExportsRequest &request);
    ListGlobalTablesResponse * listGlobalTables(const ListGlobalTablesRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    ListTagsOfResourceResponse * listTagsOfResource(const ListTagsOfResourceRequest &request);
    PutItemResponse * putItem(const PutItemRequest &request);
    QueryResponse * query(const QueryRequest &request);
    RestoreTableFromBackupResponse * restoreTableFromBackup(const RestoreTableFromBackupRequest &request);
    RestoreTableToPointInTimeResponse * restoreTableToPointInTime(const RestoreTableToPointInTimeRequest &request);
    ScanResponse * scan(const ScanRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TransactGetItemsResponse * transactGetItems(const TransactGetItemsRequest &request);
    TransactWriteItemsResponse * transactWriteItems(const TransactWriteItemsRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContinuousBackupsResponse * updateContinuousBackups(const UpdateContinuousBackupsRequest &request);
    UpdateContributorInsightsResponse * updateContributorInsights(const UpdateContributorInsightsRequest &request);
    UpdateGlobalTableResponse * updateGlobalTable(const UpdateGlobalTableRequest &request);
    UpdateGlobalTableSettingsResponse * updateGlobalTableSettings(const UpdateGlobalTableSettingsRequest &request);
    UpdateItemResponse * updateItem(const UpdateItemRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);
    UpdateTableReplicaAutoScalingResponse * updateTableReplicaAutoScaling(const UpdateTableReplicaAutoScalingRequest &request);
    UpdateTimeToLiveResponse * updateTimeToLive(const UpdateTimeToLiveRequest &request);

protected:
    /// @cond internal
    DynamoDBClientPrivate * const d_ptr; ///< Internal d-pointer.
    DynamoDBClient(DynamoDBClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DynamoDBClient)
    Q_DISABLE_COPY(DynamoDBClient)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
