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

#ifndef QTAWS_ECRCLIENT_H
#define QTAWS_ECRCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace QtAws {
namespace ECR {

class EcrClientPrivate;
class BatchCheckLayerAvailabilityRequest;
class BatchCheckLayerAvailabilityResponse;
class BatchDeleteImageRequest;
class BatchDeleteImageResponse;
class BatchGetImageRequest;
class BatchGetImageResponse;
class CompleteLayerUploadRequest;
class CompleteLayerUploadResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class DeleteLifecyclePolicyRequest;
class DeleteLifecyclePolicyResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DeleteRepositoryPolicyRequest;
class DeleteRepositoryPolicyResponse;
class DescribeImagesRequest;
class DescribeImagesResponse;
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
class GetRepositoryPolicyRequest;
class GetRepositoryPolicyResponse;
class InitiateLayerUploadRequest;
class InitiateLayerUploadResponse;
class ListImagesRequest;
class ListImagesResponse;
class PutImageRequest;
class PutImageResponse;
class PutLifecyclePolicyRequest;
class PutLifecyclePolicyResponse;
class SetRepositoryPolicyRequest;
class SetRepositoryPolicyResponse;
class StartLifecyclePolicyPreviewRequest;
class StartLifecyclePolicyPreviewResponse;
class UploadLayerPartRequest;
class UploadLayerPartResponse;

class QTAWS_EXPORT EcrClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EcrClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EcrClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCheckLayerAvailabilityResponse * batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request);
    BatchDeleteImageResponse * batchDeleteImage(const BatchDeleteImageRequest &request);
    BatchGetImageResponse * batchGetImage(const BatchGetImageRequest &request);
    CompleteLayerUploadResponse * completeLayerUpload(const CompleteLayerUploadRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteRepositoryPolicyResponse * deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeRepositoriesResponse * describeRepositories(const DescribeRepositoriesRequest &request);
    GetAuthorizationTokenResponse * getAuthorizationToken(const GetAuthorizationTokenRequest &request);
    GetDownloadUrlForLayerResponse * getDownloadUrlForLayer(const GetDownloadUrlForLayerRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    GetLifecyclePolicyPreviewResponse * getLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest &request);
    GetRepositoryPolicyResponse * getRepositoryPolicy(const GetRepositoryPolicyRequest &request);
    InitiateLayerUploadResponse * initiateLayerUpload(const InitiateLayerUploadRequest &request);
    ListImagesResponse * listImages(const ListImagesRequest &request);
    PutImageResponse * putImage(const PutImageRequest &request);
    PutLifecyclePolicyResponse * putLifecyclePolicy(const PutLifecyclePolicyRequest &request);
    SetRepositoryPolicyResponse * setRepositoryPolicy(const SetRepositoryPolicyRequest &request);
    StartLifecyclePolicyPreviewResponse * startLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest &request);
    UploadLayerPartResponse * uploadLayerPart(const UploadLayerPartRequest &request);

private:
    Q_DECLARE_PRIVATE(EcrClient)
    Q_DISABLE_COPY(EcrClient)

};

} // namespace ECR
} // namespace QtAws

#endif
