// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRCLIENT_H
#define QTAWS_ECRCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsecrglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Ecr {

class EcrClientPrivate;
class BatchCheckLayerAvailabilityRequest;
class BatchCheckLayerAvailabilityResponse;
class BatchDeleteImageRequest;
class BatchDeleteImageResponse;
class BatchGetImageRequest;
class BatchGetImageResponse;
class BatchGetRepositoryScanningConfigurationRequest;
class BatchGetRepositoryScanningConfigurationResponse;
class CompleteLayerUploadRequest;
class CompleteLayerUploadResponse;
class CreatePullThroughCacheRuleRequest;
class CreatePullThroughCacheRuleResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class DeleteLifecyclePolicyRequest;
class DeleteLifecyclePolicyResponse;
class DeletePullThroughCacheRuleRequest;
class DeletePullThroughCacheRuleResponse;
class DeleteRegistryPolicyRequest;
class DeleteRegistryPolicyResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DeleteRepositoryPolicyRequest;
class DeleteRepositoryPolicyResponse;
class DescribeImageReplicationStatusRequest;
class DescribeImageReplicationStatusResponse;
class DescribeImageScanFindingsRequest;
class DescribeImageScanFindingsResponse;
class DescribeImagesRequest;
class DescribeImagesResponse;
class DescribePullThroughCacheRulesRequest;
class DescribePullThroughCacheRulesResponse;
class DescribeRegistryRequest;
class DescribeRegistryResponse;
class DescribeRepositoriesRequest;
class DescribeRepositoriesResponse;
class GetAuthorizationTokenRequest;
class GetAuthorizationTokenResponse;
class GetDownloadUrlForLayerRequest;
class GetDownloadUrlForLayerResponse;
class GetLifecyclePolicyRequest;
class GetLifecyclePolicyResponse;
class GetLifecyclePolicyPreviewRequest;
class GetLifecyclePolicyPreviewResponse;
class GetRegistryPolicyRequest;
class GetRegistryPolicyResponse;
class GetRegistryScanningConfigurationRequest;
class GetRegistryScanningConfigurationResponse;
class GetRepositoryPolicyRequest;
class GetRepositoryPolicyResponse;
class InitiateLayerUploadRequest;
class InitiateLayerUploadResponse;
class ListImagesRequest;
class ListImagesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutImageRequest;
class PutImageResponse;
class PutImageScanningConfigurationRequest;
class PutImageScanningConfigurationResponse;
class PutImageTagMutabilityRequest;
class PutImageTagMutabilityResponse;
class PutLifecyclePolicyRequest;
class PutLifecyclePolicyResponse;
class PutRegistryPolicyRequest;
class PutRegistryPolicyResponse;
class PutRegistryScanningConfigurationRequest;
class PutRegistryScanningConfigurationResponse;
class PutReplicationConfigurationRequest;
class PutReplicationConfigurationResponse;
class SetRepositoryPolicyRequest;
class SetRepositoryPolicyResponse;
class StartImageScanRequest;
class StartImageScanResponse;
class StartLifecyclePolicyPreviewRequest;
class StartLifecyclePolicyPreviewResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UploadLayerPartRequest;
class UploadLayerPartResponse;

class QTAWSECR_EXPORT EcrClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EcrClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EcrClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCheckLayerAvailabilityResponse * batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request);
    BatchDeleteImageResponse * batchDeleteImage(const BatchDeleteImageRequest &request);
    BatchGetImageResponse * batchGetImage(const BatchGetImageRequest &request);
    BatchGetRepositoryScanningConfigurationResponse * batchGetRepositoryScanningConfiguration(const BatchGetRepositoryScanningConfigurationRequest &request);
    CompleteLayerUploadResponse * completeLayerUpload(const CompleteLayerUploadRequest &request);
    CreatePullThroughCacheRuleResponse * createPullThroughCacheRule(const CreatePullThroughCacheRuleRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    DeletePullThroughCacheRuleResponse * deletePullThroughCacheRule(const DeletePullThroughCacheRuleRequest &request);
    DeleteRegistryPolicyResponse * deleteRegistryPolicy(const DeleteRegistryPolicyRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteRepositoryPolicyResponse * deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request);
    DescribeImageReplicationStatusResponse * describeImageReplicationStatus(const DescribeImageReplicationStatusRequest &request);
    DescribeImageScanFindingsResponse * describeImageScanFindings(const DescribeImageScanFindingsRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribePullThroughCacheRulesResponse * describePullThroughCacheRules(const DescribePullThroughCacheRulesRequest &request);
    DescribeRegistryResponse * describeRegistry(const DescribeRegistryRequest &request);
    DescribeRepositoriesResponse * describeRepositories(const DescribeRepositoriesRequest &request);
    GetAuthorizationTokenResponse * getAuthorizationToken(const GetAuthorizationTokenRequest &request);
    GetDownloadUrlForLayerResponse * getDownloadUrlForLayer(const GetDownloadUrlForLayerRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    GetLifecyclePolicyPreviewResponse * getLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest &request);
    GetRegistryPolicyResponse * getRegistryPolicy(const GetRegistryPolicyRequest &request);
    GetRegistryScanningConfigurationResponse * getRegistryScanningConfiguration(const GetRegistryScanningConfigurationRequest &request);
    GetRepositoryPolicyResponse * getRepositoryPolicy(const GetRepositoryPolicyRequest &request);
    InitiateLayerUploadResponse * initiateLayerUpload(const InitiateLayerUploadRequest &request);
    ListImagesResponse * listImages(const ListImagesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutImageResponse * putImage(const PutImageRequest &request);
    PutImageScanningConfigurationResponse * putImageScanningConfiguration(const PutImageScanningConfigurationRequest &request);
    PutImageTagMutabilityResponse * putImageTagMutability(const PutImageTagMutabilityRequest &request);
    PutLifecyclePolicyResponse * putLifecyclePolicy(const PutLifecyclePolicyRequest &request);
    PutRegistryPolicyResponse * putRegistryPolicy(const PutRegistryPolicyRequest &request);
    PutRegistryScanningConfigurationResponse * putRegistryScanningConfiguration(const PutRegistryScanningConfigurationRequest &request);
    PutReplicationConfigurationResponse * putReplicationConfiguration(const PutReplicationConfigurationRequest &request);
    SetRepositoryPolicyResponse * setRepositoryPolicy(const SetRepositoryPolicyRequest &request);
    StartImageScanResponse * startImageScan(const StartImageScanRequest &request);
    StartLifecyclePolicyPreviewResponse * startLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UploadLayerPartResponse * uploadLayerPart(const UploadLayerPartRequest &request);

private:
    Q_DECLARE_PRIVATE(EcrClient)
    Q_DISABLE_COPY(EcrClient)

};

} // namespace Ecr
} // namespace QtAws

#endif
