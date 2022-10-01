/*
    Copyright 2013-2021 Paul Colby

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

#include "applicationautoscalingclient.h"
#include "applicationautoscalingclient_p.h"

#include "core/awssignaturev4.h"
#include "deletescalingpolicyrequest.h"
#include "deletescalingpolicyresponse.h"
#include "deletescheduledactionrequest.h"
#include "deletescheduledactionresponse.h"
#include "deregisterscalabletargetrequest.h"
#include "deregisterscalabletargetresponse.h"
#include "describescalabletargetsrequest.h"
#include "describescalabletargetsresponse.h"
#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesresponse.h"
#include "describescalingpoliciesrequest.h"
#include "describescalingpoliciesresponse.h"
#include "describescheduledactionsrequest.h"
#include "describescheduledactionsresponse.h"
#include "putscalingpolicyrequest.h"
#include "putscalingpolicyresponse.h"
#include "putscheduledactionrequest.h"
#include "putscheduledactionresponse.h"
#include "registerscalabletargetrequest.h"
#include "registerscalabletargetresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ApplicationAutoScaling
 * \brief Contains classess for accessing Application Auto Scaling.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingClient
 * \brief The ApplicationAutoScalingClient class provides access to the Application Auto Scaling service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon AppStream 2.0
 * 
 *  fleet> </li> <li>
 * 
 *  Amazon Aurora
 * 
 *  Replica> </li> <li>
 * 
 *  Amazon Comprehend document classification and entity recognizer
 * 
 *  endpoint> </li> <li>
 * 
 *  Amazon DynamoDB tables and global secondary indexes throughput
 * 
 *  capacit> </li> <li>
 * 
 *  Amazon ECS
 * 
 *  service> </li> <li>
 * 
 *  Amazon ElastiCache for Redis clusters (replication
 * 
 *  groups> </li> <li>
 * 
 *  Amazon EMR
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon Keyspaces (for Apache Cassandra)
 * 
 *  table> </li> <li>
 * 
 *  Lambda function provisioned
 * 
 *  concurrenc> </li> <li>
 * 
 *  Amazon Managed Streaming for Apache Kafka broker
 * 
 *  storag> </li> <li>
 * 
 *  Amazon Neptune
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon SageMaker endpoint
 * 
 *  variant> </li> <li>
 * 
 *  Spot Fleets (Amazon
 * 
 *  EC2> </li> <li>
 * 
 *  Custom resources provided by your own applications or
 * 
 *  service> </li> </ul>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Application Auto Scaling service API includes three key sets of actions:
 * 
 *  </p <ul> <li>
 * 
 *  Register and manage scalable targets - Register Amazon Web Services or custom resources as scalable targets (a resource
 *  that Application Auto Scaling can scale), set minimum and maximum capacity limits, and retrieve information on existing
 *  scalable
 * 
 *  targets> </li> <li>
 * 
 *  Configure and manage automatic scaling - Define scaling policies to dynamically scale your resources in response to
 *  CloudWatch alarms, schedule one-time or recurring scaling actions, and retrieve your recent scaling activity
 * 
 *  history> </li> <li>
 * 
 *  Suspend and resume scaling - Temporarily suspend and later resume automatic scaling by calling the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
 *  API action for any Application Auto Scaling scalable target. You can suspend and resume (individually or in combination)
 *  scale-out activities that are triggered by a scaling policy, scale-in activities that are triggered by a scaling policy,
 *  and scheduled
 * 
 *  scaling> </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, including information about granting IAM users required permissions for
 *  Application Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 */

/*!
 * \brief Constructs a ApplicationAutoScalingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ApplicationAutoScalingClient::ApplicationAutoScalingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ApplicationAutoScalingClientPrivate(this), parent)
{
    Q_D(ApplicationAutoScalingClient);
    d->apiVersion = QStringLiteral("2016-02-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("application-autoscaling");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
}

/*!
 * \overload ApplicationAutoScalingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
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
    d->endpointPrefix = QStringLiteral("application-autoscaling");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Application Auto Scaling");
    d->serviceName = QStringLiteral("application-autoscaling");
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeleteScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified scaling policy for an Application Auto Scaling scalable
 *
 * target>
 *
 * Deleting a step scaling policy deletes the underlying alarm action, but does not delete the CloudWatch alarm associated
 * with the scaling policy, even if it no longer has an associated
 *
 * action>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html#delete-step-scaling-policy">Delete
 * a step scaling policy</a> and <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html#delete-target-tracking-policy">Delete
 * a target tracking scaling policy</a> in the <i>Application Auto Scaling User
 */
