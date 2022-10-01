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

#ifndef QTAWS_BACKUPSTORAGECLIENT_H
#define QTAWS_BACKUPSTORAGECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbackupstorageglobal.h"

class QNetworkReply;

namespace QtAws {
namespace BackupStorage {

class BackupStorageClientPrivate;
class DeleteObjectRequest;
class DeleteObjectResponse;
class GetChunkRequest;
class GetChunkResponse;
class GetObjectMetadataRequest;
class GetObjectMetadataResponse;
class ListChunksRequest;
class ListChunksResponse;
class ListObjectsRequest;
class ListObjectsResponse;
class NotifyObjectCompleteRequest;
class NotifyObjectCompleteResponse;
class PutChunkRequest;
class PutChunkResponse;
class PutObjectRequest;
class PutObjectResponse;
class StartObjectRequest;
class StartObjectResponse;

class QTAWSBACKUPSTORAGE_EXPORT BackupStorageClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BackupStorageClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BackupStorageClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteObjectResponse * deleteObject(const DeleteObjectRequest &request);
    GetChunkResponse * getChunk(const GetChunkRequest &request);
    GetObjectMetadataResponse * getObjectMetadata(const GetObjectMetadataRequest &request);
    ListChunksResponse * listChunks(const ListChunksRequest &request);
    ListObjectsResponse * listObjects(const ListObjectsRequest &request);
    NotifyObjectCompleteResponse * notifyObjectComplete(const NotifyObjectCompleteRequest &request);
    PutChunkResponse * putChunk(const PutChunkRequest &request);
    PutObjectResponse * putObject(const PutObjectRequest &request);
    StartObjectResponse * startObject(const StartObjectRequest &request);

private:
    Q_DECLARE_PRIVATE(BackupStorageClient)
    Q_DISABLE_COPY(BackupStorageClient)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
