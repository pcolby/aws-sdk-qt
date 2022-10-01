// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLCLIENT_H
#define QTAWS_SNOWBALLCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssnowballglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Snowball {

class SnowballClientPrivate;
class CancelClusterRequest;
class CancelClusterResponse;
class CancelJobRequest;
class CancelJobResponse;
class CreateAddressRequest;
class CreateAddressResponse;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreateLongTermPricingRequest;
class CreateLongTermPricingResponse;
class CreateReturnShippingLabelRequest;
class CreateReturnShippingLabelResponse;
class DescribeAddressRequest;
class DescribeAddressResponse;
class DescribeAddressesRequest;
class DescribeAddressesResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeJobRequest;
class DescribeJobResponse;
class DescribeReturnShippingLabelRequest;
class DescribeReturnShippingLabelResponse;
class GetJobManifestRequest;
class GetJobManifestResponse;
class GetJobUnlockCodeRequest;
class GetJobUnlockCodeResponse;
class GetSnowballUsageRequest;
class GetSnowballUsageResponse;
class GetSoftwareUpdatesRequest;
class GetSoftwareUpdatesResponse;
class ListClusterJobsRequest;
class ListClusterJobsResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListCompatibleImagesRequest;
class ListCompatibleImagesResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListLongTermPricingRequest;
class ListLongTermPricingResponse;
class UpdateClusterRequest;
class UpdateClusterResponse;
class UpdateJobRequest;
class UpdateJobResponse;
class UpdateJobShipmentStateRequest;
class UpdateJobShipmentStateResponse;
class UpdateLongTermPricingRequest;
class UpdateLongTermPricingResponse;

class QTAWSSNOWBALL_EXPORT SnowballClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SnowballClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SnowballClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelClusterResponse * cancelCluster(const CancelClusterRequest &request);
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateAddressResponse * createAddress(const CreateAddressRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateLongTermPricingResponse * createLongTermPricing(const CreateLongTermPricingRequest &request);
    CreateReturnShippingLabelResponse * createReturnShippingLabel(const CreateReturnShippingLabelRequest &request);
    DescribeAddressResponse * describeAddress(const DescribeAddressRequest &request);
    DescribeAddressesResponse * describeAddresses(const DescribeAddressesRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    DescribeReturnShippingLabelResponse * describeReturnShippingLabel(const DescribeReturnShippingLabelRequest &request);
    GetJobManifestResponse * getJobManifest(const GetJobManifestRequest &request);
    GetJobUnlockCodeResponse * getJobUnlockCode(const GetJobUnlockCodeRequest &request);
    GetSnowballUsageResponse * getSnowballUsage(const GetSnowballUsageRequest &request);
    GetSoftwareUpdatesResponse * getSoftwareUpdates(const GetSoftwareUpdatesRequest &request);
    ListClusterJobsResponse * listClusterJobs(const ListClusterJobsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListCompatibleImagesResponse * listCompatibleImages(const ListCompatibleImagesRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListLongTermPricingResponse * listLongTermPricing(const ListLongTermPricingRequest &request);
    UpdateClusterResponse * updateCluster(const UpdateClusterRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);
    UpdateJobShipmentStateResponse * updateJobShipmentState(const UpdateJobShipmentStateRequest &request);
    UpdateLongTermPricingResponse * updateLongTermPricing(const UpdateLongTermPricingRequest &request);

private:
    Q_DECLARE_PRIVATE(SnowballClient)
    Q_DISABLE_COPY(SnowballClient)

};

} // namespace Snowball
} // namespace QtAws

#endif
