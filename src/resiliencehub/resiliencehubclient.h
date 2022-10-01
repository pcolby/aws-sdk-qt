// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESILIENCEHUBCLIENT_H
#define QTAWS_RESILIENCEHUBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsresiliencehubglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ResilienceHub {

class ResilienceHubClientPrivate;
class AddDraftAppVersionResourceMappingsRequest;
class AddDraftAppVersionResourceMappingsResponse;
class CreateAppRequest;
class CreateAppResponse;
class CreateRecommendationTemplateRequest;
class CreateRecommendationTemplateResponse;
class CreateResiliencyPolicyRequest;
class CreateResiliencyPolicyResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteAppAssessmentRequest;
class DeleteAppAssessmentResponse;
class DeleteRecommendationTemplateRequest;
class DeleteRecommendationTemplateResponse;
class DeleteResiliencyPolicyRequest;
class DeleteResiliencyPolicyResponse;
class DescribeAppRequest;
class DescribeAppResponse;
class DescribeAppAssessmentRequest;
class DescribeAppAssessmentResponse;
class DescribeAppVersionResourcesResolutionStatusRequest;
class DescribeAppVersionResourcesResolutionStatusResponse;
class DescribeAppVersionTemplateRequest;
class DescribeAppVersionTemplateResponse;
class DescribeDraftAppVersionResourcesImportStatusRequest;
class DescribeDraftAppVersionResourcesImportStatusResponse;
class DescribeResiliencyPolicyRequest;
class DescribeResiliencyPolicyResponse;
class ImportResourcesToDraftAppVersionRequest;
class ImportResourcesToDraftAppVersionResponse;
class ListAlarmRecommendationsRequest;
class ListAlarmRecommendationsResponse;
class ListAppAssessmentsRequest;
class ListAppAssessmentsResponse;
class ListAppComponentCompliancesRequest;
class ListAppComponentCompliancesResponse;
class ListAppComponentRecommendationsRequest;
class ListAppComponentRecommendationsResponse;
class ListAppVersionResourceMappingsRequest;
class ListAppVersionResourceMappingsResponse;
class ListAppVersionResourcesRequest;
class ListAppVersionResourcesResponse;
class ListAppVersionsRequest;
class ListAppVersionsResponse;
class ListAppsRequest;
class ListAppsResponse;
class ListRecommendationTemplatesRequest;
class ListRecommendationTemplatesResponse;
class ListResiliencyPoliciesRequest;
class ListResiliencyPoliciesResponse;
class ListSopRecommendationsRequest;
class ListSopRecommendationsResponse;
class ListSuggestedResiliencyPoliciesRequest;
class ListSuggestedResiliencyPoliciesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTestRecommendationsRequest;
class ListTestRecommendationsResponse;
class ListUnsupportedAppVersionResourcesRequest;
class ListUnsupportedAppVersionResourcesResponse;
class PublishAppVersionRequest;
class PublishAppVersionResponse;
class PutDraftAppVersionTemplateRequest;
class PutDraftAppVersionTemplateResponse;
class RemoveDraftAppVersionResourceMappingsRequest;
class RemoveDraftAppVersionResourceMappingsResponse;
class ResolveAppVersionResourcesRequest;
class ResolveAppVersionResourcesResponse;
class StartAppAssessmentRequest;
class StartAppAssessmentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAppRequest;
class UpdateAppResponse;
class UpdateResiliencyPolicyRequest;
class UpdateResiliencyPolicyResponse;

class QTAWSRESILIENCEHUB_EXPORT ResilienceHubClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ResilienceHubClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ResilienceHubClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddDraftAppVersionResourceMappingsResponse * addDraftAppVersionResourceMappings(const AddDraftAppVersionResourceMappingsRequest &request);
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateRecommendationTemplateResponse * createRecommendationTemplate(const CreateRecommendationTemplateRequest &request);
    CreateResiliencyPolicyResponse * createResiliencyPolicy(const CreateResiliencyPolicyRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteAppAssessmentResponse * deleteAppAssessment(const DeleteAppAssessmentRequest &request);
    DeleteRecommendationTemplateResponse * deleteRecommendationTemplate(const DeleteRecommendationTemplateRequest &request);
    DeleteResiliencyPolicyResponse * deleteResiliencyPolicy(const DeleteResiliencyPolicyRequest &request);
    DescribeAppResponse * describeApp(const DescribeAppRequest &request);
    DescribeAppAssessmentResponse * describeAppAssessment(const DescribeAppAssessmentRequest &request);
    DescribeAppVersionResourcesResolutionStatusResponse * describeAppVersionResourcesResolutionStatus(const DescribeAppVersionResourcesResolutionStatusRequest &request);
    DescribeAppVersionTemplateResponse * describeAppVersionTemplate(const DescribeAppVersionTemplateRequest &request);
    DescribeDraftAppVersionResourcesImportStatusResponse * describeDraftAppVersionResourcesImportStatus(const DescribeDraftAppVersionResourcesImportStatusRequest &request);
    DescribeResiliencyPolicyResponse * describeResiliencyPolicy(const DescribeResiliencyPolicyRequest &request);
    ImportResourcesToDraftAppVersionResponse * importResourcesToDraftAppVersion(const ImportResourcesToDraftAppVersionRequest &request);
    ListAlarmRecommendationsResponse * listAlarmRecommendations(const ListAlarmRecommendationsRequest &request);
    ListAppAssessmentsResponse * listAppAssessments(const ListAppAssessmentsRequest &request);
    ListAppComponentCompliancesResponse * listAppComponentCompliances(const ListAppComponentCompliancesRequest &request);
    ListAppComponentRecommendationsResponse * listAppComponentRecommendations(const ListAppComponentRecommendationsRequest &request);
    ListAppVersionResourceMappingsResponse * listAppVersionResourceMappings(const ListAppVersionResourceMappingsRequest &request);
    ListAppVersionResourcesResponse * listAppVersionResources(const ListAppVersionResourcesRequest &request);
    ListAppVersionsResponse * listAppVersions(const ListAppVersionsRequest &request);
    ListAppsResponse * listApps(const ListAppsRequest &request);
    ListRecommendationTemplatesResponse * listRecommendationTemplates(const ListRecommendationTemplatesRequest &request);
    ListResiliencyPoliciesResponse * listResiliencyPolicies(const ListResiliencyPoliciesRequest &request);
    ListSopRecommendationsResponse * listSopRecommendations(const ListSopRecommendationsRequest &request);
    ListSuggestedResiliencyPoliciesResponse * listSuggestedResiliencyPolicies(const ListSuggestedResiliencyPoliciesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTestRecommendationsResponse * listTestRecommendations(const ListTestRecommendationsRequest &request);
    ListUnsupportedAppVersionResourcesResponse * listUnsupportedAppVersionResources(const ListUnsupportedAppVersionResourcesRequest &request);
    PublishAppVersionResponse * publishAppVersion(const PublishAppVersionRequest &request);
    PutDraftAppVersionTemplateResponse * putDraftAppVersionTemplate(const PutDraftAppVersionTemplateRequest &request);
    RemoveDraftAppVersionResourceMappingsResponse * removeDraftAppVersionResourceMappings(const RemoveDraftAppVersionResourceMappingsRequest &request);
    ResolveAppVersionResourcesResponse * resolveAppVersionResources(const ResolveAppVersionResourcesRequest &request);
    StartAppAssessmentResponse * startAppAssessment(const StartAppAssessmentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateResiliencyPolicyResponse * updateResiliencyPolicy(const UpdateResiliencyPolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(ResilienceHubClient)
    Q_DISABLE_COPY(ResilienceHubClient)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
