// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGREQUEST_H
#define QTAWS_AUTOSCALINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsautoscalingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AutoScaling {

class AutoScalingRequestPrivate;

class QTAWSAUTOSCALING_EXPORT AutoScalingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AutoScaling.
    enum Action {
        AttachInstancesAction,
        AttachLoadBalancerTargetGroupsAction,
        AttachLoadBalancersAction,
        BatchDeleteScheduledActionAction,
        BatchPutScheduledUpdateGroupActionAction,
        CancelInstanceRefreshAction,
        CompleteLifecycleActionAction,
        CreateAutoScalingGroupAction,
        CreateLaunchConfigurationAction,
        CreateOrUpdateTagsAction,
        DeleteAutoScalingGroupAction,
        DeleteLaunchConfigurationAction,
        DeleteLifecycleHookAction,
        DeleteNotificationConfigurationAction,
        DeletePolicyAction,
        DeleteScheduledActionAction,
        DeleteTagsAction,
        DeleteWarmPoolAction,
        DescribeAccountLimitsAction,
        DescribeAdjustmentTypesAction,
        DescribeAutoScalingGroupsAction,
        DescribeAutoScalingInstancesAction,
        DescribeAutoScalingNotificationTypesAction,
        DescribeInstanceRefreshesAction,
        DescribeLaunchConfigurationsAction,
        DescribeLifecycleHookTypesAction,
        DescribeLifecycleHooksAction,
        DescribeLoadBalancerTargetGroupsAction,
        DescribeLoadBalancersAction,
        DescribeMetricCollectionTypesAction,
        DescribeNotificationConfigurationsAction,
        DescribePoliciesAction,
        DescribeScalingActivitiesAction,
        DescribeScalingProcessTypesAction,
        DescribeScheduledActionsAction,
        DescribeTagsAction,
        DescribeTerminationPolicyTypesAction,
        DescribeWarmPoolAction,
        DetachInstancesAction,
        DetachLoadBalancerTargetGroupsAction,
        DetachLoadBalancersAction,
        DisableMetricsCollectionAction,
        EnableMetricsCollectionAction,
        EnterStandbyAction,
        ExecutePolicyAction,
        ExitStandbyAction,
        GetPredictiveScalingForecastAction,
        PutLifecycleHookAction,
        PutNotificationConfigurationAction,
        PutScalingPolicyAction,
        PutScheduledUpdateGroupActionAction,
        PutWarmPoolAction,
        RecordLifecycleActionHeartbeatAction,
        ResumeProcessesAction,
        SetDesiredCapacityAction,
        SetInstanceHealthAction,
        SetInstanceProtectionAction,
        StartInstanceRefreshAction,
        SuspendProcessesAction,
        TerminateInstanceInAutoScalingGroupAction,
        UpdateAutoScalingGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AutoScalingRequest(const Action action);
    AutoScalingRequest(const AutoScalingRequest &other);
    AutoScalingRequest &operator=(const AutoScalingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AutoScalingRequest &other) const;


protected:
    /// @cond internal
    explicit AutoScalingRequest(AutoScalingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AutoScalingRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
