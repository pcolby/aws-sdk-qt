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

#include "applicationautoscalingclient.h"
#include "applicationautoscalingclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->apiVersion = QStringLiteral("2016-02-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
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
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->apiVersion = QStringLiteral("2016-02-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
}

/**
 * Deletes the specified Application Auto Scaling scaling
 *
 * policy>
 *
 * Deleting a policy deletes the underlying alarm action, but does not delete the CloudWatch alarm associated with the
 * scaling policy, even if it no longer has an associated
 *
 * action>
 *
 * To create a scaling policy or update an existing one, see
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteScalingPolicyResponse * ApplicationAutoScalingClient::deleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    return qobject_cast<DeleteScalingPolicyResponse *>(send(request));
}

/**
 * Deletes the specified Application Auto Scaling scheduled
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteScheduledActionResponse * ApplicationAutoScalingClient::deleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    return qobject_cast<DeleteScheduledActionResponse *>(send(request));
}

/**
 * Deregisters a scalable
 *
 * target>
 *
 * Deregistering a scalable target deletes the scaling policies that are associated with
 *
 * it>
 *
 * To create a scalable target or update an existing one, see
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterScalableTargetResponse * ApplicationAutoScalingClient::deregisterScalableTarget(const DeregisterScalableTargetRequest &request)
{
    return qobject_cast<DeregisterScalableTargetResponse *>(send(request));
}

/**
 * Gets information about the scalable targets in the specified
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceIds</code> and <code>ScalableDimension</code>
 *
 * parameters>
 *
 * To create a scalable target or update an existing one, see <a>RegisterScalableTarget</a>. If you are no longer using a
 * scalable target, you can deregister it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalableTargetsResponse * ApplicationAutoScalingClient::describeScalableTargets(const DescribeScalableTargetsRequest &request)
{
    return qobject_cast<DescribeScalableTargetsResponse *>(send(request));
}

/**
 * Provides descriptive information about the scaling activities in the specified namespace from the previous six
 *
 * weeks>
 *
 * You can filter the results using the <code>ResourceId</code> and <code>ScalableDimension</code>
 *
 * parameters>
 *
 * Scaling activities are triggered by CloudWatch alarms that are associated with scaling policies. To view the scaling
 * policies for a service namespace, see <a>DescribeScalingPolicies</a>. To create a scaling policy or update an existing
 * one, see
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingActivitiesResponse * ApplicationAutoScalingClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request)
{
    return qobject_cast<DescribeScalingActivitiesResponse *>(send(request));
}

/**
 * Describes the scaling policies for the specified service
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceId</code>, <code>ScalableDimension</code>, and
 * <code>PolicyNames</code>
 *
 * parameters>
 *
 * To create a scaling policy or update an existing one, see <a>PutScalingPolicy</a>. If you are no longer using a scaling
 * policy, you can delete it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingPoliciesResponse * ApplicationAutoScalingClient::describeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    return qobject_cast<DescribeScalingPoliciesResponse *>(send(request));
}

/**
 * Describes the scheduled actions for the specified service
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceId</code>, <code>ScalableDimension</code>, and
 * <code>ScheduledActionNames</code>
 *
 * parameters>
 *
 * To create a scheduled action or update an existing one, see <a>PutScheduledAction</a>. If you are no longer using a
 * scheduled action, you can delete it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScheduledActionsResponse * ApplicationAutoScalingClient::describeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    return qobject_cast<DescribeScheduledActionsResponse *>(send(request));
}

/**
 * Creates or updates a policy for an Application Auto Scaling scalable
 *
 * target>
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scaling policy applies
 * to the scalable target identified by those three attributes. You cannot create a scaling policy until you register the
 * scalable target using
 *
 * <a>RegisterScalableTarget</a>>
 *
 * To update a policy, specify its policy name and the parameters that you want to change. Any parameters that you don't
 * specify are not changed by this update
 *
 * request>
 *
 * You can view the scaling policies for a service namespace using <a>DescribeScalingPolicies</a>. If you are no longer
 * using a scaling policy, you can delete it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutScalingPolicyResponse * ApplicationAutoScalingClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/**
 * Creates or updates a scheduled action for an Application Auto Scaling scalable
 *
 * target>
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scheduled action
 * applies to the scalable target identified by those three attributes. You cannot create a scheduled action until you
 * register the scalable target using
 *
 * <a>RegisterScalableTarget</a>>
 *
 * To update an action, specify its name and the parameters that you want to change. If you don't specify start and end
 * times, the old values are deleted. Any other parameters that you don't specify are not changed by this update
 *
 * request>
 *
 * You can view the scheduled actions using <a>DescribeScheduledActions</a>. If you are no longer using a scheduled action,
 * you can delete it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutScheduledActionResponse * ApplicationAutoScalingClient::putScheduledAction(const PutScheduledActionRequest &request)
{
    return qobject_cast<PutScheduledActionResponse *>(send(request));
}

/**
 * Registers or updates a scalable target. A scalable target is a resource that Application Auto Scaling can scale out or
 * scale in. After you have registered a scalable target, you can use this operation to update the minimum and maximum
 * values for its scalable
 *
 * dimension>
 *
 * After you register a scalable target, you can create and apply scaling policies using <a>PutScalingPolicy</a>. You can
 * view the scaling policies for a service namespace using <a>DescribeScalableTargets</a>. If you no longer need a scalable
 * target, you can deregister it using
 *
 * @param  request Request to send to Application Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterScalableTargetResponse * ApplicationAutoScalingClient::registerScalableTarget(const RegisterScalableTargetRequest &request)
{
    return qobject_cast<RegisterScalableTargetResponse *>(send(request));
}

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
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
