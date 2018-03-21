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

#ifndef QTAWS_APPLICATIONAUTOSCALINGCLIENT_H
#define QTAWS_APPLICATIONAUTOSCALINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

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

class QTAWS_EXPORT ApplicationAutoScalingClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationAutoScalingClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ApplicationAutoScalingClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
