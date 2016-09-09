/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_AUTOSCALINGCLIENT_H
#define QTAWS_AUTOSCALINGCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class AutoScalingClientPrivate;

class QTAWS_EXPORT AutoScalingClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AutoScalingClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AutoScalingAttachInstancesResponse * attachInstances(const AutoScalingAttachInstancesRequest &request);
    AutoScalingAttachLoadBalancerTargetGroupsResponse * attachLoadBalancerTargetGroups(const AutoScalingAttachLoadBalancerTargetGroupsRequest &request);
    AutoScalingAttachLoadBalancersResponse * attachLoadBalancers(const AutoScalingAttachLoadBalancersRequest &request);
    AutoScalingCompleteLifecycleActionResponse * completeLifecycleAction(const AutoScalingCompleteLifecycleActionRequest &request);
    AutoScalingCreateAutoScalingGroupResponse * createAutoScalingGroup(const AutoScalingCreateAutoScalingGroupRequest &request);
    AutoScalingCreateLaunchConfigurationResponse * createLaunchConfiguration(const AutoScalingCreateLaunchConfigurationRequest &request);
    AutoScalingCreateOrUpdateTagsResponse * createOrUpdateTags(const AutoScalingCreateOrUpdateTagsRequest &request);
    AutoScalingDeleteAutoScalingGroupResponse * deleteAutoScalingGroup(const AutoScalingDeleteAutoScalingGroupRequest &request);
    AutoScalingDeleteLaunchConfigurationResponse * deleteLaunchConfiguration(const AutoScalingDeleteLaunchConfigurationRequest &request);
    AutoScalingDeleteLifecycleHookResponse * deleteLifecycleHook(const AutoScalingDeleteLifecycleHookRequest &request);
    AutoScalingDeleteNotificationConfigurationResponse * deleteNotificationConfiguration(const AutoScalingDeleteNotificationConfigurationRequest &request);
    AutoScalingDeletePolicyResponse * deletePolicy(const AutoScalingDeletePolicyRequest &request);
    AutoScalingDeleteScheduledActionResponse * deleteScheduledAction(const AutoScalingDeleteScheduledActionRequest &request);
    AutoScalingDeleteTagsResponse * deleteTags(const AutoScalingDeleteTagsRequest &request);
    AutoScalingDescribeAccountLimitsResponse * describeAccountLimits();
    AutoScalingDescribeAdjustmentTypesResponse * describeAdjustmentTypes();
    AutoScalingDescribeAutoScalingGroupsResponse * describeAutoScalingGroups(const AutoScalingDescribeAutoScalingGroupsRequest &request);
    AutoScalingDescribeAutoScalingInstancesResponse * describeAutoScalingInstances(const AutoScalingDescribeAutoScalingInstancesRequest &request);
    AutoScalingDescribeAutoScalingNotificationTypesResponse * describeAutoScalingNotificationTypes();
    AutoScalingDescribeLaunchConfigurationsResponse * describeLaunchConfigurations(const AutoScalingDescribeLaunchConfigurationsRequest &request);
    AutoScalingDescribeLifecycleHookTypesResponse * describeLifecycleHookTypes();
    AutoScalingDescribeLifecycleHooksResponse * describeLifecycleHooks(const AutoScalingDescribeLifecycleHooksRequest &request);
    AutoScalingDescribeLoadBalancerTargetGroupsResponse * describeLoadBalancerTargetGroups(const AutoScalingDescribeLoadBalancerTargetGroupsRequest &request);
    AutoScalingDescribeLoadBalancersResponse * describeLoadBalancers(const AutoScalingDescribeLoadBalancersRequest &request);
    AutoScalingDescribeMetricCollectionTypesResponse * describeMetricCollectionTypes();
    AutoScalingDescribeNotificationConfigurationsResponse * describeNotificationConfigurations(const AutoScalingDescribeNotificationConfigurationsRequest &request);
    AutoScalingDescribePoliciesResponse * describePolicies(const AutoScalingDescribePoliciesRequest &request);
    AutoScalingDescribeScalingActivitiesResponse * describeScalingActivities(const AutoScalingDescribeScalingActivitiesRequest &request);
    AutoScalingDescribeScalingProcessTypesResponse * describeScalingProcessTypes();
    AutoScalingDescribeScheduledActionsResponse * describeScheduledActions(const AutoScalingDescribeScheduledActionsRequest &request);
    AutoScalingDescribeTagsResponse * describeTags(const AutoScalingDescribeTagsRequest &request);
    AutoScalingDescribeTerminationPolicyTypesResponse * describeTerminationPolicyTypes();
    AutoScalingDetachInstancesResponse * detachInstances(const AutoScalingDetachInstancesRequest &request);
    AutoScalingDetachLoadBalancerTargetGroupsResponse * detachLoadBalancerTargetGroups(const AutoScalingDetachLoadBalancerTargetGroupsRequest &request);
    AutoScalingDetachLoadBalancersResponse * detachLoadBalancers(const AutoScalingDetachLoadBalancersRequest &request);
    AutoScalingDisableMetricsCollectionResponse * disableMetricsCollection(const AutoScalingDisableMetricsCollectionRequest &request);
    AutoScalingEnableMetricsCollectionResponse * enableMetricsCollection(const AutoScalingEnableMetricsCollectionRequest &request);
    AutoScalingEnterStandbyResponse * enterStandby(const AutoScalingEnterStandbyRequest &request);
    AutoScalingExecutePolicyResponse * executePolicy(const AutoScalingExecutePolicyRequest &request);
    AutoScalingExitStandbyResponse * exitStandby(const AutoScalingExitStandbyRequest &request);
    AutoScalingPutLifecycleHookResponse * putLifecycleHook(const AutoScalingPutLifecycleHookRequest &request);
    AutoScalingPutNotificationConfigurationResponse * putNotificationConfiguration(const AutoScalingPutNotificationConfigurationRequest &request);
    AutoScalingPutScalingPolicyResponse * putScalingPolicy(const AutoScalingPutScalingPolicyRequest &request);
    AutoScalingPutScheduledUpdateGroupActionResponse * putScheduledUpdateGroupAction(const AutoScalingPutScheduledUpdateGroupActionRequest &request);
    AutoScalingRecordLifecycleActionHeartbeatResponse * recordLifecycleActionHeartbeat(const AutoScalingRecordLifecycleActionHeartbeatRequest &request);
    AutoScalingResumeProcessesResponse * resumeProcesses(const AutoScalingResumeProcessesRequest &request);
    AutoScalingSetDesiredCapacityResponse * setDesiredCapacity(const AutoScalingSetDesiredCapacityRequest &request);
    AutoScalingSetInstanceHealthResponse * setInstanceHealth(const AutoScalingSetInstanceHealthRequest &request);
    AutoScalingSetInstanceProtectionResponse * setInstanceProtection(const AutoScalingSetInstanceProtectionRequest &request);
    AutoScalingSuspendProcessesResponse * suspendProcesses(const AutoScalingSuspendProcessesRequest &request);
    AutoScalingTerminateInstanceInAutoScalingGroupResponse * terminateInstanceInAutoScalingGroup(const AutoScalingTerminateInstanceInAutoScalingGroupRequest &request);
    AutoScalingUpdateAutoScalingGroupResponse * updateAutoScalingGroup(const AutoScalingUpdateAutoScalingGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AutoScalingClient)
    Q_DISABLE_COPY(AutoScalingClient)

};

QTAWS_END_NAMESPACE

#endif
