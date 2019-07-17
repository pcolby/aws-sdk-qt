/*
    Copyright 2013-2019 Paul Colby

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
 * \brief Contains classess for accessing AWS Elemental MediaStore Data Plane.
 *
 * \inmodule QtAwsMediaStoreData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataClient
 * \brief The MediaStoreDataClient class provides access to the AWS Elemental MediaStore Data Plane service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaStoreData
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
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
 * Sends \a request to the MediaStoreDataClient service, and returns a pointer to an
 * DeleteObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an object at the specified
 */
DeleteObjectResponse * MediaStoreDataClient::deleteObject(const DeleteObjectRequest &request)
{
    return qobject_cast<DeleteObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreDataClient service, and returns a pointer to an
 * DescribeObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the headers for an object at the specified
 */
DescribeObjectResponse * MediaStoreDataClient::describeObject(const DescribeObjectRequest &request)
{
    return qobject_cast<DescribeObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreDataClient service, and returns a pointer to an
 * GetObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Downloads the object at the specified
 */
GetObjectResponse * MediaStoreDataClient::getObject(const GetObjectRequest &request)
{
    return qobject_cast<GetObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreDataClient service, and returns a pointer to an
 * ListItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of metadata entries about folders and objects in the specified
 */
ListItemsResponse * MediaStoreDataClient::listItems(const ListItemsRequest &request)
{
    return qobject_cast<ListItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreDataClient service, and returns a pointer to an
 * PutObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an object to the specified path. Object sizes are limited to 25
 */
PutObjectResponse * MediaStoreDataClient::putObject(const PutObjectRequest &request)
{
    return qobject_cast<PutObjectResponse *>(send(request));
}

/*!
 * \class QtAws::MediaStoreData::MediaStoreDataClientPrivate
 * \brief The MediaStoreDataClientPrivate class provides private implementation for MediaStoreDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a MediaStoreDataClientPrivate object with public implementation \a q.
 */
MediaStoreDataClientPrivate::MediaStoreDataClientPrivate(MediaStoreDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaStoreData
} // namespace QtAws
