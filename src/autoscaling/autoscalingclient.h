// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGCLIENT_H
#define QTAWS_AUTOSCALINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsautoscalingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AutoScaling {

class AutoScalingClientPrivate;
class AttachInstancesRequest;
class AttachInstancesResponse;
class AttachLoadBalancerTargetGroupsRequest;
class AttachLoadBalancerTargetGroupsResponse;
class AttachLoadBalancersRequest;
class AttachLoadBalancersResponse;
class BatchDeleteScheduledActionRequest;
class BatchDeleteScheduledActionResponse;
class BatchPutScheduledUpdateGroupActionRequest;
class BatchPutScheduledUpdateGroupActionResponse;
class CancelInstanceRefreshRequest;
class CancelInstanceRefreshResponse;
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
class DeleteWarmPoolRequest;
class DeleteWarmPoolResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeAdjustmentTypesRequest;
class DescribeAdjustmentTypesResponse;
class DescribeAutoScalingGroupsRequest;
class DescribeAutoScalingGroupsResponse;
class DescribeAutoScalingInstancesRequest;
class DescribeAutoScalingInstancesResponse;
class DescribeAutoScalingNotificationTypesRequest;
class DescribeAutoScalingNotificationTypesResponse;
class DescribeInstanceRefreshesRequest;
class DescribeInstanceRefreshesResponse;
class DescribeLaunchConfigurationsRequest;
class DescribeLaunchConfigurationsResponse;
class DescribeLifecycleHookTypesRequest;
class DescribeLifecycleHookTypesResponse;
class DescribeLifecycleHooksRequest;
class DescribeLifecycleHooksResponse;
class DescribeLoadBalancerTargetGroupsRequest;
class DescribeLoadBalancerTargetGroupsResponse;
class DescribeLoadBalancersRequest;
class DescribeLoadBalancersResponse;
class DescribeMetricCollectionTypesRequest;
class DescribeMetricCollectionTypesResponse;
class DescribeNotificationConfigurationsRequest;
class DescribeNotificationConfigurationsResponse;
class DescribePoliciesRequest;
class DescribePoliciesResponse;
class DescribeScalingActivitiesRequest;
class DescribeScalingActivitiesResponse;
class DescribeScalingProcessTypesRequest;
class DescribeScalingProcessTypesResponse;
class DescribeScheduledActionsRequest;
class DescribeScheduledActionsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeTerminationPolicyTypesRequest;
class DescribeTerminationPolicyTypesResponse;
class DescribeWarmPoolRequest;
class DescribeWarmPoolResponse;
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
class GetPredictiveScalingForecastRequest;
class GetPredictiveScalingForecastResponse;
class PutLifecycleHookRequest;
class PutLifecycleHookResponse;
class PutNotificationConfigurationRequest;
class PutNotificationConfigurationResponse;
class PutScalingPolicyRequest;
class PutScalingPolicyResponse;
class PutScheduledUpdateGroupActionRequest;
class PutScheduledUpdateGroupActionResponse;
class PutWarmPoolRequest;
class PutWarmPoolResponse;
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
class StartInstanceRefreshRequest;
class StartInstanceRefreshResponse;
class SuspendProcessesRequest;
class SuspendProcessesResponse;
class TerminateInstanceInAutoScalingGroupRequest;
class TerminateInstanceInAutoScalingGroupResponse;
class UpdateAutoScalingGroupRequest;
class UpdateAutoScalingGroupResponse;

