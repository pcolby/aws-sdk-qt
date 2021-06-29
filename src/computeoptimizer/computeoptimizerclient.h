/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COMPUTEOPTIMIZERCLIENT_H
#define QTAWS_COMPUTEOPTIMIZERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscomputeoptimizerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerClientPrivate;
class DescribeRecommendationExportJobsRequest;
class DescribeRecommendationExportJobsResponse;
class ExportAutoScalingGroupRecommendationsRequest;
class ExportAutoScalingGroupRecommendationsResponse;
class ExportEBSVolumeRecommendationsRequest;
class ExportEBSVolumeRecommendationsResponse;
class ExportEC2InstanceRecommendationsRequest;
class ExportEC2InstanceRecommendationsResponse;
class ExportLambdaFunctionRecommendationsRequest;
class ExportLambdaFunctionRecommendationsResponse;
class GetAutoScalingGroupRecommendationsRequest;
class GetAutoScalingGroupRecommendationsResponse;
class GetEBSVolumeRecommendationsRequest;
class GetEBSVolumeRecommendationsResponse;
class GetEC2InstanceRecommendationsRequest;
class GetEC2InstanceRecommendationsResponse;
class GetEC2RecommendationProjectedMetricsRequest;
class GetEC2RecommendationProjectedMetricsResponse;
class GetEnrollmentStatusRequest;
class GetEnrollmentStatusResponse;
class GetLambdaFunctionRecommendationsRequest;
class GetLambdaFunctionRecommendationsResponse;
class GetRecommendationSummariesRequest;
class GetRecommendationSummariesResponse;
class UpdateEnrollmentStatusRequest;
class UpdateEnrollmentStatusResponse;

class QTAWSCOMPUTEOPTIMIZER_EXPORT ComputeOptimizerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ComputeOptimizerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ComputeOptimizerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeRecommendationExportJobsResponse * describeRecommendationExportJobs(const DescribeRecommendationExportJobsRequest &request);
    ExportAutoScalingGroupRecommendationsResponse * exportAutoScalingGroupRecommendations(const ExportAutoScalingGroupRecommendationsRequest &request);
    ExportEBSVolumeRecommendationsResponse * exportEBSVolumeRecommendations(const ExportEBSVolumeRecommendationsRequest &request);
    ExportEC2InstanceRecommendationsResponse * exportEC2InstanceRecommendations(const ExportEC2InstanceRecommendationsRequest &request);
    ExportLambdaFunctionRecommendationsResponse * exportLambdaFunctionRecommendations(const ExportLambdaFunctionRecommendationsRequest &request);
    GetAutoScalingGroupRecommendationsResponse * getAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest &request);
    GetEBSVolumeRecommendationsResponse * getEBSVolumeRecommendations(const GetEBSVolumeRecommendationsRequest &request);
    GetEC2InstanceRecommendationsResponse * getEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest &request);
    GetEC2RecommendationProjectedMetricsResponse * getEC2RecommendationProjectedMetrics(const GetEC2RecommendationProjectedMetricsRequest &request);
    GetEnrollmentStatusResponse * getEnrollmentStatus(const GetEnrollmentStatusRequest &request);
    GetLambdaFunctionRecommendationsResponse * getLambdaFunctionRecommendations(const GetLambdaFunctionRecommendationsRequest &request);
    GetRecommendationSummariesResponse * getRecommendationSummaries(const GetRecommendationSummariesRequest &request);
    UpdateEnrollmentStatusResponse * updateEnrollmentStatus(const UpdateEnrollmentStatusRequest &request);

protected:
    /// @cond internal
    ComputeOptimizerClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit ComputeOptimizerClient(ComputeOptimizerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(ComputeOptimizerClient)
    Q_DISABLE_COPY(ComputeOptimizerClient)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
