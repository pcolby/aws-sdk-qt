// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
