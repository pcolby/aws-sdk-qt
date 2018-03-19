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

#include "elasticacheclient.h"
#include "elasticacheclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ElastiCacheClient
 *
 * @brief  Client for Amazon ElastiCache
 *
 * <fullname>Amazon ElastiCache</fullname>
 *
 * Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 *
 * cloud>
 *
 * With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 * administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 * cluster failure handling much simpler than in a self-managed cache
 *
 * deployment>
 *
 * In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 * statistics associated with their cache and can receive alarms if a part of their cache runs
 */

/**
 * @brief  Constructs a new ElastiCacheClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElastiCacheClient::ElastiCacheClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElastiCacheClientPrivate(this), parent)
{
    Q_D(ElastiCacheClient);
    d->apiVersion = QStringLiteral("2015-02-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elasticache");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon ElastiCache");
    d->serviceName = QStringLiteral("elasticache");
}

/**
 * @brief  Constructs a new ElastiCacheClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ElastiCacheClient::ElastiCacheClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElastiCacheClientPrivate(this), parent)
{
    Q_D(ElastiCacheClient);
    d->apiVersion = QStringLiteral("2015-02-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elasticache");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon ElastiCache");
    d->serviceName = QStringLiteral("elasticache");
}

/// @todo override getEndpoint() to use elasticache.

/**
 * Adds up to 50 cost allocation tags to the named resource. A cost allocation tag is a key-value pair where the key and
 * value are case-sensitive. You can use cost allocation tags to categorize and track your AWS
 *
 * costs>
 *
 * When you apply tags to your ElastiCache resources, AWS generates a cost allocation report as a comma-separated value
 * (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent business categories
 * (such as cost centers, application names, or owners) to organize your costs across multiple services. For more
 * information, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Tagging.html">Using Cost
 * Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToResourceResponse * ElastiCacheClient::addTagsToResource(const AddTagsToResourceRequest &request)
{

}

/**
 * Allows network ingress to a cache security group. Applications using ElastiCache must be running on Amazon EC2, and
 * Amazon EC2 security groups are used as the authorization
 *
 * mechanism> <note>
 *
 * You cannot authorize ingress from an Amazon EC2 security group in one region to an ElastiCache cluster in another
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AuthorizeCacheSecurityGroupIngressResponse * ElastiCacheClient::authorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest &request)
{

}

/**
 * Makes a copy of an existing
 *
 * snapshot> <note>
 *
 * This operation is valid for Redis
 *
 * only> </note> <b>
 *
 * Users or groups that have permissions to use the <code>CopySnapshot</code> operation can create their own Amazon S3
 * buckets and copy snapshots to it. To control access to your snapshots, use an IAM policy to control who has the ability
 * to use the <code>CopySnapshot</code> operation. For more information about using IAM to control the use of ElastiCache
 * operations, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html">Exporting Snapshots</a>
 * and <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/IAM.html">Authentication &amp; Access
 *
 * Control</a>> </b>
 *
 * You could receive the following error
 *
 * messages> <p class="title"> <b>Error Messages</b>
 *
 * </p <ul> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s is outside of the
 *
 * region>
 *
 * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
 * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s does not
 *
 * exist>
 *
 * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
 * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
 *
 * user>
 *
 * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.CreateBucket">Step
 * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message:</b> The authenticated user does not have sufficient permissions to perform the desired
 *
 * activity>
 *
 * <b>Solution:</b> Contact your system administrator to get the needed
 *
 * permissions> </li> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s already contains an object with key
 *
 * %s>
 *
 * <b>Solution:</b> Give the <code>TargetSnapshotName</code> a new and unique value. If exporting a snapshot, you could
 * alternatively create a new Amazon S3 bucket and use this same value for
 *
 * <code>TargetSnapshotName</code>> </li> <li>
 *
 * <b>Error Message: </b> ElastiCache has not been granted READ permissions %s on the S3
 *
 * Bucket>
 *
 * <b>Solution:</b> Add List and Read permissions on the bucket. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message: </b> ElastiCache has not been granted WRITE permissions %s on the S3
 *
 * Bucket>
 *
 * <b>Solution:</b> Add Upload/Delete permissions on the bucket. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s on the S3
 *
 * Bucket>
 *
 * <b>Solution:</b> Add View Permissions on the bucket. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Snapshots.Exporting.html#Snapshots.Exporting.GrantAccess">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopySnapshotResponse * ElastiCacheClient::copySnapshot(const CopySnapshotRequest &request)
{

}

/**
 * Creates a cluster. All nodes in the cluster run the same protocol-compliant cache engine software, either Memcached or
 *
 * Redis> <b>
 *
 * Due to current limitations on Redis (cluster mode disabled), this operation or parameter is not supported on Redis
 * (cluster mode enabled) replication
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCacheClusterResponse * ElastiCacheClient::createCacheCluster(const CreateCacheClusterRequest &request)
{

}

/**
 * Creates a new Amazon ElastiCache cache parameter group. An ElastiCache cache parameter group is a collection of
 * parameters and their values that are applied to all of the nodes in any cluster or replication group using the
 *
 * CacheParameterGroup>
 *
 * A newly created CacheParameterGroup is an exact duplicate of the default parameter group for the
 * CacheParameterGroupFamily. To customize the newly created CacheParameterGroup you can change the values of specific
 * parameters. For more information,
 *
 * see> <ul> <li>
 *
 * <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
 * in the ElastiCache API
 *
 * Reference> </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/ParameterGroups.html">Parameters and Parameter
 * Groups</a> in the ElastiCache User
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCacheParameterGroupResponse * ElastiCacheClient::createCacheParameterGroup(const CreateCacheParameterGroupRequest &request)
{

}

/**
 * Creates a new cache security group. Use a cache security group to control access to one or more
 *
 * clusters>
 *
 * Cache security groups are only used when you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
 * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group instead. For more information, see <a
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCacheSecurityGroupResponse * ElastiCacheClient::createCacheSecurityGroup(const CreateCacheSecurityGroupRequest &request)
{

}

/**
 * Creates a new cache subnet
 *
 * group>
 *
 * Use this parameter only when you are creating a cluster in an Amazon Virtual Private Cloud (Amazon
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCacheSubnetGroupResponse * ElastiCacheClient::createCacheSubnetGroup(const CreateCacheSubnetGroupRequest &request)
{

}

/**
 * Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled) replication
 *
 * group>
 *
 * A Redis (cluster mode disabled) replication group is a collection of clusters, where one of the clusters is a read/write
 * primary and the others are read-only replicas. Writes to the primary are asynchronously propagated to the
 *
 * replicas>
 *
 * A Redis (cluster mode enabled) replication group is a collection of 1 to 15 node groups (shards). Each node group
 * (shard) has one read/write primary node and up to 5 read-only replica nodes. Writes to the primary are asynchronously
 * propagated to the replicas. Redis (cluster mode enabled) replication groups partition the data across node groups
 *
 * (shards)>
 *
 * When a Redis (cluster mode disabled) replication group has been successfully created, you can add one or more read
 * replicas to it, up to a total of 5 read replicas. You cannot alter a Redis (cluster mode enabled) replication group
 * after it has been created. However, if you need to increase or decrease the number of node groups (console: shards), you
 * can avail yourself of ElastiCache for Redis' enhanced backup and restore. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/backups-restoring.html">Restoring From a Backup with
 * Cluster Resizing</a> in the <i>ElastiCache User
 *
 * Guide</i>> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReplicationGroupResponse * ElastiCacheClient::createReplicationGroup(const CreateReplicationGroupRequest &request)
{

}

/**
 * Creates a copy of an entire cluster or replication group at a specific moment in
 *
 * time> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSnapshotResponse * ElastiCacheClient::createSnapshot(const CreateSnapshotRequest &request)
{

}

/**
 * Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code> deletes all associated cache nodes, node
 * endpoints and the cluster itself. When you receive a successful response from this operation, Amazon ElastiCache
 * immediately begins deleting the cluster; you cannot cancel or revert this
 *
 * operation>
 *
 * This operation cannot be used to delete a cluster that is the last read replica of a replication group or node group
 * (shard) that has Multi-AZ mode enabled or a cluster from a Redis (cluster mode enabled) replication
 *
 * group> <b>
 *
 * Due to current limitations on Redis (cluster mode disabled), this operation or parameter is not supported on Redis
 * (cluster mode enabled) replication
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCacheClusterResponse * ElastiCacheClient::deleteCacheCluster(const DeleteCacheClusterRequest &request)
{

}

/**
 * Deletes the specified cache parameter group. You cannot delete a cache parameter group if it is associated with any
 * cache
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCacheParameterGroupResponse * ElastiCacheClient::deleteCacheParameterGroup(const DeleteCacheParameterGroupRequest &request)
{

}

/**
 * Deletes a cache security
 *
 * group> <note>
 *
 * You cannot delete a cache security group if it is associated with any
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCacheSecurityGroupResponse * ElastiCacheClient::deleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest &request)
{

}

/**
 * Deletes a cache subnet
 *
 * group> <note>
 *
 * You cannot delete a cache subnet group if it is associated with any
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCacheSubnetGroupResponse * ElastiCacheClient::deleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest &request)
{

}

/**
 * Deletes an existing replication group. By default, this operation deletes the entire replication group, including the
 * primary/primaries and all of the read replicas. If the replication group has only one primary, you can optionally delete
 * only the read replicas, while retaining the primary by setting
 *
 * <code>RetainPrimaryCluster=true</code>>
 *
 * When you receive a successful response from this operation, Amazon ElastiCache immediately begins deleting the selected
 * resources; you cannot cancel or revert this
 *
 * operation> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReplicationGroupResponse * ElastiCacheClient::deleteReplicationGroup(const DeleteReplicationGroupRequest &request)
{

}

/**
 * Deletes an existing snapshot. When you receive a successful response from this operation, ElastiCache immediately begins
 * deleting the snapshot; you cannot cancel or revert this
 *
 * operation> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSnapshotResponse * ElastiCacheClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{

}

/**
 * Returns information about all provisioned clusters if no cluster identifier is specified, or about a specific cache
 * cluster if a cluster identifier is
 *
 * supplied>
 *
 * By default, abbreviated information about the clusters is returned. You can use the optional <i>ShowCacheNodeInfo</i>
 * flag to retrieve detailed information about the cache nodes associated with the clusters. These details include the DNS
 * address and port for the cache node
 *
 * endpoint>
 *
 * If the cluster is in the <i>creating</i> state, only cluster-level information is displayed until all of the nodes are
 * successfully
 *
 * provisioned>
 *
 * If the cluster is in the <i>deleting</i> state, only cluster-level information is
 *
 * displayed>
 *
 * If cache nodes are currently being added to the cluster, node endpoint information and creation time for the additional
 * nodes are not displayed until they are completely provisioned. When the cluster state is <i>available</i>, the cluster
 * is ready for
 *
 * use>
 *
 * If cache nodes are currently being removed from the cluster, no endpoint information for the removed nodes is
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheClustersResponse * ElastiCacheClient::describeCacheClusters(const DescribeCacheClustersRequest &request)
{

}

/**
 * Returns a list of the available cache engines and their
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheEngineVersionsResponse * ElastiCacheClient::describeCacheEngineVersions(const DescribeCacheEngineVersionsRequest &request)
{

}

/**
 * Returns a list of cache parameter group descriptions. If a cache parameter group name is specified, the list contains
 * only the descriptions for that
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheParameterGroupsResponse * ElastiCacheClient::describeCacheParameterGroups(const DescribeCacheParameterGroupsRequest &request)
{

}

/**
 * Returns the detailed parameter list for a particular cache parameter
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheParametersResponse * ElastiCacheClient::describeCacheParameters(const DescribeCacheParametersRequest &request)
{

}

/**
 * Returns a list of cache security group descriptions. If a cache security group name is specified, the list contains only
 * the description of that
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheSecurityGroupsResponse * ElastiCacheClient::describeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest &request)
{

}

/**
 * Returns a list of cache subnet group descriptions. If a subnet group name is specified, the list contains only the
 * description of that
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCacheSubnetGroupsResponse * ElastiCacheClient::describeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest &request)
{

}

/**
 * Returns the default engine and system parameter information for the specified cache
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEngineDefaultParametersResponse * ElastiCacheClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{

}

/**
 * Returns events related to clusters, cache security groups, and cache parameter groups. You can obtain events specific to
 * a particular cluster, cache security group, or cache parameter group by providing the name as a
 *
 * parameter>
 *
 * By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth
 * of events if
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * ElastiCacheClient::describeEvents(const DescribeEventsRequest &request)
{

}

/**
 * Returns information about a particular replication group. If no identifier is specified,
 * <code>DescribeReplicationGroups</code> returns information about all replication
 *
 * groups> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationGroupsResponse * ElastiCacheClient::describeReplicationGroups(const DescribeReplicationGroupsRequest &request)
{

}

/**
 * Returns information about reserved cache nodes for this account, or about a specified reserved cache
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedCacheNodesResponse * ElastiCacheClient::describeReservedCacheNodes(const DescribeReservedCacheNodesRequest &request)
{

}

/**
 * Lists available reserved cache node
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedCacheNodesOfferingsResponse * ElastiCacheClient::describeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest &request)
{

}

/**
 * Returns information about cluster or replication group snapshots. By default, <code>DescribeSnapshots</code> lists all
 * of your snapshots; it can optionally describe a single snapshot, or just the snapshots associated with a particular
 * cache
 *
 * cluster> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSnapshotsResponse * ElastiCacheClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{

}

/**
 * Lists all available node types that you can scale your Redis cluster's or replication group's current node type up
 *
 * to>
 *
 * When you use the <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code> operations to scale up your
 * cluster or replication group, the value of the <code>CacheNodeType</code> parameter must be one of the node types
 * returned by this
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAllowedNodeTypeModificationsResponse * ElastiCacheClient::listAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest &request)
{

}

/**
 * Lists all cost allocation tags currently on the named resource. A <code>cost allocation tag</code> is a key-value pair
 * where the key is case-sensitive and the value is optional. You can use cost allocation tags to categorize and track your
 * AWS
 *
 * costs>
 *
 * You can have a maximum of 50 cost allocation tags on an ElastiCache resource. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/BestPractices.html">Using Cost Allocation Tags in
 * Amazon
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * ElastiCacheClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Modifies the settings for a cluster. You can use this operation to change one or more cluster configuration parameters
 * by specifying the parameters and the new
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyCacheClusterResponse * ElastiCacheClient::modifyCacheCluster(const ModifyCacheClusterRequest &request)
{

}

/**
 * Modifies the parameters of a cache parameter group. You can modify up to 20 parameters in a single request by submitting
 * a list parameter name and value
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyCacheParameterGroupResponse * ElastiCacheClient::modifyCacheParameterGroup(const ModifyCacheParameterGroupRequest &request)
{

}

/**
 * Modifies an existing cache subnet
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyCacheSubnetGroupResponse * ElastiCacheClient::modifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest &request)
{

}

/**
 * Modifies the settings for a replication
 *
 * group> <b>
 *
 * Due to current limitations on Redis (cluster mode disabled), this operation or parameter is not supported on Redis
 * (cluster mode enabled) replication
 *
 * groups> </b> <note>
 *
 * This operation is valid for Redis
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyReplicationGroupResponse * ElastiCacheClient::modifyReplicationGroup(const ModifyReplicationGroupRequest &request)
{

}

/**
 * Performs horizontal scaling on a Redis (cluster mode enabled) cluster with no downtime. Requires Redis engine version
 * 3.2.10 or newer. For information on upgrading your engine to a newer version, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/VersionManagement.html">Upgrading Engine
 * Versions</a> in the Amazon ElastiCache User
 *
 * Guide>
 *
 * For more information on ElastiCache for Redis online horizontal scaling, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/redis-cluster-resharding-online.html">ElastiCache
 * for Redis Horizontal Scaling</a>
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyReplicationGroupShardConfigurationResponse * ElastiCacheClient::modifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest &request)
{

}

/**
 * Allows you to purchase a reserved cache node
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PurchaseReservedCacheNodesOfferingResponse * ElastiCacheClient::purchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest &request)
{

}

/**
 * Reboots some, or all, of the cache nodes within a provisioned cluster. This operation applies any modified cache
 * parameter groups to the cluster. The reboot operation takes place as soon as possible, and results in a momentary outage
 * to the cluster. During the reboot, the cluster status is set to
 *
 * REBOOTING>
 *
 * The reboot causes the contents of the cache (for each cache node being rebooted) to be
 *
 * lost>
 *
 * When the reboot is complete, a cluster event is
 *
 * created>
 *
 * Rebooting a cluster is currently supported on Memcached and Redis (cluster mode disabled) clusters. Rebooting is not
 * supported on Redis (cluster mode enabled)
 *
 * clusters>
 *
 * If you make changes to parameters that require a Redis (cluster mode enabled) cluster reboot for the changes to be
 * applied, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/Clusters.Rebooting.htm">Rebooting a
 * Cluster</a> for an alternate
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootCacheClusterResponse * ElastiCacheClient::rebootCacheCluster(const RebootCacheClusterRequest &request)
{

}

/**
 * Removes the tags identified by the <code>TagKeys</code> list from the named
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromResourceResponse * ElastiCacheClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{

}

/**
 * Modifies the parameters of a cache parameter group to the engine or system default value. You can reset specific
 * parameters by submitting a list of parameter names. To reset the entire cache parameter group, specify the
 * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetCacheParameterGroupResponse * ElastiCacheClient::resetCacheParameterGroup(const ResetCacheParameterGroupRequest &request)
{

}

/**
 * Revokes ingress from a cache security group. Use this operation to disallow access from an Amazon EC2 security group
 * that had been previously
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeCacheSecurityGroupIngressResponse * ElastiCacheClient::revokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest &request)
{

}

/**
 * Represents the input of a <code>TestFailover</code> operation which test automatic failover on a specified node group
 * (called shard in the console) in a replication group (called cluster in the
 *
 * console)> <p class="title"> <b>Note the following</b>
 *
 * </p <ul> <li>
 *
 * A customer can use this operation to test automatic failover on up to 5 shards (called node groups in the ElastiCache
 * API and AWS CLI) in any rolling 24-hour
 *
 * period> </li> <li>
 *
 * If calling this operation on shards in different clusters (called replication groups in the API and CLI), the calls can
 * be made
 *
 * concurrently>
 *
 *
 * </p </li> <li>
 *
 * If calling this operation multiple times on different shards in the same Redis (cluster mode enabled) replication group,
 * the first node replacement must complete before a subsequent call can be
 *
 * made> </li> <li>
 *
 * To determine whether the node replacement is complete you can check Events using the Amazon ElastiCache console, the AWS
 * CLI, or the ElastiCache API. Look for the following automatic failover related events, listed here in order of
 *
 * occurrance> <ol> <li>
 *
 * Replication group message: <code>Test Failover API called for node group &lt;node-group-id&gt;</code>
 *
 * </p </li> <li>
 *
 * Cache cluster message: <code>Failover from master node &lt;primary-node-id&gt; to replica node &lt;node-id&gt;
 * completed</code>
 *
 * </p </li> <li>
 *
 * Replication group message: <code>Failover from master node &lt;primary-node-id&gt; to replica node &lt;node-id&gt;
 * completed</code>
 *
 * </p </li> <li>
 *
 * Cache cluster message: <code>Recovering cache nodes &lt;node-id&gt;</code>
 *
 * </p </li> <li>
 *
 * Cache cluster message: <code>Finished recovery for cache nodes &lt;node-id&gt;</code>
 *
 * </p </li> </ol>
 *
 * For more information
 *
 * see> <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/ECEvents.Viewing.html">Viewing ElastiCache
 * Events</a> in the <i>ElastiCache User Guide</i>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a> in
 * the ElastiCache API
 *
 * Referenc> </li> </ul> </li> </ul>
 *
 * Also see, <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/AutoFailover.html#auto-failover-test">Testing
 * Multi-AZ with Automatic Failover</a> in the <i>ElastiCache User
 *
 * @param  request Request to send to Amazon ElastiCache.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestFailoverResponse * ElastiCacheClient::testFailover(const TestFailoverRequest &request)
{

}

/**
 * @internal
 *
 * @class  ElastiCacheClientPrivate
 *
 * @brief  Private implementation for ElastiCacheClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElastiCacheClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElastiCacheClient instance.
 */
ElastiCacheClientPrivate::ElastiCacheClientPrivate(ElastiCacheClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElastiCache
} // namespace AWS
