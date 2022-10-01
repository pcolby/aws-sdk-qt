// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "memorydbclient.h"
#include "memorydbclient_p.h"

#include "core/awssignaturev4.h"
#include "batchupdateclusterrequest.h"
#include "batchupdateclusterresponse.h"
#include "copysnapshotrequest.h"
#include "copysnapshotresponse.h"
#include "createaclrequest.h"
#include "createaclresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createparametergrouprequest.h"
#include "createparametergroupresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createsubnetgrouprequest.h"
#include "createsubnetgroupresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteaclrequest.h"
#include "deleteaclresponse.h"
#include "deleteclusterrequest.h"
#include "deleteclusterresponse.h"
#include "deleteparametergrouprequest.h"
#include "deleteparametergroupresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deletesubnetgrouprequest.h"
#include "deletesubnetgroupresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeaclsrequest.h"
#include "describeaclsresponse.h"
#include "describeclustersrequest.h"
#include "describeclustersresponse.h"
#include "describeengineversionsrequest.h"
#include "describeengineversionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeparametergroupsrequest.h"
#include "describeparametergroupsresponse.h"
#include "describeparametersrequest.h"
#include "describeparametersresponse.h"
#include "describeserviceupdatesrequest.h"
#include "describeserviceupdatesresponse.h"
#include "describesnapshotsrequest.h"
#include "describesnapshotsresponse.h"
#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsresponse.h"
#include "describeusersrequest.h"
#include "describeusersresponse.h"
#include "failovershardrequest.h"
#include "failovershardresponse.h"
#include "listallowednodetypeupdatesrequest.h"
#include "listallowednodetypeupdatesresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "resetparametergrouprequest.h"
#include "resetparametergroupresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaclrequest.h"
#include "updateaclresponse.h"
#include "updateclusterrequest.h"
#include "updateclusterresponse.h"
#include "updateparametergrouprequest.h"
#include "updateparametergroupresponse.h"
#include "updatesubnetgrouprequest.h"
#include "updatesubnetgroupresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MemoryDb
 * \brief Contains classess for accessing Amazon MemoryDB.
 *
 * \inmodule QtAwsMemoryDb
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::MemoryDbClient
 * \brief The MemoryDbClient class provides access to the Amazon MemoryDB service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 */

/*!
 * \brief Constructs a MemoryDbClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MemoryDbClient::MemoryDbClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MemoryDbClientPrivate(this), parent)
{
    Q_D(MemoryDbClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("memory-db");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon MemoryDB");
    d->serviceName = QStringLiteral("memorydb");
}

/*!
 * \overload MemoryDbClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MemoryDbClient::MemoryDbClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MemoryDbClientPrivate(this), parent)
{
    Q_D(MemoryDbClient);
    d->apiVersion = QStringLiteral("2021-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("memory-db");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon MemoryDB");
    d->serviceName = QStringLiteral("memorydb");
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * BatchUpdateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Apply the service update to a list of clusters supplied. For more information on service updates and applying them, see
 * <a href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/managing-updates.html#applying-updates">Applying the
 * service
 */
