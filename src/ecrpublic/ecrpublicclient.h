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

#ifndef QTAWS_ECRPUBLICCLIENT_H
#define QTAWS_ECRPUBLICCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsecrpublicglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ECRPublic {

class ECRPublicClientPrivate;
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

class QTAWSECRPUBLIC_EXPORT ECRPublicClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ECRPublicClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ECRPublicClient(
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
    Q_DECLARE_PRIVATE(ECRPublicClient)
    Q_DISABLE_COPY(ECRPublicClient)

};

} // namespace ECRPublic
} // namespace QtAws

#endif
