/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mediastoredataclient.h"
#include "mediastoredataclient_p.h"

#include "core/awssignaturev4.h"
#include "deleteobjectrequest.h"
#include "deleteobjectresponse.h"
#include "describeobjectrequest.h"
#include "describeobjectresponse.h"
#include "getobjectrequest.h"
#include "getobjectresponse.h"
#include "listitemsrequest.h"
#include "listitemsresponse.h"
#include "putobjectrequest.h"
#include "putobjectresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaStoreData
 * \brief The QtAws::MediaStoreData contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataClient
 *
 * \brief The MediaStoreDataClient class provides access to the AWS Elemental MediaStore Data Plane service.
 *
 * \ingroup MediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 */

/*!
 * \brief Constructs a MediaStoreDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaStoreDataClient::MediaStoreDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaStoreDataClientPrivate(this), parent)
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

/*!
 * \overload MediaStoreDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
MediaStoreDataClient::MediaStoreDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaStoreDataClientPrivate(this), parent)
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

/*!
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
    return qobject_cast<DeleteObjectResponse *>(send(request));
}

/*!
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
    return qobject_cast<DescribeObjectResponse *>(send(request));
}

/*!
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
    return qobject_cast<GetObjectResponse *>(send(request));
}

/*!
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
    return qobject_cast<ListItemsResponse *>(send(request));
}

/*!
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
    return qobject_cast<PutObjectResponse *>(send(request));
}

/*!
 * @internal
 *
 * @class  MediaStoreDataClientPrivate
 *
 * @brief  Private implementation for MediaStoreDataClient.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new MediaStoreDataClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaStoreDataClient instance.
 */
MediaStoreDataClientPrivate::MediaStoreDataClientPrivate(MediaStoreDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaStoreData
} // namespace QtAws