BatchUpdateClusterResponse * MemoryDbClient::batchUpdateCluster(const BatchUpdateClusterRequest &request)
{
    return qobject_cast<BatchUpdateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CopySnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Makes a copy of an existing
 */
CopySnapshotResponse * MemoryDbClient::copySnapshot(const CopySnapshotRequest &request)
{
    return qobject_cast<CopySnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Access Control List. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating users with Access Contol
 * Lists
 */
CreateACLResponse * MemoryDbClient::createACL(const CreateACLRequest &request)
{
    return qobject_cast<CreateACLResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cluster. All nodes in the cluster run the same protocol-compliant engine
 */
CreateClusterResponse * MemoryDbClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new MemoryDB parameter group. A parameter group is a collection of parameters and their values that are
 * applied to all of the nodes in any cluster. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/parametergroups.html">Configuring engine parameters using
 * parameter groups</a>.
 */
CreateParameterGroupResponse * MemoryDbClient::createParameterGroup(const CreateParameterGroupRequest &request)
{
    return qobject_cast<CreateParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a copy of an entire cluster at a specific moment in
 */
CreateSnapshotResponse * MemoryDbClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a subnet group. A subnet group is a collection of subnets (typically private) that you can designate for your
 * clusters running in an Amazon Virtual Private Cloud (VPC) environment. When you create a cluster in an Amazon VPC, you
 * must specify a subnet group. MemoryDB uses that subnet group to choose a subnet and IP addresses within that subnet to
 * associate with your nodes. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/subnetgroups.html">Subnets and subnet
 */
CreateSubnetGroupResponse * MemoryDbClient::createSubnetGroup(const CreateSubnetGroupRequest &request)
{
    return qobject_cast<CreateSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a MemoryDB user. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating users with Access Contol
 * Lists
 */
CreateUserResponse * MemoryDbClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Access Control List. The ACL must first be disassociated from the cluster before it can be deleted. For more
 * information, see <a href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/clusters.acls.html">Authenticating users
 * with Access Contol Lists
 */
DeleteACLResponse * MemoryDbClient::deleteACL(const DeleteACLRequest &request)
{
    return qobject_cast<DeleteACLResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cluster. It also deletes all associated nodes and node
 */
DeleteClusterResponse * MemoryDbClient::deleteCluster(const DeleteClusterRequest &request)
{
    return qobject_cast<DeleteClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified parameter group. You cannot delete a parameter group if it is associated with any clusters. You
 * cannot delete the default parameter groups in your
 */
DeleteParameterGroupResponse * MemoryDbClient::deleteParameterGroup(const DeleteParameterGroupRequest &request)
{
    return qobject_cast<DeleteParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing snapshot. When you receive a successful response from this operation, MemoryDB immediately begins
 * deleting the snapshot; you cannot cancel or revert this
 */
DeleteSnapshotResponse * MemoryDbClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a subnet group. You cannot delete a default subnet group or one that is associated with any
 */
DeleteSubnetGroupResponse * MemoryDbClient::deleteSubnetGroup(const DeleteSubnetGroupRequest &request)
{
    return qobject_cast<DeleteSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user. The user will be removed from all ACLs and in turn removed from all
 */
DeleteUserResponse * MemoryDbClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeACLsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
DescribeACLsResponse * MemoryDbClient::describeACLs(const DescribeACLsRequest &request)
{
    return qobject_cast<DescribeACLsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all provisioned clusters if no cluster identifier is specified, or about a specific cluster if
 * a cluster name is
 */
DescribeClustersResponse * MemoryDbClient::describeClusters(const DescribeClustersRequest &request)
{
    return qobject_cast<DescribeClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available Redis engine
 */
DescribeEngineVersionsResponse * MemoryDbClient::describeEngineVersions(const DescribeEngineVersionsRequest &request)
{
    return qobject_cast<DescribeEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to clusters, security groups, and parameter groups. You can obtain events specific to a
 * particular cluster, security group, or parameter group by providing the name as a parameter. By default, only the events
 * occurring within the last hour are returned; however, you can retrieve up to 14 days' worth of events if
 */
DescribeEventsResponse * MemoryDbClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of parameter group descriptions. If a parameter group name is specified, the list contains only the
 * descriptions for that
 */
DescribeParameterGroupsResponse * MemoryDbClient::describeParameterGroups(const DescribeParameterGroupsRequest &request)
{
    return qobject_cast<DescribeParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular parameter
 */
DescribeParametersResponse * MemoryDbClient::describeParameters(const DescribeParametersRequest &request)
{
    return qobject_cast<DescribeParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeServiceUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details of the service
 */
DescribeServiceUpdatesResponse * MemoryDbClient::describeServiceUpdates(const DescribeServiceUpdatesRequest &request)
{
    return qobject_cast<DescribeServiceUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about cluster snapshots. By default, DescribeSnapshots lists all of your snapshots; it can
 * optionally describe a single snapshot, or just the snapshots associated with a particular
 */
DescribeSnapshotsResponse * MemoryDbClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{
    return qobject_cast<DescribeSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of subnet group descriptions. If a subnet group name is specified, the list contains only the description
 * of that
 */
DescribeSubnetGroupsResponse * MemoryDbClient::describeSubnetGroups(const DescribeSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * DescribeUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
DescribeUsersResponse * MemoryDbClient::describeUsers(const DescribeUsersRequest &request)
{
    return qobject_cast<DescribeUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * FailoverShardResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to failover a
 */
FailoverShardResponse * MemoryDbClient::failoverShard(const FailoverShardRequest &request)
{
    return qobject_cast<FailoverShardResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * ListAllowedNodeTypeUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available node types that you can scale to from your cluster's current node type. When you use the
 * UpdateCluster operation to scale your cluster, the value of the NodeType parameter must be one of the node types
 * returned by this
 */
ListAllowedNodeTypeUpdatesResponse * MemoryDbClient::listAllowedNodeTypeUpdates(const ListAllowedNodeTypeUpdatesRequest &request)
{
    return qobject_cast<ListAllowedNodeTypeUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags currently on a named resource. A tag is a key-value pair where the key and value are case-sensitive. You
 * can use tags to categorize and track your MemoryDB resources. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/Tagging-Resources.html">Tagging your MemoryDB resources</a>
 */
ListTagsResponse * MemoryDbClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * ResetParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a parameter group to the engine or system default value. You can reset specific parameters by
 * submitting a list of parameter names. To reset the entire parameter group, specify the AllParameters and
 * ParameterGroupName
 */
ResetParameterGroupResponse * MemoryDbClient::resetParameterGroup(const ResetParameterGroupRequest &request)
{
    return qobject_cast<ResetParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A tag is a key-value pair where the key and value are case-sensitive. You can use tags to categorize and track all your
 * MemoryDB resources. When you add or remove tags on clusters, those actions will be replicated to all nodes in the
 * cluster. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/iam.resourcelevelpermissions.html">Resource-level
 *
 * permissions</a>>
 *
 * For example, you can use cost-allocation tags to your MemoryDB resources, Amazon generates a cost allocation report as a
 * comma-separated value (CSV) file with your usage and costs aggregated by your tags. You can apply tags that represent
 * business categories (such as cost centers, application names, or owners) to organize your costs across multiple
 * services. For more information, see <a href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/tagging.html">Using
 * Cost Allocation
 */
TagResourceResponse * MemoryDbClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to remove tags on a
 */
UntagResourceResponse * MemoryDbClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UpdateACLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the list of users that belong to the Access Control
 */
UpdateACLResponse * MemoryDbClient::updateACL(const UpdateACLRequest &request)
{
    return qobject_cast<UpdateACLResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UpdateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for a cluster. You can use this operation to change one or more cluster configuration settings by
 * specifying the settings and the new
 */
UpdateClusterResponse * MemoryDbClient::updateCluster(const UpdateClusterRequest &request)
{
    return qobject_cast<UpdateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UpdateParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the parameters of a parameter group. You can modify up to 20 parameters in a single request by submitting a list
 * parameter name and value
 */
UpdateParameterGroupResponse * MemoryDbClient::updateParameterGroup(const UpdateParameterGroupRequest &request)
{
    return qobject_cast<UpdateParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UpdateSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a subnet group. For more information, see <a
 * href="https://docs.aws.amazon.com/MemoryDB/latest/devguide/ubnetGroups.Modifying.html">Updating a subnet group</a>
 */
UpdateSubnetGroupResponse * MemoryDbClient::updateSubnetGroup(const UpdateSubnetGroupRequest &request)
{
    return qobject_cast<UpdateSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MemoryDbClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes user password(s) and/or access
 */
UpdateUserResponse * MemoryDbClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::MemoryDb::MemoryDbClientPrivate
 * \brief The MemoryDbClientPrivate class provides private implementation for MemoryDbClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a MemoryDbClientPrivate object with public implementation \a q.
 */
MemoryDbClientPrivate::MemoryDbClientPrivate(MemoryDbClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MemoryDb
} // namespace QtAws
