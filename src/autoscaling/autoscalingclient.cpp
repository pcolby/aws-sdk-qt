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

#include "autoscalingclient.h"
#include "autoscalingclient_p.h"

#include "core/awssignaturev4.h"
#include "attachinstancesrequest.h"
#include "attachinstancesresponse.h"
#include "attachloadbalancertargetgroupsrequest.h"
#include "attachloadbalancertargetgroupsresponse.h"
#include "attachloadbalancersrequest.h"
#include "attachloadbalancersresponse.h"
#include "batchdeletescheduledactionrequest.h"
#include "batchdeletescheduledactionresponse.h"
#include "batchputscheduledupdategroupactionrequest.h"
#include "batchputscheduledupdategroupactionresponse.h"
#include "completelifecycleactionrequest.h"
#include "completelifecycleactionresponse.h"
#include "createautoscalinggrouprequest.h"
#include "createautoscalinggroupresponse.h"
#include "createlaunchconfigurationrequest.h"
#include "createlaunchconfigurationresponse.h"
#include "createorupdatetagsrequest.h"
#include "createorupdatetagsresponse.h"
#include "deleteautoscalinggrouprequest.h"
#include "deleteautoscalinggroupresponse.h"
#include "deletelaunchconfigurationrequest.h"
#include "deletelaunchconfigurationresponse.h"
#include "deletelifecyclehookrequest.h"
#include "deletelifecyclehookresponse.h"
#include "deletenotificationconfigurationrequest.h"
#include "deletenotificationconfigurationresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "deletescheduledactionrequest.h"
#include "deletescheduledactionresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describeadjustmenttypesrequest.h"
#include "describeadjustmenttypesresponse.h"
#include "describeautoscalinggroupsrequest.h"
#include "describeautoscalinggroupsresponse.h"
#include "describeautoscalinginstancesrequest.h"
#include "describeautoscalinginstancesresponse.h"
#include "describeautoscalingnotificationtypesrequest.h"
#include "describeautoscalingnotificationtypesresponse.h"
#include "describelaunchconfigurationsrequest.h"
#include "describelaunchconfigurationsresponse.h"
#include "describelifecyclehooktypesrequest.h"
#include "describelifecyclehooktypesresponse.h"
#include "describelifecyclehooksrequest.h"
#include "describelifecyclehooksresponse.h"
#include "describeloadbalancertargetgroupsrequest.h"
#include "describeloadbalancertargetgroupsresponse.h"
#include "describeloadbalancersrequest.h"
#include "describeloadbalancersresponse.h"
#include "describemetriccollectiontypesrequest.h"
#include "describemetriccollectiontypesresponse.h"
#include "describenotificationconfigurationsrequest.h"
#include "describenotificationconfigurationsresponse.h"
#include "describepoliciesrequest.h"
#include "describepoliciesresponse.h"
#include "describescalingactivitiesrequest.h"
#include "describescalingactivitiesresponse.h"
#include "describescalingprocesstypesrequest.h"
#include "describescalingprocesstypesresponse.h"
#include "describescheduledactionsrequest.h"
#include "describescheduledactionsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describeterminationpolicytypesrequest.h"
#include "describeterminationpolicytypesresponse.h"
#include "detachinstancesrequest.h"
#include "detachinstancesresponse.h"
#include "detachloadbalancertargetgroupsrequest.h"
#include "detachloadbalancertargetgroupsresponse.h"
#include "detachloadbalancersrequest.h"
#include "detachloadbalancersresponse.h"
#include "disablemetricscollectionrequest.h"
#include "disablemetricscollectionresponse.h"
#include "enablemetricscollectionrequest.h"
#include "enablemetricscollectionresponse.h"
#include "enterstandbyrequest.h"
#include "enterstandbyresponse.h"
#include "executepolicyrequest.h"
#include "executepolicyresponse.h"
#include "exitstandbyrequest.h"
#include "exitstandbyresponse.h"
#include "putlifecyclehookrequest.h"
#include "putlifecyclehookresponse.h"
#include "putnotificationconfigurationrequest.h"
#include "putnotificationconfigurationresponse.h"
#include "putscalingpolicyrequest.h"
#include "putscalingpolicyresponse.h"
#include "putscheduledupdategroupactionrequest.h"
#include "putscheduledupdategroupactionresponse.h"
#include "recordlifecycleactionheartbeatrequest.h"
#include "recordlifecycleactionheartbeatresponse.h"
#include "resumeprocessesrequest.h"
#include "resumeprocessesresponse.h"
#include "setdesiredcapacityrequest.h"
#include "setdesiredcapacityresponse.h"
#include "setinstancehealthrequest.h"
#include "setinstancehealthresponse.h"
#include "setinstanceprotectionrequest.h"
#include "setinstanceprotectionresponse.h"
#include "suspendprocessesrequest.h"
#include "suspendprocessesresponse.h"
#include "terminateinstanceinautoscalinggrouprequest.h"
#include "terminateinstanceinautoscalinggroupresponse.h"
#include "updateautoscalinggrouprequest.h"
#include "updateautoscalinggroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AutoScaling
 * \brief Contains classess for accessing Auto Scaling.
 *
 * \inmodule QtAwsAutoScaling
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AutoScalingClient
 * \brief The AutoScalingClient class provides access to the Auto Scaling service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 */

