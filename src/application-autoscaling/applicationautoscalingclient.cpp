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

#include "applicationautoscalingclient.h"
#include "applicationautoscalingclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  ApplicationAutoScalingClient
 *
 * @brief  Client for Application Auto Scaling
 *
 * Application Auto Scaling is a general purpose Auto Scaling service for supported elastic AWS resources. With Application
 * Auto Scaling, you can automatically scale your AWS resources, with an experience similar to that of Auto
 *
 * Scaling>
 *
 * Application Auto Scaling supports scaling the following AWS
 *
 * resources> <ul> <li>
 *
 * Amazon ECS
 *
 * service> </li> <li>
 *
 * Amazon EC2 Spot fleet
 *
 * instance> </li> </ul>
 *
 * You can use Application Auto Scaling to accomplish the following
 *
 * tasks> <ul> <li>
 *
 * Define scaling policies for automatically adjusting your AWS
 *
 * resource> </li> <li>
 *
 * Scale your resources in response to CloudWatch
 *
 * alarm> </li> <li>
 *
 * View history of your scaling events
 *
 * </p </li> </ul>
 *
 * Application Auto Scaling is available in the following
 *
 * regions> <ul> <li>
 *
 * <code>us-east-1</code>
 *
 * </p </li> <li>
 *
 * <code>us-west-1</code>
 *
 * </p </li> <li>
 *
 * <code>us-west-2</code>
 *
 * </p </li> <li>
 *
 * <code>ap-southeast-1</code>
 *
 * </p </li> <li>
 *
 * <code>ap-southeast-2</code>
 *
 * </p </li> <li>
 *
 * <code>ap-northeast-1</code>
 *
 * </p </li> <li>
 *
 * <code>eu-central-1</code>
 *
 * </p </li> <li>
 *
 * <code>eu-west-1</code>
 */

/**
 * @brief  Constructs a new ApplicationAutoScalingClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ApplicationAutoScalingClient object.
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
ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ApplicationAutoScalingClientPrivate
 *
 * @brief  Private implementation for ApplicationAutoScalingClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplicationAutoScalingClientPrivate object.
 *
 * @param  q  Pointer to this object's public ApplicationAutoScalingClient instance.
 */
ApplicationAutoScalingClientPrivate::ApplicationAutoScalingClientPrivate(ApplicationAutoScalingClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ApplicationAutoScaling
} // namespace AWS
