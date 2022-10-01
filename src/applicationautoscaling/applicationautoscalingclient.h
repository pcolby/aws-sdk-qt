// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGCLIENT_H
#define QTAWS_APPLICATIONAUTOSCALINGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapplicationautoscalingglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingClientPrivate;
class DeleteScalingPolicyRequest;
class DeleteScalingPolicyResponse;
class DeleteScheduledActionRequest;
class DeleteScheduledActionResponse;
class DeregisterScalableTargetRequest;
class DeregisterScalableTargetResponse;
class DescribeScalableTargetsRequest;
class DescribeScalableTargetsResponse;
class DescribeScalingActivitiesRequest;
class DescribeScalingActivitiesResponse;
class DescribeScalingPoliciesRequest;
class DescribeScalingPoliciesResponse;
class DescribeScheduledActionsRequest;
class DescribeScheduledActionsResponse;
class PutScalingPolicyRequest;
class PutScalingPolicyResponse;
class PutScheduledActionRequest;
class PutScheduledActionResponse;
class RegisterScalableTargetRequest;
class RegisterScalableTargetResponse;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT ApplicationAutoScalingClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationAutoScalingClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApplicationAutoScalingClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteScalingPolicyResponse * deleteScalingPolicy(const DeleteScalingPolicyRequest &request);
    DeleteScheduledActionResponse * deleteScheduledAction(const DeleteScheduledActionRequest &request);
    DeregisterScalableTargetResponse * deregisterScalableTarget(const DeregisterScalableTargetRequest &request);
    DescribeScalableTargetsResponse * describeScalableTargets(const DescribeScalableTargetsRequest &request);
    DescribeScalingActivitiesResponse * describeScalingActivities(const DescribeScalingActivitiesRequest &request);
    DescribeScalingPoliciesResponse * describeScalingPolicies(const DescribeScalingPoliciesRequest &request);
    DescribeScheduledActionsResponse * describeScheduledActions(const DescribeScheduledActionsRequest &request);
    PutScalingPolicyResponse * putScalingPolicy(const PutScalingPolicyRequest &request);
    PutScheduledActionResponse * putScheduledAction(const PutScheduledActionRequest &request);
    RegisterScalableTargetResponse * registerScalableTarget(const RegisterScalableTargetRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationAutoScalingClient)
    Q_DISABLE_COPY(ApplicationAutoScalingClient)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
