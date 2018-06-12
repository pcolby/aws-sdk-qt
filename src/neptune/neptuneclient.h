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

#ifndef QTAWS_NEPTUNECLIENT_H
#define QTAWS_NEPTUNECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Neptune {

class NeptuneClientPrivate;
class AddRoleToDBClusterRequest;
class AddRoleToDBClusterResponse;
class AddSourceIdentifierToSubscriptionRequest;
class AddSourceIdentifierToSubscriptionResponse;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class ApplyPendingMaintenanceActionRequest;
class ApplyPendingMaintenanceActionResponse;
class CopyDBClusterParameterGroupRequest;
class CopyDBClusterParameterGroupResponse;
class CopyDBClusterSnapshotRequest;
class CopyDBClusterSnapshotResponse;
class CopyDBParameterGroupRequest;
class CopyDBParameterGroupResponse;
class CreateDBClusterRequest;
class CreateDBClusterResponse;
class CreateDBClusterParameterGroupRequest;
class CreateDBClusterParameterGroupResponse;
class CreateDBClusterSnapshotRequest;
class CreateDBClusterSnapshotResponse;
class CreateDBInstanceRequest;
class CreateDBInstanceResponse;
class CreateDBParameterGroupRequest;
class CreateDBParameterGroupResponse;
class CreateDBSubnetGroupRequest;
class CreateDBSubnetGroupResponse;
class CreateEventSubscriptionRequest;
class CreateEventSubscriptionResponse;
class DeleteDBClusterRequest;
class DeleteDBClusterResponse;
class DeleteDBClusterParameterGroupRequest;
class DeleteDBClusterParameterGroupResponse;
class DeleteDBClusterSnapshotRequest;
class DeleteDBClusterSnapshotResponse;
class DeleteDBInstanceRequest;
class DeleteDBInstanceResponse;
class DeleteDBParameterGroupRequest;
class DeleteDBParameterGroupResponse;
class DeleteDBSubnetGroupRequest;
class DeleteDBSubnetGroupResponse;
class DeleteEventSubscriptionRequest;
class DeleteEventSubscriptionResponse;
class DescribeDBClusterParameterGroupsRequest;
class DescribeDBClusterParameterGroupsResponse;
class DescribeDBClusterParametersRequest;
class DescribeDBClusterParametersResponse;
class DescribeDBClusterSnapshotAttributesRequest;
class DescribeDBClusterSnapshotAttributesResponse;
class DescribeDBClusterSnapshotsRequest;
class DescribeDBClusterSnapshotsResponse;
class DescribeDBClustersRequest;
class DescribeDBClustersResponse;
class DescribeDBEngineVersionsRequest;
class DescribeDBEngineVersionsResponse;
class DescribeDBInstancesRequest;
class DescribeDBInstancesResponse;
class DescribeDBParameterGroupsRequest;
class DescribeDBParameterGroupsResponse;
class DescribeDBParametersRequest;
class DescribeDBParametersResponse;
class DescribeDBSubnetGroupsRequest;
class DescribeDBSubnetGroupsResponse;
class DescribeEngineDefaultClusterParametersRequest;
class DescribeEngineDefaultClusterParametersResponse;
class DescribeEngineDefaultParametersRequest;
class DescribeEngineDefaultParametersResponse;
class DescribeEventCategoriesRequest;
class DescribeEventCategoriesResponse;
class DescribeEventSubscriptionsRequest;
class DescribeEventSubscriptionsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeOrderableDBInstanceOptionsRequest;
class DescribeOrderableDBInstanceOptionsResponse;
class DescribePendingMaintenanceActionsRequest;
class DescribePendingMaintenanceActionsResponse;
class DescribeValidDBInstanceModificationsRequest;
class DescribeValidDBInstanceModificationsResponse;
class FailoverDBClusterRequest;
class FailoverDBClusterResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyDBClusterRequest;
class ModifyDBClusterResponse;
class ModifyDBClusterParameterGroupRequest;
class ModifyDBClusterParameterGroupResponse;
class ModifyDBClusterSnapshotAttributeRequest;
class ModifyDBClusterSnapshotAttributeResponse;
class ModifyDBInstanceRequest;
class ModifyDBInstanceResponse;
class ModifyDBParameterGroupRequest;
class ModifyDBParameterGroupResponse;
class ModifyDBSubnetGroupRequest;
class ModifyDBSubnetGroupResponse;
class ModifyEventSubscriptionRequest;
class ModifyEventSubscriptionResponse;
class PromoteReadReplicaDBClusterRequest;
class PromoteReadReplicaDBClusterResponse;
class RebootDBInstanceRequest;
class RebootDBInstanceResponse;
class RemoveRoleFromDBClusterRequest;
class RemoveRoleFromDBClusterResponse;
class RemoveSourceIdentifierFromSubscriptionRequest;
class RemoveSourceIdentifierFromSubscriptionResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class ResetDBClusterParameterGroupRequest;
class ResetDBClusterParameterGroupResponse;
class ResetDBParameterGroupRequest;
class ResetDBParameterGroupResponse;
class RestoreDBClusterFromSnapshotRequest;
class RestoreDBClusterFromSnapshotResponse;
class RestoreDBClusterToPointInTimeRequest;
class RestoreDBClusterToPointInTimeResponse;