DeleteScalingPolicyResponse * ApplicationAutoScalingClient::deleteScalingPolicy(const DeleteScalingPolicyRequest &request)
{
    return qobject_cast<DeleteScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeleteScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified scheduled action for an Application Auto Scaling scalable
 *
 * target>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/scheduled-scaling-additional-cli-commands.html#delete-scheduled-action">Delete
 * a scheduled action</a> in the <i>Application Auto Scaling User
 */
DeleteScheduledActionResponse * ApplicationAutoScalingClient::deleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    return qobject_cast<DeleteScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DeregisterScalableTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters an Application Auto Scaling scalable target when you have finished using it. To see which resources have
 * been registered, use <a
 * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
 *
 * </p <note>
 *
 * Deregistering a scalable target deletes the scaling policies and the scheduled actions that are associated with
 */
DeregisterScalableTargetResponse * ApplicationAutoScalingClient::deregisterScalableTarget(const DeregisterScalableTargetRequest &request)
{
    return qobject_cast<DeregisterScalableTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalableTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the scalable targets in the specified
 *
 * namespace>
 *
 * You can filter the results using <code>ResourceIds</code> and
 */
DescribeScalableTargetsResponse * ApplicationAutoScalingClient::describeScalableTargets(const DescribeScalableTargetsRequest &request)
{
    return qobject_cast<DescribeScalableTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalingActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides descriptive information about the scaling activities in the specified namespace from the previous six
 *
 * weeks>
 *
 * You can filter the results using <code>ResourceId</code> and
 */
DescribeScalingActivitiesResponse * ApplicationAutoScalingClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request)
{
    return qobject_cast<DescribeScalingActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScalingPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Application Auto Scaling scaling policies for the specified service
 *
 * namespace>
 *
 * You can filter the results using <code>ResourceId</code>, <code>ScalableDimension</code>, and
 *
 * <code>PolicyNames</code>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
 * tracking scaling policies</a> and <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
 * scaling policies</a> in the <i>Application Auto Scaling User
 */
DescribeScalingPoliciesResponse * ApplicationAutoScalingClient::describeScalingPolicies(const DescribeScalingPoliciesRequest &request)
{
    return qobject_cast<DescribeScalingPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * DescribeScheduledActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Application Auto Scaling scheduled actions for the specified service
 *
 * namespace>
 *
 * You can filter the results using the <code>ResourceId</code>, <code>ScalableDimension</code>, and
 * <code>ScheduledActionNames</code>
 *
 * parameters>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
 * scaling</a> and <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/scheduled-scaling-additional-cli-commands.html">Managing
 * scheduled scaling</a> in the <i>Application Auto Scaling User
 */
DescribeScheduledActionsResponse * ApplicationAutoScalingClient::describeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    return qobject_cast<DescribeScheduledActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * PutScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a scaling policy for an Application Auto Scaling scalable
 *
 * target>
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scaling policy applies
 * to the scalable target identified by those three attributes. You cannot create a scaling policy until you have
 * registered the resource as a scalable
 *
 * target>
 *
 * Multiple scaling policies can be in force at the same time for the same scalable target. You can have one or more target
 * tracking scaling policies, one or more step scaling policies, or both. However, there is a chance that multiple policies
 * could conflict, instructing the scalable target to scale out or in at the same time. Application Auto Scaling gives
 * precedence to the policy that provides the largest capacity for both scale out and scale in. For example, if one policy
 * increases capacity by 3, another policy increases capacity by 200 percent, and the current capacity is 10, Application
 * Auto Scaling uses the policy with the highest calculated capacity (200% of 10 = 20) and scales out to 30.
 *
 * </p
 *
 * We recommend caution, however, when using target tracking scaling policies with step scaling policies because conflicts
 * between these policies can cause undesirable behavior. For example, if the step scaling policy initiates a scale-in
 * activity before the target tracking policy is ready to scale in, the scale-in activity will not be blocked. After the
 * scale-in activity completes, the target tracking policy could instruct the scalable target to scale out again.
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-target-tracking.html">Target
 * tracking scaling policies</a> and <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-step-scaling-policies.html">Step
 * scaling policies</a> in the <i>Application Auto Scaling User
 *
 * Guide</i>> <note>
 *
 * If a scalable target is deregistered, the scalable target is no longer available to execute scaling policies. Any
 * scaling policies that were specified for the scalable target are
 */
PutScalingPolicyResponse * ApplicationAutoScalingClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * PutScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a scheduled action for an Application Auto Scaling scalable target.
 *
 * </p
 *
 * Each scalable target is identified by a service namespace, resource ID, and scalable dimension. A scheduled action
 * applies to the scalable target identified by those three attributes. You cannot create a scheduled action until you have
 * registered the resource as a scalable
 *
 * target>
 *
 * When start and end times are specified with a recurring schedule using a cron expression or rates, they form the
 * boundaries for when the recurring action starts and
 *
 * stops>
 *
 * To update a scheduled action, specify the parameters that you want to change. If you don't specify start and end times,
 * the old values are
 *
 * deleted>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/application/userguide/application-auto-scaling-scheduled-scaling.html">Scheduled
 * scaling</a> in the <i>Application Auto Scaling User
 *
 * Guide</i>> <note>
 *
 * If a scalable target is deregistered, the scalable target is no longer available to run scheduled actions. Any scheduled
 * actions that were specified for the scalable target are
 */
PutScheduledActionResponse * ApplicationAutoScalingClient::putScheduledAction(const PutScheduledActionRequest &request)
{
    return qobject_cast<PutScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ApplicationAutoScalingClient service, and returns a pointer to an
 * RegisterScalableTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers or updates a scalable target.
 *
 * </p
 *
 * A scalable target is a resource that Application Auto Scaling can scale out and scale in. Scalable targets are uniquely
 * identified by the combination of resource ID, scalable dimension, and namespace.
 *
 * </p
 *
 * When you register a new scalable target, you must specify values for minimum and maximum capacity. Current capacity will
 * be adjusted within the specified range when scaling starts. Application Auto Scaling scaling policies will not scale
 * capacity to values that are outside of this
 *
 * range>
 *
 * After you register a scalable target, you do not need to register it again to use other Application Auto Scaling
 * operations. To see which resources have been registered, use <a
 * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
 * You can also view the scaling policies for a service namespace by using <a
 * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DescribeScalableTargets.html">DescribeScalableTargets</a>.
 * If you no longer need a scalable target, you can deregister it by using <a
 *
 * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_DeregisterScalableTarget.html">DeregisterScalableTarget</a>>
 *
 * To update a scalable target, specify the parameters that you want to change. Include the parameters that identify the
 * scalable target: resource ID, scalable dimension, and namespace. Any parameters that you don't specify are not changed
 * by this update request.
 *
 * </p <note>
 *
 * If you call the <code>RegisterScalableTarget</code> API to update an existing scalable target, Application Auto Scaling
 * retrieves the current capacity of the resource. If it is below the minimum capacity or above the maximum capacity,
 * Application Auto Scaling adjusts the capacity of the scalable target to place it within these bounds, even if you don't
 * include the <code>MinCapacity</code> or <code>MaxCapacity</code> request
 */
RegisterScalableTargetResponse * ApplicationAutoScalingClient::registerScalableTarget(const RegisterScalableTargetRequest &request)
{
    return qobject_cast<RegisterScalableTargetResponse *>(send(request));
}

/*!
 * \class QtAws::ApplicationAutoScaling::ApplicationAutoScalingClientPrivate
 * \brief The ApplicationAutoScalingClientPrivate class provides private implementation for ApplicationAutoScalingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a ApplicationAutoScalingClientPrivate object with public implementation \a q.
 */
ApplicationAutoScalingClientPrivate::ApplicationAutoScalingClientPrivate(ApplicationAutoScalingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
