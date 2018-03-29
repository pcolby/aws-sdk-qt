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

#ifndef QTAWS_CLOUDFRONTCLIENT_H
#define QTAWS_CLOUDFRONTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudFront {

class CloudFrontClientPrivate;
class CreateCloudFrontOriginAccessIdentityRequest;
class CreateCloudFrontOriginAccessIdentityResponse;
class CreateDistributionRequest;
class CreateDistributionResponse;
class CreateDistributionWithTagsRequest;
class CreateDistributionWithTagsResponse;
class CreateFieldLevelEncryptionConfigRequest;
class CreateFieldLevelEncryptionConfigResponse;
class CreateFieldLevelEncryptionProfileRequest;
class CreateFieldLevelEncryptionProfileResponse;
class CreateInvalidationRequest;
class CreateInvalidationResponse;
class CreatePublicKeyRequest;
class CreatePublicKeyResponse;
class CreateStreamingDistributionRequest;
class CreateStreamingDistributionResponse;
class CreateStreamingDistributionWithTagsRequest;
class CreateStreamingDistributionWithTagsResponse;
class DeleteCloudFrontOriginAccessIdentityRequest;
class DeleteCloudFrontOriginAccessIdentityResponse;
class DeleteDistributionRequest;
class DeleteDistributionResponse;
class DeleteFieldLevelEncryptionConfigRequest;
class DeleteFieldLevelEncryptionConfigResponse;
class DeleteFieldLevelEncryptionProfileRequest;
class DeleteFieldLevelEncryptionProfileResponse;
class DeletePublicKeyRequest;
class DeletePublicKeyResponse;
class DeleteServiceLinkedRoleRequest;
class DeleteServiceLinkedRoleResponse;
class DeleteStreamingDistributionRequest;
class DeleteStreamingDistributionResponse;
class GetCloudFrontOriginAccessIdentityRequest;
class GetCloudFrontOriginAccessIdentityResponse;
class GetCloudFrontOriginAccessIdentityConfigRequest;
class GetCloudFrontOriginAccessIdentityConfigResponse;
class GetDistributionRequest;
class GetDistributionResponse;
class GetDistributionConfigRequest;
class GetDistributionConfigResponse;
class GetFieldLevelEncryptionRequest;
class GetFieldLevelEncryptionResponse;
class GetFieldLevelEncryptionConfigRequest;
class GetFieldLevelEncryptionConfigResponse;
class GetFieldLevelEncryptionProfileRequest;
class GetFieldLevelEncryptionProfileResponse;
class GetFieldLevelEncryptionProfileConfigRequest;
class GetFieldLevelEncryptionProfileConfigResponse;
class GetInvalidationRequest;
class GetInvalidationResponse;
class GetPublicKeyRequest;
class GetPublicKeyResponse;
class GetPublicKeyConfigRequest;
class GetPublicKeyConfigResponse;
class GetStreamingDistributionRequest;
class GetStreamingDistributionResponse;
class GetStreamingDistributionConfigRequest;
class GetStreamingDistributionConfigResponse;
class ListCloudFrontOriginAccessIdentitiesRequest;
class ListCloudFrontOriginAccessIdentitiesResponse;
class ListDistributionsRequest;
class ListDistributionsResponse;
class ListDistributionsByWebACLIdRequest;
class ListDistributionsByWebACLIdResponse;
class ListFieldLevelEncryptionConfigsRequest;
class ListFieldLevelEncryptionConfigsResponse;
class ListFieldLevelEncryptionProfilesRequest;
class ListFieldLevelEncryptionProfilesResponse;
class ListInvalidationsRequest;
class ListInvalidationsResponse;
class ListPublicKeysRequest;
class ListPublicKeysResponse;
class ListStreamingDistributionsRequest;
class ListStreamingDistributionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCloudFrontOriginAccessIdentityRequest;
class UpdateCloudFrontOriginAccessIdentityResponse;
class UpdateDistributionRequest;
class UpdateDistributionResponse;
class UpdateFieldLevelEncryptionConfigRequest;
class UpdateFieldLevelEncryptionConfigResponse;
class UpdateFieldLevelEncryptionProfileRequest;
class UpdateFieldLevelEncryptionProfileResponse;
class UpdatePublicKeyRequest;
class UpdatePublicKeyResponse;
class UpdateStreamingDistributionRequest;
class UpdateStreamingDistributionResponse;

