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

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace DatabaseMigrationService {

class DatabaseMigrationServiceClientPrivate;
class AddTagsToResourceResponse;
class CreateEndpointResponse;
class CreateEventSubscriptionResponse;
class CreateReplicationInstanceResponse;
class CreateReplicationSubnetGroupResponse;
class CreateReplicationTaskResponse;
class DeleteCertificateResponse;
class DeleteEndpointResponse;
class DeleteEventSubscriptionResponse;
class DeleteReplicationInstanceResponse;
class DeleteReplicationSubnetGroupResponse;
class DeleteReplicationTaskResponse;
class DescribeAccountAttributesResponse;
class DescribeCertificatesResponse;
class DescribeConnectionsResponse;
class DescribeEndpointTypesResponse;
class DescribeEndpointsResponse;
class DescribeEventCategoriesResponse;
class DescribeEventSubscriptionsResponse;
class DescribeEventsResponse;
class DescribeOrderableReplicationInstancesResponse;
class DescribeRefreshSchemasStatusResponse;
class DescribeReplicationInstanceTaskLogsResponse;
class DescribeReplicationInstancesResponse;
class DescribeReplicationSubnetGroupsResponse;
class DescribeReplicationTaskAssessmentResultsResponse;
class DescribeReplicationTasksResponse;
class DescribeSchemasResponse;
class DescribeTableStatisticsResponse;
class ImportCertificateResponse;
class ListTagsForResourceResponse;
class ModifyEndpointResponse;
class ModifyEventSubscriptionResponse;
class ModifyReplicationInstanceResponse;
class ModifyReplicationSubnetGroupResponse;
class ModifyReplicationTaskResponse;
class RebootReplicationInstanceResponse;
class RefreshSchemasResponse;
class ReloadTablesResponse;
class RemoveTagsFromResourceResponse;
class StartReplicationTaskResponse;
class StartReplicationTaskAssessmentResponse;
class StopReplicationTaskResponse;
class TestConnectionResponse;

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
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateReplicationInstanceResponse * createReplicationInstance(const CreateReplicationInstanceRequest &request);
    CreateReplicationSubnetGroupResponse * createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request);
    CreateReplicationTaskResponse * createReplicationTask(const CreateReplicationTaskRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteReplicationInstanceResponse * deleteReplicationInstance(const DeleteReplicationInstanceRequest &request);
    DeleteReplicationSubnetGroupResponse * deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request);
    DeleteReplicationTaskResponse * deleteReplicationTask(const DeleteReplicationTaskRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeCertificatesResponse * describeCertificates(const DescribeCertificatesRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeEndpointTypesResponse * describeEndpointTypes(const DescribeEndpointTypesRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeOrderableReplicationInstancesResponse * describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request);
    DescribeRefreshSchemasStatusResponse * describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request);
    DescribeReplicationInstanceTaskLogsResponse * describeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest &request);
    DescribeReplicationInstancesResponse * describeReplicationInstances(const DescribeReplicationInstancesRequest &request);
    DescribeReplicationSubnetGroupsResponse * describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request);
    DescribeReplicationTaskAssessmentResultsResponse * describeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest &request);
    DescribeReplicationTasksResponse * describeReplicationTasks(const DescribeReplicationTasksRequest &request);
    DescribeSchemasResponse * describeSchemas(const DescribeSchemasRequest &request);
    DescribeTableStatisticsResponse * describeTableStatistics(const DescribeTableStatisticsRequest &request);
    ImportCertificateResponse * importCertificate(const ImportCertificateRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyEndpointResponse * modifyEndpoint(const ModifyEndpointRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifyReplicationInstanceResponse * modifyReplicationInstance(const ModifyReplicationInstanceRequest &request);
    ModifyReplicationSubnetGroupResponse * modifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest &request);
    ModifyReplicationTaskResponse * modifyReplicationTask(const ModifyReplicationTaskRequest &request);
    RebootReplicationInstanceResponse * rebootReplicationInstance(const RebootReplicationInstanceRequest &request);
    RefreshSchemasResponse * refreshSchemas(const RefreshSchemasRequest &request);
    ReloadTablesResponse * reloadTables(const ReloadTablesRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    StartReplicationTaskResponse * startReplicationTask(const StartReplicationTaskRequest &request);
    StartReplicationTaskAssessmentResponse * startReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest &request);
    StopReplicationTaskResponse * stopReplicationTask(const StopReplicationTaskRequest &request);
    TestConnectionResponse * testConnection(const TestConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationServiceClient)
    Q_DISABLE_COPY(DatabaseMigrationServiceClient)

};

} // namespace DatabaseMigrationService
} // namespace AWS

#endif
