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

#include "mediastoredataclient.h"
#include "mediastoredataclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MediaStoreData {

/**
 * @class  MediaStoreDataClient
 *
 * @brief  Client for AWS Elemental MediaStore Data Plane
 *
 * An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 * fundamental entities that are stored in AWS Elemental
 */

/**
 * @brief  Constructs a new MediaStoreDataClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MediaStoreDataClient::MediaStoreDataClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaStoreDataClientPrivate(this), parent)
{
    Q_D(MediaStoreDataClient);
    d->apiVersion = QStringLiteral("2017-09-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("data.mediastore");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaStore Data Plane");
    d->serviceName = QStringLiteral("mediastore");
}

/**
 * @brief  Constructs a new MediaStoreDataClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
MediaStoreDataClient::MediaStoreDataClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaStoreDataClientPrivate(this), parent)
{
    Q_D(MediaStoreDataClient);
    d->apiVersion = QStringLiteral("2017-09-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("data.mediastore");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaStore Data Plane");
    d->serviceName = QStringLiteral("mediastore");
}

/**
 * Deletes an object at the specified
 *
 * @param  request Request to send to AWS Elemental MediaStore Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteObjectResponse * MediaStoreDataClient::deleteObject(const DeleteObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Gets the headers for an object at the specified
 *
 * @param  request Request to send to AWS Elemental MediaStore Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeObjectResponse * MediaStoreDataClient::describeObject(const DescribeObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Downloads the object at the specified
 *
 * @param  request Request to send to AWS Elemental MediaStore Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectResponse * MediaStoreDataClient::getObject(const GetObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Provides a list of metadata entries about folders and objects in the specified
 *
 * @param  request Request to send to AWS Elemental MediaStore Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListItemsResponse * MediaStoreDataClient::listItems(const ListItemsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Uploads an object to the specified path. Object sizes are limited to 10
 *
 * @param  request Request to send to AWS Elemental MediaStore Data Plane.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutObjectResponse * MediaStoreDataClient::putObject(const PutObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  MediaStoreDataClientPrivate
 *
 * @brief  Private implementation for MediaStoreDataClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaStoreDataClient instance.
 */
MediaStoreDataClientPrivate::MediaStoreDataClientPrivate(MediaStoreDataClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MediaStoreData
} // namespace AWS