class QTAWSAUTOSCALING_EXPORT AutoScalingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AutoScalingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AttachInstancesResponse * attachInstances(const AttachInstancesRequest &request);
    AttachLoadBalancerTargetGroupsResponse * attachLoadBalancerTargetGroups(const AttachLoadBalancerTargetGroupsRequest &request);
    AttachLoadBalancersResponse * attachLoadBalancers(const AttachLoadBalancersRequest &request);
    BatchDeleteScheduledActionResponse * batchDeleteScheduledAction(const BatchDeleteScheduledActionRequest &request);
    BatchPutScheduledUpdateGroupActionResponse * batchPutScheduledUpdateGroupAction(const BatchPutScheduledUpdateGroupActionRequest &request);
    CancelInstanceRefreshResponse * cancelInstanceRefresh(const CancelInstanceRefreshRequest &request);
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
    DeleteWarmPoolResponse * deleteWarmPool(const DeleteWarmPoolRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeAdjustmentTypesResponse * describeAdjustmentTypes(const DescribeAdjustmentTypesRequest &request);
    DescribeAutoScalingGroupsResponse * describeAutoScalingGroups(const DescribeAutoScalingGroupsRequest &request);
    DescribeAutoScalingInstancesResponse * describeAutoScalingInstances(const DescribeAutoScalingInstancesRequest &request);
    DescribeAutoScalingNotificationTypesResponse * describeAutoScalingNotificationTypes(const DescribeAutoScalingNotificationTypesRequest &request);
    DescribeInstanceRefreshesResponse * describeInstanceRefreshes(const DescribeInstanceRefreshesRequest &request);
    DescribeLaunchConfigurationsResponse * describeLaunchConfigurations(const DescribeLaunchConfigurationsRequest &request);
    DescribeLifecycleHookTypesResponse * describeLifecycleHookTypes(const DescribeLifecycleHookTypesRequest &request);
    DescribeLifecycleHooksResponse * describeLifecycleHooks(const DescribeLifecycleHooksRequest &request);
    DescribeLoadBalancerTargetGroupsResponse * describeLoadBalancerTargetGroups(const DescribeLoadBalancerTargetGroupsRequest &request);
    DescribeLoadBalancersResponse * describeLoadBalancers(const DescribeLoadBalancersRequest &request);
    DescribeMetricCollectionTypesResponse * describeMetricCollectionTypes(const DescribeMetricCollectionTypesRequest &request);
    DescribeNotificationConfigurationsResponse * describeNotificationConfigurations(const DescribeNotificationConfigurationsRequest &request);
    DescribePoliciesResponse * describePolicies(const DescribePoliciesRequest &request);
    DescribeScalingActivitiesResponse * describeScalingActivities(const DescribeScalingActivitiesRequest &request);
    DescribeScalingProcessTypesResponse * describeScalingProcessTypes(const DescribeScalingProcessTypesRequest &request);
    DescribeScheduledActionsResponse * describeScheduledActions(const DescribeScheduledActionsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeTerminationPolicyTypesResponse * describeTerminationPolicyTypes(const DescribeTerminationPolicyTypesRequest &request);
    DescribeWarmPoolResponse * describeWarmPool(const DescribeWarmPoolRequest &request);
    DetachInstancesResponse * detachInstances(const DetachInstancesRequest &request);
    DetachLoadBalancerTargetGroupsResponse * detachLoadBalancerTargetGroups(const DetachLoadBalancerTargetGroupsRequest &request);
    DetachLoadBalancersResponse * detachLoadBalancers(const DetachLoadBalancersRequest &request);
    DisableMetricsCollectionResponse * disableMetricsCollection(const DisableMetricsCollectionRequest &request);
    EnableMetricsCollectionResponse * enableMetricsCollection(const EnableMetricsCollectionRequest &request);
    EnterStandbyResponse * enterStandby(const EnterStandbyRequest &request);
    ExecutePolicyResponse * executePolicy(const ExecutePolicyRequest &request);
    ExitStandbyResponse * exitStandby(const ExitStandbyRequest &request);
    GetPredictiveScalingForecastResponse * getPredictiveScalingForecast(const GetPredictiveScalingForecastRequest &request);
    PutLifecycleHookResponse * putLifecycleHook(const PutLifecycleHookRequest &request);
    PutNotificationConfigurationResponse * putNotificationConfiguration(const PutNotificationConfigurationRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    PutScheduledUpdateGroupActionResponse * putScheduledUpdateGroupAction(const PutScheduledUpdateGroupActionRequest &request);
    PutWarmPoolResponse * putWarmPool(const PutWarmPoolRequest &request);
    RecordLifecycleActionHeartbeatResponse * recordLifecycleActionHeartbeat(const RecordLifecycleActionHeartbeatRequest &request);
    ResumeProcessesResponse * resumeProcesses(const ResumeProcessesRequest &request);
    SetDesiredCapacityResponse * setDesiredCapacity(const SetDesiredCapacityRequest &request);
    SetInstanceHealthResponse * setInstanceHealth(const SetInstanceHealthRequest &request);
    SetInstanceProtectionResponse * setInstanceProtection(const SetInstanceProtectionRequest &request);
    StartInstanceRefreshResponse * startInstanceRefresh(const StartInstanceRefreshRequest &request);
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
