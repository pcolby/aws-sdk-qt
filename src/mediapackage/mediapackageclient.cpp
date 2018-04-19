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

#include "mediapackageclient.h"
#include "mediapackageclient_p.h"

#include "core/awssignaturev4.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createoriginendpointrequest.h"
#include "createoriginendpointresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deleteoriginendpointrequest.h"
#include "deleteoriginendpointresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describeoriginendpointrequest.h"
#include "describeoriginendpointresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listoriginendpointsrequest.h"
#include "listoriginendpointsresponse.h"
#include "rotatechannelcredentialsrequest.h"
#include "rotatechannelcredentialsresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updateoriginendpointrequest.h"
#include "updateoriginendpointresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaPackage
 * \brief The QtAws::MediaPackage contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::MediaPackageClient
 * \brief The MediaPackageClient class provides access to the AWS Elemental MediaPackage service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaPackage
 *
 */

/*!
 * \brief Constructs a MediaPackageClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaPackageClient::MediaPackageClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaPackageClientPrivate(this), parent)
{
    Q_D(MediaPackageClient);
    d->apiVersion = QStringLiteral("2017-10-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mediapackage");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaPackage");
    d->serviceName = QStringLiteral("mediapackage");
}

/*!
 * \overload MediaPackageClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
MediaPackageClient::MediaPackageClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaPackageClientPrivate(this), parent)
{
    Q_D(MediaPackageClient);
    d->apiVersion = QStringLiteral("2017-10-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mediapackage");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaPackage");
    d->serviceName = QStringLiteral("mediapackage");
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateChannelResponse * MediaPackageClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * CreateOriginEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateOriginEndpointResponse * MediaPackageClient::createOriginEndpoint(const CreateOriginEndpointRequest &request)
{
    return qobject_cast<CreateOriginEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteChannelResponse * MediaPackageClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * DeleteOriginEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteOriginEndpointResponse * MediaPackageClient::deleteOriginEndpoint(const DeleteOriginEndpointRequest &request)
{
    return qobject_cast<DeleteOriginEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeChannelResponse * MediaPackageClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * DescribeOriginEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeOriginEndpointResponse * MediaPackageClient::describeOriginEndpoint(const DescribeOriginEndpointRequest &request)
{
    return qobject_cast<DescribeOriginEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListChannelsResponse * MediaPackageClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * ListOriginEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListOriginEndpointsResponse * MediaPackageClient::listOriginEndpoints(const ListOriginEndpointsRequest &request)
{
    return qobject_cast<ListOriginEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * RotateChannelCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
RotateChannelCredentialsResponse * MediaPackageClient::rotateChannelCredentials(const RotateChannelCredentialsRequest &request)
{
    return qobject_cast<RotateChannelCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateChannelResponse * MediaPackageClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaPackageClient service, and returns a pointer to an
 * UpdateOriginEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateOriginEndpointResponse * MediaPackageClient::updateOriginEndpoint(const UpdateOriginEndpointRequest &request)
{
    return qobject_cast<UpdateOriginEndpointResponse *>(send(request));
}

/*!
 * \class QtAws::MediaPackage::MediaPackageClientPrivate
 * \brief The MediaPackageClientPrivate class provides private implementation for MediaPackageClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageClientPrivate object with public implementation \a q.
 */
MediaPackageClientPrivate::MediaPackageClientPrivate(MediaPackageClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaPackage
} // namespace QtAws