class QTAWS_EXPORT CloudFrontClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudFrontClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudFrontClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCloudFrontOriginAccessIdentityResponse * createCloudFrontOriginAccessIdentity(const CreateCloudFrontOriginAccessIdentityRequest &request);
    CreateDistributionResponse * createDistribution(const CreateDistributionRequest &request);
    CreateDistributionWithTagsResponse * createDistributionWithTags(const CreateDistributionWithTagsRequest &request);
    CreateFieldLevelEncryptionConfigResponse * createFieldLevelEncryptionConfig(const CreateFieldLevelEncryptionConfigRequest &request);
    CreateFieldLevelEncryptionProfileResponse * createFieldLevelEncryptionProfile(const CreateFieldLevelEncryptionProfileRequest &request);
    CreateInvalidationResponse * createInvalidation(const CreateInvalidationRequest &request);
    CreatePublicKeyResponse * createPublicKey(const CreatePublicKeyRequest &request);
    CreateStreamingDistributionResponse * createStreamingDistribution(const CreateStreamingDistributionRequest &request);
    CreateStreamingDistributionWithTagsResponse * createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request);
    DeleteCloudFrontOriginAccessIdentityResponse * deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request);
    DeleteDistributionResponse * deleteDistribution(const DeleteDistributionRequest &request);
    DeleteFieldLevelEncryptionConfigResponse * deleteFieldLevelEncryptionConfig(const DeleteFieldLevelEncryptionConfigRequest &request);
    DeleteFieldLevelEncryptionProfileResponse * deleteFieldLevelEncryptionProfile(const DeleteFieldLevelEncryptionProfileRequest &request);
    DeletePublicKeyResponse * deletePublicKey(const DeletePublicKeyRequest &request);
    DeleteServiceLinkedRoleResponse * deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request);
    DeleteStreamingDistributionResponse * deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request);
    GetCloudFrontOriginAccessIdentityResponse * getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request);
    GetCloudFrontOriginAccessIdentityConfigResponse * getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request);
    GetDistributionResponse * getDistribution(const GetDistributionRequest &request);
    GetDistributionConfigResponse * getDistributionConfig(const GetDistributionConfigRequest &request);
    GetFieldLevelEncryptionResponse * getFieldLevelEncryption(const GetFieldLevelEncryptionRequest &request);
    GetFieldLevelEncryptionConfigResponse * getFieldLevelEncryptionConfig(const GetFieldLevelEncryptionConfigRequest &request);
    GetFieldLevelEncryptionProfileResponse * getFieldLevelEncryptionProfile(const GetFieldLevelEncryptionProfileRequest &request);
    GetFieldLevelEncryptionProfileConfigResponse * getFieldLevelEncryptionProfileConfig(const GetFieldLevelEncryptionProfileConfigRequest &request);
    GetInvalidationResponse * getInvalidation(const GetInvalidationRequest &request);
    GetPublicKeyResponse * getPublicKey(const GetPublicKeyRequest &request);
    GetPublicKeyConfigResponse * getPublicKeyConfig(const GetPublicKeyConfigRequest &request);
    GetStreamingDistributionResponse * getStreamingDistribution(const GetStreamingDistributionRequest &request);
    GetStreamingDistributionConfigResponse * getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request);
    ListCloudFrontOriginAccessIdentitiesResponse * listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request);
    ListDistributionsResponse * listDistributions(const ListDistributionsRequest &request);
    ListDistributionsByWebACLIdResponse * listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request);
    ListFieldLevelEncryptionConfigsResponse * listFieldLevelEncryptionConfigs(const ListFieldLevelEncryptionConfigsRequest &request);
    ListFieldLevelEncryptionProfilesResponse * listFieldLevelEncryptionProfiles(const ListFieldLevelEncryptionProfilesRequest &request);
    ListInvalidationsResponse * listInvalidations(const ListInvalidationsRequest &request);
    ListPublicKeysResponse * listPublicKeys(const ListPublicKeysRequest &request);
    ListStreamingDistributionsResponse * listStreamingDistributions(const ListStreamingDistributionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCloudFrontOriginAccessIdentityResponse * updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request);
    UpdateDistributionResponse * updateDistribution(const UpdateDistributionRequest &request);
    UpdateFieldLevelEncryptionConfigResponse * updateFieldLevelEncryptionConfig(const UpdateFieldLevelEncryptionConfigRequest &request);
    UpdateFieldLevelEncryptionProfileResponse * updateFieldLevelEncryptionProfile(const UpdateFieldLevelEncryptionProfileRequest &request);
    UpdatePublicKeyResponse * updatePublicKey(const UpdatePublicKeyRequest &request);
    UpdateStreamingDistributionResponse * updateStreamingDistribution(const UpdateStreamingDistributionRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudFrontClient)
    Q_DISABLE_COPY(CloudFrontClient)

};

} // namespace CloudFront
} // namespace QtAws

#endif
