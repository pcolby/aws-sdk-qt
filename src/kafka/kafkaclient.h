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

#ifndef QTAWS_KAFKACLIENT_H
#define QTAWS_KAFKACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Kafka {

class KafkaClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class GetBootstrapBrokersRequest;
class GetBootstrapBrokersResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListNodesRequest;
class ListNodesResponse;

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
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    GetBootstrapBrokersResponse * getBootstrapBrokers(const GetBootstrapBrokersRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListNodesResponse * listNodes(const ListNodesRequest &request);

private:
    Q_DECLARE_PRIVATE(KafkaClient)
    Q_DISABLE_COPY(KafkaClient)

};

} // namespace Kafka
} // namespace QtAws

#endif
