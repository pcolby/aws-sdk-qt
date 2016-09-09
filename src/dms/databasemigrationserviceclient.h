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

#ifndef QTAWS_DATABASEMIGRATIONSERVICECLIENT_H
#define QTAWS_DATABASEMIGRATIONSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    DatabaseMigrationServiceAddTagsToResourceResponse * addTagsToResource(const DatabaseMigrationServiceAddTagsToResourceRequest &request);
    DatabaseMigrationServiceCreateEndpointResponse * createEndpoint(const DatabaseMigrationServiceCreateEndpointRequest &request);
    DatabaseMigrationServiceCreateReplicationInstanceResponse * createReplicationInstance(const DatabaseMigrationServiceCreateReplicationInstanceRequest &request);
    DatabaseMigrationServiceCreateReplicationSubnetGroupResponse * createReplicationSubnetGroup(const DatabaseMigrationServiceCreateReplicationSubnetGroupRequest &request);
    DatabaseMigrationServiceCreateReplicationTaskResponse * createReplicationTask(const DatabaseMigrationServiceCreateReplicationTaskRequest &request);
    DatabaseMigrationServiceDeleteCertificateResponse * deleteCertificate(const DatabaseMigrationServiceDeleteCertificateRequest &request);
    DatabaseMigrationServiceDeleteEndpointResponse * deleteEndpoint(const DatabaseMigrationServiceDeleteEndpointRequest &request);
    DatabaseMigrationServiceDeleteReplicationInstanceResponse * deleteReplicationInstance(const DatabaseMigrationServiceDeleteReplicationInstanceRequest &request);
    DatabaseMigrationServiceDeleteReplicationSubnetGroupResponse * deleteReplicationSubnetGroup(const DatabaseMigrationServiceDeleteReplicationSubnetGroupRequest &request);
    DatabaseMigrationServiceDeleteReplicationTaskResponse * deleteReplicationTask(const DatabaseMigrationServiceDeleteReplicationTaskRequest &request);
    DatabaseMigrationServiceDescribeAccountAttributesResponse * describeAccountAttributes(const DatabaseMigrationServiceDescribeAccountAttributesRequest &request);
    DatabaseMigrationServiceDescribeCertificatesResponse * describeCertificates(const DatabaseMigrationServiceDescribeCertificatesRequest &request);
    DatabaseMigrationServiceDescribeConnectionsResponse * describeConnections(const DatabaseMigrationServiceDescribeConnectionsRequest &request);
    DatabaseMigrationServiceDescribeEndpointTypesResponse * describeEndpointTypes(const DatabaseMigrationServiceDescribeEndpointTypesRequest &request);
    DatabaseMigrationServiceDescribeEndpointsResponse * describeEndpoints(const DatabaseMigrationServiceDescribeEndpointsRequest &request);
    DatabaseMigrationServiceDescribeOrderableReplicationInstancesResponse * describeOrderableReplicationInstances(const DatabaseMigrationServiceDescribeOrderableReplicationInstancesRequest &request);
    DatabaseMigrationServiceDescribeRefreshSchemasStatusResponse * describeRefreshSchemasStatus(const DatabaseMigrationServiceDescribeRefreshSchemasStatusRequest &request);
    DatabaseMigrationServiceDescribeReplicationInstancesResponse * describeReplicationInstances(const DatabaseMigrationServiceDescribeReplicationInstancesRequest &request);
    DatabaseMigrationServiceDescribeReplicationSubnetGroupsResponse * describeReplicationSubnetGroups(const DatabaseMigrationServiceDescribeReplicationSubnetGroupsRequest &request);
    DatabaseMigrationServiceDescribeReplicationTasksResponse * describeReplicationTasks(const DatabaseMigrationServiceDescribeReplicationTasksRequest &request);
    DatabaseMigrationServiceDescribeSchemasResponse * describeSchemas(const DatabaseMigrationServiceDescribeSchemasRequest &request);
    DatabaseMigrationServiceDescribeTableStatisticsResponse * describeTableStatistics(const DatabaseMigrationServiceDescribeTableStatisticsRequest &request);
    DatabaseMigrationServiceImportCertificateResponse * importCertificate(const DatabaseMigrationServiceImportCertificateRequest &request);
    DatabaseMigrationServiceListTagsForResourceResponse * listTagsForResource(const DatabaseMigrationServiceListTagsForResourceRequest &request);
    DatabaseMigrationServiceModifyEndpointResponse * modifyEndpoint(const DatabaseMigrationServiceModifyEndpointRequest &request);
    DatabaseMigrationServiceModifyReplicationInstanceResponse * modifyReplicationInstance(const DatabaseMigrationServiceModifyReplicationInstanceRequest &request);
    DatabaseMigrationServiceModifyReplicationSubnetGroupResponse * modifyReplicationSubnetGroup(const DatabaseMigrationServiceModifyReplicationSubnetGroupRequest &request);
    DatabaseMigrationServiceRefreshSchemasResponse * refreshSchemas(const DatabaseMigrationServiceRefreshSchemasRequest &request);
    DatabaseMigrationServiceRemoveTagsFromResourceResponse * removeTagsFromResource(const DatabaseMigrationServiceRemoveTagsFromResourceRequest &request);
    DatabaseMigrationServiceStartReplicationTaskResponse * startReplicationTask(const DatabaseMigrationServiceStartReplicationTaskRequest &request);
    DatabaseMigrationServiceStopReplicationTaskResponse * stopReplicationTask(const DatabaseMigrationServiceStopReplicationTaskRequest &request);
    DatabaseMigrationServiceTestConnectionResponse * testConnection(const DatabaseMigrationServiceTestConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationServiceClient)
    Q_DISABLE_COPY(DatabaseMigrationServiceClient)

};

QTAWS_END_NAMESPACE

#endif
