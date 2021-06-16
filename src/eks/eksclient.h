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

#ifndef QTAWS_EKSCLIENT_H
#define QTAWS_EKSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace EKS {

class EksClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DescribeClusterRequest;
class DescribeClusterResponse;
class DescribeUpdateRequest;
class DescribeUpdateResponse;
class ListClustersRequest;
class ListClustersResponse;
class ListUpdatesRequest;
class ListUpdatesResponse;
class UpdateClusterConfigRequest;
class UpdateClusterConfigResponse;
class UpdateClusterVersionRequest;
class UpdateClusterVersionResponse;

class QTAWS_EXPORT EksClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EksClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EksClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DescribeClusterResponse * describeCluster(const DescribeClusterRequest &request);
    DescribeUpdateResponse * describeUpdate(const DescribeUpdateRequest &request);
    ListClustersResponse * listClusters(const ListClustersRequest &request);
    ListUpdatesResponse * listUpdates(const ListUpdatesRequest &request);
    UpdateClusterConfigResponse * updateClusterConfig(const UpdateClusterConfigRequest &request);
    UpdateClusterVersionResponse * updateClusterVersion(const UpdateClusterVersionRequest &request);

private:
    Q_DECLARE_PRIVATE(EksClient)
    Q_DISABLE_COPY(EksClient)

};

} // namespace EKS
} // namespace QtAws

#endif
