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

#ifndef QTAWS_AUTOSCALINGCLIENT_H
#define QTAWS_AUTOSCALINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace AutoScaling {

class AutoScalingClientPrivate;
class AttachInstancesRequest;
class AttachInstancesResponse;
class AttachLoadBalancerTargetGroupsRequest;
class AttachLoadBalancerTargetGroupsResponse;
class AttachLoadBalancersRequest;
class AttachLoadBalancersResponse;
class CompleteLifecycleActionRequest;
class CompleteLifecycleActionResponse;
class CreateAutoScalingGroupRequest;
class CreateAutoScalingGroupResponse;
class CreateLaunchConfigurationRequest;
class CreateLaunchConfigurationResponse;
class CreateOrUpdateTagsRequest;
class CreateOrUpdateTagsResponse;
class DeleteAutoScalingGroupRequest;
class DeleteAutoScalingGroupResponse;
class DeleteLaunchConfigurationRequest;
class DeleteLaunchConfigurationResponse;
class DeleteLifecycleHookRequest;
class DeleteLifecycleHookResponse;
class DeleteNotificationConfigurationRequest;
class DeleteNotificationConfigurationResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DeleteScheduledActionRequest;
class DeleteScheduledActionResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeAccountLimitsResponse;
class DescribeAdjustmentTypesResponse;
class DescribeAutoScalingGroupsRequest;
class DescribeAutoScalingGroupsResponse;
class DescribeAutoScalingInstancesRequest;
class DescribeAutoScalingInstancesResponse;
class DescribeAutoScalingNotificationTypesResponse;
class DescribeLaunchConfigurationsRequest;
class DescribeLaunchConfigurationsResponse;
class DescribeLifecycleHookTypesResponse;
class DescribeLifecycleHooksRequest;
class DescribeLifecycleHooksResponse;
class DescribeLoadBalancerTargetGroupsRequest;
class DescribeLoadBalancerTargetGroupsResponse;
class DescribeLoadBalancersRequest;
class DescribeLoadBalancersResponse;
class DescribeMetricCollectionTypesResponse;
class DescribeNotificationConfigurationsRequest;
class DescribeNotificationConfigurationsResponse;
class DescribePoliciesRequest;
class DescribePoliciesResponse;
class DescribeScalingActivitiesRequest;
class DescribeScalingActivitiesResponse;
class DescribeScalingProcessTypesResponse;
class DescribeScheduledActionsRequest;
class DescribeScheduledActionsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeTerminationPolicyTypesResponse;
class DetachInstancesRequest;
class DetachInstancesResponse;
class DetachLoadBalancerTargetGroupsRequest;
class DetachLoadBalancerTargetGroupsResponse;
class DetachLoadBalancersRequest;
class DetachLoadBalancersResponse;
class DisableMetricsCollectionRequest;
class DisableMetricsCollectionResponse;
class EnableMetricsCollectionRequest;
class EnableMetricsCollectionResponse;
class EnterStandbyRequest;
class EnterStandbyResponse;
class ExecutePolicyRequest;
class ExecutePolicyResponse;
class ExitStandbyRequest;
class ExitStandbyResponse;
class PutLifecycleHookRequest;
class PutLifecycleHookResponse;
class PutNotificationConfigurationRequest;
class PutNotificationConfigurationResponse;
class PutScalingPolicyRequest;
class PutScalingPolicyResponse;
class PutScheduledUpdateGroupActionRequest;
class PutScheduledUpdateGroupActionResponse;
class RecordLifecycleActionHeartbeatRequest;
class RecordLifecycleActionHeartbeatResponse;
class ResumeProcessesRequest;
class ResumeProcessesResponse;
class SetDesiredCapacityRequest;
class SetDesiredCapacityResponse;
class SetInstanceHealthRequest;
class SetInstanceHealthResponse;
class SetInstanceProtectionRequest;
class SetInstanceProtectionResponse;
class SuspendProcessesRequest;
class SuspendProcessesResponse;
class TerminateInstanceInAutoScalingGroupRequest;
class TerminateInstanceInAutoScalingGroupResponse;
class UpdateAutoScalingGroupRequest;
class UpdateAutoScalingGroupResponse;

