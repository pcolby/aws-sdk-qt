// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERCLIENT_H
#define QTAWS_COMPUTEOPTIMIZERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscomputeoptimizerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerClientPrivate;
class DeleteRecommendationPreferencesRequest;
class DeleteRecommendationPreferencesResponse;
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
class GetEffectiveRecommendationPreferencesRequest;
class GetEffectiveRecommendationPreferencesResponse;
class GetEnrollmentStatusRequest;
class GetEnrollmentStatusResponse;
class GetEnrollmentStatusesForOrganizationRequest;
class GetEnrollmentStatusesForOrganizationResponse;
class GetLambdaFunctionRecommendationsRequest;
class GetLambdaFunctionRecommendationsResponse;
class GetRecommendationPreferencesRequest;
class GetRecommendationPreferencesResponse;
class GetRecommendationSummariesRequest;
class GetRecommendationSummariesResponse;
class PutRecommendationPreferencesRequest;
class PutRecommendationPreferencesResponse;
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
    DeleteRecommendationPreferencesResponse * deleteRecommendationPreferences(const DeleteRecommendationPreferencesRequest &request);
    DescribeRecommendationExportJobsResponse * describeRecommendationExportJobs(const DescribeRecommendationExportJobsRequest &request);
    ExportAutoScalingGroupRecommendationsResponse * exportAutoScalingGroupRecommendations(const ExportAutoScalingGroupRecommendationsRequest &request);
    ExportEBSVolumeRecommendationsResponse * exportEBSVolumeRecommendations(const ExportEBSVolumeRecommendationsRequest &request);
    ExportEC2InstanceRecommendationsResponse * exportEC2InstanceRecommendations(const ExportEC2InstanceRecommendationsRequest &request);
    ExportLambdaFunctionRecommendationsResponse * exportLambdaFunctionRecommendations(const ExportLambdaFunctionRecommendationsRequest &request);
    GetAutoScalingGroupRecommendationsResponse * getAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest &request);
    GetEBSVolumeRecommendationsResponse * getEBSVolumeRecommendations(const GetEBSVolumeRecommendationsRequest &request);
    GetEC2InstanceRecommendationsResponse * getEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest &request);
    GetEC2RecommendationProjectedMetricsResponse * getEC2RecommendationProjectedMetrics(const GetEC2RecommendationProjectedMetricsRequest &request);
    GetEffectiveRecommendationPreferencesResponse * getEffectiveRecommendationPreferences(const GetEffectiveRecommendationPreferencesRequest &request);
    GetEnrollmentStatusResponse * getEnrollmentStatus(const GetEnrollmentStatusRequest &request);
    GetEnrollmentStatusesForOrganizationResponse * getEnrollmentStatusesForOrganization(const GetEnrollmentStatusesForOrganizationRequest &request);
    GetLambdaFunctionRecommendationsResponse * getLambdaFunctionRecommendations(const GetLambdaFunctionRecommendationsRequest &request);
    GetRecommendationPreferencesResponse * getRecommendationPreferences(const GetRecommendationPreferencesRequest &request);
    GetRecommendationSummariesResponse * getRecommendationSummaries(const GetRecommendationSummariesRequest &request);
    PutRecommendationPreferencesResponse * putRecommendationPreferences(const PutRecommendationPreferencesRequest &request);
    UpdateEnrollmentStatusResponse * updateEnrollmentStatus(const UpdateEnrollmentStatusRequest &request);

private:
    Q_DECLARE_PRIVATE(ComputeOptimizerClient)
    Q_DISABLE_COPY(ComputeOptimizerClient)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
