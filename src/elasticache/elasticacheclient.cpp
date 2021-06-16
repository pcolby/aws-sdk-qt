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

#include "elasticacheclient.h"
#include "elasticacheclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "authorizecachesecuritygroupingressrequest.h"
#include "authorizecachesecuritygroupingressresponse.h"
#include "batchapplyupdateactionrequest.h"
#include "batchapplyupdateactionresponse.h"
#include "batchstopupdateactionrequest.h"
#include "batchstopupdateactionresponse.h"
#include "completemigrationrequest.h"
#include "completemigrationresponse.h"
#include "copysnapshotrequest.h"
#include "copysnapshotresponse.h"
#include "createcacheclusterrequest.h"
#include "createcacheclusterresponse.h"
#include "createcacheparametergrouprequest.h"
#include "createcacheparametergroupresponse.h"
#include "createcachesecuritygrouprequest.h"
#include "createcachesecuritygroupresponse.h"
#include "createcachesubnetgrouprequest.h"
#include "createcachesubnetgroupresponse.h"
#include "createglobalreplicationgrouprequest.h"
#include "createglobalreplicationgroupresponse.h"
#include "createreplicationgrouprequest.h"
#include "createreplicationgroupresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "createusergrouprequest.h"
#include "createusergroupresponse.h"
#include "decreasenodegroupsinglobalreplicationgrouprequest.h"
#include "decreasenodegroupsinglobalreplicationgroupresponse.h"
#include "decreasereplicacountrequest.h"
#include "decreasereplicacountresponse.h"
#include "deletecacheclusterrequest.h"
#include "deletecacheclusterresponse.h"
#include "deletecacheparametergrouprequest.h"
#include "deletecacheparametergroupresponse.h"
#include "deletecachesecuritygrouprequest.h"
#include "deletecachesecuritygroupresponse.h"
#include "deletecachesubnetgrouprequest.h"
#include "deletecachesubnetgroupresponse.h"
#include "deleteglobalreplicationgrouprequest.h"
#include "deleteglobalreplicationgroupresponse.h"
#include "deletereplicationgrouprequest.h"
#include "deletereplicationgroupresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deleteusergrouprequest.h"
#include "deleteusergroupresponse.h"
#include "describecacheclustersrequest.h"
#include "describecacheclustersresponse.h"
#include "describecacheengineversionsrequest.h"
#include "describecacheengineversionsresponse.h"
#include "describecacheparametergroupsrequest.h"
#include "describecacheparametergroupsresponse.h"
#include "describecacheparametersrequest.h"
#include "describecacheparametersresponse.h"
#include "describecachesecuritygroupsrequest.h"
#include "describecachesecuritygroupsresponse.h"
#include "describecachesubnetgroupsrequest.h"
#include "describecachesubnetgroupsresponse.h"
#include "describeenginedefaultparametersrequest.h"
#include "describeenginedefaultparametersresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeglobalreplicationgroupsrequest.h"
#include "describeglobalreplicationgroupsresponse.h"
#include "describereplicationgroupsrequest.h"
#include "describereplicationgroupsresponse.h"
#include "describereservedcachenodesrequest.h"
#include "describereservedcachenodesresponse.h"
#include "describereservedcachenodesofferingsrequest.h"
#include "describereservedcachenodesofferingsresponse.h"
#include "describeserviceupdatesrequest.h"
#include "describeserviceupdatesresponse.h"
#include "describesnapshotsrequest.h"
#include "describesnapshotsresponse.h"
#include "describeupdateactionsrequest.h"
#include "describeupdateactionsresponse.h"
#include "describeusergroupsrequest.h"
#include "describeusergroupsresponse.h"
#include "describeusersrequest.h"
#include "describeusersresponse.h"
#include "disassociateglobalreplicationgrouprequest.h"
#include "disassociateglobalreplicationgroupresponse.h"
#include "failoverglobalreplicationgrouprequest.h"
#include "failoverglobalreplicationgroupresponse.h"
#include "increasenodegroupsinglobalreplicationgrouprequest.h"
#include "increasenodegroupsinglobalreplicationgroupresponse.h"
#include "increasereplicacountrequest.h"
#include "increasereplicacountresponse.h"
#include "listallowednodetypemodificationsrequest.h"
#include "listallowednodetypemodificationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifycacheclusterrequest.h"
#include "modifycacheclusterresponse.h"
#include "modifycacheparametergrouprequest.h"
#include "modifycacheparametergroupresponse.h"
#include "modifycachesubnetgrouprequest.h"
#include "modifycachesubnetgroupresponse.h"
#include "modifyglobalreplicationgrouprequest.h"
#include "modifyglobalreplicationgroupresponse.h"
#include "modifyreplicationgrouprequest.h"
#include "modifyreplicationgroupresponse.h"
#include "modifyreplicationgroupshardconfigurationrequest.h"
#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "modifyuserrequest.h"
#include "modifyuserresponse.h"
#include "modifyusergrouprequest.h"
#include "modifyusergroupresponse.h"
#include "purchasereservedcachenodesofferingrequest.h"
#include "purchasereservedcachenodesofferingresponse.h"
#include "rebalanceslotsinglobalreplicationgrouprequest.h"
#include "rebalanceslotsinglobalreplicationgroupresponse.h"
#include "rebootcacheclusterrequest.h"
#include "rebootcacheclusterresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetcacheparametergrouprequest.h"
#include "resetcacheparametergroupresponse.h"
#include "revokecachesecuritygroupingressrequest.h"
#include "revokecachesecuritygroupingressresponse.h"
#include "startmigrationrequest.h"
#include "startmigrationresponse.h"
#include "testfailoverrequest.h"
#include "testfailoverresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElastiCache
 * \brief Contains classess for accessing Amazon ElastiCache.
 *
 * \inmodule QtAwsElastiCache
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ElastiCacheClient
 * \brief The ElastiCacheClient class provides access to the Amazon ElastiCache service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 */

