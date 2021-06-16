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

#ifndef QTAWS_DATABASEMIGRATIONSERVICECLIENT_H
#define QTAWS_DATABASEMIGRATIONSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DatabaseMigrationService {

class DatabaseMigrationServiceClientPrivate;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class ApplyPendingMaintenanceActionRequest;
class ApplyPendingMaintenanceActionResponse;
class CancelReplicationTaskAssessmentRunRequest;
class CancelReplicationTaskAssessmentRunResponse;
class CreateEndpointRequest;
class CreateEndpointResponse;
class CreateEventSubscriptionRequest;
class CreateEventSubscriptionResponse;
class CreateReplicationInstanceRequest;
class CreateReplicationInstanceResponse;
class CreateReplicationSubnetGroupRequest;
class CreateReplicationSubnetGroupResponse;
class CreateReplicationTaskRequest;
class CreateReplicationTaskResponse;
class DeleteCertificateRequest;
class DeleteCertificateResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEventSubscriptionRequest;
class DeleteEventSubscriptionResponse;
class DeleteReplicationInstanceRequest;
class DeleteReplicationInstanceResponse;
class DeleteReplicationSubnetGroupRequest;
class DeleteReplicationSubnetGroupResponse;
class DeleteReplicationTaskRequest;
class DeleteReplicationTaskResponse;
class DeleteReplicationTaskAssessmentRunRequest;
class DeleteReplicationTaskAssessmentRunResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
class DescribeApplicableIndividualAssessmentsRequest;
class DescribeApplicableIndividualAssessmentsResponse;
class DescribeCertificatesRequest;
class DescribeCertificatesResponse;
class DescribeConnectionsRequest;
class DescribeConnectionsResponse;
class DescribeEndpointSettingsRequest;
class DescribeEndpointSettingsResponse;
class DescribeEndpointTypesRequest;
class DescribeEndpointTypesResponse;
class DescribeEndpointsRequest;
class DescribeEndpointsResponse;
class DescribeEventCategoriesRequest;
class DescribeEventCategoriesResponse;
class DescribeEventSubscriptionsRequest;
class DescribeEventSubscriptionsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeOrderableReplicationInstancesRequest;
class DescribeOrderableReplicationInstancesResponse;
class DescribePendingMaintenanceActionsRequest;
class DescribePendingMaintenanceActionsResponse;
class DescribeRefreshSchemasStatusRequest;
class DescribeRefreshSchemasStatusResponse;
class DescribeReplicationInstanceTaskLogsRequest;
class DescribeReplicationInstanceTaskLogsResponse;
class DescribeReplicationInstancesRequest;
class DescribeReplicationInstancesResponse;
class DescribeReplicationSubnetGroupsRequest;
class DescribeReplicationSubnetGroupsResponse;
class DescribeReplicationTaskAssessmentResultsRequest;
class DescribeReplicationTaskAssessmentResultsResponse;
class DescribeReplicationTaskAssessmentRunsRequest;
class DescribeReplicationTaskAssessmentRunsResponse;
class DescribeReplicationTaskIndividualAssessmentsRequest;
class DescribeReplicationTaskIndividualAssessmentsResponse;
class DescribeReplicationTasksRequest;
class DescribeReplicationTasksResponse;
class DescribeSchemasRequest;
class DescribeSchemasResponse;
class DescribeTableStatisticsRequest;
class DescribeTableStatisticsResponse;
class ImportCertificateRequest;
class ImportCertificateResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyEndpointRequest;
class ModifyEndpointResponse;
class ModifyEventSubscriptionRequest;
class ModifyEventSubscriptionResponse;
class ModifyReplicationInstanceRequest;
class ModifyReplicationInstanceResponse;
class ModifyReplicationSubnetGroupRequest;
class ModifyReplicationSubnetGroupResponse;
class ModifyReplicationTaskRequest;
class ModifyReplicationTaskResponse;
class MoveReplicationTaskRequest;
class MoveReplicationTaskResponse;
class RebootReplicationInstanceRequest;
class RebootReplicationInstanceResponse;
class RefreshSchemasRequest;
class RefreshSchemasResponse;
class ReloadTablesRequest;
class ReloadTablesResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class StartReplicationTaskRequest;
class StartReplicationTaskResponse;
class StartReplicationTaskAssessmentRequest;
class StartReplicationTaskAssessmentResponse;
class StartReplicationTaskAssessmentRunRequest;
class StartReplicationTaskAssessmentRunResponse;
class StopReplicationTaskRequest;
class StopReplicationTaskResponse;
class TestConnectionRequest;
class TestConnectionResponse;

