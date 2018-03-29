/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RDSCLIENT_H
#define QTAWS_RDSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace RDS {

class RdsClientPrivate;
class AddRoleToDBClusterRequest;
class AddRoleToDBClusterResponse;
class AddSourceIdentifierToSubscriptionRequest;
class AddSourceIdentifierToSubscriptionResponse;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class ApplyPendingMaintenanceActionRequest;
class ApplyPendingMaintenanceActionResponse;
class AuthorizeDBSecurityGroupIngressRequest;
class AuthorizeDBSecurityGroupIngressResponse;
class CopyDBClusterParameterGroupRequest;
class CopyDBClusterParameterGroupResponse;
class CopyDBClusterSnapshotRequest;
class CopyDBClusterSnapshotResponse;
class CopyDBParameterGroupRequest;
class CopyDBParameterGroupResponse;
class CopyDBSnapshotRequest;
class CopyDBSnapshotResponse;
class CopyOptionGroupRequest;
class CopyOptionGroupResponse;
class CreateDBClusterRequest;
class CreateDBClusterResponse;
class CreateDBClusterParameterGroupRequest;
class CreateDBClusterParameterGroupResponse;
class CreateDBClusterSnapshotRequest;
class CreateDBClusterSnapshotResponse;
class CreateDBInstanceRequest;
class CreateDBInstanceResponse;
class CreateDBInstanceReadReplicaRequest;
class CreateDBInstanceReadReplicaResponse;
class CreateDBParameterGroupRequest;
class CreateDBParameterGroupResponse;
class CreateDBSecurityGroupRequest;
class CreateDBSecurityGroupResponse;
class CreateDBSnapshotRequest;
class CreateDBSnapshotResponse;
class CreateDBSubnetGroupRequest;
class CreateDBSubnetGroupResponse;
class CreateEventSubscriptionRequest;
class CreateEventSubscriptionResponse;
class CreateOptionGroupRequest;
class CreateOptionGroupResponse;
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
class DeleteDBSecurityGroupRequest;
class DeleteDBSecurityGroupResponse;
class DeleteDBSnapshotRequest;
class DeleteDBSnapshotResponse;
class DeleteDBSubnetGroupRequest;
class DeleteDBSubnetGroupResponse;
class DeleteEventSubscriptionRequest;
class DeleteEventSubscriptionResponse;
class DeleteOptionGroupRequest;
class DeleteOptionGroupResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
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
class DescribeDBLogFilesRequest;
class DescribeDBLogFilesResponse;
class DescribeDBParameterGroupsRequest;
class DescribeDBParameterGroupsResponse;
class DescribeDBParametersRequest;
class DescribeDBParametersResponse;
class DescribeDBSecurityGroupsRequest;
class DescribeDBSecurityGroupsResponse;
class DescribeDBSnapshotAttributesRequest;
class DescribeDBSnapshotAttributesResponse;
class DescribeDBSnapshotsRequest;
class DescribeDBSnapshotsResponse;
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
class DescribeOptionGroupOptionsRequest;
class DescribeOptionGroupOptionsResponse;
class DescribeOptionGroupsRequest;
class DescribeOptionGroupsResponse;
class DescribeOrderableDBInstanceOptionsRequest;
class DescribeOrderableDBInstanceOptionsResponse;
class DescribePendingMaintenanceActionsRequest;
class DescribePendingMaintenanceActionsResponse;
class DescribeReservedDBInstancesRequest;
class DescribeReservedDBInstancesResponse;
class DescribeReservedDBInstancesOfferingsRequest;
class DescribeReservedDBInstancesOfferingsResponse;
class DescribeSourceRegionsRequest;
class DescribeSourceRegionsResponse;
class DescribeValidDBInstanceModificationsRequest;
class DescribeValidDBInstanceModificationsResponse;
class DownloadDBLogFilePortionRequest;
class DownloadDBLogFilePortionResponse;
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
class ModifyDBSnapshotRequest;
class ModifyDBSnapshotResponse;
class ModifyDBSnapshotAttributeRequest;
class ModifyDBSnapshotAttributeResponse;
class ModifyDBSubnetGroupRequest;
class ModifyDBSubnetGroupResponse;
class ModifyEventSubscriptionRequest;
class ModifyEventSubscriptionResponse;
class ModifyOptionGroupRequest;
class ModifyOptionGroupResponse;
class PromoteReadReplicaRequest;
class PromoteReadReplicaResponse;
class PromoteReadReplicaDBClusterRequest;
class PromoteReadReplicaDBClusterResponse;
class PurchaseReservedDBInstancesOfferingRequest;
class PurchaseReservedDBInstancesOfferingResponse;
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
class RestoreDBClusterFromS3Request;
class RestoreDBClusterFromS3Response;
class RestoreDBClusterFromSnapshotRequest;
class RestoreDBClusterFromSnapshotResponse;
class RestoreDBClusterToPointInTimeRequest;
class RestoreDBClusterToPointInTimeResponse;
class RestoreDBInstanceFromDBSnapshotRequest;
class RestoreDBInstanceFromDBSnapshotResponse;
class RestoreDBInstanceFromS3Request;
class RestoreDBInstanceFromS3Response;
class RestoreDBInstanceToPointInTimeRequest;
class RestoreDBInstanceToPointInTimeResponse;
class RevokeDBSecurityGroupIngressRequest;
class RevokeDBSecurityGroupIngressResponse;
class StartDBInstanceRequest;
class StartDBInstanceResponse;
class StopDBInstanceRequest;
class StopDBInstanceResponse;

