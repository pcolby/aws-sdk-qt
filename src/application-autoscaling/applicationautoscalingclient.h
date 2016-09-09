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

#ifndef QTAWS_APPLICATIONAUTOSCALINGCLIENT_H
#define QTAWS_APPLICATIONAUTOSCALINGCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class ApplicationAutoScalingClientPrivate;

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
    ApplicationAutoScalingDeleteScalingPolicyResponse * deleteScalingPolicy(const ApplicationAutoScalingDeleteScalingPolicyRequest &request);
    ApplicationAutoScalingDeregisterScalableTargetResponse * deregisterScalableTarget(const ApplicationAutoScalingDeregisterScalableTargetRequest &request);
    ApplicationAutoScalingDescribeScalableTargetsResponse * describeScalableTargets(const ApplicationAutoScalingDescribeScalableTargetsRequest &request);
    ApplicationAutoScalingDescribeScalingActivitiesResponse * describeScalingActivities(const ApplicationAutoScalingDescribeScalingActivitiesRequest &request);
    ApplicationAutoScalingDescribeScalingPoliciesResponse * describeScalingPolicies(const ApplicationAutoScalingDescribeScalingPoliciesRequest &request);
    ApplicationAutoScalingPutScalingPolicyResponse * putScalingPolicy(const ApplicationAutoScalingPutScalingPolicyRequest &request);
    ApplicationAutoScalingRegisterScalableTargetResponse * registerScalableTarget(const ApplicationAutoScalingRegisterScalableTargetRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationAutoScalingClient)
    Q_DISABLE_COPY(ApplicationAutoScalingClient)

};

QTAWS_END_NAMESPACE

#endif
