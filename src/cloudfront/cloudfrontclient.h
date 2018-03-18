/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDFRONTCLIENT_H
#define QTAWS_CLOUDFRONTCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CloudFront {

class CloudFrontClientPrivate;

class QTAWS_EXPORT CloudFrontClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudFrontClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudFrontClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
