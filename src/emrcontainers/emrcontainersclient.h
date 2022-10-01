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

#ifndef QTAWS_EMRCONTAINERSCLIENT_H
#define QTAWS_EMRCONTAINERSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsemrcontainersglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersClientPrivate;
class CancelJobRunRequest;
class CancelJobRunResponse;
class CreateManagedEndpointRequest;
class CreateManagedEndpointResponse;
class CreateVirtualClusterRequest;
class CreateVirtualClusterResponse;
class DeleteManagedEndpointRequest;
class DeleteManagedEndpointResponse;
class DeleteVirtualClusterRequest;
class DeleteVirtualClusterResponse;
class DescribeJobRunRequest;
class DescribeJobRunResponse;
class DescribeManagedEndpointRequest;
class DescribeManagedEndpointResponse;
class DescribeVirtualClusterRequest;
class DescribeVirtualClusterResponse;
class ListJobRunsRequest;
class ListJobRunsResponse;
class ListManagedEndpointsRequest;
class ListManagedEndpointsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListVirtualClustersRequest;
class ListVirtualClustersResponse;
class StartJobRunRequest;
class StartJobRunResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSEMRCONTAINERS_EXPORT EmrcontainersClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EmrcontainersClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EmrcontainersClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobRunResponse * cancelJobRun(const CancelJobRunRequest &request);
    CreateManagedEndpointResponse * createManagedEndpoint(const CreateManagedEndpointRequest &request);
    CreateVirtualClusterResponse * createVirtualCluster(const CreateVirtualClusterRequest &request);
    DeleteManagedEndpointResponse * deleteManagedEndpoint(const DeleteManagedEndpointRequest &request);
    DeleteVirtualClusterResponse * deleteVirtualCluster(const DeleteVirtualClusterRequest &request);
    DescribeJobRunResponse * describeJobRun(const DescribeJobRunRequest &request);
    DescribeManagedEndpointResponse * describeManagedEndpoint(const DescribeManagedEndpointRequest &request);
    DescribeVirtualClusterResponse * describeVirtualCluster(const DescribeVirtualClusterRequest &request);
    ListJobRunsResponse * listJobRuns(const ListJobRunsRequest &request);
    ListManagedEndpointsResponse * listManagedEndpoints(const ListManagedEndpointsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListVirtualClustersResponse * listVirtualClusters(const ListVirtualClustersRequest &request);
    StartJobRunResponse * startJobRun(const StartJobRunRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(EmrcontainersClient)
    Q_DISABLE_COPY(EmrcontainersClient)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
