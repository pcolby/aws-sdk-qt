/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_ELASTICACHECLIENT_H
#define QTAWS_ELASTICACHECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ElastiCache {

class ElastiCacheClientPrivate;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class AuthorizeCacheSecurityGroupIngressRequest;
class AuthorizeCacheSecurityGroupIngressResponse;
class BatchApplyUpdateActionRequest;
class BatchApplyUpdateActionResponse;
class BatchStopUpdateActionRequest;
class BatchStopUpdateActionResponse;
class CopySnapshotRequest;
class CopySnapshotResponse;
class CreateCacheClusterRequest;
class CreateCacheClusterResponse;
class CreateCacheParameterGroupRequest;
class CreateCacheParameterGroupResponse;
class CreateCacheSecurityGroupRequest;
class CreateCacheSecurityGroupResponse;
class CreateCacheSubnetGroupRequest;
class CreateCacheSubnetGroupResponse;
class CreateReplicationGroupRequest;
class CreateReplicationGroupResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class DecreaseReplicaCountRequest;
class DecreaseReplicaCountResponse;
class DeleteCacheClusterRequest;
class DeleteCacheClusterResponse;
class DeleteCacheParameterGroupRequest;
class DeleteCacheParameterGroupResponse;
class DeleteCacheSecurityGroupRequest;
class DeleteCacheSecurityGroupResponse;
class DeleteCacheSubnetGroupRequest;
class DeleteCacheSubnetGroupResponse;
class DeleteReplicationGroupRequest;
class DeleteReplicationGroupResponse;
class DeleteSnapshotRequest;
class DeleteSnapshotResponse;
class DescribeCacheClustersRequest;
class DescribeCacheClustersResponse;
class DescribeCacheEngineVersionsRequest;
class DescribeCacheEngineVersionsResponse;
class DescribeCacheParameterGroupsRequest;
class DescribeCacheParameterGroupsResponse;
class DescribeCacheParametersRequest;
class DescribeCacheParametersResponse;
class DescribeCacheSecurityGroupsRequest;
class DescribeCacheSecurityGroupsResponse;
class DescribeCacheSubnetGroupsRequest;
class DescribeCacheSubnetGroupsResponse;
class DescribeEngineDefaultParametersRequest;
class DescribeEngineDefaultParametersResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeReplicationGroupsRequest;
class DescribeReplicationGroupsResponse;
class DescribeReservedCacheNodesRequest;
class DescribeReservedCacheNodesResponse;
class DescribeReservedCacheNodesOfferingsRequest;
class DescribeReservedCacheNodesOfferingsResponse;
class DescribeServiceUpdatesRequest;
class DescribeServiceUpdatesResponse;
class DescribeSnapshotsRequest;
class DescribeSnapshotsResponse;
class DescribeUpdateActionsRequest;
class DescribeUpdateActionsResponse;
class IncreaseReplicaCountRequest;
class IncreaseReplicaCountResponse;
class ListAllowedNodeTypeModificationsRequest;
class ListAllowedNodeTypeModificationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyCacheClusterRequest;
class ModifyCacheClusterResponse;
class ModifyCacheParameterGroupRequest;
class ModifyCacheParameterGroupResponse;
class ModifyCacheSubnetGroupRequest;
class ModifyCacheSubnetGroupResponse;
class ModifyReplicationGroupRequest;
class ModifyReplicationGroupResponse;
class ModifyReplicationGroupShardConfigurationRequest;
class ModifyReplicationGroupShardConfigurationResponse;
class PurchaseReservedCacheNodesOfferingRequest;
class PurchaseReservedCacheNodesOfferingResponse;
class RebootCacheClusterRequest;
class RebootCacheClusterResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class ResetCacheParameterGroupRequest;
class ResetCacheParameterGroupResponse;
class RevokeCacheSecurityGroupIngressRequest;
class RevokeCacheSecurityGroupIngressResponse;
class TestFailoverRequest;
class TestFailoverResponse;

