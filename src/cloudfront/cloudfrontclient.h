/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    CloudFrontCreateCloudFrontOriginAccessIdentityResponse * createCloudFrontOriginAccessIdentity(const CloudFrontCreateCloudFrontOriginAccessIdentityRequest &request);
    CloudFrontCreateDistributionResponse * createDistribution(const CloudFrontCreateDistributionRequest &request);
    CloudFrontCreateDistributionWithTagsResponse * createDistributionWithTags(const CloudFrontCreateDistributionWithTagsRequest &request);
    CloudFrontCreateInvalidationResponse * createInvalidation(const CloudFrontCreateInvalidationRequest &request);
    CloudFrontCreateStreamingDistributionResponse * createStreamingDistribution(const CloudFrontCreateStreamingDistributionRequest &request);
    CloudFrontCreateStreamingDistributionWithTagsResponse * createStreamingDistributionWithTags(const CloudFrontCreateStreamingDistributionWithTagsRequest &request);
    CloudFrontDeleteCloudFrontOriginAccessIdentityResponse * deleteCloudFrontOriginAccessIdentity(const CloudFrontDeleteCloudFrontOriginAccessIdentityRequest &request);
    CloudFrontDeleteDistributionResponse * deleteDistribution(const CloudFrontDeleteDistributionRequest &request);
    CloudFrontDeleteStreamingDistributionResponse * deleteStreamingDistribution(const CloudFrontDeleteStreamingDistributionRequest &request);
    CloudFrontGetCloudFrontOriginAccessIdentityResponse * getCloudFrontOriginAccessIdentity(const CloudFrontGetCloudFrontOriginAccessIdentityRequest &request);
    CloudFrontGetCloudFrontOriginAccessIdentityConfigResponse * getCloudFrontOriginAccessIdentityConfig(const CloudFrontGetCloudFrontOriginAccessIdentityConfigRequest &request);
    CloudFrontGetDistributionResponse * getDistribution(const CloudFrontGetDistributionRequest &request);
    CloudFrontGetDistributionConfigResponse * getDistributionConfig(const CloudFrontGetDistributionConfigRequest &request);
    CloudFrontGetInvalidationResponse * getInvalidation(const CloudFrontGetInvalidationRequest &request);
    CloudFrontGetStreamingDistributionResponse * getStreamingDistribution(const CloudFrontGetStreamingDistributionRequest &request);
    CloudFrontGetStreamingDistributionConfigResponse * getStreamingDistributionConfig(const CloudFrontGetStreamingDistributionConfigRequest &request);
    CloudFrontListCloudFrontOriginAccessIdentitiesResponse * listCloudFrontOriginAccessIdentities(const CloudFrontListCloudFrontOriginAccessIdentitiesRequest &request);
    CloudFrontListDistributionsResponse * listDistributions(const CloudFrontListDistributionsRequest &request);
    CloudFrontListDistributionsByWebACLIdResponse * listDistributionsByWebACLId(const CloudFrontListDistributionsByWebACLIdRequest &request);
    CloudFrontListInvalidationsResponse * listInvalidations(const CloudFrontListInvalidationsRequest &request);
    CloudFrontListStreamingDistributionsResponse * listStreamingDistributions(const CloudFrontListStreamingDistributionsRequest &request);
    CloudFrontListTagsForResourceResponse * listTagsForResource(const CloudFrontListTagsForResourceRequest &request);
    CloudFrontTagResourceResponse * tagResource(const CloudFrontTagResourceRequest &request);
    CloudFrontUntagResourceResponse * untagResource(const CloudFrontUntagResourceRequest &request);
    CloudFrontUpdateCloudFrontOriginAccessIdentityResponse * updateCloudFrontOriginAccessIdentity(const CloudFrontUpdateCloudFrontOriginAccessIdentityRequest &request);
    CloudFrontUpdateDistributionResponse * updateDistribution(const CloudFrontUpdateDistributionRequest &request);
    CloudFrontUpdateStreamingDistributionResponse * updateStreamingDistribution(const CloudFrontUpdateStreamingDistributionRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudFrontClient)
    Q_DISABLE_COPY(CloudFrontClient)

};

QTAWS_END_NAMESPACE

#endif