/*!
 * \brief Constructs a AutoScalingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AutoScalingClient::AutoScalingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AutoScalingClientPrivate(this), parent)
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

/*!
 * \overload AutoScalingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AutoScalingClient::AutoScalingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AutoScalingClientPrivate(this), parent)
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

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * AttachInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more EC2 instances to the specified Auto Scaling
 *
 * group>
 *
 * When you attach instances, Amazon EC2 Auto Scaling increases the desired capacity of the group by the number of
 * instances being attached. If the number of instances being attached plus the desired capacity of the group exceeds the
 * maximum size of the group, the operation
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach EC2 Instances to Your Auto
 * Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
AttachInstancesResponse * AutoScalingClient::attachInstances(const AttachInstancesRequest &request)
{
    return qobject_cast<AttachInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * AttachLoadBalancerTargetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more target groups to the specified Auto Scaling group.
 *
 * </p
 *
 * To describe the target groups for an Auto Scaling group, use <a>DescribeLoadBalancerTargetGroups</a>. To detach the
 * target group from the Auto Scaling group, use
 *
 * <a>DetachLoadBalancerTargetGroups</a>>
 *
 * With Application Load Balancers and Network Load Balancers, instances are registered as targets with a target group.
 * With Classic Load Balancers, instances are registered with the load balancer. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching a Load Balancer to
 * Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
AttachLoadBalancerTargetGroupsResponse * AutoScalingClient::attachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest &request)
{
    return qobject_cast<AttachLoadBalancerTargetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * AttachLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches one or more Classic Load Balancers to the specified Auto Scaling
 *
 * group>
 *
 * To attach an Application Load Balancer or a Network Load Balancer instead, see
 *
 * <a>AttachLoadBalancerTargetGroups</a>>
 *
 * To describe the load balancers for an Auto Scaling group, use <a>DescribeLoadBalancers</a>. To detach the load balancer
 * from the Auto Scaling group, use
 *
 * <a>DetachLoadBalancers</a>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-load-balancer-asg.html">Attaching a Load Balancer to
 * Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
AttachLoadBalancersResponse * AutoScalingClient::attachLoadBalancers(const AttachLoadBalancersRequest &request)
{
    return qobject_cast<AttachLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * BatchDeleteScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more scheduled actions for the specified Auto Scaling
 */
