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
 * With Application Auto Scaling, you can configure automatic scaling for your scalable AWS resources. You can use
 * Application Auto Scaling to accomplish the following
 *
 * tasks> <ul> <li>
 *
 * Define scaling policies to automatically scale your AWS
 *
 * resource> </li> <li>
 *
 * Scale your resources in response to CloudWatch
 *
 * alarm> </li> <li>
 *
 * Schedule one-time or recurring scaling
 *
 * action> </li> <li>
 *
 * View the history of your scaling
 *
 * event> </li> </ul>
 *
 * Application Auto Scaling can scale the following AWS
 *
 * resources> <ul> <li>
 *
 * Amazon ECS services. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-auto-scaling.html">Service Auto Scaling</a> in
 * the <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>> </li> <li>
 *
 * Amazon EC2 Spot fleets. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/fleet-auto-scaling.html">Automatic Scaling for Spot Fleet</a>
 * in the <i>Amazon EC2 User
 *
 * Guide</i>> </li> <li>
 *
 * Amazon EMR clusters. For more information, see <a
 * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/ManagementGuide/emr-automatic-scaling.html">Using Automatic
 * Scaling in Amazon EMR</a> in the <i>Amazon EMR Management
 *
 * Guide</i>> </li> <li>
 *
 * AppStream 2.0 fleets. For more information, see <a
 * href="http://docs.aws.amazon.com/appstream2/latest/developerguide/autoscaling.html">Fleet Auto Scaling for Amazon
 * AppStream 2.0</a> in the <i>Amazon AppStream 2.0 Developer
 *
 * Guide</i>> </li> <li>
 *
 * Provisioned read and write capacity for Amazon DynamoDB tables and global secondary indexes. For more information, see
 * <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/AutoScaling.html">Managing Throughput Capacity
 * Automatically with DynamoDB Auto Scaling</a> in the <i>Amazon DynamoDB Developer
 *
 * Guide</i>> </li> <li>
 *
 * Amazon Aurora Replicas. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Integrating.AutoScaling.html">Using Amazon Aurora
 * Auto Scaling with Aurora
 *
 * Replicas</a>> </li> <li>
 *
 * Amazon SageMaker endpoints. For more information, see <a
 * href="http://docs.aws.amazon.com/sagemaker/latest/dg/endpoint-auto-scaling.html">Automatically Scaling Amazon SageMaker
 *
 * Models</a>> </li> </ul>
 *
 * To configure automatic scaling for multiple resources across multiple services, use AWS Auto Scaling to create a scaling
 * plan for your application. For more information, see <a href="http://aws.amazon.com/autoscaling">AWS Auto
 *
 * Scaling</a>>
 *
 * For a list of supported regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#as-app_region">AWS
 * Regions and Endpoints: Application Auto Scaling</a> in the <i>AWS General
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
