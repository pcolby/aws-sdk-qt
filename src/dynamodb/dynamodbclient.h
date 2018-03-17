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

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace DynamoDB {

class DynamoDBClientPrivate;

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
    CreateTableResponse * createTable(const CreateTableRequest &request);
    DeleteItemResponse * deleteItem(const DeleteItemRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    DescribeLimitsResponse * describeLimits(const DescribeLimitsRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    GetItemResponse * getItem(const GetItemRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    PutItemResponse * putItem(const PutItemRequest &request);
    QueryResponse * query(const QueryRequest &request);
    ScanResponse * scan(const ScanRequest &request);
    UpdateItemResponse * updateItem(const UpdateItemRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);

private:
    Q_DECLARE_PRIVATE(DynamoDBClient)
    Q_DISABLE_COPY(DynamoDBClient)

};

} // namespace DynamoDB
} // namespace AWS

#endif