BatchDeleteScheduledActionResponse * AutoScalingClient::batchDeleteScheduledAction(const BatchDeleteScheduledActionRequest &request)
{
    return qobject_cast<BatchDeleteScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * BatchPutScheduledUpdateGroupActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates one or more scheduled scaling actions for an Auto Scaling group. If you leave a parameter unspecified
 * when updating a scheduled scaling action, the corresponding value remains
 */
BatchPutScheduledUpdateGroupActionResponse * AutoScalingClient::batchPutScheduledUpdateGroupAction(const BatchPutScheduledUpdateGroupActionRequest &request)
{
    return qobject_cast<BatchPutScheduledUpdateGroupActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * CompleteLifecycleActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Completes the lifecycle action for the specified token or instance with the specified
 *
 * result>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Amazon
 * EC2 Auto Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle notifications to the
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
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
 * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
 */
CompleteLifecycleActionResponse * AutoScalingClient::completeLifecycleAction(const CompleteLifecycleActionRequest &request)
{
    return qobject_cast<CompleteLifecycleActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * CreateAutoScalingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Auto Scaling group with the specified name and
 *
 * attributes>
 *
 * If you exceed your maximum limit of Auto Scaling groups, the call fails. For information about viewing this limit, see
 * <a>DescribeAccountLimits</a>. For information about updating this limit, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling Limits</a>
 * in the <i>Amazon EC2 Auto Scaling User
 */
CreateAutoScalingGroupResponse * AutoScalingClient::createAutoScalingGroup(const CreateAutoScalingGroupRequest &request)
{
    return qobject_cast<CreateAutoScalingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * CreateLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a launch
 *
 * configuration>
 *
 * If you exceed your maximum limit of launch configurations, the call fails. For information about viewing this limit, see
 * <a>DescribeAccountLimits</a>. For information about updating this limit, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling Limits</a>
 * in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch Configurations</a> in the
 * <i>Amazon EC2 Auto Scaling User
 */
CreateLaunchConfigurationResponse * AutoScalingClient::createLaunchConfiguration(const CreateLaunchConfigurationRequest &request)
{
    return qobject_cast<CreateLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * CreateOrUpdateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging Auto Scaling Groups and
 * Instances</a> in the <i>Amazon EC2 Auto Scaling User
 */
CreateOrUpdateTagsResponse * AutoScalingClient::createOrUpdateTags(const CreateOrUpdateTagsRequest &request)
{
    return qobject_cast<CreateOrUpdateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteAutoScalingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * instances and the option to decrement the desired capacity. This ensures that Amazon EC2 Auto Scaling does not launch
 * replacement
 *
 * instances>
 *
 * To terminate all instances before deleting the Auto Scaling group, call <a>UpdateAutoScalingGroup</a> and set the
 * minimum size and desired capacity of the Auto Scaling group to
 */
DeleteAutoScalingGroupResponse * AutoScalingClient::deleteAutoScalingGroup(const DeleteAutoScalingGroupRequest &request)
{
    return qobject_cast<DeleteAutoScalingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified launch
 *
 * configuration>
 *
 * The launch configuration must not be attached to an Auto Scaling group. When this call completes, the launch
 * configuration is no longer available for
 */
DeleteLaunchConfigurationResponse * AutoScalingClient::deleteLaunchConfiguration(const DeleteLaunchConfigurationRequest &request)
{
    return qobject_cast<DeleteLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteLifecycleHookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified lifecycle
 *
 * hook>
 *
 * If there are any outstanding lifecycle actions, they are completed first (<code>ABANDON</code> for launching instances,
 * <code>CONTINUE</code> for terminating
 */
DeleteLifecycleHookResponse * AutoScalingClient::deleteLifecycleHook(const DeleteLifecycleHookRequest &request)
{
    return qobject_cast<DeleteLifecycleHookResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteNotificationConfigurationResponse * AutoScalingClient::deleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request)
{
    return qobject_cast<DeleteNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified scaling
 *
 * policy>
 *
 * Deleting a policy deletes the underlying alarm action, but does not delete the alarm, even if it no longer has an
 * associated
 */
DeletePolicyResponse * AutoScalingClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteScheduledActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified scheduled
 */
DeleteScheduledActionResponse * AutoScalingClient::deleteScheduledAction(const DeleteScheduledActionRequest &request)
{
    return qobject_cast<DeleteScheduledActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteTagsResponse * AutoScalingClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Amazon EC2 Auto Scaling resource limits for your AWS
 *
 * account>
 *
 * For information about requesting an increase in these limits, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling Limits</a>
 * in the <i>Amazon EC2 Auto Scaling User
 */
DescribeAccountLimitsResponse * AutoScalingClient::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return qobject_cast<DescribeAccountLimitsResponse *>(send(request));
}

/*!
 * Sends a DescribeAccountLimits request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Amazon EC2 Auto Scaling resource limits for your AWS
 *
 * account>
 *
 * For information about requesting an increase in these limits, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling Limits</a>
 * in the <i>Amazon EC2 Auto Scaling User
 */
DescribeAccountLimitsResponse * AutoScalingClient::describeAccountLimits()
{
    return describeAccountLimits(DescribeAccountLimitsRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAdjustmentTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the policy adjustment types for use with
 */
DescribeAdjustmentTypesResponse * AutoScalingClient::describeAdjustmentTypes(const DescribeAdjustmentTypesRequest &request)
{
    return qobject_cast<DescribeAdjustmentTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeAdjustmentTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAdjustmentTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the policy adjustment types for use with
 */
DescribeAdjustmentTypesResponse * AutoScalingClient::describeAdjustmentTypes()
{
    return describeAdjustmentTypes(DescribeAdjustmentTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAutoScalingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more Auto Scaling
 */
DescribeAutoScalingGroupsResponse * AutoScalingClient::describeAutoScalingGroups(const DescribeAutoScalingGroupsRequest &request)
{
    return qobject_cast<DescribeAutoScalingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAutoScalingInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more Auto Scaling
 */
DescribeAutoScalingInstancesResponse * AutoScalingClient::describeAutoScalingInstances(const DescribeAutoScalingInstancesRequest &request)
{
    return qobject_cast<DescribeAutoScalingInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAutoScalingNotificationTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the notification types that are supported by Amazon EC2 Auto
 */
DescribeAutoScalingNotificationTypesResponse * AutoScalingClient::describeAutoScalingNotificationTypes(const DescribeAutoScalingNotificationTypesRequest &request)
{
    return qobject_cast<DescribeAutoScalingNotificationTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeAutoScalingNotificationTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAutoScalingNotificationTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the notification types that are supported by Amazon EC2 Auto
 */
DescribeAutoScalingNotificationTypesResponse * AutoScalingClient::describeAutoScalingNotificationTypes()
{
    return describeAutoScalingNotificationTypes(DescribeAutoScalingNotificationTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLaunchConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more launch
 */
DescribeLaunchConfigurationsResponse * AutoScalingClient::describeLaunchConfigurations(const DescribeLaunchConfigurationsRequest &request)
{
    return qobject_cast<DescribeLaunchConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLifecycleHookTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available types of lifecycle
 *
 * hooks>
 *
 * The following hook types are
 *
 * supported> <ul> <li>
 *
 * autoscaling:EC2_INSTANCE_LAUNCHIN> </li> <li>
 */
DescribeLifecycleHookTypesResponse * AutoScalingClient::describeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest &request)
{
    return qobject_cast<DescribeLifecycleHookTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeLifecycleHookTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLifecycleHookTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available types of lifecycle
 *
 * hooks>
 *
 * The following hook types are
 *
 * supported> <ul> <li>
 *
 * autoscaling:EC2_INSTANCE_LAUNCHIN> </li> <li>
 */
DescribeLifecycleHookTypesResponse * AutoScalingClient::describeLifecycleHookTypes()
{
    return describeLifecycleHookTypes(DescribeLifecycleHookTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLifecycleHooksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the lifecycle hooks for the specified Auto Scaling
 */
DescribeLifecycleHooksResponse * AutoScalingClient::describeLifecycleHooks(const DescribeLifecycleHooksRequest &request)
{
    return qobject_cast<DescribeLifecycleHooksResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLoadBalancerTargetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the target groups for the specified Auto Scaling
 */
DescribeLoadBalancerTargetGroupsResponse * AutoScalingClient::describeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest &request)
{
    return qobject_cast<DescribeLoadBalancerTargetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the load balancers for the specified Auto Scaling
 *
 * group>
 *
 * This operation describes only Classic Load Balancers. If you have Application Load Balancers or Network Load Balancers,
 * use <a>DescribeLoadBalancerTargetGroups</a>
 */
DescribeLoadBalancersResponse * AutoScalingClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    return qobject_cast<DescribeLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeMetricCollectionTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available CloudWatch metrics for Amazon EC2 Auto
 *
 * Scaling>
 *
 * The <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this metric when
 * calling
 */
DescribeMetricCollectionTypesResponse * AutoScalingClient::describeMetricCollectionTypes(const DescribeMetricCollectionTypesRequest &request)
{
    return qobject_cast<DescribeMetricCollectionTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeMetricCollectionTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeMetricCollectionTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available CloudWatch metrics for Amazon EC2 Auto
 *
 * Scaling>
 *
 * The <code>GroupStandbyInstances</code> metric is not returned by default. You must explicitly request this metric when
 * calling
 */
DescribeMetricCollectionTypesResponse * AutoScalingClient::describeMetricCollectionTypes()
{
    return describeMetricCollectionTypes(DescribeMetricCollectionTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeNotificationConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the notification actions associated with the specified Auto Scaling
 */
DescribeNotificationConfigurationsResponse * AutoScalingClient::describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request)
{
    return qobject_cast<DescribeNotificationConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the policies for the specified Auto Scaling
 */
DescribePoliciesResponse * AutoScalingClient::describePolicies(const DescribePoliciesRequest &request)
{
    return qobject_cast<DescribePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeScalingActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more scaling activities for the specified Auto Scaling
 */
DescribeScalingActivitiesResponse * AutoScalingClient::describeScalingActivities(const DescribeScalingActivitiesRequest &request)
{
    return qobject_cast<DescribeScalingActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeScalingProcessTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the scaling process types for use with <a>ResumeProcesses</a> and
 */
DescribeScalingProcessTypesResponse * AutoScalingClient::describeScalingProcessTypes(const DescribeScalingProcessTypesRequest &request)
{
    return qobject_cast<DescribeScalingProcessTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeScalingProcessTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeScalingProcessTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the scaling process types for use with <a>ResumeProcesses</a> and
 */
DescribeScalingProcessTypesResponse * AutoScalingClient::describeScalingProcessTypes()
{
    return describeScalingProcessTypes(DescribeScalingProcessTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeScheduledActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the actions scheduled for your Auto Scaling group that haven't run. To describe the actions that have already
 * run, use
 */
DescribeScheduledActionsResponse * AutoScalingClient::describeScheduledActions(const DescribeScheduledActionsRequest &request)
{
    return qobject_cast<DescribeScheduledActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeTagsResponse * AutoScalingClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeTerminationPolicyTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the termination policies supported by Amazon EC2 Auto
 *
 * Scaling>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling Which Auto Scaling
 * Instances Terminate During Scale In</a> in the <i>Amazon EC2 Auto Scaling User
 */
DescribeTerminationPolicyTypesResponse * AutoScalingClient::describeTerminationPolicyTypes(const DescribeTerminationPolicyTypesRequest &request)
{
    return qobject_cast<DescribeTerminationPolicyTypesResponse *>(send(request));
}

/*!
 * Sends a DescribeTerminationPolicyTypes request to the AutoScalingClient service, and returns a pointer to an
 * DescribeTerminationPolicyTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the termination policies supported by Amazon EC2 Auto
 *
 * Scaling>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling Which Auto Scaling
 * Instances Terminate During Scale In</a> in the <i>Amazon EC2 Auto Scaling User
 */
DescribeTerminationPolicyTypesResponse * AutoScalingClient::describeTerminationPolicyTypes()
{
    return describeTerminationPolicyTypes(DescribeTerminationPolicyTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DetachInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more instances from the specified Auto Scaling
 *
 * group>
 *
 * After the instances are detached, you can manage them independent of the Auto Scaling
 *
 * group>
 *
 * If you do not specify the option to decrement the desired capacity, Amazon EC2 Auto Scaling launches instances to
 * replace the ones that are
 *
 * detached>
 *
 * If there is a Classic Load Balancer attached to the Auto Scaling group, the instances are deregistered from the load
 * balancer. If there are target groups attached to the Auto Scaling group, the instances are deregistered from the target
 *
 * groups>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach EC2 Instances from Your
 * Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
DetachInstancesResponse * AutoScalingClient::detachInstances(const DetachInstancesRequest &request)
{
    return qobject_cast<DetachInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DetachLoadBalancerTargetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches one or more target groups from the specified Auto Scaling
 */
DetachLoadBalancerTargetGroupsResponse * AutoScalingClient::detachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest &request)
{
    return qobject_cast<DetachLoadBalancerTargetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DetachLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches one or more Classic Load Balancers from the specified Auto Scaling
 *
 * group>
 *
 * This operation detaches only Classic Load Balancers. If you have Application Load Balancers or Network Load Balancers,
 * use <a>DetachLoadBalancerTargetGroups</a>
 *
 * instead>
 *
 * When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the
 * group. When all instances are deregistered, then you can no longer describe the load balancer using
 * <a>DescribeLoadBalancers</a>. The instances remain
 */
DetachLoadBalancersResponse * AutoScalingClient::detachLoadBalancers(const DetachLoadBalancersRequest &request)
{
    return qobject_cast<DetachLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DisableMetricsCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables group metrics for the specified Auto Scaling
 */
DisableMetricsCollectionResponse * AutoScalingClient::disableMetricsCollection(const DisableMetricsCollectionRequest &request)
{
    return qobject_cast<DisableMetricsCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * EnableMetricsCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables group metrics for the specified Auto Scaling group. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring Your Auto Scaling
 * Groups and Instances</a> in the <i>Amazon EC2 Auto Scaling User
 */
EnableMetricsCollectionResponse * AutoScalingClient::enableMetricsCollection(const EnableMetricsCollectionRequest &request)
{
    return qobject_cast<EnableMetricsCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * EnterStandbyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves the specified instances into the standby
 *
 * state>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily Removing Instances
 * from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
EnterStandbyResponse * AutoScalingClient::enterStandby(const EnterStandbyRequest &request)
{
    return qobject_cast<EnterStandbyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * ExecutePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Executes the specified
 */
ExecutePolicyResponse * AutoScalingClient::executePolicy(const ExecutePolicyRequest &request)
{
    return qobject_cast<ExecutePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * ExitStandbyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves the specified instances out of the standby
 *
 * state>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily Removing Instances
 * from Your Auto Scaling Group</a> in the <i>Amazon EC2 Auto Scaling User
 */
ExitStandbyResponse * AutoScalingClient::exitStandby(const ExitStandbyRequest &request)
{
    return qobject_cast<ExitStandbyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * PutLifecycleHookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a lifecycle hook for the specified Auto Scaling
 *
 * group>
 *
 * A lifecycle hook tells Amazon EC2 Auto Scaling to perform an action on an instance when the instance launches (before it
 * is put into service) or as the instance terminates (before it is fully
 *
 * terminated)>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Amazon
 * EC2 Auto Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle notifications to the
 *
 * target> </li> <li>
 *
 * <b>Create the lifecycle hook. Specify whether the hook is used when the instances launch or terminate.</b>
 *
 * </p </li> <li>
 *
 * If you need more time, record the lifecycle action heartbeat to keep the instance in a pending state using using
 *
 * <a>RecordLifecycleActionHeartbeat</a>> </li> <li>
 *
 * If you finish before the timeout period ends, complete the lifecycle action using
 *
 * <a>CompleteLifecycleAction</a>> </li> </ol>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
 * EC2 Auto Scaling Lifecycle Hooks</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * If you exceed your maximum limit of lifecycle hooks, which by default is 50 per Auto Scaling group, the call
 *
 * fails>
 *
 * You can view the lifecycle hooks for an Auto Scaling group using <a>DescribeLifecycleHooks</a>. If you are no longer
 * using a lifecycle hook, you can delete it using
 */
PutLifecycleHookResponse * AutoScalingClient::putLifecycleHook(const PutLifecycleHookRequest &request)
{
    return qobject_cast<PutLifecycleHookResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * PutNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures an Auto Scaling group to send notifications when specified events take place. Subscribers to the specified
 * topic can have messages delivered to an endpoint such as a web server or an email
 *
 * address>
 *
 * This configuration overwrites any existing
 *
 * configuration>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ASGettingNotifications.html">Getting Amazon SNS
 * Notifications When Your Auto Scaling Group Scales</a> in the <i>Amazon EC2 Auto Scaling User
 */
PutNotificationConfigurationResponse * AutoScalingClient::putNotificationConfiguration(const PutNotificationConfigurationRequest &request)
{
    return qobject_cast<PutNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * PutScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a policy for an Auto Scaling group. To update an existing policy, use the existing policy name and
 * set the parameters to change. Any existing parameter not changed in an update to an existing policy is not changed in
 * this update
 */
PutScalingPolicyResponse * AutoScalingClient::putScalingPolicy(const PutScalingPolicyRequest &request)
{
    return qobject_cast<PutScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * PutScheduledUpdateGroupActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a scheduled scaling action for an Auto Scaling group. If you leave a parameter unspecified when
 * updating a scheduled scaling action, the corresponding value remains
 *
 * unchanged>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
 * Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 */
PutScheduledUpdateGroupActionResponse * AutoScalingClient::putScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest &request)
{
    return qobject_cast<PutScheduledUpdateGroupActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * RecordLifecycleActionHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records a heartbeat for the lifecycle action associated with the specified token or instance. This extends the timeout
 * by the length of time defined using
 *
 * <a>PutLifecycleHook</a>>
 *
 * This step is a part of the procedure for adding a lifecycle hook to an Auto Scaling
 *
 * group> <ol> <li>
 *
 * (Optional) Create a Lambda function and a rule that allows CloudWatch Events to invoke your Lambda function when Amazon
 * EC2 Auto Scaling launches or terminates
 *
 * instances> </li> <li>
 *
 * (Optional) Create a notification target and an IAM role. The target can be either an Amazon SQS queue or an Amazon SNS
 * topic. The role allows Amazon EC2 Auto Scaling to publish lifecycle notifications to the
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroupLifecycle.html">Auto Scaling Lifecycle</a>
 * in the <i>Amazon EC2 Auto Scaling User
 */
RecordLifecycleActionHeartbeatResponse * AutoScalingClient::recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request)
{
    return qobject_cast<RecordLifecycleActionHeartbeatResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * ResumeProcessesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resumes the specified suspended automatic scaling processes, or all suspended process, for the specified Auto Scaling
 *
 * group>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending and Resuming
 * Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
 */
ResumeProcessesResponse * AutoScalingClient::resumeProcesses(const ResumeProcessesRequest &request)
{
    return qobject_cast<ResumeProcessesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * SetDesiredCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the size of the specified Auto Scaling
 *
 * group>
 *
 * For more information about desired capacity, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">What Is Amazon EC2
 * Auto Scaling?</a> in the <i>Amazon EC2 Auto Scaling User
 */
SetDesiredCapacityResponse * AutoScalingClient::setDesiredCapacity(const SetDesiredCapacityRequest &request)
{
    return qobject_cast<SetDesiredCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * SetInstanceHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the health status of the specified
 *
 * instance>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health Checks
 * for Auto Scaling Instances</a> in the <i>Amazon EC2 Auto Scaling User
 */
SetInstanceHealthResponse * AutoScalingClient::setInstanceHealth(const SetInstanceHealthRequest &request)
{
    return qobject_cast<SetInstanceHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * SetInstanceProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the instance protection settings of the specified
 *
 * instances>
 *
 * For more information about preventing instances that are part of an Auto Scaling group from terminating on scale in, see
 * <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
 * Protection</a> in the <i>Amazon EC2 Auto Scaling User
 */
SetInstanceProtectionResponse * AutoScalingClient::setInstanceProtection(const SetInstanceProtectionRequest &request)
{
    return qobject_cast<SetInstanceProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * SuspendProcessesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends the specified automatic scaling processes, or all processes, for the specified Auto Scaling
 *
 * group>
 *
 * If you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process
 * types from functioning
 *
 * properly>
 *
 * To resume processes that have been suspended, use
 *
 * <a>ResumeProcesses</a>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending and Resuming
 * Scaling Processes</a> in the <i>Amazon EC2 Auto Scaling User
 */
SuspendProcessesResponse * AutoScalingClient::suspendProcesses(const SuspendProcessesRequest &request)
{
    return qobject_cast<SuspendProcessesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * TerminateInstanceInAutoScalingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the specified instance and optionally adjusts the desired group
 *
 * size>
 *
 * This call simply makes a termination request. The instance is not terminated
 */
TerminateInstanceInAutoScalingGroupResponse * AutoScalingClient::terminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest &request)
{
    return qobject_cast<TerminateInstanceInAutoScalingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * UpdateAutoScalingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * <code>false</code>, you must first disable the collection of group metrics. Otherwise, you get an error. If you have
 * previously enabled the collection of group metrics, you can disable it using
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
 */
UpdateAutoScalingGroupResponse * AutoScalingClient::updateAutoScalingGroup(const UpdateAutoScalingGroupRequest &request)
{
    return qobject_cast<UpdateAutoScalingGroupResponse *>(send(request));
}

/*!
 * \class QtAws::AutoScaling::AutoScalingClientPrivate
 * \brief The AutoScalingClientPrivate class provides private implementation for AutoScalingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AutoScalingClientPrivate object with public implementation \a q.
 */
AutoScalingClientPrivate::AutoScalingClientPrivate(AutoScalingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AutoScaling
} // namespace QtAws
