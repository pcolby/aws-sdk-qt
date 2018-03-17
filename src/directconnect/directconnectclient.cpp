/*
    Copyright 2013-2016 Paul Colby

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

#include "directconnectclient.h"
#include "directconnectclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DirectConnectClient
 *
 * @brief  Client for AWS Direct Connect
 *
 * AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 * Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 * With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 * Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 * (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 * to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 * single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 * Regions and AWS GovCloud
 */

/**
 * @brief  Constructs a new DirectConnectClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DirectConnectClient::DirectConnectClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new DirectConnectClient object.
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
DirectConnectClient::DirectConnectClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  DirectConnectClientPrivate
 *
 * @brief  Private implementation for DirectConnectClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DirectConnectClientPrivate object.
 *
 * @param  q  Pointer to this object's public DirectConnectClient instance.
 */
DirectConnectClientPrivate::DirectConnectClientPrivate(DirectConnectClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DirectConnect
} // namespace AWS
