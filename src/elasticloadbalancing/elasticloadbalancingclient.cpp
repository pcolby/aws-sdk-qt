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

#include "elasticloadbalancingclient.h"
#include "elasticloadbalancingclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ElasticLoadBalancingClient
 *
 * @brief  Client for Elastic Load Balancing
 *
 * <fullname>Elastic Load Balancing</fullname>
 *
 * A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 * of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 * traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 * listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 * protocol and port number for connections from the load balancer to the
 *
 * instances>
 *
 * Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 * Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 *
 * Guide</a>>
 *
 * This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 * Load Balancers and Network Load
 *
 * Balancers>
 *
 * To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 * instances with the load balancer using
 *
 * <a>RegisterInstancesWithLoadBalancer</a>>
 *
 * All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 * repeat an operation, it succeeds with a 200 OK response
 */

/**
 * @brief  Constructs a new ElasticLoadBalancingClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticLoadBalancingClient object.
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
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingClientPrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingClient instance.
 */
ElasticLoadBalancingClientPrivate::ElasticLoadBalancingClientPrivate(ElasticLoadBalancingClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticLoadBalancing
} // namespace AWS
