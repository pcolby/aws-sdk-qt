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

#ifndef QTAWS_ELASTICACHECLIENT_H
#define QTAWS_ELASTICACHECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ElastiCache {

class ElastiCacheClientPrivate;
class AddTagsToResourceResponse;
class AuthorizeCacheSecurityGroupIngressResponse;
class CopySnapshotResponse;
class CreateCacheClusterResponse;
class CreateCacheParameterGroupResponse;
class CreateCacheSecurityGroupResponse;
class CreateCacheSubnetGroupResponse;
class CreateReplicationGroupResponse;
class CreateSnapshotResponse;
class DeleteCacheClusterResponse;
class DeleteCacheParameterGroupResponse;
class DeleteCacheSecurityGroupResponse;
class DeleteCacheSubnetGroupResponse;
class DeleteReplicationGroupResponse;
class DeleteSnapshotResponse;
class DescribeCacheClustersResponse;
class DescribeCacheEngineVersionsResponse;
class DescribeCacheParameterGroupsResponse;
class DescribeCacheParametersResponse;
class DescribeCacheSecurityGroupsResponse;
class DescribeCacheSubnetGroupsResponse;
class DescribeEngineDefaultParametersResponse;
class DescribeEventsResponse;
class DescribeReplicationGroupsResponse;
class DescribeReservedCacheNodesResponse;
class DescribeReservedCacheNodesOfferingsResponse;
class DescribeSnapshotsResponse;
class ListAllowedNodeTypeModificationsResponse;
class ListTagsForResourceResponse;
class ModifyCacheClusterResponse;
class ModifyCacheParameterGroupResponse;
class ModifyCacheSubnetGroupResponse;
class ModifyReplicationGroupResponse;
class ModifyReplicationGroupShardConfigurationResponse;
class PurchaseReservedCacheNodesOfferingResponse;
class RebootCacheClusterResponse;
class RemoveTagsFromResourceResponse;
class ResetCacheParameterGroupResponse;
class RevokeCacheSecurityGroupIngressResponse;
class TestFailoverResponse;

class QTAWS_EXPORT ElastiCacheClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ElastiCacheClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElastiCacheClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    AuthorizeCacheSecurityGroupIngressResponse * authorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest &request);
    CopySnapshotResponse * copySnapshot(const CopySnapshotRequest &request);
    CreateCacheClusterResponse * createCacheCluster(const CreateCacheClusterRequest &request);
    CreateCacheParameterGroupResponse * createCacheParameterGroup(const CreateCacheParameterGroupRequest &request);
    CreateCacheSecurityGroupResponse * createCacheSecurityGroup(const CreateCacheSecurityGroupRequest &request);
    CreateCacheSubnetGroupResponse * createCacheSubnetGroup(const CreateCacheSubnetGroupRequest &request);
    CreateReplicationGroupResponse * createReplicationGroup(const CreateReplicationGroupRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
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
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
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
} // namespace AWS

#endif
