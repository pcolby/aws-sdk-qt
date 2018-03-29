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

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace CloudFront {

class CloudFrontClientPrivate;
class CreateCloudFrontOriginAccessIdentityRequest;
class CreateCloudFrontOriginAccessIdentityResponse;
class CreateDistributionRequest;
class CreateDistributionResponse;
class CreateDistributionWithTagsRequest;
class CreateDistributionWithTagsResponse;
class CreateInvalidationRequest;
class CreateInvalidationResponse;
class CreateStreamingDistributionRequest;
class CreateStreamingDistributionResponse;
class CreateStreamingDistributionWithTagsRequest;
class CreateStreamingDistributionWithTagsResponse;
class DeleteCloudFrontOriginAccessIdentityRequest;
class DeleteCloudFrontOriginAccessIdentityResponse;
class DeleteDistributionRequest;
class DeleteDistributionResponse;
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
class GetInvalidationRequest;
class GetInvalidationResponse;
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
class ListInvalidationsRequest;
class ListInvalidationsResponse;
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
class UpdateStreamingDistributionRequest;
class UpdateStreamingDistributionResponse;

class QTAWS_EXPORT CloudFrontClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudFrontClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
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
    CreateInvalidationResponse * createInvalidation(const CreateInvalidationRequest &request);
    CreateStreamingDistributionResponse * createStreamingDistribution(const CreateStreamingDistributionRequest &request);
    CreateStreamingDistributionWithTagsResponse * createStreamingDistributionWithTags(const CreateStreamingDistributionWithTagsRequest &request);
    DeleteCloudFrontOriginAccessIdentityResponse * deleteCloudFrontOriginAccessIdentity(const DeleteCloudFrontOriginAccessIdentityRequest &request);
    DeleteDistributionResponse * deleteDistribution(const DeleteDistributionRequest &request);
    DeleteServiceLinkedRoleResponse * deleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request);
    DeleteStreamingDistributionResponse * deleteStreamingDistribution(const DeleteStreamingDistributionRequest &request);
    GetCloudFrontOriginAccessIdentityResponse * getCloudFrontOriginAccessIdentity(const GetCloudFrontOriginAccessIdentityRequest &request);
    GetCloudFrontOriginAccessIdentityConfigResponse * getCloudFrontOriginAccessIdentityConfig(const GetCloudFrontOriginAccessIdentityConfigRequest &request);
    GetDistributionResponse * getDistribution(const GetDistributionRequest &request);
    GetDistributionConfigResponse * getDistributionConfig(const GetDistributionConfigRequest &request);
    GetInvalidationResponse * getInvalidation(const GetInvalidationRequest &request);
    GetStreamingDistributionResponse * getStreamingDistribution(const GetStreamingDistributionRequest &request);
    GetStreamingDistributionConfigResponse * getStreamingDistributionConfig(const GetStreamingDistributionConfigRequest &request);
    ListCloudFrontOriginAccessIdentitiesResponse * listCloudFrontOriginAccessIdentities(const ListCloudFrontOriginAccessIdentitiesRequest &request);
    ListDistributionsResponse * listDistributions(const ListDistributionsRequest &request);
    ListDistributionsByWebACLIdResponse * listDistributionsByWebACLId(const ListDistributionsByWebACLIdRequest &request);
    ListInvalidationsResponse * listInvalidations(const ListInvalidationsRequest &request);
    ListStreamingDistributionsResponse * listStreamingDistributions(const ListStreamingDistributionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCloudFrontOriginAccessIdentityResponse * updateCloudFrontOriginAccessIdentity(const UpdateCloudFrontOriginAccessIdentityRequest &request);
    UpdateDistributionResponse * updateDistribution(const UpdateDistributionRequest &request);
    UpdateStreamingDistributionResponse * updateStreamingDistribution(const UpdateStreamingDistributionRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudFrontClient)
    Q_DISABLE_COPY(CloudFrontClient)

};

} // namespace CloudFront
} // namespace QtAws

#endif