class QTAWS_EXPORT DatabaseMigrationServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DatabaseMigrationServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DatabaseMigrationServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    ApplyPendingMaintenanceActionResponse * applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request);
    CancelReplicationTaskAssessmentRunResponse * cancelReplicationTaskAssessmentRun(const CancelReplicationTaskAssessmentRunRequest &request);
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateReplicationInstanceResponse * createReplicationInstance(const CreateReplicationInstanceRequest &request);
    CreateReplicationSubnetGroupResponse * createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request);
    CreateReplicationTaskResponse * createReplicationTask(const CreateReplicationTaskRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteReplicationInstanceResponse * deleteReplicationInstance(const DeleteReplicationInstanceRequest &request);
    DeleteReplicationSubnetGroupResponse * deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request);
    DeleteReplicationTaskResponse * deleteReplicationTask(const DeleteReplicationTaskRequest &request);
    DeleteReplicationTaskAssessmentRunResponse * deleteReplicationTaskAssessmentRun(const DeleteReplicationTaskAssessmentRunRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeApplicableIndividualAssessmentsResponse * describeApplicableIndividualAssessments(const DescribeApplicableIndividualAssessmentsRequest &request);
    DescribeCertificatesResponse * describeCertificates(const DescribeCertificatesRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeEndpointSettingsResponse * describeEndpointSettings(const DescribeEndpointSettingsRequest &request);
    DescribeEndpointTypesResponse * describeEndpointTypes(const DescribeEndpointTypesRequest &request);
    DescribeEndpointsResponse * describeEndpoints(const DescribeEndpointsRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeOrderableReplicationInstancesResponse * describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request);
    DescribePendingMaintenanceActionsResponse * describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request);
    DescribeRefreshSchemasStatusResponse * describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request);
    DescribeReplicationInstanceTaskLogsResponse * describeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest &request);
    DescribeReplicationInstancesResponse * describeReplicationInstances(const DescribeReplicationInstancesRequest &request);
    DescribeReplicationSubnetGroupsResponse * describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request);
    DescribeReplicationTaskAssessmentResultsResponse * describeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest &request);
    DescribeReplicationTaskAssessmentRunsResponse * describeReplicationTaskAssessmentRuns(const DescribeReplicationTaskAssessmentRunsRequest &request);
    DescribeReplicationTaskIndividualAssessmentsResponse * describeReplicationTaskIndividualAssessments(const DescribeReplicationTaskIndividualAssessmentsRequest &request);
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
    MoveReplicationTaskResponse * moveReplicationTask(const MoveReplicationTaskRequest &request);
    RebootReplicationInstanceResponse * rebootReplicationInstance(const RebootReplicationInstanceRequest &request);
    RefreshSchemasResponse * refreshSchemas(const RefreshSchemasRequest &request);
    ReloadTablesResponse * reloadTables(const ReloadTablesRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    StartReplicationTaskResponse * startReplicationTask(const StartReplicationTaskRequest &request);
    StartReplicationTaskAssessmentResponse * startReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest &request);
    StartReplicationTaskAssessmentRunResponse * startReplicationTaskAssessmentRun(const StartReplicationTaskAssessmentRunRequest &request);
    StopReplicationTaskResponse * stopReplicationTask(const StopReplicationTaskRequest &request);
    TestConnectionResponse * testConnection(const TestConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationServiceClient)
    Q_DISABLE_COPY(DatabaseMigrationServiceClient)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif
