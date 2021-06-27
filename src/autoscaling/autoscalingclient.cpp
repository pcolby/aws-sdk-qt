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
#include "cancelinstancerefreshrequest.h"
#include "cancelinstancerefreshresponse.h"
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
#include "deletewarmpoolrequest.h"
#include "deletewarmpoolresponse.h"
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
#include "describeinstancerefreshesrequest.h"
#include "describeinstancerefreshesresponse.h"
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
#include "describewarmpoolrequest.h"
#include "describewarmpoolresponse.h"
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
#include "getpredictivescalingforecastrequest.h"
#include "getpredictivescalingforecastresponse.h"
#include "putlifecyclehookrequest.h"
#include "putlifecyclehookresponse.h"
#include "putnotificationconfigurationrequest.h"
#include "putnotificationconfigurationresponse.h"
#include "putscalingpolicyrequest.h"
#include "putscalingpolicyresponse.h"
#include "putscheduledupdategroupactionrequest.h"
#include "putscheduledupdategroupactionresponse.h"
#include "putwarmpoolrequest.h"
#include "putwarmpoolresponse.h"
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
#include "startinstancerefreshrequest.h"
#include "startinstancerefreshresponse.h"
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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2011-01-01"),
    QStringLiteral("autoscaling"),
    QStringLiteral("Auto Scaling"),
    QStringLiteral("autoscaling"),
    parent), d_ptr(new AutoScalingClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2011-01-01"),
    QStringLiteral("autoscaling"),
    QStringLiteral("Auto Scaling"),
    QStringLiteral("autoscaling"),
    parent), d_ptr(new AutoScalingClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/attach-instance-asg.html">Attach EC2 instances to your Auto
 * Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Attaches one or more target groups to the specified Auto Scaling
 *
 * group>
 *
 * This operation is used with the following load balancer types:
 *
 * </p <ul> <li>
 *
 * Application Load Balancer - Operates at the application layer (layer 7) and supports HTTP and HTTPS.
 *
 * </p </li> <li>
 *
 * Network Load Balancer - Operates at the transport layer (layer 4) and supports TCP, TLS, and UDP.
 *
 * </p </li> <li>
 *
 * Gateway Load Balancer - Operates at the network layer (layer
 *
 * 3)> </li> </ul>
 *
 * To describe the target groups for an Auto Scaling group, call the <a>DescribeLoadBalancerTargetGroups</a> API. To detach
 * the target group from the Auto Scaling group, call the <a>DetachLoadBalancerTargetGroups</a>
 *
 * API>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic Load Balancing and
 * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
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
 * <note>
 *
 * To attach an Application Load Balancer, Network Load Balancer, or Gateway Load Balancer, use the
 * <a>AttachLoadBalancerTargetGroups</a> API operation
 *
 * instead> </note>
 *
 * Attaches one or more Classic Load Balancers to the specified Auto Scaling group. Amazon EC2 Auto Scaling registers the
 * running instances with these Classic Load
 *
 * Balancers>
 *
 * To describe the load balancers for an Auto Scaling group, call the <a>DescribeLoadBalancers</a> API. To detach the load
 * balancer from the Auto Scaling group, call the <a>DetachLoadBalancers</a>
 *
 * API>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic Load Balancing and
 * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
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
 * Creates or updates one or more scheduled scaling actions for an Auto Scaling
 */
BatchPutScheduledUpdateGroupActionResponse * AutoScalingClient::batchPutScheduledUpdateGroupAction(const BatchPutScheduledUpdateGroupActionRequest &request)
{
    return qobject_cast<BatchPutScheduledUpdateGroupActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * CancelInstanceRefreshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an instance refresh operation in progress. Cancellation does not roll back any replacements that have already
 * been completed, but it prevents new replacements from being started.
 *
 * </p
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance refresh feature</a> in
 * Amazon EC2 Auto Scaling, which helps you update instances in your Auto Scaling group after you make configuration
 */
CancelInstanceRefreshResponse * AutoScalingClient::cancelInstanceRefresh(const CancelInstanceRefreshRequest &request)
{
    return qobject_cast<CancelInstanceRefreshResponse *>(send(request));
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
 * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
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
 * <b>We strongly recommend using a launch template when calling this operation to ensure full functionality for Amazon EC2
 * Auto Scaling and Amazon EC2.</b>
 *
 * </p
 *
 * Creates an Auto Scaling group with the specified name and attributes.
 *
 * </p
 *
 * If you exceed your maximum limit of Auto Scaling groups, the call fails. To query this limit, call the
 * <a>DescribeAccountLimits</a> API. For information about updating this limit, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling service
 * quotas</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * For introductory exercises for creating an Auto Scaling group, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/GettingStartedTutorial.html">Getting started with Amazon EC2
 * Auto Scaling</a> and <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-register-lbs-with-asg.html">Tutorial: Set up a scaled and
 * load-balanced application</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/AutoScalingGroup.html">Auto Scaling groups</a> in the
 * <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * Every Auto Scaling group has three size parameters (<code>DesiredCapacity</code>, <code>MaxSize</code>, and
 * <code>MinSize</code>). Usually, you set these sizes based on a specific number of instances. However, if you configure a
 * mixed instances policy that defines weights for the instance types, you must specify these sizes with the same units
 * that you use for weighting
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
 * If you exceed your maximum limit of launch configurations, the call fails. To query this limit, call the
 * <a>DescribeAccountLimits</a> API. For information about updating this limit, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling service
 * quotas</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/LaunchConfiguration.html">Launch configurations</a> in the
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging Auto Scaling groups and
 * instances</a> in the <i>Amazon EC2 Auto Scaling User
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
 * To remove instances from the Auto Scaling group before deleting it, call the <a>DetachInstances</a> API with the list of
 * instances and the option to decrement the desired capacity. This ensures that Amazon EC2 Auto Scaling does not launch
 * replacement
 *
 * instances>
 *
 * To terminate all instances before deleting the Auto Scaling group, call the <a>UpdateAutoScalingGroup</a> API and set
 * the minimum size and desired capacity of the Auto Scaling group to
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
 * Deleting either a step scaling policy or a simple scaling policy deletes the underlying alarm action, but does not
 * delete the alarm, even if it no longer has an associated
 *
 * action>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/deleting-scaling-policy.html">Deleting a scaling policy</a>
 * in the <i>Amazon EC2 Auto Scaling User
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
 * DeleteWarmPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the warm pool for the specified Auto Scaling
 *
 * group>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm pools for Amazon EC2
 * Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 */
DeleteWarmPoolResponse * AutoScalingClient::deleteWarmPool(const DeleteWarmPoolRequest &request)
{
    return qobject_cast<DeleteWarmPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Amazon EC2 Auto Scaling resource quotas for your
 *
 * account>
 *
 * For information about requesting an increase, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling service
 * quotas</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Describes the current Amazon EC2 Auto Scaling resource quotas for your
 *
 * account>
 *
 * For information about requesting an increase, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-account-limits.html">Amazon EC2 Auto Scaling service
 * quotas</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Describes the available adjustment types for step scaling and simple scaling
 *
 * policies>
 *
 * The following adjustment types are
 *
 * supported> <ul> <li>
 *
 * <code>ChangeInCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>ExactCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>PercentChangeInCapacity</code>
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
 * Describes the available adjustment types for step scaling and simple scaling
 *
 * policies>
 *
 * The following adjustment types are
 *
 * supported> <ul> <li>
 *
 * <code>ChangeInCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>ExactCapacity</code>
 *
 * </p </li> <li>
 *
 * <code>PercentChangeInCapacity</code>
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
 * Gets information about the Auto Scaling groups in the account and
 *
 * Region>
 *
 * This operation returns information about instances in Auto Scaling groups. To retrieve information about the instances
 * in a warm pool, you must call the <a>DescribeWarmPool</a> API.
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
 * Gets information about the Auto Scaling instances in the account and
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
 * DescribeInstanceRefreshesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the instance refreshes for the specified Auto Scaling
 *
 * group>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance refresh feature</a> in
 * Amazon EC2 Auto Scaling, which helps you update instances in your Auto Scaling group after you make configuration
 *
 * changes>
 *
 * To help you determine the status of an instance refresh, this operation returns information about the instance refreshes
 * you previously initiated, including their status, end time, the percentage of the instance refresh that is complete, and
 * the number of instances remaining to update before the instance refresh is
 *
 * complete>
 *
 * The following are the possible statuses:
 *
 * </p <ul> <li>
 *
 * <code>Pending</code> - The request was created, but the operation has not
 *
 * started> </li> <li>
 *
 * <code>InProgress</code> - The operation is in
 *
 * progress> </li> <li>
 *
 * <code>Successful</code> - The operation completed
 *
 * successfully> </li> <li>
 *
 * <code>Failed</code> - The operation failed to complete. You can troubleshoot using the status reason and the scaling
 * activities.
 *
 * </p </li> <li>
 *
 * <code>Cancelling</code> - An ongoing operation is being cancelled. Cancellation does not roll back any replacements that
 * have already been completed, but it prevents new replacements from being started.
 *
 * </p </li> <li>
 *
 * <code>Cancelled</code> - The operation is cancelled.
 */
DescribeInstanceRefreshesResponse * AutoScalingClient::describeInstanceRefreshes(const DescribeInstanceRefreshesRequest &request)
{
    return qobject_cast<DescribeInstanceRefreshesResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeLaunchConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the launch configurations in the account and
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
 * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>
 *
 * </p </li> <li>
 *
 * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>
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
 * <code>autoscaling:EC2_INSTANCE_LAUNCHING</code>
 *
 * </p </li> <li>
 *
 * <code>autoscaling:EC2_INSTANCE_TERMINATING</code>
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
 * Gets information about the lifecycle hooks for the specified Auto Scaling
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
 * Gets information about the load balancer target groups for the specified Auto Scaling
 *
 * group>
 *
 * To determine the availability of registered instances, use the <code>State</code> element in the response. When you
 * attach a target group to an Auto Scaling group, the initial <code>State</code> value is <code>Adding</code>. The state
 * transitions to <code>Added</code> after all Auto Scaling instances are registered with the target group. If Elastic Load
 * Balancing health checks are enabled for the Auto Scaling group, the state transitions to <code>InService</code> after at
 * least one Auto Scaling instance passes the health check. When the target group is in the <code>InService</code> state,
 * Amazon EC2 Auto Scaling can terminate and replace any instances that are reported as unhealthy. If no registered
 * instances pass the health checks, the target group doesn't enter the <code>InService</code> state.
 *
 * </p
 *
 * Target groups also have an <code>InService</code> state if you attach them in the <a>CreateAutoScalingGroup</a> API
 * call. If your target group state is <code>InService</code>, but it is not working properly, check the scaling activities
 * by calling <a>DescribeScalingActivities</a> and take any corrective actions
 *
 * necessary>
 *
 * For help with failed health checks, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting Amazon EC2 Auto
 * Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic Load Balancing and
 * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
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
 * Gets information about the load balancers for the specified Auto Scaling
 *
 * group>
 *
 * This operation describes only Classic Load Balancers. If you have Application Load Balancers, Network Load Balancers, or
 * Gateway Load Balancers, use the <a>DescribeLoadBalancerTargetGroups</a> API
 *
 * instead>
 *
 * To determine the availability of registered instances, use the <code>State</code> element in the response. When you
 * attach a load balancer to an Auto Scaling group, the initial <code>State</code> value is <code>Adding</code>. The state
 * transitions to <code>Added</code> after all Auto Scaling instances are registered with the load balancer. If Elastic
 * Load Balancing health checks are enabled for the Auto Scaling group, the state transitions to <code>InService</code>
 * after at least one Auto Scaling instance passes the health check. When the load balancer is in the
 * <code>InService</code> state, Amazon EC2 Auto Scaling can terminate and replace any instances that are reported as
 * unhealthy. If no registered instances pass the health checks, the load balancer doesn't enter the <code>InService</code>
 * state.
 *
 * </p
 *
 * Load balancers also have an <code>InService</code> state if you attach them in the <a>CreateAutoScalingGroup</a> API
 * call. If your load balancer state is <code>InService</code>, but it is not working properly, check the scaling
 * activities by calling <a>DescribeScalingActivities</a> and take any corrective actions
 *
 * necessary>
 *
 * For help with failed health checks, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ts-as-healthchecks.html">Troubleshooting Amazon EC2 Auto
 * Scaling: Health checks</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-load-balancer.html">Elastic Load Balancing and
 * Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
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
 * calling the <a>EnableMetricsCollection</a>
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
 * calling the <a>EnableMetricsCollection</a>
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
 * Gets information about the Amazon SNS notifications that are configured for one or more Auto Scaling
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
 * Gets information about the scaling policies in the account and
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
 * Gets information about the scaling activities in the account and
 *
 * Region>
 *
 * When scaling events occur, you see a record of the scaling activity in the scaling activities. For more information, see
 * <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-verify-scaling-activity.html">Verifying a scaling
 * activity for an Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * If the scaling event succeeds, the value of the <code>StatusCode</code> element in the response is
 * <code>Successful</code>. If an attempt to launch instances failed, the <code>StatusCode</code> value is
 * <code>Failed</code> or <code>Cancelled</code> and the <code>StatusMessage</code> element in the response indicates the
 * cause of the failure. For help interpreting the <code>StatusMessage</code>, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/CHAP_Troubleshooting.html">Troubleshooting Amazon EC2 Auto
 * Scaling</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
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
 * Describes the scaling process types for use with the <a>ResumeProcesses</a> and <a>SuspendProcesses</a>
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
 * Describes the scaling process types for use with the <a>ResumeProcesses</a> and <a>SuspendProcesses</a>
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
 * Gets information about the scheduled actions that haven't run or that have not reached their end
 *
 * time>
 *
 * To describe the scaling activities for scheduled actions that have already run, call the
 * <a>DescribeScalingActivities</a>
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
 *
 * returned>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/autoscaling-tagging.html">Tagging Auto Scaling groups and
 * instances</a> in the <i>Amazon EC2 Auto Scaling User
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling which Auto Scaling
 * instances terminate during scale in</a> in the <i>Amazon EC2 Auto Scaling User
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html">Controlling which Auto Scaling
 * instances terminate during scale in</a> in the <i>Amazon EC2 Auto Scaling User
 */
DescribeTerminationPolicyTypesResponse * AutoScalingClient::describeTerminationPolicyTypes()
{
    return describeTerminationPolicyTypes(DescribeTerminationPolicyTypesRequest());
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * DescribeWarmPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a warm pool and its
 *
 * instances>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm pools for Amazon EC2
 * Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 */
DescribeWarmPoolResponse * AutoScalingClient::describeWarmPool(const DescribeWarmPoolRequest &request)
{
    return qobject_cast<DescribeWarmPoolResponse *>(send(request));
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/detach-instance-asg.html">Detach EC2 instances from your
 * Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
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
 * This operation detaches only Classic Load Balancers. If you have Application Load Balancers, Network Load Balancers, or
 * Gateway Load Balancers, use the <a>DetachLoadBalancerTargetGroups</a> API
 *
 * instead>
 *
 * When you detach a load balancer, it enters the <code>Removing</code> state while deregistering the instances in the
 * group. When all instances are deregistered, then you can no longer describe the load balancer using the
 * <a>DescribeLoadBalancers</a> API call. The instances remain
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
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-monitoring.html">Monitoring CloudWatch metrics
 * for your Auto Scaling groups and instances</a> in the <i>Amazon EC2 Auto Scaling User
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
 * If you choose to decrement the desired capacity of the Auto Scaling group, the instances can enter standby as long as
 * the desired capacity of the Auto Scaling group after the instances are placed into standby is equal to or greater than
 * the minimum capacity of the
 *
 * group>
 *
 * If you choose not to decrement the desired capacity of the Auto Scaling group, the Auto Scaling group launches new
 * instances to replace the instances on
 *
 * standby>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily removing instances
 * from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Executes the specified policy. This can be useful for testing the design of your scaling
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
 * After you put the instances back in service, the desired capacity is
 *
 * incremented>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-enter-exit-standby.html">Temporarily removing instances
 * from your Auto Scaling group</a> in the <i>Amazon EC2 Auto Scaling User
 */
ExitStandbyResponse * AutoScalingClient::exitStandby(const ExitStandbyRequest &request)
{
    return qobject_cast<ExitStandbyResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * GetPredictiveScalingForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the forecast data for a predictive scaling
 *
 * policy>
 *
 * Load forecasts are predictions of the hourly load values using historical load data from CloudWatch and an analysis of
 * historical trends. Capacity forecasts are represented as predicted values for the minimum capacity that is needed on an
 * hourly basis, based on the hourly load
 *
 * forecast>
 *
 * A minimum of 24 hours of data is required to create the initial forecasts. However, having a full 14 days of historical
 * data results in more accurate
 *
 * forecasts>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive scaling
 * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 */
GetPredictiveScalingForecastResponse * AutoScalingClient::getPredictiveScalingForecast(const GetPredictiveScalingForecastRequest &request)
{
    return qobject_cast<GetPredictiveScalingForecastResponse *>(send(request));
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
 * If you need more time, record the lifecycle action heartbeat to keep the instance in a pending state using the
 * <a>RecordLifecycleActionHeartbeat</a> API
 *
 * call> </li> <li>
 *
 * If you finish before the timeout period ends, complete the lifecycle action using the <a>CompleteLifecycleAction</a> API
 *
 * call> </li> </ol>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
 * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * If you exceed your maximum limit of lifecycle hooks, which by default is 50 per Auto Scaling group, the call
 *
 * fails>
 *
 * You can view the lifecycle hooks for an Auto Scaling group using the <a>DescribeLifecycleHooks</a> API call. If you are
 * no longer using a lifecycle hook, you can delete it by calling the <a>DeleteLifecycleHook</a>
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
 * notifications when your Auto Scaling group scales</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * If you exceed your maximum limit of SNS topics, which is 10 per Auto Scaling group, the call
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
 * Creates or updates a scaling policy for an Auto Scaling group. Scaling policies are used to scale an Auto Scaling group
 * based on configurable metrics. If no policies are defined, the dynamic scaling and predictive scaling features are not
 * used.
 *
 * </p
 *
 * For more information about using dynamic scaling, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-target-tracking.html">Target tracking scaling
 * policies</a> and <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-scaling-simple-step.html">Step and
 * simple scaling policies</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * For more information about using predictive scaling, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-predictive-scaling.html">Predictive scaling
 * for Amazon EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * You can view the scaling policies for an Auto Scaling group using the <a>DescribePolicies</a> API call. If you are no
 * longer using a scaling policy, you can delete it by calling the <a>DeletePolicy</a>
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
 * Creates or updates a scheduled scaling action for an Auto Scaling
 *
 * group>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/schedule_time.html">Scheduled
 * scaling</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * You can view the scheduled actions for an Auto Scaling group using the <a>DescribeScheduledActions</a> API call. If you
 * are no longer using a scheduled action, you can delete it by calling the <a>DeleteScheduledAction</a>
 */
PutScheduledUpdateGroupActionResponse * AutoScalingClient::putScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest &request)
{
    return qobject_cast<PutScheduledUpdateGroupActionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * PutWarmPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a warm pool for the specified Auto Scaling group. A warm pool is a pool of pre-initialized EC2
 * instances that sits alongside the Auto Scaling group. Whenever your application needs to scale out, the Auto Scaling
 * group can draw on the warm pool to meet its new desired capacity. For more information and example configurations, see
 * <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-warm-pools.html">Warm pools for Amazon
 * EC2 Auto Scaling</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * This operation must be called from the Region in which the Auto Scaling group was created. This operation cannot be
 * called on an Auto Scaling group that has a mixed instances policy or a launch template or launch configuration that
 * requests Spot
 *
 * Instances>
 *
 * You can view the instances in the warm pool using the <a>DescribeWarmPool</a> API call. If you are no longer using a
 * warm pool, you can delete it by calling the <a>DeleteWarmPool</a>
 */
PutWarmPoolResponse * AutoScalingClient::putWarmPool(const PutWarmPoolRequest &request)
{
    return qobject_cast<PutWarmPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * RecordLifecycleActionHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Records a heartbeat for the lifecycle action associated with the specified token or instance. This extends the timeout
 * by the length of time defined using the <a>PutLifecycleHook</a> API
 *
 * call>
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
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/lifecycle-hooks.html">Amazon
 * EC2 Auto Scaling lifecycle hooks</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Resumes the specified suspended auto scaling processes, or all suspended process, for the specified Auto Scaling
 *
 * group>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending and resuming
 * scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
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
 * If a scale-in activity occurs as a result of a new <code>DesiredCapacity</code> value that is lower than the current
 * size of the group, the Auto Scaling group uses its termination policy to determine which instances to terminate.
 *
 * </p
 *
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-manual-scaling.html">Manual
 * scaling</a> in the <i>Amazon EC2 Auto Scaling User
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
 * For more information, see <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/healthcheck.html">Health checks
 * for Auto Scaling instances</a> in the <i>Amazon EC2 Auto Scaling User
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
 * Updates the instance protection settings of the specified instances. This operation cannot be called on instances in a
 * warm
 *
 * pool>
 *
 * For more information about preventing instances that are part of an Auto Scaling group from terminating on scale in, see
 * <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-instance-termination.html#instance-protection">Instance
 * scale-in protection</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * If you exceed your maximum limit of instance IDs, which is 50 per Auto Scaling group, the call
 */
SetInstanceProtectionResponse * AutoScalingClient::setInstanceProtection(const SetInstanceProtectionRequest &request)
{
    return qobject_cast<SetInstanceProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * StartInstanceRefreshResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new instance refresh operation, which triggers a rolling replacement of previously launched instances in the
 * Auto Scaling group with a new group of
 *
 * instances>
 *
 * This operation is part of the <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/asg-instance-refresh.html">instance refresh feature</a> in
 * Amazon EC2 Auto Scaling, which helps you update instances in your Auto Scaling group after you make configuration
 *
 * changes>
 *
 * If the call succeeds, it creates a new instance refresh request with a unique ID that you can use to track its progress.
 * To query its status, call the <a>DescribeInstanceRefreshes</a> API. To describe the instance refreshes that have already
 * run, call the <a>DescribeInstanceRefreshes</a> API. To cancel an instance refresh operation in progress, use the
 * <a>CancelInstanceRefresh</a> API.
 */
StartInstanceRefreshResponse * AutoScalingClient::startInstanceRefresh(const StartInstanceRefreshRequest &request)
{
    return qobject_cast<StartInstanceRefreshResponse *>(send(request));
}

/*!
 * Sends \a request to the AutoScalingClient service, and returns a pointer to an
 * SuspendProcessesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Suspends the specified auto scaling processes, or all processes, for the specified Auto Scaling
 *
 * group>
 *
 * If you suspend either the <code>Launch</code> or <code>Terminate</code> process types, it can prevent other process
 * types from functioning properly. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html">Suspending and resuming
 * scaling processes</a> in the <i>Amazon EC2 Auto Scaling User
 *
 * Guide</i>>
 *
 * To resume processes that have been suspended, call the <a>ResumeProcesses</a>
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
 * Terminates the specified instance and optionally adjusts the desired group size. This operation cannot be called on
 * instances in a warm
 *
 * pool>
 *
 * This call simply makes a termination request. The instance is not terminated immediately. When an instance is
 * terminated, the instance status changes to <code>terminated</code>. You can't connect to or start an instance after
 * you've terminated
 *
 * it>
 *
 * If you do not specify the option to decrement the desired capacity, Amazon EC2 Auto Scaling launches instances to
 * replace the ones that are terminated.
 *
 * </p
 *
 * By default, Amazon EC2 Auto Scaling balances instances across all Availability Zones. If you decrement the desired
 * capacity, your Auto Scaling group can become unbalanced between Availability Zones. Amazon EC2 Auto Scaling tries to
 * rebalance the group, and rebalancing might terminate instances in other zones. For more information, see <a
 * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/auto-scaling-benefits.html#AutoScalingBehavior.InstanceUsage">Rebalancing
 * activities</a> in the <i>Amazon EC2 Auto Scaling User
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
 * <b>We strongly recommend that all Auto Scaling groups use launch templates to ensure full functionality for Amazon EC2
 * Auto Scaling and Amazon EC2.</b>
 *
 * </p
 *
 * Updates the configuration for the specified Auto Scaling
 *
 * group>
 *
 * To update an Auto Scaling group, specify the name of the group and the parameter that you want to change. Any parameters
 * that you don't specify are not changed by this update request. The new settings take effect on any scaling activities
 * after this call returns.
 *
 * </p
 *
 * If you associate a new launch configuration or template with an Auto Scaling group, all new instances will get the
 * updated configuration. Existing instances continue to run with the configuration that they were originally launched
 * with. When you update a group to specify a mixed instances policy instead of a launch configuration or template,
 * existing instances may be replaced to match the new purchasing options that you specified in the policy. For example, if
 * the group currently has 100% On-Demand capacity and the policy specifies 50% Spot capacity, this means that half of your
 * instances will be gradually terminated and relaunched as Spot Instances. When replacing instances, Amazon EC2 Auto
 * Scaling launches new instances before terminating the old ones, so that updating your group does not compromise the
 * performance or availability of your
 *
 * application>
 *
 * Note the following about changing <code>DesiredCapacity</code>, <code>MaxSize</code>, or
 *
 * <code>MinSize</code>> <ul> <li>
 *
 * If a scale-in activity occurs as a result of a new <code>DesiredCapacity</code> value that is lower than the current
 * size of the group, the Auto Scaling group uses its termination policy to determine which instances to
 *
 * terminate> </li> <li>
 *
 * If you specify a new value for <code>MinSize</code> without specifying a value for <code>DesiredCapacity</code>, and the
 * new <code>MinSize</code> is larger than the current size of the group, this sets the group's
 * <code>DesiredCapacity</code> to the new <code>MinSize</code>
 *
 * value> </li> <li>
 *
 * If you specify a new value for <code>MaxSize</code> without specifying a value for <code>DesiredCapacity</code>, and the
 * new <code>MaxSize</code> is smaller than the current size of the group, this sets the group's
 * <code>DesiredCapacity</code> to the new <code>MaxSize</code>
 *
 * value> </li> </ul>
 *
 * To see which parameters have been set, call the <a>DescribeAutoScalingGroups</a> API. To view the scaling policies for
 * an Auto Scaling group, call the <a>DescribePolicies</a> API. If the group has scaling policies, you can update them by
 * calling the <a>PutScalingPolicy</a>
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
AutoScalingClientPrivate::AutoScalingClientPrivate(AutoScalingClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace AutoScaling
} // namespace QtAws
