/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_SNOWBALLCLIENT_H
#define QTAWS_SNOWBALLCLIENT_H

#include "core/awsabstractclient.h"

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
class DescribeAddressRequest;
class DescribeAddressResponse;
class DescribeAddressesRequest;
class DescribeAddressesResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeJobRequest;
class DescribeJobResponse;
class GetJobManifestRequest;
class GetJobManifestResponse;
class GetJobUnlockCodeRequest;
class GetJobUnlockCodeResponse;
class GetSnowballUsageRequest;
class GetSnowballUsageResponse;
class ListClusterJobsRequest;
class ListClusterJobsResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListJobsRequest;
class ListJobsResponse;
class UpdateClusterRequest;
class UpdateClusterResponse;
class UpdateJobRequest;
class UpdateJobResponse;

class QTAWS_EXPORT SnowballClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SnowballClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SnowballClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelClusterResponse * cancelCluster(const CancelClusterRequest &request);
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateAddressResponse * createAddress(const CreateAddressRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    DescribeAddressResponse * describeAddress(const DescribeAddressRequest &request);
    DescribeAddressesResponse * describeAddresses(const DescribeAddressesRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    GetJobManifestResponse * getJobManifest(const GetJobManifestRequest &request);
    GetJobUnlockCodeResponse * getJobUnlockCode(const GetJobUnlockCodeRequest &request);
    GetSnowballUsageResponse * getSnowballUsage(const GetSnowballUsageRequest &request);
    ListClusterJobsResponse * listClusterJobs(const ListClusterJobsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    UpdateClusterResponse * updateCluster(const UpdateClusterRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);

private:
    Q_DECLARE_PRIVATE(SnowballClient)
    Q_DISABLE_COPY(SnowballClient)

};

} // namespace Snowball
} // namespace QtAws

#endif
