// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
