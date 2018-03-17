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

#include "elasticloadbalancingv2client.h"
#include "elasticloadbalancingv2client_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ElasticLoadBalancingv2Client
 *
 * @brief  Client for Elastic Load Balancing (Elastic Load Balancing v2)
 *
 * <fullname>Elastic Load Balancing</fullname>
 *
 * A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 * the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 * that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 * specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 * the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 * to the targets, and with health check settings to be used when checking the health status of the
 *
 * targets>
 *
 * Elastic Load Balancing supports two types of load balancers: Classic load balancers and Application load balancers
 * (new). A Classic load balancer makes routing and load balancing decisions either at the transport layer (TCP/SSL) or the
 * application layer (HTTP/HTTPS), and supports either EC2-Classic or a VPC. An Application load balancer makes routing and
 * load balancing decisions at the application layer (HTTP/HTTPS), supports path-based routing, and can route requests to
 * one or more ports on each EC2 instance or container instance in your virtual private cloud (VPC). For more information,
 * see the <a href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 *
 * Guide</a>>
 *
 * This reference covers the 2015-12-01 API, which supports Application load balancers. The 2012-06-01 API supports Classic
 * load
 *
 * balancers>
 *
 * To get started with an Application load balancer, complete the following
 *
 * tasks> <ol> <li>
 *
 * Create a load balancer using
 *
 * <a>CreateLoadBalancer</a>> </li> <li>
 *
 * Create a target group using
 *
 * <a>CreateTargetGroup</a>> </li> <li>
 *
 * Register targets for the target group using
 *
 * <a>RegisterTargets</a>> </li> <li>
 *
 * Create one or more listeners for your load balancer using
 *
 * <a>CreateListener</a>> </li> <li>
 *
 * (Optional) Create one or more rules for content routing based on URL using
 *
 * <a>CreateRule</a>> </li> </ol>
 *
 * To delete an Application load balancer and its related resources, complete the following
 *
 * tasks> <ol> <li>
 *
 * Delete the load balancer using
 *
 * <a>DeleteLoadBalancer</a>> </li> <li>
 *
 * Delete the target group using
 *
 * <a>DeleteTargetGroup</a>> </li> </ol>
 *
 * All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 * operation, it
 */

/**
 * @brief  Constructs a new ElasticLoadBalancingv2Client object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingv2ClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingv2Client);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticLoadBalancingv2Client object.
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
ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingv2ClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingv2Client);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingv2ClientPrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingv2Client.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingv2Client instance.
 */
ElasticLoadBalancingv2ClientPrivate::ElasticLoadBalancingv2ClientPrivate(ElasticLoadBalancingv2Client * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
