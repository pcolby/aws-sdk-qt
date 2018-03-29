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

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MediaPackage {

/**
 * @class  MediaPackageClient
 *
 * @brief  Client for AWS Elemental MediaPackage
 *
 */

/**
 * @brief  Constructs a new MediaPackageClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MediaPackageClient::MediaPackageClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaPackageClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new MediaPackageClient object.
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
MediaPackageClient::MediaPackageClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaPackageClientPrivate(this), parent)
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

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateChannelResponse * MediaPackageClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateOriginEndpointResponse * MediaPackageClient::createOriginEndpoint(const CreateOriginEndpointRequest &request)
{
    return qobject_cast<CreateOriginEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteChannelResponse * MediaPackageClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteOriginEndpointResponse * MediaPackageClient::deleteOriginEndpoint(const DeleteOriginEndpointRequest &request)
{
    return qobject_cast<DeleteOriginEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeChannelResponse * MediaPackageClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOriginEndpointResponse * MediaPackageClient::describeOriginEndpoint(const DescribeOriginEndpointRequest &request)
{
    return qobject_cast<DescribeOriginEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListChannelsResponse * MediaPackageClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOriginEndpointsResponse * MediaPackageClient::listOriginEndpoints(const ListOriginEndpointsRequest &request)
{
    return qobject_cast<ListOriginEndpointsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RotateChannelCredentialsResponse * MediaPackageClient::rotateChannelCredentials(const RotateChannelCredentialsRequest &request)
{
    return qobject_cast<RotateChannelCredentialsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateChannelResponse * MediaPackageClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to AWS Elemental MediaPackage.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateOriginEndpointResponse * MediaPackageClient::updateOriginEndpoint(const UpdateOriginEndpointRequest &request)
{
    return qobject_cast<UpdateOriginEndpointResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  MediaPackageClientPrivate
 *
 * @brief  Private implementation for MediaPackageClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaPackageClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaPackageClient instance.
 */
MediaPackageClientPrivate::MediaPackageClientPrivate(MediaPackageClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MediaPackage
} // namespace AWS