class QTAWS_EXPORT AutoScalingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AutoScalingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AttachInstancesResponse * attachInstances(const AttachInstancesRequest &request);
    AttachLoadBalancerTargetGroupsResponse * attachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest &request);
    AttachLoadBalancersResponse * attachLoadBalancers(const AttachLoadBalancersRequest &request);
    CompleteLifecycleActionResponse * completeLifecycleAction(const CompleteLifecycleActionRequest &request);
    CreateAutoScalingGroupResponse * createAutoScalingGroup(const CreateAutoScalingGroupRequest &request);
    CreateLaunchConfigurationResponse * createLaunchConfiguration(const CreateLaunchConfigurationRequest &request);
    CreateOrUpdateTagsResponse * createOrUpdateTags(const CreateOrUpdateTagsRequest &request);
    DeleteAutoScalingGroupResponse * deleteAutoScalingGroup(const DeleteAutoScalingGroupRequest &request);
    DeleteLaunchConfigurationResponse * deleteLaunchConfiguration(const DeleteLaunchConfigurationRequest &request);
    DeleteLifecycleHookResponse * deleteLifecycleHook(const DeleteLifecycleHookRequest &request);
    DeleteNotificationConfigurationResponse * deleteNotificationConfiguration(const DeleteNotificationConfigurationRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeleteScheduledActionResponse * deleteScheduledAction(const DeleteScheduledActionRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits();
    DescribeAdjustmentTypesResponse * describeAdjustmentTypes();
    DescribeAutoScalingGroupsResponse * describeAutoScalingGroups(const DescribeAutoScalingGroupsRequest &request);
    DescribeAutoScalingInstancesResponse * describeAutoScalingInstances(const DescribeAutoScalingInstancesRequest &request);
    DescribeAutoScalingNotificationTypesResponse * describeAutoScalingNotificationTypes();
    DescribeLaunchConfigurationsResponse * describeLaunchConfigurations(const DescribeLaunchConfigurationsRequest &request);
    DescribeLifecycleHookTypesResponse * describeLifecycleHookTypes();
    DescribeLifecycleHooksResponse * describeLifecycleHooks(const DescribeLifecycleHooksRequest &request);
    DescribeLoadBalancerTargetGroupsResponse * describeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest &request);
    DescribeLoadBalancersResponse * describeLoadBalancers(const DescribeLoadBalancersRequest &request);
    DescribeMetricCollectionTypesResponse * describeMetricCollectionTypes();
    DescribeNotificationConfigurationsResponse * describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request);
    DescribePoliciesResponse * describePolicies(const DescribePoliciesRequest &request);
    DescribeScalingActivitiesResponse * describeScalingActivities(const DescribeScalingActivitiesRequest &request);
    DescribeScalingProcessTypesResponse * describeScalingProcessTypes();
    DescribeScheduledActionsResponse * describeScheduledActions(const DescribeScheduledActionsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeTerminationPolicyTypesResponse * describeTerminationPolicyTypes();
    DetachInstancesResponse * detachInstances(const DetachInstancesRequest &request);
    DetachLoadBalancerTargetGroupsResponse * detachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest &request);
    DetachLoadBalancersResponse * detachLoadBalancers(const DetachLoadBalancersRequest &request);
    DisableMetricsCollectionResponse * disableMetricsCollection(const DisableMetricsCollectionRequest &request);
    EnableMetricsCollectionResponse * enableMetricsCollection(const EnableMetricsCollectionRequest &request);
    EnterStandbyResponse * enterStandby(const EnterStandbyRequest &request);
    ExecutePolicyResponse * executePolicy(const ExecutePolicyRequest &request);
    ExitStandbyResponse * exitStandby(const ExitStandbyRequest &request);
    PutLifecycleHookResponse * putLifecycleHook(const PutLifecycleHookRequest &request);
    PutNotificationConfigurationResponse * putNotificationConfiguration(const PutNotificationConfigurationRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    PutScheduledUpdateGroupActionResponse * putScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest &request);
    RecordLifecycleActionHeartbeatResponse * recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request);
    ResumeProcessesResponse * resumeProcesses(const ResumeProcessesRequest &request);
    SetDesiredCapacityResponse * setDesiredCapacity(const SetDesiredCapacityRequest &request);
    SetInstanceHealthResponse * setInstanceHealth(const SetInstanceHealthRequest &request);
    SetInstanceProtectionResponse * setInstanceProtection(const SetInstanceProtectionRequest &request);
    SuspendProcessesResponse * suspendProcesses(const SuspendProcessesRequest &request);
    TerminateInstanceInAutoScalingGroupResponse * terminateInstanceInAutoScalingGroup(const TerminateInstanceInAutoScalingGroupRequest &request);
    UpdateAutoScalingGroupResponse * updateAutoScalingGroup(const UpdateAutoScalingGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AutoScalingClient)
    Q_DISABLE_COPY(AutoScalingClient)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
