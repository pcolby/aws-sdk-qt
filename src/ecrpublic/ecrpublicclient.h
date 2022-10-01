// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICCLIENT_H
#define QTAWS_ECRPUBLICCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsecrpublicglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EcrPublic {

class EcrPublicClientPrivate;
class BatchCheckLayerAvailabilityRequest;
class BatchCheckLayerAvailabilityResponse;
class BatchDeleteImageRequest;
class BatchDeleteImageResponse;
class CompleteLayerUploadRequest;
class CompleteLayerUploadResponse;
class CreateRepositoryRequest;
class CreateRepositoryResponse;
class DeleteRepositoryRequest;
class DeleteRepositoryResponse;
class DeleteRepositoryPolicyRequest;
class DeleteRepositoryPolicyResponse;
class DescribeImageTagsRequest;
class DescribeImageTagsResponse;
class DescribeImagesRequest;
class DescribeImagesResponse;
class DescribeRegistriesRequest;
class DescribeRegistriesResponse;
class DescribeRepositoriesRequest;
class DescribeRepositoriesResponse;
class GetAuthorizationTokenRequest;
class GetAuthorizationTokenResponse;
class GetRegistryCatalogDataRequest;
class GetRegistryCatalogDataResponse;
class GetRepositoryCatalogDataRequest;
class GetRepositoryCatalogDataResponse;
class GetRepositoryPolicyRequest;
class GetRepositoryPolicyResponse;
class InitiateLayerUploadRequest;
class InitiateLayerUploadResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutImageRequest;
class PutImageResponse;
class PutRegistryCatalogDataRequest;
class PutRegistryCatalogDataResponse;
class PutRepositoryCatalogDataRequest;
class PutRepositoryCatalogDataResponse;
class SetRepositoryPolicyRequest;
class SetRepositoryPolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UploadLayerPartRequest;
class UploadLayerPartResponse;

class QTAWSECRPUBLIC_EXPORT EcrPublicClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EcrPublicClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EcrPublicClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCheckLayerAvailabilityResponse * batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request);
    BatchDeleteImageResponse * batchDeleteImage(const BatchDeleteImageRequest &request);
    CompleteLayerUploadResponse * completeLayerUpload(const CompleteLayerUploadRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteRepositoryPolicyResponse * deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request);
    DescribeImageTagsResponse * describeImageTags(const DescribeImageTagsRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeRegistriesResponse * describeRegistries(const DescribeRegistriesRequest &request);
    DescribeRepositoriesResponse * describeRepositories(const DescribeRepositoriesRequest &request);
    GetAuthorizationTokenResponse * getAuthorizationToken(const GetAuthorizationTokenRequest &request);
    GetRegistryCatalogDataResponse * getRegistryCatalogData(const GetRegistryCatalogDataRequest &request);
    GetRepositoryCatalogDataResponse * getRepositoryCatalogData(const GetRepositoryCatalogDataRequest &request);
    GetRepositoryPolicyResponse * getRepositoryPolicy(const GetRepositoryPolicyRequest &request);
    InitiateLayerUploadResponse * initiateLayerUpload(const InitiateLayerUploadRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutImageResponse * putImage(const PutImageRequest &request);
    PutRegistryCatalogDataResponse * putRegistryCatalogData(const PutRegistryCatalogDataRequest &request);
    PutRepositoryCatalogDataResponse * putRepositoryCatalogData(const PutRepositoryCatalogDataRequest &request);
    SetRepositoryPolicyResponse * setRepositoryPolicy(const SetRepositoryPolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UploadLayerPartResponse * uploadLayerPart(const UploadLayerPartRequest &request);

private:
    Q_DECLARE_PRIVATE(EcrPublicClient)
    Q_DISABLE_COPY(EcrPublicClient)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
