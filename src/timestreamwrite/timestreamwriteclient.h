// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TIMESTREAMWRITECLIENT_H
#define QTAWS_TIMESTREAMWRITECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstimestreamwriteglobal.h"

class QNetworkReply;

namespace QtAws {
namespace TimestreamWrite {

class TimestreamWriteClientPrivate;
class CreateDatabaseRequest;
class CreateDatabaseResponse;
class CreateTableRequest;
class CreateTableResponse;
class DeleteDatabaseRequest;
class DeleteDatabaseResponse;
class DeleteTableRequest;
class DeleteTableResponse;
class DescribeDatabaseRequest;
class DescribeDatabaseResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class DescribeTableRequest;
class DescribeTableResponse;
class ListDatabasesRequest;
class ListDatabasesResponse;
class ListTablesRequest;
class ListTablesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatabaseRequest;
class UpdateDatabaseResponse;
class UpdateTableRequest;
class UpdateTableResponse;
class WriteRecordsRequest;
class WriteRecordsResponse;

class QTAWSTIMESTREAMWRITE_EXPORT TimestreamWriteClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TimestreamWriteClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TimestreamWriteClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDatabaseResponse * createDatabase(const CreateDatabaseRequest &request);
    CreateTableResponse * createTable(const CreateTableRequest &request);
    DeleteDatabaseResponse * deleteDatabase(const DeleteDatabaseRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    DescribeDatabaseResponse * describeDatabase(const DescribeDatabaseRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeTableResponse * describeTable(const DescribeTableRequest &request);
    ListDatabasesResponse * listDatabases(const ListDatabasesRequest &request);
    ListTablesResponse * listTables(const ListTablesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatabaseResponse * updateDatabase(const UpdateDatabaseRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);
    WriteRecordsResponse * writeRecords(const WriteRecordsRequest &request);

private:
    Q_DECLARE_PRIVATE(TimestreamWriteClient)
    Q_DISABLE_COPY(TimestreamWriteClient)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
