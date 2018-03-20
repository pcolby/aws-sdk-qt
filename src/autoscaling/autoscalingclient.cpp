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

#include "autoscalingclient.h"
#include "autoscalingclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace AutoScaling {

/**
 * @class  AutoScalingClient
 *
 * @brief  Client for Auto Scaling
 *
 * <fullname>Amazon EC2 Auto Scaling</fullname>
 *
 * Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 * schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 * Load Balancing
 */

/**
 * @brief  Constructs a new AutoScalingClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AutoScalingClient::AutoScalingClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AutoScalingClientPrivate(this), parent)
{
    Q_D(AutoScalingClient);
    d->apiVersion = QStringLiteral("2011-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Auto Scaling");
    d->serviceName = QStringLiteral("autoscaling");
}

/**
 * @brief  Constructs a new AutoScalingClient object.
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
AutoScalingClient::AutoScalingClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AutoScalingClientPrivate(this), parent)
{
    Q_D(AutoScalingClient);
    d->apiVersion = QStringLiteral("2011-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("autoscaling");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Auto Scaling");
    d->serviceName = QStringLiteral("autoscaling");
}

/**
 * Attaches one or more EC2 instances to the specified Auto Scaling
 *
 * group>
 *
 * When you attach instances, Auto Scaling increases the desired capacity of the group by the number of instances being
 * attached. If the number of instances being attached plus the desired capacity of the group exceeds the maximum size of
 * the group, the operation
 *
 * fails>
 *
 * If there is a Classic Load Balancer attached to your Auto Scaling group, the instances are also registered with the load
 * balancer. If there are target groups attached to your Auto Scaling group, the instances are also registered with the
 * target
 *
 * groups>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/attach-instance-asg.html">Attach EC2 Instances to Your
 * Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachInstancesResponse * AutoScalingClient::attachInstances(const AttachInstancesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches one or more target groups to the specified Auto Scaling
 *
 * group>
 *
 * To describe the target groups for an Auto Scaling group, use <a>DescribeLoadBalancerTargetGroups</a>. To detach the
 * target group from the Auto Scaling group, use
 *
 * <a>DetachLoadBalancerTargetGroups</a>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/attach-load-balancer-asg.html">Attach a Load Balancer to
 * Your Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachLoadBalancerTargetGroupsResponse * AutoScalingClient::attachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Attaches one or more Classic Load Balancers to the specified Auto Scaling
 *
 * group>
 *
 * To attach an Application Load Balancer instead, see
 *
 * <a>AttachLoadBalancerTargetGroups</a>>
 *
 * To describe the load balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach the load balancer
 * from the Auto Scaling group, use
 *
 * <a>DetachLoadBalancers</a>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/attach-load-balancer-asg.html">Attach a Load Balancer to
 * Your Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachLoadBalancersResponse * AutoScalingClient::attachLoadBalancers(const AttachLoadBalancersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Completes the lifecycle action for the specified token or instance with the specified
 *
 * result>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Auto
 * Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Auto Scaling to publish lifecycle notifications to the
 *
 * target> </li> <li>
 *
 * Create the lifecycle hook. Specify whether the hook is used when the instances launch or
 *
 * terminate> </li> <li>
 *
 * If you need more time, record the lifecycle action heartbeat to keep the instance in a pending
 *
 * state> </li> <li>
 *
 * <b>If you finish before the timeout period ends, complete the lifecycle action.</b>
 *
 * </p </li> </ol>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/AutoScalingGroupLifecycle.html">Auto Scaling Lifecycle</a>
 * in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CompleteLifecycleActionResponse * AutoScalingClient::completeLifecycleAction(const CompleteLifecycleActionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates an Auto Scaling group with the specified name and
 *
 * attributes>
 *
 * If you exceed your maximum limit of Auto Scaling groups, the call fails. For information about viewing this limit, see
 * <a>DescribeAccountLimits</a>. For information about updating this limit, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-account-limits.html">Auto Scaling Limits</a> in the
 * <i>Auto Scaling User
 *
 * Guide</i>>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/autoscaling/latest/userguide/AutoScalingGroup.html">Auto
 * Scaling Groups</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAutoScalingGroupResponse * AutoScalingClient::createAutoScalingGroup(const CreateAutoScalingGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a launch
 *
 * configuration>
 *
 * If you exceed your maximum limit of launch configurations, the call fails. For information about viewing this limit, see
 * <a>DescribeAccountLimits</a>. For information about updating this limit, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-account-limits.html">Auto Scaling Limits</a> in the
 * <i>Auto Scaling User
 *
 * Guide</i>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/LaunchConfiguration.html">Launch Configurations</a> in the
 * <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLaunchConfigurationResponse * AutoScalingClient::createLaunchConfiguration(const CreateLaunchConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates or updates tags for the specified Auto Scaling
 *
 * group>
 *
 * When you specify a tag with a key that already exists, the operation overwrites the previous tag definition, and you do
 * not get an error
 *
 * message>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/autoscaling-tagging.html">Tagging Auto Scaling Groups and
 * Instances</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateOrUpdateTagsResponse * AutoScalingClient::createOrUpdateTags(const CreateOrUpdateTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified Auto Scaling
 *
 * group>
 *
 * If the group has instances or scaling activities in progress, you must specify the option to force the deletion in order
 * for it to
 *
 * succeed>
 *
 * If the group has policies, deleting the group deletes the policies, the underlying alarm actions, and any alarm that no
 * longer has an associated
 *
 * action>
 *
 * To remove instances from the Auto Scaling group before deleting it, call <a>DetachInstances</a> with the list of
 * instances and the option to decrement the desired capacity so that Auto Scaling does not launch replacement
 *
 * instances>
 *
 * To terminate all instances before deleting the Auto Scaling group, call <a>UpdateAutoScalingGroup</a> and set the
 * minimum size and desired capacity of the Auto Scaling group to
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAutoScalingGroupResponse * AutoScalingClient::deleteAutoScalingGroup(const DeleteAutoScalingGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified launch
 *
 * configuration>
 *
 * The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch
 * configuration is no longer available for
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLaunchConfigurationResponse * AutoScalingClient::deleteLaunchConfiguration(const DeleteLaunchConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified lifecycle
 *
 * hook>
 *
 * If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances,
 * <code>CONTINUE</code> for terminating
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLifecycleHookResponse * AutoScalingClient::deleteLifecycleHook(const DeleteLifecycleHookRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNotificationConfigurationResponse * AutoScalingClient::deleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified Auto Scaling
 *
 * policy>
 *
 * Deleting a policy deletes the underlying alarm action, but does not delete the alarm, even if it no longer has an
 * associated
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePolicyResponse * AutoScalingClient::deletePolicy(const DeletePolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified scheduled
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteScheduledActionResponse * AutoScalingClient::deleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTagsResponse * AutoScalingClient::deleteTags(const DeleteTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the current Auto Scaling resource limits for your AWS
 *
 * account>
 *
 * For information about requesting an increase in these limits, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-account-limits.html">Auto Scaling Limits</a> in the
 * <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountLimitsResponse * AutoScalingClient::describeAccountLimits()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the policy adjustment types for use with
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAdjustmentTypesResponse * AutoScalingClient::describeAdjustmentTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes one or more Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAutoScalingGroupsResponse * AutoScalingClient::describeAutoScalingGroups(const DescribeAutoScalingGroupsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes one or more Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAutoScalingInstancesResponse * AutoScalingClient::describeAutoScalingInstances(const DescribeAutoScalingInstancesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the notification types that are supported by Auto
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAutoScalingNotificationTypesResponse * AutoScalingClient::describeAutoScalingNotificationTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes one or more launch
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLaunchConfigurationsResponse * AutoScalingClient::describeLaunchConfigurations(const DescribeLaunchConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the available types of lifecycle
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLifecycleHookTypesResponse * AutoScalingClient::describeLifecycleHookTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the lifecycle hooks for the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLifecycleHooksResponse * AutoScalingClient::describeLifecycleHooks(const DescribeLifecycleHooksRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the target groups for the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancerTargetGroupsResponse * AutoScalingClient::describeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the load balancers for the specified Auto Scaling
 *
 * group>
 *
 * Note that this operation describes only Classic Load Balancers. If you have Application Load Balancers, use
 * <a>DescribeLoadBalancerTargetGroups</a>
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancersResponse * AutoScalingClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the available CloudWatch metrics for Auto
 *
 * Scaling>
 *
 * Note that the <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this
 * metric when calling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeMetricCollectionTypesResponse * AutoScalingClient::describeMetricCollectionTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the notification actions associated with the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeNotificationConfigurationsResponse * AutoScalingClient::describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the policies for the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePoliciesResponse * AutoScalingClient::describePolicies(const DescribePoliciesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes one or more scaling activities for the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingActivitiesResponse * AutoScalingClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the scaling process types for use with <a>ResumeProcesses</a> and
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScalingProcessTypesResponse * AutoScalingClient::describeScalingProcessTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the actions scheduled for your Auto Scaling group that haven't run. To describe the actions that have already
 * run, use
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeScheduledActionsResponse * AutoScalingClient::describeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the specified
 *
 * tags>
 *
 * You can use filters to limit the results. For example, you can query for the tags for a specific Auto Scaling group. You
 * can specify multiple values for a filter. A tag must match at least one of the specified values for it to be included in
 * the
 *
 * results>
 *
 * You can also specify multiple filters. The result includes information for a particular tag only if it matches all the
 * filters. If there's no match, no special message is
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * AutoScalingClient::describeTags(const DescribeTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the termination policies supported by Auto
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTerminationPolicyTypesResponse * AutoScalingClient::describeTerminationPolicyTypes()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes one or more instances from the specified Auto Scaling
 *
 * group>
 *
 * After the instances are detached, you can manage them independent of the Auto Scaling
 *
 * group>
 *
 * If you do not specify the option to decrement the desired capacity, Auto Scaling launches instances to replace the ones
 * that are
 *
 * detached>
 *
 * If there is a Classic Load Balancer attached to the Auto Scaling group, the instances are deregistered from the load
 * balancer. If there are target groups attached to the Auto Scaling group, the instances are deregistered from the target
 *
 * groups>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/detach-instance-asg.html">Detach EC2 Instances from Your
 * Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachInstancesResponse * AutoScalingClient::detachInstances(const DetachInstancesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches one or more target groups from the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachLoadBalancerTargetGroupsResponse * AutoScalingClient::detachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Detaches one or more Classic Load Balancers from the specified Auto Scaling
 *
 * group>
 *
 * Note that this operation detaches only Classic Load Balancers. If you have Application Load Balancers, use
 * <a>DetachLoadBalancerTargetGroups</a>
 *
 * instead>
 *
 * When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the
 * group. When all instances are deregistered, then you can no longer describe the load balancer using
 * <a>DescribeLoadBalancers</a>. Note that the instances remain
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachLoadBalancersResponse * AutoScalingClient::detachLoadBalancers(const DetachLoadBalancersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Disables group metrics for the specified Auto Scaling
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableMetricsCollectionResponse * AutoScalingClient::disableMetricsCollection(const DisableMetricsCollectionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Enables group metrics for the specified Auto Scaling group. For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-monitoring.html">Monitoring Your Auto Scaling
 * Groups and Instances</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableMetricsCollectionResponse * AutoScalingClient::enableMetricsCollection(const EnableMetricsCollectionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Moves the specified instances into the standby
 *
 * state>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-enter-exit-standby.html">Temporarily Removing Instances
 * from Your Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnterStandbyResponse * AutoScalingClient::enterStandby(const EnterStandbyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Executes the specified
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExecutePolicyResponse * AutoScalingClient::executePolicy(const ExecutePolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Moves the specified instances out of the standby
 *
 * state>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-enter-exit-standby.html">Temporarily Removing Instances
 * from Your Auto Scaling Group</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExitStandbyResponse * AutoScalingClient::exitStandby(const ExitStandbyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates or updates a lifecycle hook for the specified Auto Scaling
 *
 * Group>
 *
 * A lifecycle hook tells Auto Scaling that you want to perform an action on an instance that is not actively in service;
 * for example, either when the instance launches or before the instance
 *
 * terminates>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Auto
 * Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Auto Scaling to publish lifecycle notifications to the
 *
 * target> </li> <li>
 *
 * <b>Create the lifecycle hook. Specify whether the hook is used when the instances launch or terminate.</b>
 *
 * </p </li> <li>
 *
 * If you need more time, record the lifecycle action heartbeat to keep the instance in a pending
 *
 * state> </li> <li>
 *
 * If you finish before the timeout period ends, complete the lifecycle
 *
 * action> </li> </ol>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/autoscaling/latest/userguide/lifecycle-hooks.html">Auto
 * Scaling Lifecycle Hooks</a> in the <i>Auto Scaling User
 *
 * Guide</i>>
 *
 * If you exceed your maximum limit of lifecycle hooks, which by default is 50 per Auto Scaling group, the call fails. For
 * information about updating this limit, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS Service Limits</a> in the <i>Amazon Web
 * Services General
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutLifecycleHookResponse * AutoScalingClient::putLifecycleHook(const PutLifecycleHookRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to the specified
 * topic can have messages delivered to an endpoint such as a web server or an email
 *
 * address>
 *
 * This configuration overwrites any existing
 *
 * configuration>
 *
 * For more information see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/ASGettingNotifications.html">Getting SNS Notifications
 * When Your Auto Scaling Group Scales</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutNotificationConfigurationResponse * AutoScalingClient::putNotificationConfiguration(const PutNotificationConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and
 * set the parameters you want to change. Any existing parameter not changed in an update to an existing policy is not
 * changed in this update
 *
 * request>
 *
 * If you exceed your maximum limit of step adjustments, which by default is 20 per region, the call fails. For information
 * about updating this limit, see <a href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS
 * Service Limits</a> in the <i>Amazon Web Services General
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutScalingPolicyResponse * AutoScalingClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates or updates a scheduled scaling action for an Auto Scaling group. When updating a scheduled scaling action, if
 * you leave a parameter unspecified, the corresponding value remains
 *
 * unchanged>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/autoscaling/latest/userguide/schedule_time.html">Scheduled
 * Scaling</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutScheduledUpdateGroupActionResponse * AutoScalingClient::putScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Records a heartbeat for the lifecycle action associated with the specified token or instance. This extends the timeout
 * by the length of time defined using
 *
 * <a>PutLifecycleHook</a>>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Auto
 * Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Auto Scaling to publish lifecycle notifications to the
 *
 * target> </li> <li>
 *
 * Create the lifecycle hook. Specify whether the hook is used when the instances launch or
 *
 * terminate> </li> <li>
 *
 * <b>If you need more time, record the lifecycle action heartbeat to keep the instance in a pending state.</b>
 *
 * </p </li> <li>
 *
 * If you finish before the timeout period ends, complete the lifecycle
 *
 * action> </li> </ol>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/AutoScalingGroupLifecycle.html">Auto Scaling Lifecycle</a>
 * in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RecordLifecycleActionHeartbeatResponse * AutoScalingClient::recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Resumes the specified suspended Auto Scaling processes, or all suspended process, for the specified Auto Scaling
 *
 * group>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-suspend-resume-processes.html">Suspending and Resuming
 * Auto Scaling Processes</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResumeProcessesResponse * AutoScalingClient::resumeProcesses(const ResumeProcessesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Sets the size of the specified Auto Scaling
 *
 * group>
 *
 * For more information about desired capacity, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/WhatIsAutoScaling.html">What Is Auto Scaling?</a> in the
 * <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetDesiredCapacityResponse * AutoScalingClient::setDesiredCapacity(const SetDesiredCapacityRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Sets the health status of the specified
 *
 * instance>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/autoscaling/latest/userguide/healthcheck.html">Health
 * Checks</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetInstanceHealthResponse * AutoScalingClient::setInstanceHealth(const SetInstanceHealthRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates the instance protection settings of the specified
 *
 * instances>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-instance-termination.html#instance-protection">Instance
 * Protection</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetInstanceProtectionResponse * AutoScalingClient::setInstanceProtection(const SetInstanceProtectionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Suspends the specified Auto Scaling processes, or all processes, for the specified Auto Scaling
 *
 * group>
 *
 * Note that if you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other
 * process types from functioning
 *
 * properly>
 *
 * To resume processes that have been suspended, use
 *
 * <a>ResumeProcesses</a>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/autoscaling/latest/userguide/as-suspend-resume-processes.html">Suspending and Resuming
 * Auto Scaling Processes</a> in the <i>Auto Scaling User
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SuspendProcessesResponse * AutoScalingClient::suspendProcesses(const SuspendProcessesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Terminates the specified instance and optionally adjusts the desired group
 *
 * size>
 *
 * This call simply makes a termination request. The instance is not terminated
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateInstanceInAutoScalingGroupResponse * AutoScalingClient::terminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates the configuration for the specified Auto Scaling
 *
 * group>
 *
 * The new settings take effect on any scaling activities after this call returns. Scaling activities that are currently in
 * progress aren't
 *
 * affected>
 *
 * To update an Auto Scaling group with a launch configuration with <code>InstanceMonitoring</code> set to
 * <code>false</code>, you must first disable the collection of group metrics. Otherwise, you will get an error. If you
 * have previously enabled the collection of group metrics, you can disable it using
 *
 * <a>DisableMetricsCollection</a>>
 *
 * Note the
 *
 * following> <ul> <li>
 *
 * If you specify a new value for <code>MinSize</code> without specifying a value for <code>DesiredCapacity</code>, and the
 * new <code>MinSize</code> is larger than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to
 * set the size of the group to the new value of
 *
 * <code>MinSize</code>> </li> <li>
 *
 * If you specify a new value for <code>MaxSize</code> without specifying a value for <code>DesiredCapacity</code>, and the
 * new <code>MaxSize</code> is smaller than the current size of the group, we implicitly call <a>SetDesiredCapacity</a> to
 * set the size of the group to the new value of
 *
 * <code>MaxSize</code>> </li> <li>
 *
 * All other optional parameters are left unchanged if not
 *
 * @param  request Request to send to Auto Scaling.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAutoScalingGroupResponse * AutoScalingClient::updateAutoScalingGroup(const UpdateAutoScalingGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  AutoScalingClientPrivate
 *
 * @brief  Private implementation for AutoScalingClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingClientPrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingClient instance.
 */
AutoScalingClientPrivate::AutoScalingClientPrivate(AutoScalingClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace AutoScaling
} // namespace AWS
