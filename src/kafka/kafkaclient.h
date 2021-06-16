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

#ifndef QTAWS_KAFKACLIENT_H
#define QTAWS_KAFKACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Kafka {

class KafkaClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateConfigurationRequest;
class CreateConfigurationResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeClusterOperationRequest;
class DescribeClusterOperationResponse;
class DescribeConfigurationRequest;
class DescribeConfigurationResponse;
class DescribeConfigurationRevisionRequest;
class DescribeConfigurationRevisionResponse;
class GetBootstrapBrokersRequest;
class GetBootstrapBrokersResponse;
class ListClusterOperationsRequest;
class ListClusterOperationsResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListConfigurationRevisionsRequest;
class ListConfigurationRevisionsResponse;
class ListConfigurationsRequest;
class ListConfigurationsResponse;
class ListNodesRequest;
class ListNodesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateBrokerStorageRequest;
class UpdateBrokerStorageResponse;
class UpdateClusterConfigurationRequest;
class UpdateClusterConfigurationResponse;

class QTAWS_EXPORT KafkaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KafkaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KafkaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateConfigurationResponse * createConfiguration(const CreateConfigurationRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeClusterOperationResponse * describeClusterOperation(const DescribeClusterOperationRequest &request);
    DescribeConfigurationResponse * describeConfiguration(const DescribeConfigurationRequest &request);
    DescribeConfigurationRevisionResponse * describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request);
    GetBootstrapBrokersResponse * getBootstrapBrokers(const GetBootstrapBrokersRequest &request);
    ListClusterOperationsResponse * listClusterOperations(const ListClusterOperationsRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListConfigurationRevisionsResponse * listConfigurationRevisions(const ListConfigurationRevisionsRequest &request);
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    ListNodesResponse * listNodes(const ListNodesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateBrokerStorageResponse * updateBrokerStorage(const UpdateBrokerStorageRequest &request);
    UpdateClusterConfigurationResponse * updateClusterConfiguration(const UpdateClusterConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(KafkaClient)
    Q_DISABLE_COPY(KafkaClient)

};

} // namespace Kafka
} // namespace QtAws

#endif
