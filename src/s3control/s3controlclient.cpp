/*
    Copyright 2013-2018 Paul Colby

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

#include "s3controlclient.h"
#include "s3controlclient_p.h"

#include "core/awssignatures3v4.h"
#include "deletepublicaccessblockrequest.h"
#include "deletepublicaccessblockresponse.h"
#include "getpublicaccessblockrequest.h"
#include "getpublicaccessblockresponse.h"
#include "putpublicaccessblockrequest.h"
#include "putpublicaccessblockresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::S3Control
 * \brief Contains classess for accessing AWS S3 Control.
 *
 * \inmodule QtAwsS3Control
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::S3ControlClient
 * \brief The S3ControlClient class provides access to the AWS S3 Control service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 */

/*!
 * \brief Constructs a S3ControlClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
S3ControlClient::S3ControlClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ControlClientPrivate(this), parent)
{
    Q_D(S3ControlClient);
    d->apiVersion = QStringLiteral("2018-08-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("s3-control");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS S3 Control");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * \overload S3ControlClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
S3ControlClient::S3ControlClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new S3ControlClientPrivate(this), parent)
{
    Q_D(S3ControlClient);
    d->apiVersion = QStringLiteral("2018-08-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("s3-control");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS S3 Control");
    d->serviceName = QStringLiteral("s3");
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * DeletePublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the Public Access Block configuration for an Amazon Web Services
 */
DeletePublicAccessBlockResponse * S3ControlClient::deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request)
{
    return qobject_cast<DeletePublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * GetPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Public Access Block configuration for an Amazon Web Services
 */
GetPublicAccessBlockResponse * S3ControlClient::getPublicAccessBlock(const GetPublicAccessBlockRequest &request)
{
    return qobject_cast<GetPublicAccessBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the S3ControlClient service, and returns a pointer to an
 * PutPublicAccessBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or modifies the Public Access Block configuration for an Amazon Web Services
 */
PutPublicAccessBlockResponse * S3ControlClient::putPublicAccessBlock(const PutPublicAccessBlockRequest &request)
{
    return qobject_cast<PutPublicAccessBlockResponse *>(send(request));
}

/*!
 * \class QtAws::S3Control::S3ControlClientPrivate
 * \brief The S3ControlClientPrivate class provides private implementation for S3ControlClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a S3ControlClientPrivate object with public implementation \a q.
 */
S3ControlClientPrivate::S3ControlClientPrivate(S3ControlClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureS3V4();
}

} // namespace S3Control
} // namespace QtAws
