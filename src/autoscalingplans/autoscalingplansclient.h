// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSCLIENT_H
#define QTAWS_AUTOSCALINGPLANSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsautoscalingplansglobal.h"

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
class GetScalingPlanResourceForecastDataRequest;
class GetScalingPlanResourceForecastDataResponse;
class UpdateScalingPlanRequest;
class UpdateScalingPlanResponse;

class QTAWSAUTOSCALINGPLANS_EXPORT AutoScalingPlansClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingPlansClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AutoScalingPlansClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateScalingPlanResponse * createScalingPlan(const CreateScalingPlanRequest &request);
    DeleteScalingPlanResponse * deleteScalingPlan(const DeleteScalingPlanRequest &request);
    DescribeScalingPlanResourcesResponse * describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request);
    DescribeScalingPlansResponse * describeScalingPlans(const DescribeScalingPlansRequest &request);
    GetScalingPlanResourceForecastDataResponse * getScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest &request);
    UpdateScalingPlanResponse * updateScalingPlan(const UpdateScalingPlanRequest &request);

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansClient)
    Q_DISABLE_COPY(AutoScalingPlansClient)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
