// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCESSANALYZERCLIENT_H
#define QTAWS_ACCESSANALYZERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsaccessanalyzerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AccessAnalyzer {

class AccessAnalyzerClientPrivate;
class ApplyArchiveRuleRequest;
class ApplyArchiveRuleResponse;
class CancelPolicyGenerationRequest;
class CancelPolicyGenerationResponse;
class CreateAccessPreviewRequest;
class CreateAccessPreviewResponse;
class CreateAnalyzerRequest;
class CreateAnalyzerResponse;
class CreateArchiveRuleRequest;
class CreateArchiveRuleResponse;
class DeleteAnalyzerRequest;
class DeleteAnalyzerResponse;
class DeleteArchiveRuleRequest;
class DeleteArchiveRuleResponse;
class GetAccessPreviewRequest;
class GetAccessPreviewResponse;
class GetAnalyzedResourceRequest;
class GetAnalyzedResourceResponse;
class GetAnalyzerRequest;
class GetAnalyzerResponse;
class GetArchiveRuleRequest;
class GetArchiveRuleResponse;
class GetFindingRequest;
class GetFindingResponse;
class GetGeneratedPolicyRequest;
class GetGeneratedPolicyResponse;
class ListAccessPreviewFindingsRequest;
class ListAccessPreviewFindingsResponse;
class ListAccessPreviewsRequest;
class ListAccessPreviewsResponse;
class ListAnalyzedResourcesRequest;
class ListAnalyzedResourcesResponse;
class ListAnalyzersRequest;
class ListAnalyzersResponse;
class ListArchiveRulesRequest;
class ListArchiveRulesResponse;
class ListFindingsRequest;
class ListFindingsResponse;
class ListPolicyGenerationsRequest;
class ListPolicyGenerationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartPolicyGenerationRequest;
class StartPolicyGenerationResponse;
class StartResourceScanRequest;
class StartResourceScanResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateArchiveRuleRequest;
class UpdateArchiveRuleResponse;
class UpdateFindingsRequest;
class UpdateFindingsResponse;
class ValidatePolicyRequest;
class ValidatePolicyResponse;

class QTAWSACCESSANALYZER_EXPORT AccessAnalyzerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AccessAnalyzerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AccessAnalyzerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ApplyArchiveRuleResponse * applyArchiveRule(const ApplyArchiveRuleRequest &request);
    CancelPolicyGenerationResponse * cancelPolicyGeneration(const CancelPolicyGenerationRequest &request);
    CreateAccessPreviewResponse * createAccessPreview(const CreateAccessPreviewRequest &request);
    CreateAnalyzerResponse * createAnalyzer(const CreateAnalyzerRequest &request);
    CreateArchiveRuleResponse * createArchiveRule(const CreateArchiveRuleRequest &request);
    DeleteAnalyzerResponse * deleteAnalyzer(const DeleteAnalyzerRequest &request);
    DeleteArchiveRuleResponse * deleteArchiveRule(const DeleteArchiveRuleRequest &request);
    GetAccessPreviewResponse * getAccessPreview(const GetAccessPreviewRequest &request);
    GetAnalyzedResourceResponse * getAnalyzedResource(const GetAnalyzedResourceRequest &request);
    GetAnalyzerResponse * getAnalyzer(const GetAnalyzerRequest &request);
    GetArchiveRuleResponse * getArchiveRule(const GetArchiveRuleRequest &request);
    GetFindingResponse * getFinding(const GetFindingRequest &request);
    GetGeneratedPolicyResponse * getGeneratedPolicy(const GetGeneratedPolicyRequest &request);
    ListAccessPreviewFindingsResponse * listAccessPreviewFindings(const ListAccessPreviewFindingsRequest &request);
    ListAccessPreviewsResponse * listAccessPreviews(const ListAccessPreviewsRequest &request);
    ListAnalyzedResourcesResponse * listAnalyzedResources(const ListAnalyzedResourcesRequest &request);
    ListAnalyzersResponse * listAnalyzers(const ListAnalyzersRequest &request);
    ListArchiveRulesResponse * listArchiveRules(const ListArchiveRulesRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListPolicyGenerationsResponse * listPolicyGenerations(const ListPolicyGenerationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartPolicyGenerationResponse * startPolicyGeneration(const StartPolicyGenerationRequest &request);
    StartResourceScanResponse * startResourceScan(const StartResourceScanRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateArchiveRuleResponse * updateArchiveRule(const UpdateArchiveRuleRequest &request);
    UpdateFindingsResponse * updateFindings(const UpdateFindingsRequest &request);
    ValidatePolicyResponse * validatePolicy(const ValidatePolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(AccessAnalyzerClient)
    Q_DISABLE_COPY(AccessAnalyzerClient)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
