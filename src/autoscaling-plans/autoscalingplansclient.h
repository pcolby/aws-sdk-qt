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

#ifndef QTAWS_AUTOSCALINGPLANSCLIENT_H
#define QTAWS_AUTOSCALINGPLANSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace AutoScalingPlans {

class AutoScalingPlansClientPrivate;
class CreateScalingPlanResponse;
class DeleteScalingPlanResponse;
class DescribeScalingPlanResourcesResponse;
class DescribeScalingPlansResponse;

class QTAWS_EXPORT AutoScalingPlansClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingPlansClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AutoScalingPlansClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateScalingPlanResponse * createScalingPlan(const CreateScalingPlanRequest &request);
    DeleteScalingPlanResponse * deleteScalingPlan(const DeleteScalingPlanRequest &request);
    DescribeScalingPlanResourcesResponse * describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request);
    DescribeScalingPlansResponse * describeScalingPlans(const DescribeScalingPlansRequest &request);

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansClient)
    Q_DISABLE_COPY(AutoScalingPlansClient)

};

} // namespace AutoScalingPlans
} // namespace AWS

#endif
