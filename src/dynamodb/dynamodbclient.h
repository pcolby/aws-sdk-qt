/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DYNAMODBCLIENT_H
#define QTAWS_DYNAMODBCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace DynamoDB {

class DynamoDBClientPrivate;
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
class DescribeGlobalTableRequest;
class DescribeGlobalTableResponse;
class DescribeLimitsRequest;
class DescribeLimitsResponse;
class DescribeTableRequest;
class DescribeTableResponse;
class DescribeTimeToLiveRequest;
class DescribeTimeToLiveResponse;
class GetItemRequest;
class GetItemResponse;
class ListBackupsRequest;
class ListBackupsResponse;
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
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContinuousBackupsRequest;
class UpdateContinuousBackupsResponse;
class UpdateGlobalTableRequest;
class UpdateGlobalTableResponse;
class UpdateItemRequest;
class UpdateItemResponse;
class UpdateTableRequest;
class UpdateTableResponse;
class UpdateTimeToLiveRequest;
class UpdateTimeToLiveResponse;

class QTAWS_EXPORT DynamoDBClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DynamoDBClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DynamoDBClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
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
    DescribeGlobalTableResponse * describeGlobalTable(const DescribeGlobalTableRequest &request);
    DescribeLimitsResponse * describeLimits(const DescribeLimitsRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    DescribeTimeToLiveResponse * describeTimeToLive(const DescribeTimeToLiveRequest &request);
    GetItemResponse * getItem(const GetItemRequest &request);
    ListBackupsResponse * listBackups(const ListBackupsRequest &request);
    ListGlobalTablesResponse * listGlobalTables(const ListGlobalTablesRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    ListTagsOfResourceResponse * listTagsOfResource(const ListTagsOfResourceRequest &request);
    PutItemResponse * putItem(const PutItemRequest &request);
    QueryResponse * query(const QueryRequest &request);
    RestoreTableFromBackupResponse * restoreTableFromBackup(const RestoreTableFromBackupRequest &request);
    RestoreTableToPointInTimeResponse * restoreTableToPointInTime(const RestoreTableToPointInTimeRequest &request);
    ScanResponse * scan(const ScanRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContinuousBackupsResponse * updateContinuousBackups(const UpdateContinuousBackupsRequest &request);
    UpdateGlobalTableResponse * updateGlobalTable(const UpdateGlobalTableRequest &request);
    UpdateItemResponse * updateItem(const UpdateItemRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);
    UpdateTimeToLiveResponse * updateTimeToLive(const UpdateTimeToLiveRequest &request);

private:
    Q_DECLARE_PRIVATE(DynamoDBClient)
    Q_DISABLE_COPY(DynamoDBClient)

};

} // namespace DynamoDB
} // namespace AWS

#endif
