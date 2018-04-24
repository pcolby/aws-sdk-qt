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

#ifndef QTAWS_AUTOSCALINGPLANSCLIENT_H
#define QTAWS_AUTOSCALINGPLANSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansClientPrivate;
class CreateScalingPlanRequest;
class CreateScalingPlanResponse;
class DeleteScalingPlanRequest;
class DeleteScalingPlanResponse;
class DescribeScalingPlanResourcesRequest;
class DescribeScalingPlanResourcesResponse;
class DescribeScalingPlansRequest;
class DescribeScalingPlansResponse;
class UpdateScalingPlanRequest;
class UpdateScalingPlanResponse;

class QTAWS_EXPORT AutoScalingPlansClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingPlansClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AutoScalingPlansClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateScalingPlanResponse * createScalingPlan(const CreateScalingPlanRequest &request);
    DeleteScalingPlanResponse * deleteScalingPlan(const DeleteScalingPlanRequest &request);
    DescribeScalingPlanResourcesResponse * describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request);
    DescribeScalingPlansResponse * describeScalingPlans(const DescribeScalingPlansRequest &request);
    UpdateScalingPlanResponse * updateScalingPlan(const UpdateScalingPlanRequest &request);

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansClient)
    Q_DISABLE_COPY(AutoScalingPlansClient)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