class QTAWS_EXPORT RdsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RdsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RdsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddRoleToDBClusterResponse * addRoleToDBCluster(const AddRoleToDBClusterRequest &request);
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
    DescribeValidDBInstanceModificationsResponse * describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request);
    DownloadDBLogFilePortionResponse * downloadDBLogFilePortion(const DownloadDBLogFilePortionRequest &request);
    FailoverDBClusterResponse * failoverDBCluster(const FailoverDBClusterRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDBClusterResponse * modifyDBCluster(const ModifyDBClusterRequest &request);
    ModifyDBClusterParameterGroupResponse * modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request);
    ModifyDBClusterSnapshotAttributeResponse * modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request);
    ModifyDBInstanceResponse * modifyDBInstance(const ModifyDBInstanceRequest &request);
    ModifyDBParameterGroupResponse * modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request);
    ModifyDBSnapshotResponse * modifyDBSnapshot(const ModifyDBSnapshotRequest &request);
    ModifyDBSnapshotAttributeResponse * modifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest &request);
    ModifyDBSubnetGroupResponse * modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request);
    ModifyEventSubscriptionResponse * modifyEventSubscription(const ModifyEventSubscriptionRequest &request);
    ModifyOptionGroupResponse * modifyOptionGroup(const ModifyOptionGroupRequest &request);
    PromoteReadReplicaResponse * promoteReadReplica(const PromoteReadReplicaRequest &request);
    PromoteReadReplicaDBClusterResponse * promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request);
    PurchaseReservedDBInstancesOfferingResponse * purchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest &request);
    RebootDBInstanceResponse * rebootDBInstance(const RebootDBInstanceRequest &request);
    RemoveRoleFromDBClusterResponse * removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request);
    RemoveSourceIdentifierFromSubscriptionResponse * removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetDBClusterParameterGroupResponse * resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request);
    ResetDBParameterGroupResponse * resetDBParameterGroup(const ResetDBParameterGroupRequest &request);
    RestoreDBClusterFromS3Response * restoreDBClusterFromS3(const RestoreDBClusterFromS3Request &request);
    RestoreDBClusterFromSnapshotResponse * restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request);
    RestoreDBClusterToPointInTimeResponse * restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request);
    RestoreDBInstanceFromDBSnapshotResponse * restoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest &request);
    RestoreDBInstanceFromS3Response * restoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request &request);
    RestoreDBInstanceToPointInTimeResponse * restoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest &request);
    RevokeDBSecurityGroupIngressResponse * revokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest &request);
    StartDBInstanceResponse * startDBInstance(const StartDBInstanceRequest &request);
    StopDBInstanceResponse * stopDBInstance(const StopDBInstanceRequest &request);

private:
    Q_DECLARE_PRIVATE(RdsClient)
    Q_DISABLE_COPY(RdsClient)

};

} // namespace RDS
} // namespace QtAws

#endif