class QTAWS_EXPORT NeptuneClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    NeptuneClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    NeptuneClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddRoleToDBClusterResponse * addRoleToDBCluster(const AddRoleToDBClusterRequest &request);
    AddSourceIdentifierToSubscriptionResponse * addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request);
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    ApplyPendingMaintenanceActionResponse * applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request);
    CopyDBClusterParameterGroupResponse * copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request);
    CopyDBClusterSnapshotResponse * copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request);
    CopyDBParameterGroupResponse * copyDBParameterGroup(const CopyDBParameterGroupRequest &request);
    CreateDBClusterResponse * createDBCluster(const CreateDBClusterRequest &request);
    CreateDBClusterParameterGroupResponse * createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request);
    CreateDBClusterSnapshotResponse * createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request);
    CreateDBInstanceResponse * createDBInstance(const CreateDBInstanceRequest &request);
    CreateDBParameterGroupResponse * createDBParameterGroup(const CreateDBParameterGroupRequest &request);
    CreateDBSubnetGroupResponse * createDBSubnetGroup(const CreateDBSubnetGroupRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    DeleteDBClusterResponse * deleteDBCluster(const DeleteDBClusterRequest &request);
    DeleteDBClusterParameterGroupResponse * deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request);
    DeleteDBClusterSnapshotResponse * deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request);
    DeleteDBInstanceResponse * deleteDBInstance(const DeleteDBInstanceRequest &request);
    DeleteDBParameterGroupResponse * deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request);
    DeleteDBSubnetGroupResponse * deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DescribeDBClusterParameterGroupsResponse * describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request);
    DescribeDBClusterParametersResponse * describeDBClusterParameters(const DescribeDBClusterParametersRequest &request);
    DescribeDBClusterSnapshotAttributesResponse * describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request);
    DescribeDBClusterSnapshotsResponse * describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request);
    DescribeDBClustersResponse * describeDBClusters(const DescribeDBClustersRequest &request);
    DescribeDBEngineVersionsResponse * describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request);
    DescribeDBInstancesResponse * describeDBInstances(const DescribeDBInstancesRequest &request);
    DescribeDBParameterGroupsResponse * describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request);
    DescribeDBParametersResponse * describeDBParameters(const DescribeDBParametersRequest &request);
    DescribeDBSubnetGroupsResponse * describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request);
    DescribeEngineDefaultClusterParametersResponse * describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request);
    DescribeEngineDefaultParametersResponse * describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeOrderableDBInstanceOptionsResponse * describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request);
    DescribePendingMaintenanceActionsResponse * describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request);
    DescribeValidDBInstanceModificationsResponse * describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request);
    FailoverDBClusterResponse * failoverDBCluster(const FailoverDBClusterRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDBClusterResponse * modifyDBCluster(const ModifyDBClusterRequest &request);
    ModifyDBClusterParameterGroupResponse * modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request);
    ModifyDBClusterSnapshotAttributeResponse * modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request);
    ModifyDBInstanceResponse * modifyDBInstance(const ModifyDBInstanceRequest &request);
    ModifyDBParameterGroupResponse * modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request);
    ModifyDBSubnetGroupResponse * modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    PromoteReadReplicaDBClusterResponse * promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request);
    RebootDBInstanceResponse * rebootDBInstance(const RebootDBInstanceRequest &request);
    RemoveRoleFromDBClusterResponse * removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request);
    RemoveSourceIdentifierFromSubscriptionResponse * removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetDBClusterParameterGroupResponse * resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request);
    ResetDBParameterGroupResponse * resetDBParameterGroup(const ResetDBParameterGroupRequest &request);
    RestoreDBClusterFromSnapshotResponse * restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request);
    RestoreDBClusterToPointInTimeResponse * restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request);

private:
    Q_DECLARE_PRIVATE(NeptuneClient)
    Q_DISABLE_COPY(NeptuneClient)

};

} // namespace Neptune
} // namespace QtAws

#endif
