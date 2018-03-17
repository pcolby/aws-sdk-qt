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

#ifndef QTAWS_DATABASEMIGRATIONSERVICECLIENT_H
#define QTAWS_DATABASEMIGRATIONSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace DatabaseMigrationService {

class DatabaseMigrationServiceClientPrivate;

class QTAWS_EXPORT DatabaseMigrationServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DatabaseMigrationServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DatabaseMigrationServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateReplicationInstanceResponse * createReplicationInstance(const CreateReplicationInstanceRequest &request);
    CreateReplicationSubnetGroupResponse * createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request);
    CreateReplicationTaskResponse * createReplicationTask(const CreateReplicationTaskRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteReplicationInstanceResponse * deleteReplicationInstance(const DeleteReplicationInstanceRequest &request);
    DeleteReplicationSubnetGroupResponse * deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request);
    DeleteReplicationTaskResponse * deleteReplicationTask(const DeleteReplicationTaskRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeCertificatesResponse * describeCertificates(const DescribeCertificatesRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeEndpointTypesResponse * describeEndpointTypes(const DescribeEndpointTypesRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeOrderableReplicationInstancesResponse * describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request);
    DescribeRefreshSchemasStatusResponse * describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request);
    DescribeReplicationInstancesResponse * describeReplicationInstances(const DescribeReplicationInstancesRequest &request);
    DescribeReplicationSubnetGroupsResponse * describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request);
    DescribeReplicationTasksResponse * describeReplicationTasks(const DescribeReplicationTasksRequest &request);
    DescribeSchemasResponse * describeSchemas(const DescribeSchemasRequest &request);
    DescribeTableStatisticsResponse * describeTableStatistics(const DescribeTableStatisticsRequest &request);
    ImportCertificateResponse * importCertificate(const ImportCertificateRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyEndpointResponse * modifyEndpoint(const ModifyEndpointRequest &request);
    ModifyReplicationInstanceResponse * modifyReplicationInstance(const ModifyReplicationInstanceRequest &request);
    ModifyReplicationSubnetGroupResponse * modifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest &request);
    RefreshSchemasResponse * refreshSchemas(const RefreshSchemasRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    StartReplicationTaskResponse * startReplicationTask(const StartReplicationTaskRequest &request);
    StopReplicationTaskResponse * stopReplicationTask(const StopReplicationTaskRequest &request);
    TestConnectionResponse * testConnection(const TestConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationServiceClient)
    Q_DISABLE_COPY(DatabaseMigrationServiceClient)

};

} // namespace DatabaseMigrationService
} // namespace AWS

#endif