/*!
 * \brief Constructs a ElastiCacheClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElastiCacheClient::ElastiCacheClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElastiCacheClientPrivate(this), parent)
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

/*!
 * \overload ElastiCacheClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElastiCacheClient::ElastiCacheClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElastiCacheClientPrivate(this), parent)
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

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A tag is a key-value pair where the key and value are case-sensitive. You can use tags to categorize and track all your
 * ElastiCache resources, with the exception of global replication group. When you add or remove tags on replication
 * groups, those actions will be replicated to all nodes in the replication group. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
 *
 * permissions</a>>
 *
 * For example, you can use cost-allocation tags to your ElastiCache resources, AWS generates a cost allocation report as a
 * comma-separated value (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent
 * business categories (such as cost centers, application names, or owners) to organize your costs across multiple
 *
 * services>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Tagging.html">Using Cost
 * Allocation Tags in Amazon ElastiCache</a> in the <i>ElastiCache User
 */
AddTagsToResourceResponse * ElastiCacheClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * AuthorizeCacheSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows network ingress to a cache security group. Applications using ElastiCache must be running on Amazon EC2, and
 * Amazon EC2 security groups are used as the authorization
 *
 * mechanism> <note>
 *
 * You cannot authorize ingress from an Amazon EC2 security group in one region to an ElastiCache cluster in another
 */
