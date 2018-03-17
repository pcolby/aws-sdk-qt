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

#ifndef QTAWS_RDSCLIENT_H
#define QTAWS_RDSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace RDS {

class RdsClientPrivate;

class QTAWS_EXPORT RdsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    RdsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RdsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddSourceIdentifierToSubscriptionResponse * addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request);
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    ApplyPendingMaintenanceActionResponse * applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request);
    AuthorizeDBSecurityGroupIngressResponse * authorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest &request);
    CopyDBClusterParameterGroupResponse * copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request);
    CopyDBClusterSnapshotResponse * copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request);
    CopyDBParameterGroupResponse * copyDBParameterGroup(const CopyDBParameterGroupRequest &request);
    CopyDBSnapshotResponse * copyDBSnapshot(const CopyDBSnapshotRequest &request);
    CopyOptionGroupResponse * copyOptionGroup(const CopyOptionGroupRequest &request);
    CreateDBClusterResponse * createDBCluster(const CreateDBClusterRequest &request);
    CreateDBClusterParameterGroupResponse * createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request);
    CreateDBClusterSnapshotResponse * createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request);
    CreateDBInstanceResponse * createDBInstance(const CreateDBInstanceRequest &request);
    CreateDBInstanceReadReplicaResponse * createDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest &request);
    CreateDBParameterGroupResponse * createDBParameterGroup(const CreateDBParameterGroupRequest &request);
    CreateDBSecurityGroupResponse * createDBSecurityGroup(const CreateDBSecurityGroupRequest &request);
    CreateDBSnapshotResponse * createDBSnapshot(const CreateDBSnapshotRequest &request);
    CreateDBSubnetGroupResponse * createDBSubnetGroup(const CreateDBSubnetGroupRequest &request);
    CreateEventSubscriptionResponse * createEventSubscription(const CreateEventSubscriptionRequest &request);
    CreateOptionGroupResponse * createOptionGroup(const CreateOptionGroupRequest &request);
    DeleteDBClusterResponse * deleteDBCluster(const DeleteDBClusterRequest &request);
    DeleteDBClusterParameterGroupResponse * deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request);
    DeleteDBClusterSnapshotResponse * deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request);
    DeleteDBInstanceResponse * deleteDBInstance(const DeleteDBInstanceRequest &request);
    DeleteDBParameterGroupResponse * deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request);
    DeleteDBSecurityGroupResponse * deleteDBSecurityGroup(const DeleteDBSecurityGroupRequest &request);
    DeleteDBSnapshotResponse * deleteDBSnapshot(const DeleteDBSnapshotRequest &request);
    DeleteDBSubnetGroupResponse * deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request);
    DeleteEventSubscriptionResponse * deleteEventSubscription(const DeleteEventSubscriptionRequest &request);
    DeleteOptionGroupResponse * deleteOptionGroup(const DeleteOptionGroupRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeCertificatesResponse * describeCertificates(const DescribeCertificatesRequest &request);
    DescribeDBClusterParameterGroupsResponse * describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request);
    DescribeDBClusterParametersResponse * describeDBClusterParameters(const DescribeDBClusterParametersRequest &request);
    DescribeDBClusterSnapshotAttributesResponse * describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request);
    DescribeDBClusterSnapshotsResponse * describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request);
    DescribeDBClustersResponse * describeDBClusters(const DescribeDBClustersRequest &request);
    DescribeDBEngineVersionsResponse * describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request);
    DescribeDBInstancesResponse * describeDBInstances(const DescribeDBInstancesRequest &request);
    DescribeDBLogFilesResponse * describeDBLogFiles(const DescribeDBLogFilesRequest &request);
    DescribeDBParameterGroupsResponse * describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request);
    DescribeDBParametersResponse * describeDBParameters(const DescribeDBParametersRequest &request);
    DescribeDBSecurityGroupsResponse * describeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request);
    DescribeDBSnapshotAttributesResponse * describeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest &request);
    DescribeDBSnapshotsResponse * describeDBSnapshots(const DescribeDBSnapshotsRequest &request);
    DescribeDBSubnetGroupsResponse * describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request);
    DescribeEngineDefaultClusterParametersResponse * describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request);
    DescribeEngineDefaultParametersResponse * describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request);
    DescribeEventCategoriesResponse * describeEventCategories(const DescribeEventCategoriesRequest &request);
    DescribeEventSubscriptionsResponse * describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeOptionGroupOptionsResponse * describeOptionGroupOptions(const DescribeOptionGroupOptionsRequest &request);
    DescribeOptionGroupsResponse * describeOptionGroups(const DescribeOptionGroupsRequest &request);
    DescribeOrderableDBInstanceOptionsResponse * describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request);
    DescribePendingMaintenanceActionsResponse * describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request);
    DescribeReservedDBInstancesResponse * describeReservedDBInstances(const DescribeReservedDBInstancesRequest &request);
    DescribeReservedDBInstancesOfferingsResponse * describeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest &request);
    DescribeSourceRegionsResponse * describeSourceRegions(const DescribeSourceRegionsRequest &request);
    DownloadDBLogFilePortionResponse * downloadDBLogFilePortion(const DownloadDBLogFilePortionRequest &request);
    FailoverDBClusterResponse * failoverDBCluster(const FailoverDBClusterRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDBClusterResponse * modifyDBCluster(const ModifyDBClusterRequest &request);
    ModifyDBClusterParameterGroupResponse * modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request);
    ModifyDBClusterSnapshotAttributeResponse * modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request);
    ModifyDBInstanceResponse * modifyDBInstance(const ModifyDBInstanceRequest &request);
    ModifyDBParameterGroupResponse * modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request);
    ModifyDBSnapshotAttributeResponse * modifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest &request);
    ModifyDBSubnetGroupResponse * modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifyOptionGroupResponse * modifyOptionGroup(const ModifyOptionGroupRequest &request);
    PromoteReadReplicaResponse * promoteReadReplica(const PromoteReadReplicaRequest &request);
    PromoteReadReplicaDBClusterResponse * promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request);
    PurchaseReservedDBInstancesOfferingResponse * purchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest &request);
    RebootDBInstanceResponse * rebootDBInstance(const RebootDBInstanceRequest &request);
    RemoveSourceIdentifierFromSubscriptionResponse * removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetDBClusterParameterGroupResponse * resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request);
    ResetDBParameterGroupResponse * resetDBParameterGroup(const ResetDBParameterGroupRequest &request);
    RestoreDBClusterFromS3Response * restoreDBClusterFromS3(const RestoreDBClusterFromS3Request &request);
    RestoreDBClusterFromSnapshotResponse * restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request);
    RestoreDBClusterToPointInTimeResponse * restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request);
    RestoreDBInstanceFromDBSnapshotResponse * restoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest &request);
    RestoreDBInstanceToPointInTimeResponse * restoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest &request);
    RevokeDBSecurityGroupIngressResponse * revokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest &request);

private:
    Q_DECLARE_PRIVATE(RdsClient)
    Q_DISABLE_COPY(RdsClient)

};

} // namespace RDS
} // namespace AWS

#endif
