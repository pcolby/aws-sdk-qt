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

#ifndef QTAWS_CLOUDFRONTCLIENT_H
#define QTAWS_CLOUDFRONTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudFront {

class CloudFrontClientPrivate;
class CreateCachePolicyRequest;
class CreateCachePolicyResponse;
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
class CreateFunctionRequest;
class CreateFunctionResponse;
class CreateInvalidationRequest;
class CreateInvalidationResponse;
class CreateKeyGroupRequest;
class CreateKeyGroupResponse;
class CreateMonitoringSubscriptionRequest;
class CreateMonitoringSubscriptionResponse;
class CreateOriginRequestPolicyRequest;
class CreateOriginRequestPolicyResponse;
class CreatePublicKeyRequest;
class CreatePublicKeyResponse;
class CreateRealtimeLogConfigRequest;
class CreateRealtimeLogConfigResponse;
class CreateStreamingDistributionRequest;
class CreateStreamingDistributionResponse;
class CreateStreamingDistributionWithTagsRequest;
class CreateStreamingDistributionWithTagsResponse;
class DeleteCachePolicyRequest;
class DeleteCachePolicyResponse;
class DeleteCloudFrontOriginAccessIdentityRequest;
class DeleteCloudFrontOriginAccessIdentityResponse;
class DeleteDistributionRequest;
class DeleteDistributionResponse;
class DeleteFieldLevelEncryptionConfigRequest;
class DeleteFieldLevelEncryptionConfigResponse;
class DeleteFieldLevelEncryptionProfileRequest;
class DeleteFieldLevelEncryptionProfileResponse;
class DeleteFunctionRequest;
class DeleteFunctionResponse;
class DeleteKeyGroupRequest;
class DeleteKeyGroupResponse;
class DeleteMonitoringSubscriptionRequest;
class DeleteMonitoringSubscriptionResponse;
class DeleteOriginRequestPolicyRequest;
class DeleteOriginRequestPolicyResponse;
class DeletePublicKeyRequest;
class DeletePublicKeyResponse;
class DeleteRealtimeLogConfigRequest;
class DeleteRealtimeLogConfigResponse;
class DeleteStreamingDistributionRequest;
class DeleteStreamingDistributionResponse;
class DescribeFunctionRequest;
class DescribeFunctionResponse;
class GetCachePolicyRequest;
class GetCachePolicyResponse;
class GetCachePolicyConfigRequest;
class GetCachePolicyConfigResponse;
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
class GetFunctionRequest;
class GetFunctionResponse;
class GetInvalidationRequest;
class GetInvalidationResponse;
class GetKeyGroupRequest;
class GetKeyGroupResponse;
class GetKeyGroupConfigRequest;
class GetKeyGroupConfigResponse;
class GetMonitoringSubscriptionRequest;
class GetMonitoringSubscriptionResponse;
class GetOriginRequestPolicyRequest;
class GetOriginRequestPolicyResponse;
class GetOriginRequestPolicyConfigRequest;
class GetOriginRequestPolicyConfigResponse;
class GetPublicKeyRequest;
class GetPublicKeyResponse;
class GetPublicKeyConfigRequest;
class GetPublicKeyConfigResponse;
class GetRealtimeLogConfigRequest;
class GetRealtimeLogConfigResponse;
class GetStreamingDistributionRequest;
class GetStreamingDistributionResponse;
class GetStreamingDistributionConfigRequest;
class GetStreamingDistributionConfigResponse;
class ListCachePoliciesRequest;
class ListCachePoliciesResponse;
class ListCloudFrontOriginAccessIdentitiesRequest;
class ListCloudFrontOriginAccessIdentitiesResponse;
class ListDistributionsRequest;
class ListDistributionsResponse;
class ListDistributionsByCachePolicyIdRequest;
class ListDistributionsByCachePolicyIdResponse;
class ListDistributionsByKeyGroupRequest;
class ListDistributionsByKeyGroupResponse;
class ListDistributionsByOriginRequestPolicyIdRequest;
class ListDistributionsByOriginRequestPolicyIdResponse;
class ListDistributionsByRealtimeLogConfigRequest;
class ListDistributionsByRealtimeLogConfigResponse;
class ListDistributionsByWebACLIdRequest;
class ListDistributionsByWebACLIdResponse;
class ListFieldLevelEncryptionConfigsRequest;
class ListFieldLevelEncryptionConfigsResponse;
class ListFieldLevelEncryptionProfilesRequest;
class ListFieldLevelEncryptionProfilesResponse;
class ListFunctionsRequest;
class ListFunctionsResponse;
class ListInvalidationsRequest;
class ListInvalidationsResponse;
class ListKeyGroupsRequest;
class ListKeyGroupsResponse;
class ListOriginRequestPoliciesRequest;
class ListOriginRequestPoliciesResponse;
class ListPublicKeysRequest;
class ListPublicKeysResponse;
class ListRealtimeLogConfigsRequest;
class ListRealtimeLogConfigsResponse;
class ListStreamingDistributionsRequest;
class ListStreamingDistributionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PublishFunctionRequest;
class PublishFunctionResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestFunctionRequest;
class TestFunctionResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCachePolicyRequest;
class UpdateCachePolicyResponse;
class UpdateCloudFrontOriginAccessIdentityRequest;
class UpdateCloudFrontOriginAccessIdentityResponse;
class UpdateDistributionRequest;
class UpdateDistributionResponse;
class UpdateFieldLevelEncryptionConfigRequest;
class UpdateFieldLevelEncryptionConfigResponse;
class UpdateFieldLevelEncryptionProfileRequest;
class UpdateFieldLevelEncryptionProfileResponse;
class UpdateFunctionRequest;
class UpdateFunctionResponse;
class UpdateKeyGroupRequest;
class UpdateKeyGroupResponse;
class UpdateOriginRequestPolicyRequest;
class UpdateOriginRequestPolicyResponse;
class UpdatePublicKeyRequest;
class UpdatePublicKeyResponse;
class UpdateRealtimeLogConfigRequest;
class UpdateRealtimeLogConfigResponse;
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
    CreateCachePolicyResponse * createCachePolicy(const CreateCachePolicyRequest &request);
    CreateCloudFrontOriginAccessIdentityResponse * createCloudFrontOriginAccessIdentity(const CreateCloudFrontOriginAccessIdentityRequest &request);
    CreateDistributionResponse * createDistribution(const CreateDistributionRequest &request);
    CreateDistributionWithTagsResponse * createDistributionWithTags(const CreateDistributionWithTagsRequest &request);
    CreateFieldLevelEncryptionConfigResponse * createFieldLevelEncryptionConfig(const CreateFieldLevelEncryptionConfigRequest &request);
    CreateFieldLevelEncryptionProfileResponse * createFieldLevelEncryptionProfile(const CreateFieldLevelEncryptionProfileRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    CreateInvalidationResponse * createInvalidation(const CreateInvalidationRequest &request);
    CreateKeyGroupResponse * createKeyGroup(const CreateKeyGroupRequest &request);
    CreateMonitoringSubscriptionResponse * createMonitoringSubscription(const CreateMonitoringSubscriptionRequest &request);
    CreateOriginRequestPolicyResponse * createOriginRequestPolicy(const CreateOriginRequestPolicyRequest &request);
    CreatePublicKeyResponse * createPublicKey(const CreatePublicKeyRequest &request);
    CreateRealtimeLogConfigResponse * createRealtimeLogConfig(const CreateRealtimeLogConfigRequest &request);
    CreateStreamingDistributionResponse * createStreamingDistribution(const CreateStreamingDistributionRequest &request);
    CreateStreamingDistributionWithTagsResponse * createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request);
    DeleteCachePolicyResponse * deleteCachePolicy(const DeleteCachePolicyRequest &request);
    DeleteCloudFrontOriginAccessIdentityResponse * deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request);
    DeleteDistributionResponse * deleteDistribution(const DeleteDistributionRequest &request);
    DeleteFieldLevelEncryptionConfigResponse * deleteFieldLevelEncryptionConfig(const DeleteFieldLevelEncryptionConfigRequest &request);
    DeleteFieldLevelEncryptionProfileResponse * deleteFieldLevelEncryptionProfile(const DeleteFieldLevelEncryptionProfileRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    DeleteKeyGroupResponse * deleteKeyGroup(const DeleteKeyGroupRequest &request);
    DeleteMonitoringSubscriptionResponse * deleteMonitoringSubscription(const DeleteMonitoringSubscriptionRequest &request);
    DeleteOriginRequestPolicyResponse * deleteOriginRequestPolicy(const DeleteOriginRequestPolicyRequest &request);
    DeletePublicKeyResponse * deletePublicKey(const DeletePublicKeyRequest &request);
    DeleteRealtimeLogConfigResponse * deleteRealtimeLogConfig(const DeleteRealtimeLogConfigRequest &request);
    DeleteStreamingDistributionResponse * deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request);
    DescribeFunctionResponse * describeFunction(const DescribeFunctionRequest &request);
    GetCachePolicyResponse * getCachePolicy(const GetCachePolicyRequest &request);
    GetCachePolicyConfigResponse * getCachePolicyConfig(const GetCachePolicyConfigRequest &request);
    GetCloudFrontOriginAccessIdentityResponse * getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request);
    GetCloudFrontOriginAccessIdentityConfigResponse * getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request);
    GetDistributionResponse * getDistribution(const GetDistributionRequest &request);
    GetDistributionConfigResponse * getDistributionConfig(const GetDistributionConfigRequest &request);
    GetFieldLevelEncryptionResponse * getFieldLevelEncryption(const GetFieldLevelEncryptionRequest &request);
    GetFieldLevelEncryptionConfigResponse * getFieldLevelEncryptionConfig(const GetFieldLevelEncryptionConfigRequest &request);
    GetFieldLevelEncryptionProfileResponse * getFieldLevelEncryptionProfile(const GetFieldLevelEncryptionProfileRequest &request);
    GetFieldLevelEncryptionProfileConfigResponse * getFieldLevelEncryptionProfileConfig(const GetFieldLevelEncryptionProfileConfigRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetInvalidationResponse * getInvalidation(const GetInvalidationRequest &request);
    GetKeyGroupResponse * getKeyGroup(const GetKeyGroupRequest &request);
    GetKeyGroupConfigResponse * getKeyGroupConfig(const GetKeyGroupConfigRequest &request);
    GetMonitoringSubscriptionResponse * getMonitoringSubscription(const GetMonitoringSubscriptionRequest &request);
    GetOriginRequestPolicyResponse * getOriginRequestPolicy(const GetOriginRequestPolicyRequest &request);
    GetOriginRequestPolicyConfigResponse * getOriginRequestPolicyConfig(const GetOriginRequestPolicyConfigRequest &request);
    GetPublicKeyResponse * getPublicKey(const GetPublicKeyRequest &request);
    GetPublicKeyConfigResponse * getPublicKeyConfig(const GetPublicKeyConfigRequest &request);
    GetRealtimeLogConfigResponse * getRealtimeLogConfig(const GetRealtimeLogConfigRequest &request);
    GetStreamingDistributionResponse * getStreamingDistribution(const GetStreamingDistributionRequest &request);
    GetStreamingDistributionConfigResponse * getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request);
    ListCachePoliciesResponse * listCachePolicies(const ListCachePoliciesRequest &request);
    ListCloudFrontOriginAccessIdentitiesResponse * listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request);
    ListDistributionsResponse * listDistributions(const ListDistributionsRequest &request);
    ListDistributionsByCachePolicyIdResponse * listDistributionsByCachePolicyId(const ListDistributionsByCachePolicyIdRequest &request);
    ListDistributionsByKeyGroupResponse * listDistributionsByKeyGroup(const ListDistributionsByKeyGroupRequest &request);
    ListDistributionsByOriginRequestPolicyIdResponse * listDistributionsByOriginRequestPolicyId(const ListDistributionsByOriginRequestPolicyIdRequest &request);
    ListDistributionsByRealtimeLogConfigResponse * listDistributionsByRealtimeLogConfig(const ListDistributionsByRealtimeLogConfigRequest &request);
    ListDistributionsByWebACLIdResponse * listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request);
    ListFieldLevelEncryptionConfigsResponse * listFieldLevelEncryptionConfigs(const ListFieldLevelEncryptionConfigsRequest &request);
    ListFieldLevelEncryptionProfilesResponse * listFieldLevelEncryptionProfiles(const ListFieldLevelEncryptionProfilesRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListInvalidationsResponse * listInvalidations(const ListInvalidationsRequest &request);
    ListKeyGroupsResponse * listKeyGroups(const ListKeyGroupsRequest &request);
    ListOriginRequestPoliciesResponse * listOriginRequestPolicies(const ListOriginRequestPoliciesRequest &request);
    ListPublicKeysResponse * listPublicKeys(const ListPublicKeysRequest &request);
    ListRealtimeLogConfigsResponse * listRealtimeLogConfigs(const ListRealtimeLogConfigsRequest &request);
    ListStreamingDistributionsResponse * listStreamingDistributions(const ListStreamingDistributionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PublishFunctionResponse * publishFunction(const PublishFunctionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestFunctionResponse * testFunction(const TestFunctionRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCachePolicyResponse * updateCachePolicy(const UpdateCachePolicyRequest &request);
    UpdateCloudFrontOriginAccessIdentityResponse * updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request);
    UpdateDistributionResponse * updateDistribution(const UpdateDistributionRequest &request);
    UpdateFieldLevelEncryptionConfigResponse * updateFieldLevelEncryptionConfig(const UpdateFieldLevelEncryptionConfigRequest &request);
    UpdateFieldLevelEncryptionProfileResponse * updateFieldLevelEncryptionProfile(const UpdateFieldLevelEncryptionProfileRequest &request);
    UpdateFunctionResponse * updateFunction(const UpdateFunctionRequest &request);
    UpdateKeyGroupResponse * updateKeyGroup(const UpdateKeyGroupRequest &request);
    UpdateOriginRequestPolicyResponse * updateOriginRequestPolicy(const UpdateOriginRequestPolicyRequest &request);
    UpdatePublicKeyResponse * updatePublicKey(const UpdatePublicKeyRequest &request);
    UpdateRealtimeLogConfigResponse * updateRealtimeLogConfig(const UpdateRealtimeLogConfigRequest &request);
    UpdateStreamingDistributionResponse * updateStreamingDistribution(const UpdateStreamingDistributionRequest &request);

protected:
    /// @cond internal
    CloudFrontClientPrivate * const d_ptr; ///< Internal d-pointer.
    CloudFrontClient(CloudFrontClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CloudFrontClient)
    Q_DISABLE_COPY(CloudFrontClient)

};

} // namespace CloudFront
} // namespace QtAws

#endif
