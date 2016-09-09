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

#ifndef QTAWS_ELASTICACHECLIENT_H
#define QTAWS_ELASTICACHECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class ElastiCacheClientPrivate;

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
    ElastiCacheAddTagsToResourceResponse * addTagsToResource(const ElastiCacheAddTagsToResourceRequest &request);
    ElastiCacheAuthorizeCacheSecurityGroupIngressResponse * authorizeCacheSecurityGroupIngress(const ElastiCacheAuthorizeCacheSecurityGroupIngressRequest &request);
    ElastiCacheCopySnapshotResponse * copySnapshot(const ElastiCacheCopySnapshotRequest &request);
    ElastiCacheCreateCacheClusterResponse * createCacheCluster(const ElastiCacheCreateCacheClusterRequest &request);
    ElastiCacheCreateCacheParameterGroupResponse * createCacheParameterGroup(const ElastiCacheCreateCacheParameterGroupRequest &request);
    ElastiCacheCreateCacheSecurityGroupResponse * createCacheSecurityGroup(const ElastiCacheCreateCacheSecurityGroupRequest &request);
    ElastiCacheCreateCacheSubnetGroupResponse * createCacheSubnetGroup(const ElastiCacheCreateCacheSubnetGroupRequest &request);
    ElastiCacheCreateReplicationGroupResponse * createReplicationGroup(const ElastiCacheCreateReplicationGroupRequest &request);
    ElastiCacheCreateSnapshotResponse * createSnapshot(const ElastiCacheCreateSnapshotRequest &request);
    ElastiCacheDeleteCacheClusterResponse * deleteCacheCluster(const ElastiCacheDeleteCacheClusterRequest &request);
    ElastiCacheDeleteCacheParameterGroupResponse * deleteCacheParameterGroup(const ElastiCacheDeleteCacheParameterGroupRequest &request);
    ElastiCacheDeleteCacheSecurityGroupResponse * deleteCacheSecurityGroup(const ElastiCacheDeleteCacheSecurityGroupRequest &request);
    ElastiCacheDeleteCacheSubnetGroupResponse * deleteCacheSubnetGroup(const ElastiCacheDeleteCacheSubnetGroupRequest &request);
    ElastiCacheDeleteReplicationGroupResponse * deleteReplicationGroup(const ElastiCacheDeleteReplicationGroupRequest &request);
    ElastiCacheDeleteSnapshotResponse * deleteSnapshot(const ElastiCacheDeleteSnapshotRequest &request);
    ElastiCacheDescribeCacheClustersResponse * describeCacheClusters(const ElastiCacheDescribeCacheClustersRequest &request);
    ElastiCacheDescribeCacheEngineVersionsResponse * describeCacheEngineVersions(const ElastiCacheDescribeCacheEngineVersionsRequest &request);
    ElastiCacheDescribeCacheParameterGroupsResponse * describeCacheParameterGroups(const ElastiCacheDescribeCacheParameterGroupsRequest &request);
    ElastiCacheDescribeCacheParametersResponse * describeCacheParameters(const ElastiCacheDescribeCacheParametersRequest &request);
    ElastiCacheDescribeCacheSecurityGroupsResponse * describeCacheSecurityGroups(const ElastiCacheDescribeCacheSecurityGroupsRequest &request);
    ElastiCacheDescribeCacheSubnetGroupsResponse * describeCacheSubnetGroups(const ElastiCacheDescribeCacheSubnetGroupsRequest &request);
    ElastiCacheDescribeEngineDefaultParametersResponse * describeEngineDefaultParameters(const ElastiCacheDescribeEngineDefaultParametersRequest &request);
    ElastiCacheDescribeEventsResponse * describeEvents(const ElastiCacheDescribeEventsRequest &request);
    ElastiCacheDescribeReplicationGroupsResponse * describeReplicationGroups(const ElastiCacheDescribeReplicationGroupsRequest &request);
    ElastiCacheDescribeReservedCacheNodesResponse * describeReservedCacheNodes(const ElastiCacheDescribeReservedCacheNodesRequest &request);
    ElastiCacheDescribeReservedCacheNodesOfferingsResponse * describeReservedCacheNodesOfferings(const ElastiCacheDescribeReservedCacheNodesOfferingsRequest &request);
    ElastiCacheDescribeSnapshotsResponse * describeSnapshots(const ElastiCacheDescribeSnapshotsRequest &request);
    ElastiCacheListAllowedNodeTypeModificationsResponse * listAllowedNodeTypeModifications(const ElastiCacheListAllowedNodeTypeModificationsRequest &request);
    ElastiCacheListTagsForResourceResponse * listTagsForResource(const ElastiCacheListTagsForResourceRequest &request);
    ElastiCacheModifyCacheClusterResponse * modifyCacheCluster(const ElastiCacheModifyCacheClusterRequest &request);
    ElastiCacheModifyCacheParameterGroupResponse * modifyCacheParameterGroup(const ElastiCacheModifyCacheParameterGroupRequest &request);
    ElastiCacheModifyCacheSubnetGroupResponse * modifyCacheSubnetGroup(const ElastiCacheModifyCacheSubnetGroupRequest &request);
    ElastiCacheModifyReplicationGroupResponse * modifyReplicationGroup(const ElastiCacheModifyReplicationGroupRequest &request);
    ElastiCachePurchaseReservedCacheNodesOfferingResponse * purchaseReservedCacheNodesOffering(const ElastiCachePurchaseReservedCacheNodesOfferingRequest &request);
    ElastiCacheRebootCacheClusterResponse * rebootCacheCluster(const ElastiCacheRebootCacheClusterRequest &request);
    ElastiCacheRemoveTagsFromResourceResponse * removeTagsFromResource(const ElastiCacheRemoveTagsFromResourceRequest &request);
    ElastiCacheResetCacheParameterGroupResponse * resetCacheParameterGroup(const ElastiCacheResetCacheParameterGroupRequest &request);
    ElastiCacheRevokeCacheSecurityGroupIngressResponse * revokeCacheSecurityGroupIngress(const ElastiCacheRevokeCacheSecurityGroupIngressRequest &request);

private:
    Q_DECLARE_PRIVATE(ElastiCacheClient)
    Q_DISABLE_COPY(ElastiCacheClient)

};

QTAWS_END_NAMESPACE

#endif