AuthorizeCacheSecurityGroupIngressResponse * ElastiCacheClient::authorizeCacheSecurityGroupIngress(const AuthorizeCacheSecurityGroupIngressRequest &request)
{
    return qobject_cast<AuthorizeCacheSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * BatchApplyUpdateActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Apply the service update. For more information on service updates and applying them, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/applying-updates.html">Applying Service
 */
BatchApplyUpdateActionResponse * ElastiCacheClient::batchApplyUpdateAction(const BatchApplyUpdateActionRequest &request)
{
    return qobject_cast<BatchApplyUpdateActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * BatchStopUpdateActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stop the service update. For more information on service updates and stopping them, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/stopping-self-service-updates.html">Stopping Service
 */
BatchStopUpdateActionResponse * ElastiCacheClient::batchStopUpdateAction(const BatchStopUpdateActionRequest &request)
{
    return qobject_cast<BatchStopUpdateActionResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CompleteMigrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Complete the migration of
 */
CompleteMigrationResponse * ElastiCacheClient::completeMigration(const CompleteMigrationRequest &request)
{
    return qobject_cast<CompleteMigrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CopySnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * operations, see <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html">Exporting
 * Snapshots</a> and <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.html">Authentication &amp;
 * Access
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
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
 * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s does not
 *
 * exist>
 *
 * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
 * 1: Create an Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message:</b> The S3 bucket %s is not owned by the authenticated
 *
 * user>
 *
 * <b>Solution:</b> Create an Amazon S3 bucket in the same region as your snapshot. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-create-s3-bucket">Step
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
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message: </b> ElastiCache has not been granted WRITE permissions %s on the S3
 *
 * Bucket>
 *
 * <b>Solution:</b> Add Upload/Delete permissions on the bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 *
 * Guide> </li> <li>
 *
 * <b>Error Message: </b> ElastiCache has not been granted READ_ACP permissions %s on the S3
 *
 * Bucket>
 *
 * <b>Solution:</b> Add View Permissions on the bucket. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/backups-exporting.html#backups-exporting-grant-access">Step
 * 2: Grant ElastiCache Access to Your Amazon S3 Bucket</a> in the ElastiCache User
 */
CopySnapshotResponse * ElastiCacheClient::copySnapshot(const CopySnapshotRequest &request)
{
    return qobject_cast<CopySnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateCacheClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cluster. All nodes in the cluster run the same protocol-compliant cache engine software, either Memcached or
 *
 * Redis>
 *
 * This operation is not supported for Redis (cluster mode enabled)
 */
CreateCacheClusterResponse * ElastiCacheClient::createCacheCluster(const CreateCacheClusterRequest &request)
{
    return qobject_cast<CreateCacheClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateCacheParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyCacheParameterGroup.html">ModifyCacheParameterGroup</a>
 * in the ElastiCache API
 *
 * Reference> </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ParameterGroups.html">Parameters and Parameter
 * Groups</a> in the ElastiCache User
 */
CreateCacheParameterGroupResponse * ElastiCacheClient::createCacheParameterGroup(const CreateCacheParameterGroupRequest &request)
{
    return qobject_cast<CreateCacheParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateCacheSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cache security group. Use a cache security group to control access to one or more
 *
 * clusters>
 *
 * Cache security groups are only used when you are creating a cluster outside of an Amazon Virtual Private Cloud (Amazon
 * VPC). If you are creating a cluster inside of a VPC, use a cache subnet group instead. For more information, see <a
 */
CreateCacheSecurityGroupResponse * ElastiCacheClient::createCacheSecurityGroup(const CreateCacheSecurityGroupRequest &request)
{
    return qobject_cast<CreateCacheSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateCacheSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cache subnet
 *
 * group>
 *
 * Use this parameter only when you are creating a cluster in an Amazon Virtual Private Cloud (Amazon
 */
CreateCacheSubnetGroupResponse * ElastiCacheClient::createCacheSubnetGroup(const CreateCacheSubnetGroupRequest &request)
{
    return qobject_cast<CreateCacheSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Global Datastore for Redis offers fully managed, fast, reliable and secure cross-region replication. Using Global
 * Datastore for Redis, you can create cross-region read replica clusters for ElastiCache for Redis to enable low-latency
 * reads and disaster recovery across regions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Redis-Global-Datastore.html">Replication Across
 * Regions Using Global Datastore</a>.
 *
 * </p <ul> <li>
 *
 * The <b>GlobalReplicationGroupIdSuffix</b> is the name of the Global
 *
 * datastore> </li> <li>
 *
 * The <b>PrimaryReplicationGroupId</b> represents the name of the primary cluster that accepts writes and will replicate
 * updates to the secondary
 */
CreateGlobalReplicationGroupResponse * ElastiCacheClient::createGlobalReplicationGroup(const CreateGlobalReplicationGroupRequest &request)
{
    return qobject_cast<CreateGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Redis (cluster mode disabled) or a Redis (cluster mode enabled) replication
 *
 * group>
 *
 * This API can be used to create a standalone regional replication group or a secondary replication group associated with
 * a Global
 *
 * datastore>
 *
 * A Redis (cluster mode disabled) replication group is a collection of clusters, where one of the clusters is a read/write
 * primary and the others are read-only replicas. Writes to the primary are asynchronously propagated to the
 *
 * replicas>
 *
 * A Redis cluster-mode enabled cluster is comprised of from 1 to 90 shards (API/CLI: node groups). Each shard has a
 * primary node and up to 5 read-only replica nodes. The configuration can range from 90 shards and 0 replicas to 15 shards
 * and 5 replicas, which is the maximum number or replicas allowed.
 *
 * </p
 *
 * The node or shard limit can be increased to a maximum of 500 per cluster if the Redis engine version is 5.0.6 or higher.
 * For example, you can choose to configure a 500 node cluster that ranges between 83 shards (one primary and 5 replicas
 * per shard) and 500 shards (single primary and no replicas). Make sure there are enough available IP addresses to
 * accommodate the increase. Common pitfalls include the subnets in the subnet group have too small a CIDR range or the
 * subnets are shared and heavily used by other clusters. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SubnetGroups.Creating.html">Creating a Subnet
 * Group</a>. For versions below 5.0.6, the limit is 250 per
 *
 * cluster>
 *
 * To request a limit increase, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS
 * Service Limits</a> and choose the limit type <b>Nodes per cluster per instance type</b>.
 *
 * </p
 *
 * When a Redis (cluster mode disabled) replication group has been successfully created, you can add one or more read
 * replicas to it, up to a total of 5 read replicas. If you need to increase or decrease the number of node groups
 * (console: shards), you can avail yourself of ElastiCache for Redis' scaling. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Scaling.html">Scaling ElastiCache for Redis
 * Clusters</a> in the <i>ElastiCache User
 *
 * Guide</i>> <note>
 *
 * This operation is valid for Redis
 */
CreateReplicationGroupResponse * ElastiCacheClient::createReplicationGroup(const CreateReplicationGroupRequest &request)
{
    return qobject_cast<CreateReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a copy of an entire cluster or replication group at a specific moment in
 *
 * time> <note>
 *
 * This operation is valid for Redis
 */
CreateSnapshotResponse * ElastiCacheClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For Redis engine version 6.x onwards: Creates a Redis user. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using Role Based Access Control
 */
CreateUserResponse * ElastiCacheClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * CreateUserGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For Redis engine version 6.x onwards: Creates a Redis user group. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using Role Based Access Control
 * (RBAC)</a>
 */
CreateUserGroupResponse * ElastiCacheClient::createUserGroup(const CreateUserGroupRequest &request)
{
    return qobject_cast<CreateUserGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DecreaseNodeGroupsInGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Decreases the number of node groups in a Global
 */
DecreaseNodeGroupsInGlobalReplicationGroupResponse * ElastiCacheClient::decreaseNodeGroupsInGlobalReplicationGroup(const DecreaseNodeGroupsInGlobalReplicationGroupRequest &request)
{
    return qobject_cast<DecreaseNodeGroupsInGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DecreaseReplicaCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Dynamically decreases the number of replicas in a Redis (cluster mode disabled) replication group or the number of
 * replica nodes in one or more node groups (shards) of a Redis (cluster mode enabled) replication group. This operation is
 * performed with no cluster down
 */
DecreaseReplicaCountResponse * ElastiCacheClient::decreaseReplicaCount(const DecreaseReplicaCountRequest &request)
{
    return qobject_cast<DecreaseReplicaCountResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteCacheClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously provisioned cluster. <code>DeleteCacheCluster</code> deletes all associated cache nodes, node
 * endpoints and the cluster itself. When you receive a successful response from this operation, Amazon ElastiCache
 * immediately begins deleting the cluster; you cannot cancel or revert this
 *
 * operation>
 *
 * This operation is not valid
 *
 * for> <ul> <li>
 *
 * Redis (cluster mode enabled)
 *
 * cluster> </li> <li>
 *
 * Redis (cluster mode disabled)
 *
 * cluster> </li> <li>
 *
 * A cluster that is the last read replica of a replication
 *
 * grou> </li> <li>
 *
 * A cluster that is the primary node of a replication
 *
 * grou> </li> <li>
 *
 * A node group (shard) that has Multi-AZ mode
 *
 * enable> </li> <li>
 *
 * A cluster from a Redis (cluster mode enabled) replication
 *
 * grou> </li> <li>
 *
 * A cluster that is not in the <code>available</code>
 */
DeleteCacheClusterResponse * ElastiCacheClient::deleteCacheCluster(const DeleteCacheClusterRequest &request)
{
    return qobject_cast<DeleteCacheClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteCacheParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified cache parameter group. You cannot delete a cache parameter group if it is associated with any
 * cache clusters. You cannot delete the default cache parameter groups in your
 */
DeleteCacheParameterGroupResponse * ElastiCacheClient::deleteCacheParameterGroup(const DeleteCacheParameterGroupRequest &request)
{
    return qobject_cast<DeleteCacheParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteCacheSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cache security
 *
 * group> <note>
 *
 * You cannot delete a cache security group if it is associated with any
 */
DeleteCacheSecurityGroupResponse * ElastiCacheClient::deleteCacheSecurityGroup(const DeleteCacheSecurityGroupRequest &request)
{
    return qobject_cast<DeleteCacheSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteCacheSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cache subnet
 *
 * group> <note>
 *
 * You cannot delete a default cache subnet group or one that is associated with any
 */
DeleteCacheSubnetGroupResponse * ElastiCacheClient::deleteCacheSubnetGroup(const DeleteCacheSubnetGroupRequest &request)
{
    return qobject_cast<DeleteCacheSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deleting a Global datastore is a two-step process:
 *
 * </p <ul> <li>
 *
 * First, you must <a>DisassociateGlobalReplicationGroup</a> to remove the secondary clusters in the Global
 *
 * datastore> </li> <li>
 *
 * Once the Global datastore contains only the primary cluster, you can use the <code>DeleteGlobalReplicationGroup</code>
 * API to delete the Global datastore while retainining the primary cluster using
 *
 * <code>RetainPrimaryReplicationGroup=true</code>> </li> </ul>
 *
 * Since the Global Datastore has only a primary cluster, you can delete the Global Datastore while retaining the primary
 * by setting <code>RetainPrimaryReplicationGroup=true</code>. The primary cluster is never deleted when deleting a Global
 * Datastore. It can only be deleted when it no longer is associated with any Global
 *
 * Datastore>
 *
 * When you receive a successful response from this operation, Amazon ElastiCache immediately begins deleting the selected
 * resources; you cannot cancel or revert this
 */
DeleteGlobalReplicationGroupResponse * ElastiCacheClient::deleteGlobalReplicationGroup(const DeleteGlobalReplicationGroupRequest &request)
{
    return qobject_cast<DeleteGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DeleteReplicationGroupResponse * ElastiCacheClient::deleteReplicationGroup(const DeleteReplicationGroupRequest &request)
{
    return qobject_cast<DeleteReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing snapshot. When you receive a successful response from this operation, ElastiCache immediately begins
 * deleting the snapshot; you cannot cancel or revert this
 *
 * operation> <note>
 *
 * This operation is valid for Redis
 */
DeleteSnapshotResponse * ElastiCacheClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For Redis engine version 6.x onwards: Deletes a user. The user will be removed from all user groups and in turn removed
 * from all replication groups. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using Role Based Access Control
 * (RBAC)</a>.
 */
DeleteUserResponse * ElastiCacheClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DeleteUserGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For Redis engine version 6.x onwards: Deletes a user group. The user group must first be disassociated from the
 * replication group before it can be deleted. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.RBAC.html">Using Role Based Access Control
 * (RBAC)</a>.
 */
DeleteUserGroupResponse * ElastiCacheClient::deleteUserGroup(const DeleteUserGroupRequest &request)
{
    return qobject_cast<DeleteUserGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeCacheClustersResponse * ElastiCacheClient::describeCacheClusters(const DescribeCacheClustersRequest &request)
{
    return qobject_cast<DescribeCacheClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available cache engines and their
 */
DescribeCacheEngineVersionsResponse * ElastiCacheClient::describeCacheEngineVersions(const DescribeCacheEngineVersionsRequest &request)
{
    return qobject_cast<DescribeCacheEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of cache parameter group descriptions. If a cache parameter group name is specified, the list contains
 * only the descriptions for that
 */
DescribeCacheParameterGroupsResponse * ElastiCacheClient::describeCacheParameterGroups(const DescribeCacheParameterGroupsRequest &request)
{
    return qobject_cast<DescribeCacheParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular cache parameter
 */
DescribeCacheParametersResponse * ElastiCacheClient::describeCacheParameters(const DescribeCacheParametersRequest &request)
{
    return qobject_cast<DescribeCacheParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of cache security group descriptions. If a cache security group name is specified, the list contains only
 * the description of that group. This applicable only when you have ElastiCache in Classic setup
 */
DescribeCacheSecurityGroupsResponse * ElastiCacheClient::describeCacheSecurityGroups(const DescribeCacheSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeCacheSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeCacheSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of cache subnet group descriptions. If a subnet group name is specified, the list contains only the
 * description of that group. This is applicable only when you have ElastiCache in VPC setup. All ElastiCache clusters now
 * launch in VPC by default.
 */
DescribeCacheSubnetGroupsResponse * ElastiCacheClient::describeCacheSubnetGroups(const DescribeCacheSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeCacheSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeEngineDefaultParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the specified cache
 */
DescribeEngineDefaultParametersResponse * ElastiCacheClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to clusters, cache security groups, and cache parameter groups. You can obtain events specific to
 * a particular cluster, cache security group, or cache parameter group by providing the name as a
 *
 * parameter>
 *
 * By default, only the events occurring within the last hour are returned; however, you can retrieve up to 14 days' worth
 * of events if
 */
DescribeEventsResponse * ElastiCacheClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeGlobalReplicationGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a particular global replication group. If no identifier is specified, returns information
 * about all Global datastores.
 */
DescribeGlobalReplicationGroupsResponse * ElastiCacheClient::describeGlobalReplicationGroups(const DescribeGlobalReplicationGroupsRequest &request)
{
    return qobject_cast<DescribeGlobalReplicationGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeReplicationGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a particular replication group. If no identifier is specified,
 * <code>DescribeReplicationGroups</code> returns information about all replication
 *
 * groups> <note>
 *
 * This operation is valid for Redis
 */
DescribeReplicationGroupsResponse * ElastiCacheClient::describeReplicationGroups(const DescribeReplicationGroupsRequest &request)
{
    return qobject_cast<DescribeReplicationGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeReservedCacheNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about reserved cache nodes for this account, or about a specified reserved cache
 */
DescribeReservedCacheNodesResponse * ElastiCacheClient::describeReservedCacheNodes(const DescribeReservedCacheNodesRequest &request)
{
    return qobject_cast<DescribeReservedCacheNodesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeReservedCacheNodesOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists available reserved cache node
 */
DescribeReservedCacheNodesOfferingsResponse * ElastiCacheClient::describeReservedCacheNodesOfferings(const DescribeReservedCacheNodesOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedCacheNodesOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeServiceUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details of the service
 */
DescribeServiceUpdatesResponse * ElastiCacheClient::describeServiceUpdates(const DescribeServiceUpdatesRequest &request)
{
    return qobject_cast<DescribeServiceUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about cluster or replication group snapshots. By default, <code>DescribeSnapshots</code> lists all
 * of your snapshots; it can optionally describe a single snapshot, or just the snapshots associated with a particular
 * cache
 *
 * cluster> <note>
 *
 * This operation is valid for Redis
 */
DescribeSnapshotsResponse * ElastiCacheClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{
    return qobject_cast<DescribeSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeUpdateActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details of the update actions
 */
DescribeUpdateActionsResponse * ElastiCacheClient::describeUpdateActions(const DescribeUpdateActionsRequest &request)
{
    return qobject_cast<DescribeUpdateActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeUserGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of user
 */
DescribeUserGroupsResponse * ElastiCacheClient::describeUserGroups(const DescribeUserGroupsRequest &request)
{
    return qobject_cast<DescribeUserGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DescribeUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
DescribeUsersResponse * ElastiCacheClient::describeUsers(const DescribeUsersRequest &request)
{
    return qobject_cast<DescribeUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * DisassociateGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove a secondary cluster from the Global datastore using the Global datastore name. The secondary cluster will no
 * longer receive updates from the primary cluster, but will remain as a standalone cluster in that AWS
 */
DisassociateGlobalReplicationGroupResponse * ElastiCacheClient::disassociateGlobalReplicationGroup(const DisassociateGlobalReplicationGroupRequest &request)
{
    return qobject_cast<DisassociateGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * FailoverGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to failover the primary region to a selected secondary region. The selected secondary region will become primary,
 * and all other clusters will become
 */
FailoverGlobalReplicationGroupResponse * ElastiCacheClient::failoverGlobalReplicationGroup(const FailoverGlobalReplicationGroupRequest &request)
{
    return qobject_cast<FailoverGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * IncreaseNodeGroupsInGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Increase the number of node groups in the Global
 */
IncreaseNodeGroupsInGlobalReplicationGroupResponse * ElastiCacheClient::increaseNodeGroupsInGlobalReplicationGroup(const IncreaseNodeGroupsInGlobalReplicationGroupRequest &request)
{
    return qobject_cast<IncreaseNodeGroupsInGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * IncreaseReplicaCountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Dynamically increases the number of replicas in a Redis (cluster mode disabled) replication group or the number of
 * replica nodes in one or more node groups (shards) of a Redis (cluster mode enabled) replication group. This operation is
 * performed with no cluster down
 */
IncreaseReplicaCountResponse * ElastiCacheClient::increaseReplicaCount(const IncreaseReplicaCountRequest &request)
{
    return qobject_cast<IncreaseReplicaCountResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ListAllowedNodeTypeModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available node types that you can scale your Redis cluster's or replication group's current node
 *
 * type>
 *
 * When you use the <code>ModifyCacheCluster</code> or <code>ModifyReplicationGroup</code> operations to scale your cluster
 * or replication group, the value of the <code>CacheNodeType</code> parameter must be one of the node types returned by
 * this
 */
ListAllowedNodeTypeModificationsResponse * ElastiCacheClient::listAllowedNodeTypeModifications(const ListAllowedNodeTypeModificationsRequest &request)
{
    return qobject_cast<ListAllowedNodeTypeModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags currently on a named
 *
 * resource>
 *
 * A tag is a key-value pair where the key and value are case-sensitive. You can use tags to categorize and track all your
 * ElastiCache resources, with the exception of global replication group. When you add or remove tags on replication
 * groups, those actions will be replicated to all nodes in the replication group. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
 *
 * permissions</a>>
 *
 * If the cluster is not in the <i>available</i> state, <code>ListTagsForResource</code> returns an
 */
ListTagsForResourceResponse * ElastiCacheClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyCacheClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a cluster. You can use this operation to change one or more cluster configuration parameters
 * by specifying the parameters and the new
 */
ModifyCacheClusterResponse * ElastiCacheClient::modifyCacheCluster(const ModifyCacheClusterRequest &request)
{
    return qobject_cast<ModifyCacheClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyCacheParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a cache parameter group. You can modify up to 20 parameters in a single request by submitting
 * a list parameter name and value
 */
ModifyCacheParameterGroupResponse * ElastiCacheClient::modifyCacheParameterGroup(const ModifyCacheParameterGroupRequest &request)
{
    return qobject_cast<ModifyCacheParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyCacheSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing cache subnet
 */
ModifyCacheSubnetGroupResponse * ElastiCacheClient::modifyCacheSubnetGroup(const ModifyCacheSubnetGroupRequest &request)
{
    return qobject_cast<ModifyCacheSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a Global
 */
ModifyGlobalReplicationGroupResponse * ElastiCacheClient::modifyGlobalReplicationGroup(const ModifyGlobalReplicationGroupRequest &request)
{
    return qobject_cast<ModifyGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a replication
 *
 * group> <ul> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/scaling-redis-cluster-mode-enabled.html">Scaling
 * for Amazon ElastiCache for Redis (cluster mode enabled)</a> in the ElastiCache User
 *
 * Guid> </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_ModifyReplicationGroupShardConfiguration.html">ModifyReplicationGroupShardConfiguration</a>
 * in the ElastiCache API
 *
 * Referenc> </li> </ul> <note>
 *
 * This operation is valid for Redis
 */
ModifyReplicationGroupResponse * ElastiCacheClient::modifyReplicationGroup(const ModifyReplicationGroupRequest &request)
{
    return qobject_cast<ModifyReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyReplicationGroupShardConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a replication group's shards (node groups) by allowing you to add shards, remove shards, or rebalance the
 * keyspaces among existing
 */
ModifyReplicationGroupShardConfigurationResponse * ElastiCacheClient::modifyReplicationGroupShardConfiguration(const ModifyReplicationGroupShardConfigurationRequest &request)
{
    return qobject_cast<ModifyReplicationGroupShardConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes user password(s) and/or access
 */
ModifyUserResponse * ElastiCacheClient::modifyUser(const ModifyUserRequest &request)
{
    return qobject_cast<ModifyUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ModifyUserGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the list of users that belong to the user
 */
ModifyUserGroupResponse * ElastiCacheClient::modifyUserGroup(const ModifyUserGroupRequest &request)
{
    return qobject_cast<ModifyUserGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * PurchaseReservedCacheNodesOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to purchase a reserved cache node offering. Reserved nodes are not eligible for cancellation and are
 * non-refundable. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/reserved-nodes.html">Managing Costs with Reserved
 * Nodes</a> for Redis or <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/reserved-nodes.html">Managing Costs with Reserved
 * Nodes</a> for
 */
PurchaseReservedCacheNodesOfferingResponse * ElastiCacheClient::purchaseReservedCacheNodesOffering(const PurchaseReservedCacheNodesOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedCacheNodesOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * RebalanceSlotsInGlobalReplicationGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Redistribute slots to ensure uniform distribution across existing shards in the
 */
RebalanceSlotsInGlobalReplicationGroupResponse * ElastiCacheClient::rebalanceSlotsInGlobalReplicationGroup(const RebalanceSlotsInGlobalReplicationGroupRequest &request)
{
    return qobject_cast<RebalanceSlotsInGlobalReplicationGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * RebootCacheClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * applied, see <a href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/Clusters.Rebooting.html">Rebooting a
 * Cluster</a> for an alternate
 */
RebootCacheClusterResponse * ElastiCacheClient::rebootCacheCluster(const RebootCacheClusterRequest &request)
{
    return qobject_cast<RebootCacheClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the tags identified by the <code>TagKeys</code> list from the named resource. A tag is a key-value pair where
 * the key and value are case-sensitive. You can use tags to categorize and track all your ElastiCache resources, with the
 * exception of global replication group. When you add or remove tags on replication groups, those actions will be
 * replicated to all nodes in the replication group. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/IAM.ResourceLevelPermissions.html">Resource-level
 */
RemoveTagsFromResourceResponse * ElastiCacheClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * ResetCacheParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a cache parameter group to the engine or system default value. You can reset specific
 * parameters by submitting a list of parameter names. To reset the entire cache parameter group, specify the
 * <code>ResetAllParameters</code> and <code>CacheParameterGroupName</code>
 */
ResetCacheParameterGroupResponse * ElastiCacheClient::resetCacheParameterGroup(const ResetCacheParameterGroupRequest &request)
{
    return qobject_cast<ResetCacheParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * RevokeCacheSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes ingress from a cache security group. Use this operation to disallow access from an Amazon EC2 security group
 * that had been previously
 */
RevokeCacheSecurityGroupIngressResponse * ElastiCacheClient::revokeCacheSecurityGroupIngress(const RevokeCacheSecurityGroupIngressRequest &request)
{
    return qobject_cast<RevokeCacheSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * StartMigrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Start the migration of
 */
StartMigrationResponse * ElastiCacheClient::startMigration(const StartMigrationRequest &request)
{
    return qobject_cast<StartMigrationResponse *>(send(request));
}

/*!
 * Sends \a request to the ElastiCacheClient service, and returns a pointer to an
 * TestFailoverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * Cache cluster message: <code>Failover from primary node &lt;primary-node-id&gt; to replica node &lt;node-id&gt;
 * completed</code>
 *
 * </p </li> <li>
 *
 * Replication group message: <code>Failover from primary node &lt;primary-node-id&gt; to replica node &lt;node-id&gt;
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
 * <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/ECEvents.Viewing.html">Viewing ElastiCache
 * Events</a> in the <i>ElastiCache User Guide</i>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/AmazonElastiCache/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>
 * in the ElastiCache API
 *
 * Referenc> </li> </ul> </li> </ul>
 *
 * Also see, <a
 * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html#auto-failover-test">Testing Multi-AZ
 * </a> in the <i>ElastiCache User
 */
TestFailoverResponse * ElastiCacheClient::testFailover(const TestFailoverRequest &request)
{
    return qobject_cast<TestFailoverResponse *>(send(request));
}

/*!
 * \class QtAws::ElastiCache::ElastiCacheClientPrivate
 * \brief The ElastiCacheClientPrivate class provides private implementation for ElastiCacheClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ElastiCacheClientPrivate object with public implementation \a q.
 */
ElastiCacheClientPrivate::ElastiCacheClientPrivate(ElastiCacheClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElastiCache
} // namespace QtAws
