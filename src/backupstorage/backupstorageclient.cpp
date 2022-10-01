// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backupstorageclient.h"
#include "backupstorageclient_p.h"

#include "core/awssignaturev4.h"
#include "deleteobjectrequest.h"
#include "deleteobjectresponse.h"
#include "getchunkrequest.h"
#include "getchunkresponse.h"
#include "getobjectmetadatarequest.h"
#include "getobjectmetadataresponse.h"
#include "listchunksrequest.h"
#include "listchunksresponse.h"
#include "listobjectsrequest.h"
#include "listobjectsresponse.h"
#include "notifyobjectcompleterequest.h"
#include "notifyobjectcompleteresponse.h"
#include "putchunkrequest.h"
#include "putchunkresponse.h"
#include "putobjectrequest.h"
#include "putobjectresponse.h"
#include "startobjectrequest.h"
#include "startobjectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::BackupStorage
 * \brief Contains classess for accessing AWS Backup Storage.
 *
 * \inmodule QtAwsBackupStorage
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::BackupStorageClient
 * \brief The BackupStorageClient class provides access to the AWS Backup Storage service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackupStorage
 *
 */

/*!
 * \brief Constructs a BackupStorageClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BackupStorageClient::BackupStorageClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupStorageClientPrivate(this), parent)
{
    Q_D(BackupStorageClient);
    d->apiVersion = QStringLiteral("2018-04-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("backupstorage");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Backup Storage");
    d->serviceName = QStringLiteral("backup-storage");
}

/*!
 * \overload BackupStorageClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BackupStorageClient::BackupStorageClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BackupStorageClientPrivate(this), parent)
{
    Q_D(BackupStorageClient);
    d->apiVersion = QStringLiteral("2018-04-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("backupstorage");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Backup Storage");
    d->serviceName = QStringLiteral("backup-storage");
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * DeleteObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteObjectResponse * BackupStorageClient::deleteObject(const DeleteObjectRequest &request)
{
    return qobject_cast<DeleteObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * GetChunkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetChunkResponse * BackupStorageClient::getChunk(const GetChunkRequest &request)
{
    return qobject_cast<GetChunkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * GetObjectMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetObjectMetadataResponse * BackupStorageClient::getObjectMetadata(const GetObjectMetadataRequest &request)
{
    return qobject_cast<GetObjectMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * ListChunksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListChunksResponse * BackupStorageClient::listChunks(const ListChunksRequest &request)
{
    return qobject_cast<ListChunksResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * ListObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListObjectsResponse * BackupStorageClient::listObjects(const ListObjectsRequest &request)
{
    return qobject_cast<ListObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * NotifyObjectCompleteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
NotifyObjectCompleteResponse * BackupStorageClient::notifyObjectComplete(const NotifyObjectCompleteRequest &request)
{
    return qobject_cast<NotifyObjectCompleteResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * PutChunkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutChunkResponse * BackupStorageClient::putChunk(const PutChunkRequest &request)
{
    return qobject_cast<PutChunkResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * PutObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutObjectResponse * BackupStorageClient::putObject(const PutObjectRequest &request)
{
    return qobject_cast<PutObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the BackupStorageClient service, and returns a pointer to an
 * StartObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartObjectResponse * BackupStorageClient::startObject(const StartObjectRequest &request)
{
    return qobject_cast<StartObjectResponse *>(send(request));
}

/*!
 * \class QtAws::BackupStorage::BackupStorageClientPrivate
 * \brief The BackupStorageClientPrivate class provides private implementation for BackupStorageClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a BackupStorageClientPrivate object with public implementation \a q.
 */
BackupStorageClientPrivate::BackupStorageClientPrivate(BackupStorageClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace BackupStorage
} // namespace QtAws
