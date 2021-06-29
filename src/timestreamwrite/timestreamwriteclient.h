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

protected:
    /// @cond internal
    TimestreamWriteClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit TimestreamWriteClient(TimestreamWriteClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(TimestreamWriteClient)
    Q_DISABLE_COPY(TimestreamWriteClient)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