class QTAWS_EXPORT ElastiCacheClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElastiCacheClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElastiCacheClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    AuthorizeCacheSecurityGroupIngressResponse * authorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest &request);
    BatchApplyUpdateActionResponse * batchApplyUpdateAction(const BatchApplyUpdateActionRequest &request);
    BatchStopUpdateActionResponse * batchStopUpdateAction(const BatchStopUpdateActionRequest &request);
    CopySnapshotResponse * copySnapshot(const CopySnapshotRequest &request);
    CreateCacheClusterResponse * createCacheCluster(const CreateCacheClusterRequest &request);
    CreateCacheParameterGroupResponse * createCacheParameterGroup(const CreateCacheParameterGroupRequest &request);
    CreateCacheSecurityGroupResponse * createCacheSecurityGroup(const CreateCacheSecurityGroupRequest &request);
    CreateCacheSubnetGroupResponse * createCacheSubnetGroup(const CreateCacheSubnetGroupRequest &request);
    CreateReplicationGroupResponse * createReplicationGroup(const CreateReplicationGroupRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    DecreaseReplicaCountResponse * decreaseReplicaCount(const DecreaseReplicaCountRequest &request);
    DeleteCacheClusterResponse * deleteCacheCluster(const DeleteCacheClusterRequest &request);
    DeleteCacheParameterGroupResponse * deleteCacheParameterGroup(const DeleteCacheParameterGroupRequest &request);
    DeleteCacheSecurityGroupResponse * deleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest &request);
    DeleteCacheSubnetGroupResponse * deleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest &request);
    DeleteReplicationGroupResponse * deleteReplicationGroup(const DeleteReplicationGroupRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DescribeCacheClustersResponse * describeCacheClusters(const DescribeCacheClustersRequest &request);
    DescribeCacheEngineVersionsResponse * describeCacheEngineVersions(const DescribeCacheEngineVersionsRequest &request);
    DescribeCacheParameterGroupsResponse * describeCacheParameterGroups(const DescribeCacheParameterGroupsRequest &request);
    DescribeCacheParametersResponse * describeCacheParameters(const DescribeCacheParametersRequest &request);
    DescribeCacheSecurityGroupsResponse * describeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest &request);
    DescribeCacheSubnetGroupsResponse * describeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest &request);
    DescribeEngineDefaultParametersResponse * describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeReplicationGroupsResponse * describeReplicationGroups(const DescribeReplicationGroupsRequest &request);
    DescribeReservedCacheNodesResponse * describeReservedCacheNodes(const DescribeReservedCacheNodesRequest &request);
    DescribeReservedCacheNodesOfferingsResponse * describeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest &request);
    DescribeServiceUpdatesResponse * describeServiceUpdates(const DescribeServiceUpdatesRequest &request);
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
    DescribeUpdateActionsResponse * describeUpdateActions(const DescribeUpdateActionsRequest &request);
    IncreaseReplicaCountResponse * increaseReplicaCount(const IncreaseReplicaCountRequest &request);
    ListAllowedNodeTypeModificationsResponse * listAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyCacheClusterResponse * modifyCacheCluster(const ModifyCacheClusterRequest &request);
    ModifyCacheParameterGroupResponse * modifyCacheParameterGroup(const ModifyCacheParameterGroupRequest &request);
    ModifyCacheSubnetGroupResponse * modifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest &request);
    ModifyReplicationGroupResponse * modifyReplicationGroup(const ModifyReplicationGroupRequest &request);
    ModifyReplicationGroupShardConfigurationResponse * modifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest &request);
    PurchaseReservedCacheNodesOfferingResponse * purchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest &request);
    RebootCacheClusterResponse * rebootCacheCluster(const RebootCacheClusterRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetCacheParameterGroupResponse * resetCacheParameterGroup(const ResetCacheParameterGroupRequest &request);
    RevokeCacheSecurityGroupIngressResponse * revokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest &request);
    TestFailoverResponse * testFailover(const TestFailoverRequest &request);

private:
    Q_DECLARE_PRIVATE(ElastiCacheClient)
    Q_DISABLE_COPY(ElastiCacheClient)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
