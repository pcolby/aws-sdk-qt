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

#ifndef QTAWS_DOCDBCLIENT_H
#define QTAWS_DOCDBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdocdbglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DocDB {

class DocDBClientPrivate;
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
class CreateDBClusterRequest;
class CreateDBClusterResponse;
class CreateDBClusterParameterGroupRequest;
class CreateDBClusterParameterGroupResponse;
class CreateDBClusterSnapshotRequest;
class CreateDBClusterSnapshotResponse;
class CreateDBInstanceRequest;
class CreateDBInstanceResponse;
class CreateDBSubnetGroupRequest;
class CreateDBSubnetGroupResponse;
class CreateEventSubscriptionRequest;
class CreateEventSubscriptionResponse;
class CreateGlobalClusterRequest;
class CreateGlobalClusterResponse;
class DeleteDBClusterRequest;
class DeleteDBClusterResponse;
class DeleteDBClusterParameterGroupRequest;
class DeleteDBClusterParameterGroupResponse;
class DeleteDBClusterSnapshotRequest;
class DeleteDBClusterSnapshotResponse;
class DeleteDBInstanceRequest;
class DeleteDBInstanceResponse;
class DeleteDBSubnetGroupRequest;
class DeleteDBSubnetGroupResponse;
class DeleteEventSubscriptionRequest;
class DeleteEventSubscriptionResponse;
class DeleteGlobalClusterRequest;
class DeleteGlobalClusterResponse;
class DescribeCertificatesRequest;
class DescribeCertificatesResponse;
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
class DescribeDBSubnetGroupsRequest;
class DescribeDBSubnetGroupsResponse;
class DescribeEngineDefaultClusterParametersRequest;
class DescribeEngineDefaultClusterParametersResponse;
class DescribeEventCategoriesRequest;
class DescribeEventCategoriesResponse;
class DescribeEventSubscriptionsRequest;
class DescribeEventSubscriptionsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeGlobalClustersRequest;
class DescribeGlobalClustersResponse;
class DescribeOrderableDBInstanceOptionsRequest;
class DescribeOrderableDBInstanceOptionsResponse;
class DescribePendingMaintenanceActionsRequest;
class DescribePendingMaintenanceActionsResponse;
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
class ModifyDBSubnetGroupRequest;
class ModifyDBSubnetGroupResponse;
class ModifyEventSubscriptionRequest;
class ModifyEventSubscriptionResponse;
class ModifyGlobalClusterRequest;
class ModifyGlobalClusterResponse;
class RebootDBInstanceRequest;
class RebootDBInstanceResponse;
class RemoveFromGlobalClusterRequest;
class RemoveFromGlobalClusterResponse;
class RemoveSourceIdentifierFromSubscriptionRequest;
class RemoveSourceIdentifierFromSubscriptionResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class ResetDBClusterParameterGroupRequest;
class ResetDBClusterParameterGroupResponse;
class RestoreDBClusterFromSnapshotRequest;
class RestoreDBClusterFromSnapshotResponse;
class RestoreDBClusterToPointInTimeRequest;
class RestoreDBClusterToPointInTimeResponse;
class StartDBClusterRequest;
class StartDBClusterResponse;
class StopDBClusterRequest;
class StopDBClusterResponse;

class QTAWSDOCDB_EXPORT DocDBClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DocDBClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DocDBClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddSourceIdentifierToSubscriptionResponse * addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request);
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    ApplyPendingMaintenanceActionResponse * applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request);
    CopyDBClusterParameterGroupResponse * copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request);
    CopyDBClusterSnapshotResponse * copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request);
    CreateDBClusterResponse * createDBCluster(const CreateDBClusterRequest &request);
    CreateDBClusterParameterGroupResponse * createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request);
    CreateDBClusterSnapshotResponse * createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request);
    CreateDBInstanceResponse * createDBInstance(const CreateDBInstanceRequest &request);
    CreateDBSubnetGroupResponse * createDBSubnetGroup(const CreateDBSubnetGroupRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateGlobalClusterResponse * createGlobalCluster(const CreateGlobalClusterRequest &request);
    DeleteDBClusterResponse * deleteDBCluster(const DeleteDBClusterRequest &request);
    DeleteDBClusterParameterGroupResponse * deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request);
    DeleteDBClusterSnapshotResponse * deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request);
    DeleteDBInstanceResponse * deleteDBInstance(const DeleteDBInstanceRequest &request);
    DeleteDBSubnetGroupResponse * deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteGlobalClusterResponse * deleteGlobalCluster(const DeleteGlobalClusterRequest &request);
    DescribeCertificatesResponse * describeCertificates(const DescribeCertificatesRequest &request);
    DescribeDBClusterParameterGroupsResponse * describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request);
    DescribeDBClusterParametersResponse * describeDBClusterParameters(const DescribeDBClusterParametersRequest &request);
    DescribeDBClusterSnapshotAttributesResponse * describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request);
    DescribeDBClusterSnapshotsResponse * describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request);
    DescribeDBClustersResponse * describeDBClusters(const DescribeDBClustersRequest &request);
    DescribeDBEngineVersionsResponse * describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request);
    DescribeDBInstancesResponse * describeDBInstances(const DescribeDBInstancesRequest &request);
    DescribeDBSubnetGroupsResponse * describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request);
    DescribeEngineDefaultClusterParametersResponse * describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeGlobalClustersResponse * describeGlobalClusters(const DescribeGlobalClustersRequest &request);
    DescribeOrderableDBInstanceOptionsResponse * describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request);
    DescribePendingMaintenanceActionsResponse * describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request);
    FailoverDBClusterResponse * failoverDBCluster(const FailoverDBClusterRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDBClusterResponse * modifyDBCluster(const ModifyDBClusterRequest &request);
    ModifyDBClusterParameterGroupResponse * modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request);
    ModifyDBClusterSnapshotAttributeResponse * modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request);
    ModifyDBInstanceResponse * modifyDBInstance(const ModifyDBInstanceRequest &request);
    ModifyDBSubnetGroupResponse * modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifyGlobalClusterResponse * modifyGlobalCluster(const ModifyGlobalClusterRequest &request);
    RebootDBInstanceResponse * rebootDBInstance(const RebootDBInstanceRequest &request);
    RemoveFromGlobalClusterResponse * removeFromGlobalCluster(const RemoveFromGlobalClusterRequest &request);
    RemoveSourceIdentifierFromSubscriptionResponse * removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetDBClusterParameterGroupResponse * resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request);
    RestoreDBClusterFromSnapshotResponse * restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request);
    RestoreDBClusterToPointInTimeResponse * restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request);
    StartDBClusterResponse * startDBCluster(const StartDBClusterRequest &request);
    StopDBClusterResponse * stopDBCluster(const StopDBClusterRequest &request);

protected:
    /// @cond internal
    DocDBClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit DocDBClient(DocDBClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DocDBClient)
    Q_DISABLE_COPY(DocDBClient)

};

} // namespace DocDB
} // namespace QtAws

#endif
