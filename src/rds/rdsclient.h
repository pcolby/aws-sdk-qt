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

#ifndef QTAWS_RDSCLIENT_H
#define QTAWS_RDSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    RdsAddSourceIdentifierToSubscriptionResponse * addSourceIdentifierToSubscription(const RdsAddSourceIdentifierToSubscriptionRequest &request);
    RdsAddTagsToResourceResponse * addTagsToResource(const RdsAddTagsToResourceRequest &request);
    RdsApplyPendingMaintenanceActionResponse * applyPendingMaintenanceAction(const RdsApplyPendingMaintenanceActionRequest &request);
    RdsAuthorizeDBSecurityGroupIngressResponse * authorizeDBSecurityGroupIngress(const RdsAuthorizeDBSecurityGroupIngressRequest &request);
    RdsCopyDBClusterParameterGroupResponse * copyDBClusterParameterGroup(const RdsCopyDBClusterParameterGroupRequest &request);
    RdsCopyDBClusterSnapshotResponse * copyDBClusterSnapshot(const RdsCopyDBClusterSnapshotRequest &request);
    RdsCopyDBParameterGroupResponse * copyDBParameterGroup(const RdsCopyDBParameterGroupRequest &request);
    RdsCopyDBSnapshotResponse * copyDBSnapshot(const RdsCopyDBSnapshotRequest &request);
    RdsCopyOptionGroupResponse * copyOptionGroup(const RdsCopyOptionGroupRequest &request);
    RdsCreateDBClusterResponse * createDBCluster(const RdsCreateDBClusterRequest &request);
    RdsCreateDBClusterParameterGroupResponse * createDBClusterParameterGroup(const RdsCreateDBClusterParameterGroupRequest &request);
    RdsCreateDBClusterSnapshotResponse * createDBClusterSnapshot(const RdsCreateDBClusterSnapshotRequest &request);
    RdsCreateDBInstanceResponse * createDBInstance(const RdsCreateDBInstanceRequest &request);
    RdsCreateDBInstanceReadReplicaResponse * createDBInstanceReadReplica(const RdsCreateDBInstanceReadReplicaRequest &request);
    RdsCreateDBParameterGroupResponse * createDBParameterGroup(const RdsCreateDBParameterGroupRequest &request);
    RdsCreateDBSecurityGroupResponse * createDBSecurityGroup(const RdsCreateDBSecurityGroupRequest &request);
    RdsCreateDBSnapshotResponse * createDBSnapshot(const RdsCreateDBSnapshotRequest &request);
    RdsCreateDBSubnetGroupResponse * createDBSubnetGroup(const RdsCreateDBSubnetGroupRequest &request);
    RdsCreateEventSubscriptionResponse * createEventSubscription(const RdsCreateEventSubscriptionRequest &request);
    RdsCreateOptionGroupResponse * createOptionGroup(const RdsCreateOptionGroupRequest &request);
    RdsDeleteDBClusterResponse * deleteDBCluster(const RdsDeleteDBClusterRequest &request);
    RdsDeleteDBClusterParameterGroupResponse * deleteDBClusterParameterGroup(const RdsDeleteDBClusterParameterGroupRequest &request);
    RdsDeleteDBClusterSnapshotResponse * deleteDBClusterSnapshot(const RdsDeleteDBClusterSnapshotRequest &request);
    RdsDeleteDBInstanceResponse * deleteDBInstance(const RdsDeleteDBInstanceRequest &request);
    RdsDeleteDBParameterGroupResponse * deleteDBParameterGroup(const RdsDeleteDBParameterGroupRequest &request);
    RdsDeleteDBSecurityGroupResponse * deleteDBSecurityGroup(const RdsDeleteDBSecurityGroupRequest &request);
    RdsDeleteDBSnapshotResponse * deleteDBSnapshot(const RdsDeleteDBSnapshotRequest &request);
    RdsDeleteDBSubnetGroupResponse * deleteDBSubnetGroup(const RdsDeleteDBSubnetGroupRequest &request);
    RdsDeleteEventSubscriptionResponse * deleteEventSubscription(const RdsDeleteEventSubscriptionRequest &request);
    RdsDeleteOptionGroupResponse * deleteOptionGroup(const RdsDeleteOptionGroupRequest &request);
    RdsDescribeAccountAttributesResponse * describeAccountAttributes(const RdsDescribeAccountAttributesRequest &request);
    RdsDescribeCertificatesResponse * describeCertificates(const RdsDescribeCertificatesRequest &request);
    RdsDescribeDBClusterParameterGroupsResponse * describeDBClusterParameterGroups(const RdsDescribeDBClusterParameterGroupsRequest &request);
    RdsDescribeDBClusterParametersResponse * describeDBClusterParameters(const RdsDescribeDBClusterParametersRequest &request);
    RdsDescribeDBClusterSnapshotAttributesResponse * describeDBClusterSnapshotAttributes(const RdsDescribeDBClusterSnapshotAttributesRequest &request);
    RdsDescribeDBClusterSnapshotsResponse * describeDBClusterSnapshots(const RdsDescribeDBClusterSnapshotsRequest &request);
    RdsDescribeDBClustersResponse * describeDBClusters(const RdsDescribeDBClustersRequest &request);
    RdsDescribeDBEngineVersionsResponse * describeDBEngineVersions(const RdsDescribeDBEngineVersionsRequest &request);
    RdsDescribeDBInstancesResponse * describeDBInstances(const RdsDescribeDBInstancesRequest &request);
    RdsDescribeDBLogFilesResponse * describeDBLogFiles(const RdsDescribeDBLogFilesRequest &request);
    RdsDescribeDBParameterGroupsResponse * describeDBParameterGroups(const RdsDescribeDBParameterGroupsRequest &request);
    RdsDescribeDBParametersResponse * describeDBParameters(const RdsDescribeDBParametersRequest &request);
    RdsDescribeDBSecurityGroupsResponse * describeDBSecurityGroups(const RdsDescribeDBSecurityGroupsRequest &request);
    RdsDescribeDBSnapshotAttributesResponse * describeDBSnapshotAttributes(const RdsDescribeDBSnapshotAttributesRequest &request);
    RdsDescribeDBSnapshotsResponse * describeDBSnapshots(const RdsDescribeDBSnapshotsRequest &request);
    RdsDescribeDBSubnetGroupsResponse * describeDBSubnetGroups(const RdsDescribeDBSubnetGroupsRequest &request);
    RdsDescribeEngineDefaultClusterParametersResponse * describeEngineDefaultClusterParameters(const RdsDescribeEngineDefaultClusterParametersRequest &request);
    RdsDescribeEngineDefaultParametersResponse * describeEngineDefaultParameters(const RdsDescribeEngineDefaultParametersRequest &request);
    RdsDescribeEventCategoriesResponse * describeEventCategories(const RdsDescribeEventCategoriesRequest &request);
    RdsDescribeEventSubscriptionsResponse * describeEventSubscriptions(const RdsDescribeEventSubscriptionsRequest &request);
    RdsDescribeEventsResponse * describeEvents(const RdsDescribeEventsRequest &request);
    RdsDescribeOptionGroupOptionsResponse * describeOptionGroupOptions(const RdsDescribeOptionGroupOptionsRequest &request);
    RdsDescribeOptionGroupsResponse * describeOptionGroups(const RdsDescribeOptionGroupsRequest &request);
    RdsDescribeOrderableDBInstanceOptionsResponse * describeOrderableDBInstanceOptions(const RdsDescribeOrderableDBInstanceOptionsRequest &request);
    RdsDescribePendingMaintenanceActionsResponse * describePendingMaintenanceActions(const RdsDescribePendingMaintenanceActionsRequest &request);
    RdsDescribeReservedDBInstancesResponse * describeReservedDBInstances(const RdsDescribeReservedDBInstancesRequest &request);
    RdsDescribeReservedDBInstancesOfferingsResponse * describeReservedDBInstancesOfferings(const RdsDescribeReservedDBInstancesOfferingsRequest &request);
    RdsDescribeSourceRegionsResponse * describeSourceRegions(const RdsDescribeSourceRegionsRequest &request);
    RdsDownloadDBLogFilePortionResponse * downloadDBLogFilePortion(const RdsDownloadDBLogFilePortionRequest &request);
    RdsFailoverDBClusterResponse * failoverDBCluster(const RdsFailoverDBClusterRequest &request);
    RdsListTagsForResourceResponse * listTagsForResource(const RdsListTagsForResourceRequest &request);
    RdsModifyDBClusterResponse * modifyDBCluster(const RdsModifyDBClusterRequest &request);
    RdsModifyDBClusterParameterGroupResponse * modifyDBClusterParameterGroup(const RdsModifyDBClusterParameterGroupRequest &request);
    RdsModifyDBClusterSnapshotAttributeResponse * modifyDBClusterSnapshotAttribute(const RdsModifyDBClusterSnapshotAttributeRequest &request);
    RdsModifyDBInstanceResponse * modifyDBInstance(const RdsModifyDBInstanceRequest &request);
    RdsModifyDBParameterGroupResponse * modifyDBParameterGroup(const RdsModifyDBParameterGroupRequest &request);
    RdsModifyDBSnapshotAttributeResponse * modifyDBSnapshotAttribute(const RdsModifyDBSnapshotAttributeRequest &request);
    RdsModifyDBSubnetGroupResponse * modifyDBSubnetGroup(const RdsModifyDBSubnetGroupRequest &request);
    RdsModifyEventSubscriptionResponse * modifyEventSubscription(const RdsModifyEventSubscriptionRequest &request);
    RdsModifyOptionGroupResponse * modifyOptionGroup(const RdsModifyOptionGroupRequest &request);
    RdsPromoteReadReplicaResponse * promoteReadReplica(const RdsPromoteReadReplicaRequest &request);
    RdsPromoteReadReplicaDBClusterResponse * promoteReadReplicaDBCluster(const RdsPromoteReadReplicaDBClusterRequest &request);
    RdsPurchaseReservedDBInstancesOfferingResponse * purchaseReservedDBInstancesOffering(const RdsPurchaseReservedDBInstancesOfferingRequest &request);
    RdsRebootDBInstanceResponse * rebootDBInstance(const RdsRebootDBInstanceRequest &request);
    RdsRemoveSourceIdentifierFromSubscriptionResponse * removeSourceIdentifierFromSubscription(const RdsRemoveSourceIdentifierFromSubscriptionRequest &request);
    RdsRemoveTagsFromResourceResponse * removeTagsFromResource(const RdsRemoveTagsFromResourceRequest &request);
    RdsResetDBClusterParameterGroupResponse * resetDBClusterParameterGroup(const RdsResetDBClusterParameterGroupRequest &request);
    RdsResetDBParameterGroupResponse * resetDBParameterGroup(const RdsResetDBParameterGroupRequest &request);
    RdsRestoreDBClusterFromS3Response * restoreDBClusterFromS3(const RdsRestoreDBClusterFromS3Request &request);
    RdsRestoreDBClusterFromSnapshotResponse * restoreDBClusterFromSnapshot(const RdsRestoreDBClusterFromSnapshotRequest &request);
    RdsRestoreDBClusterToPointInTimeResponse * restoreDBClusterToPointInTime(const RdsRestoreDBClusterToPointInTimeRequest &request);
    RdsRestoreDBInstanceFromDBSnapshotResponse * restoreDBInstanceFromDBSnapshot(const RdsRestoreDBInstanceFromDBSnapshotRequest &request);
    RdsRestoreDBInstanceToPointInTimeResponse * restoreDBInstanceToPointInTime(const RdsRestoreDBInstanceToPointInTimeRequest &request);
    RdsRevokeDBSecurityGroupIngressResponse * revokeDBSecurityGroupIngress(const RdsRevokeDBSecurityGroupIngressRequest &request);

private:
    Q_DECLARE_PRIVATE(RdsClient)
    Q_DISABLE_COPY(RdsClient)

};

QTAWS_END_NAMESPACE

#endif
