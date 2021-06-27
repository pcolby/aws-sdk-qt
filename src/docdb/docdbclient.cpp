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

#include "docdbclient.h"
#include "docdbclient_p.h"

#include "core/awssignaturev4.h"
#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionresponse.h"
#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergroupresponse.h"
#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotresponse.h"
#include "createdbclusterrequest.h"
#include "createdbclusterresponse.h"
#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergroupresponse.h"
#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotresponse.h"
#include "createdbinstancerequest.h"
#include "createdbinstanceresponse.h"
#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgroupresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createglobalclusterrequest.h"
#include "createglobalclusterresponse.h"
#include "deletedbclusterrequest.h"
#include "deletedbclusterresponse.h"
#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotresponse.h"
#include "deletedbinstancerequest.h"
#include "deletedbinstanceresponse.h"
#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgroupresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deleteglobalclusterrequest.h"
#include "deleteglobalclusterresponse.h"
#include "describecertificatesrequest.h"
#include "describecertificatesresponse.h"
#include "describedbclusterparametergroupsrequest.h"
#include "describedbclusterparametergroupsresponse.h"
#include "describedbclusterparametersrequest.h"
#include "describedbclusterparametersresponse.h"
#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotsrequest.h"
#include "describedbclustersnapshotsresponse.h"
#include "describedbclustersrequest.h"
#include "describedbclustersresponse.h"
#include "describedbengineversionsrequest.h"
#include "describedbengineversionsresponse.h"
#include "describedbinstancesrequest.h"
#include "describedbinstancesresponse.h"
#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsresponse.h"
#include "describeenginedefaultclusterparametersrequest.h"
#include "describeenginedefaultclusterparametersresponse.h"
#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesresponse.h"
#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeglobalclustersrequest.h"
#include "describeglobalclustersresponse.h"
#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsresponse.h"
#include "failoverdbclusterrequest.h"
#include "failoverdbclusterresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifydbclusterrequest.h"
#include "modifydbclusterresponse.h"
#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclustersnapshotattributerequest.h"
#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbinstancerequest.h"
#include "modifydbinstanceresponse.h"
#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgroupresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "modifyglobalclusterrequest.h"
#include "modifyglobalclusterresponse.h"
#include "rebootdbinstancerequest.h"
#include "rebootdbinstanceresponse.h"
#include "removefromglobalclusterrequest.h"
#include "removefromglobalclusterresponse.h"
#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergroupresponse.h"
#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimeresponse.h"
#include "startdbclusterrequest.h"
#include "startdbclusterresponse.h"
#include "stopdbclusterrequest.h"
#include "stopdbclusterresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DocDB
 * \brief Contains classess for accessing Amazon DocumentDB with MongoDB compatibility ( DocDB).
 *
 * \inmodule QtAwsDocDB
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DocDBClient
 * \brief The DocDBClient class provides access to the Amazon DocumentDB with MongoDB compatibility ( DocDB) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 */

/*!
 * \brief Constructs a DocDBClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DocDBClient::DocDBClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2014-10-31"),
    QStringLiteral("rds"),
    QStringLiteral("Amazon DocumentDB with MongoDB compatibility"),
    QStringLiteral("rds"),
    parent), d_ptr(new DocDBClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload DocDBClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DocDBClient::DocDBClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2014-10-31"),
    QStringLiteral("rds"),
    QStringLiteral("Amazon DocumentDB with MongoDB compatibility"),
    QStringLiteral("rds"),
    parent), d_ptr(new DocDBClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * AddSourceIdentifierToSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a source identifier to an existing event notification
 */
AddSourceIdentifierToSubscriptionResponse * DocDBClient::addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request)
{
    return qobject_cast<AddSourceIdentifierToSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an Amazon DocumentDB resource. You can use these tags with cost allocation reporting to track
 * costs that are associated with Amazon DocumentDB resources. or in a <code>Condition</code> statement in an AWS Identity
 * and Access Management (IAM) policy for Amazon
 */
AddTagsToResourceResponse * DocDBClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ApplyPendingMaintenanceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a pending maintenance action to a resource (for example, to an Amazon DocumentDB
 */
ApplyPendingMaintenanceActionResponse * DocDBClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{
    return qobject_cast<ApplyPendingMaintenanceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CopyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified cluster parameter
 */
CopyDBClusterParameterGroupResponse * DocDBClient::copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CopyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CopyDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies a snapshot of a
 *
 * cluster>
 *
 * To copy a cluster snapshot from a shared manual cluster snapshot, <code>SourceDBClusterSnapshotIdentifier</code> must be
 * the Amazon Resource Name (ARN) of the shared cluster snapshot. You can only copy a shared DB cluster snapshot, whether
 * encrypted or not, in the same AWS
 *
 * Region>
 *
 * To cancel the copy operation after it is in progress, delete the target cluster snapshot identified by
 * <code>TargetDBClusterSnapshotIdentifier</code> while that cluster snapshot is in the <i>copying</i>
 */
CopyDBClusterSnapshotResponse * DocDBClient::copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request)
{
    return qobject_cast<CopyDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon DocumentDB
 */
CreateDBClusterResponse * DocDBClient::createDBCluster(const CreateDBClusterRequest &request)
{
    return qobject_cast<CreateDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cluster parameter
 *
 * group>
 *
 * Parameters in a cluster parameter group apply to all of the instances in a
 *
 * cluster>
 *
 * A cluster parameter group is initially created with the default parameters for the database engine used by instances in
 * the cluster. In Amazon DocumentDB, you cannot make modifications directly to the <code>default.docdb3.6</code> cluster
 * parameter group. If your Amazon DocumentDB cluster is using the default cluster parameter group and you want to modify a
 * value in it, you must first <a
 * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-create.html"> create a new
 * parameter group</a> or <a
 * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-copy.html"> copy an existing
 * parameter group</a>, modify it, and then apply the modified parameter group to your cluster. For the new cluster
 * parameter group and associated settings to take effect, you must then reboot the instances in the cluster without
 * failover. For more information, see <a
 * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/cluster_parameter_group-modify.html"> Modifying
 * Amazon DocumentDB Cluster Parameter Groups</a>.
 */
CreateDBClusterParameterGroupResponse * DocDBClient::createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CreateDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a cluster.
 */
CreateDBClusterSnapshotResponse * DocDBClient::createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request)
{
    return qobject_cast<CreateDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateDBInstanceResponse * DocDBClient::createDBInstance(const CreateDBInstanceRequest &request)
{
    return qobject_cast<CreateDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new subnet group. subnet groups must contain at least one subnet in at least two Availability Zones in the AWS
 */
CreateDBSubnetGroupResponse * DocDBClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{
    return qobject_cast<CreateDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon DocumentDB event notification subscription. This action requires a topic Amazon Resource Name (ARN)
 * created by using the Amazon DocumentDB console, the Amazon SNS console, or the Amazon SNS API. To obtain an ARN with
 * Amazon SNS, you must create a topic in Amazon SNS and subscribe to the topic. The ARN is displayed in the Amazon SNS
 *
 * console>
 *
 * You can specify the type of source (<code>SourceType</code>) that you want to be notified of. You can also provide a
 * list of Amazon DocumentDB sources (<code>SourceIds</code>) that trigger the events, and you can provide a list of event
 * categories (<code>EventCategories</code>) for events that you want to be notified of. For example, you can specify
 * <code>SourceType = db-instance</code>, <code>SourceIds = mydbinstance1, mydbinstance2</code> and <code>EventCategories =
 * Availability,
 *
 * Backup</code>>
 *
 * If you specify both the <code>SourceType</code> and <code>SourceIds</code> (such as <code>SourceType =
 * db-instance</code> and <code>SourceIdentifier = myDBInstance1</code>), you are notified of all the
 * <code>db-instance</code> events for the specified source. If you specify a <code>SourceType</code> but do not specify a
 * <code>SourceIdentifier</code>, you receive notice of the events for that source type for all your Amazon DocumentDB
 * sources. If you do not specify either the <code>SourceType</code> or the <code>SourceIdentifier</code>, you are notified
 * of events generated from all Amazon DocumentDB sources belonging to your customer
 */
CreateEventSubscriptionResponse * DocDBClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * CreateGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon DocumentDB global cluster that can span multiple multiple AWS Regions. The global cluster contains one
 * primary cluster with read-write capability, and up-to give read-only secondary clusters. Global clusters uses
 * storage-based fast replication across regions with latencies less than one second, using dedicated infrastructure with
 * no impact to your workload’s
 *
 * performance> <p/>
 *
 * You can create a global cluster that is initially empty, and then add a primary and a secondary to it. Or you can
 * specify an existing cluster during the create operation, and this cluster becomes the primary of the global cluster.
 *
 * </p <note>
 *
 * This action only applies to Amazon DocumentDB
 */
CreateGlobalClusterResponse * DocDBClient::createGlobalCluster(const CreateGlobalClusterRequest &request)
{
    return qobject_cast<CreateGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously provisioned cluster. When you delete a cluster, all automated backups for that cluster are deleted
 * and can't be recovered. Manual DB cluster snapshots of the specified cluster are not
 */
DeleteDBClusterResponse * DocDBClient::deleteDBCluster(const DeleteDBClusterRequest &request)
{
    return qobject_cast<DeleteDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified cluster parameter group. The cluster parameter group to be deleted can't be associated with any
 */
DeleteDBClusterParameterGroupResponse * DocDBClient::deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cluster snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The cluster snapshot must be in the <code>available</code> state to be
 */
DeleteDBClusterSnapshotResponse * DocDBClient::deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request)
{
    return qobject_cast<DeleteDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously provisioned instance.
 */
DeleteDBInstanceResponse * DocDBClient::deleteDBInstance(const DeleteDBInstanceRequest &request)
{
    return qobject_cast<DeleteDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a subnet
 *
 * group> <note>
 *
 * The specified database subnet group must not be associated with any DB
 */
DeleteDBSubnetGroupResponse * DocDBClient::deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request)
{
    return qobject_cast<DeleteDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon DocumentDB event notification
 */
DeleteEventSubscriptionResponse * DocDBClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a global cluster. The primary and secondary clusters must already be detached or deleted before attempting to
 * delete a global
 *
 * cluster> <note>
 *
 * This action only applies to Amazon DocumentDB
 */
DeleteGlobalClusterResponse * DocDBClient::deleteGlobalCluster(const DeleteGlobalClusterRequest &request)
{
    return qobject_cast<DeleteGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of certificate authority (CA) certificates provided by Amazon DocumentDB for this AWS
 */
DescribeCertificatesResponse * DocDBClient::describeCertificates(const DescribeCertificatesRequest &request)
{
    return qobject_cast<DescribeCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list contains only the description of the specified cluster parameter group.
 */
DescribeDBClusterParameterGroupsResponse * DocDBClient::describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBClusterParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular cluster parameter
 */
DescribeDBClusterParametersResponse * DocDBClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request)
{
    return qobject_cast<DescribeDBClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of cluster snapshot attribute names and values for a manual DB cluster
 *
 * snapshot>
 *
 * When you share snapshots with other AWS accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the AWS accounts that are authorized to copy or restore the manual
 * cluster snapshot. If <code>all</code> is included in the list of values for the <code>restore</code> attribute, then the
 * manual cluster snapshot is public and can be copied or restored by all AWS
 */
DescribeDBClusterSnapshotAttributesResponse * DocDBClient::describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about cluster snapshots. This API operation supports
 */
DescribeDBClusterSnapshotsResponse * DocDBClient::describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned Amazon DocumentDB clusters. This API operation supports pagination. For certain
 * management features such as cluster and instance lifecycle management, Amazon DocumentDB leverages operational
 * technology that is shared with Amazon RDS and Amazon Neptune. Use the <code>filterName=engine,Values=docdb</code> filter
 * parameter to return only Amazon DocumentDB
 */
DescribeDBClustersResponse * DocDBClient::describeDBClusters(const DescribeDBClustersRequest &request)
{
    return qobject_cast<DescribeDBClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available
 */
DescribeDBEngineVersionsResponse * DocDBClient::describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request)
{
    return qobject_cast<DescribeDBEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned Amazon DocumentDB instances. This API supports
 */
DescribeDBInstancesResponse * DocDBClient::describeDBInstances(const DescribeDBInstancesRequest &request)
{
    return qobject_cast<DescribeDBInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeDBSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBSubnetGroup</code> descriptions. If a <code>DBSubnetGroupName</code> is specified, the list
 * will contain only the descriptions of the specified
 */
DescribeDBSubnetGroupsResponse * DocDBClient::describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeDBSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeEngineDefaultClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the cluster database
 */
DescribeEngineDefaultClusterParametersResponse * DocDBClient::describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of categories for all event source types, or, if specified, for a specified source type.
 */
DescribeEventCategoriesResponse * DocDBClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the subscription descriptions for a customer account. The description for a subscription includes
 * <code>SubscriptionName</code>, <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
 * <code>SourceID</code>, <code>CreationTime</code>, and
 *
 * <code>Status</code>>
 *
 * If you specify a <code>SubscriptionName</code>, lists the description for that
 */
DescribeEventSubscriptionsResponse * DocDBClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to instances, security groups, snapshots, and DB parameter groups for the past 14 days. You can
 * obtain events specific to a particular DB instance, security group, snapshot, or parameter group by providing the name
 * as a parameter. By default, the events of the past hour are
 */
DescribeEventsResponse * DocDBClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeGlobalClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Amazon DocumentDB global clusters. This API supports
 *
 * pagination> <note>
 *
 * This action only applies to Amazon DocumentDB
 */
DescribeGlobalClustersResponse * DocDBClient::describeGlobalClusters(const DescribeGlobalClustersRequest &request)
{
    return qobject_cast<DescribeGlobalClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeOrderableDBInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable instance options for the specified
 */
DescribeOrderableDBInstanceOptionsResponse * DocDBClient::describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request)
{
    return qobject_cast<DescribeOrderableDBInstanceOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribePendingMaintenanceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resources (for example, instances) that have at least one pending maintenance
 */
DescribePendingMaintenanceActionsResponse * DocDBClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{
    return qobject_cast<DescribePendingMaintenanceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * FailoverDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forces a failover for a
 *
 * cluster>
 *
 * A failover for a cluster promotes one of the Amazon DocumentDB replicas (read-only instances) in the cluster to be the
 * primary instance (the cluster
 *
 * writer)>
 *
 * If the primary instance fails, Amazon DocumentDB automatically fails over to an Amazon DocumentDB replica, if one
 * exists. You can force a failover when you want to simulate a failure of a primary instance for
 */
FailoverDBClusterResponse * DocDBClient::failoverDBCluster(const FailoverDBClusterRequest &request)
{
    return qobject_cast<FailoverDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on an Amazon DocumentDB
 */
ListTagsForResourceResponse * DocDBClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a setting for an Amazon DocumentDB cluster. You can change one or more database configuration parameters by
 * specifying these parameters and the new values in the request.
 */
ModifyDBClusterResponse * DocDBClient::modifyDBCluster(const ModifyDBClusterRequest &request)
{
    return qobject_cast<ModifyDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a cluster parameter group. To modify more than one parameter, submit a list of the following:
 * <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be
 * modified in a single request.
 *
 * </p <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot or maintenance
 * window before the change can take
 *
 * effect> </note> <b>
 *
 * After you create a cluster parameter group, you should wait at least 5 minutes before creating your first cluster that
 * uses that cluster parameter group as the default parameter group. This allows Amazon DocumentDB to fully complete the
 * create action before the parameter group is used as the default for a new cluster. This step is especially important for
 * parameters that are critical when creating the default database for a cluster, such as the character set for the default
 * database defined by the <code>character_set_database</code>
 */
ModifyDBClusterParameterGroupResponse * DocDBClient::modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyDBClusterSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB cluster
 *
 * snapshot>
 *
 * To share a manual cluster snapshot with other AWS accounts, specify <code>restore</code> as the
 * <code>AttributeName</code>, and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts that
 * are authorized to restore the manual cluster snapshot. Use the value <code>all</code> to make the manual cluster
 * snapshot public, which means that it can be copied or restored by all AWS accounts. Do not add the <code>all</code>
 * value for any manual DB cluster snapshots that contain private information that you don't want available to all AWS
 * accounts. If a manual cluster snapshot is encrypted, it can be shared, but only by specifying a list of authorized AWS
 * account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value for that parameter in
 * this
 */
ModifyDBClusterSnapshotAttributeResponse * DocDBClient::modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request)
{
    return qobject_cast<ModifyDBClusterSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies settings for an instance. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the
 */
ModifyDBInstanceResponse * DocDBClient::modifyDBInstance(const ModifyDBInstanceRequest &request)
{
    return qobject_cast<ModifyDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing subnet group. subnet groups must contain at least one subnet in at least two Availability Zones in
 * the AWS
 */
ModifyDBSubnetGroupResponse * DocDBClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{
    return qobject_cast<ModifyDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing Amazon DocumentDB event notification
 */
ModifyEventSubscriptionResponse * DocDBClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ModifyGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify a setting for an Amazon DocumentDB global cluster. You can change one or more configuration parameters (for
 * example: deletion protection), or the global cluster identifier by specifying these parameters and the new values in the
 *
 * request> <note>
 *
 * This action only applies to Amazon DocumentDB
 */
ModifyGlobalClusterResponse * DocDBClient::modifyGlobalCluster(const ModifyGlobalClusterRequest &request)
{
    return qobject_cast<ModifyGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RebootDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your instance, usually for maintenance reasons. For example, if you make certain changes, or if
 * you change the cluster parameter group that is associated with the instance, you must reboot the instance for the
 * changes to take effect.
 *
 * </p
 *
 * Rebooting an instance restarts the database engine service. Rebooting an instance results in a momentary outage, during
 * which the instance status is set to <i>rebooting</i>.
 */
RebootDBInstanceResponse * DocDBClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{
    return qobject_cast<RebootDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RemoveFromGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches an Amazon DocumentDB secondary cluster from a global cluster. The cluster becomes a standalone cluster with
 * read-write capability instead of being read-only and receiving data from a primary in a different region.
 *
 * </p <note>
 *
 * This action only applies to Amazon DocumentDB
 */
RemoveFromGlobalClusterResponse * DocDBClient::removeFromGlobalCluster(const RemoveFromGlobalClusterRequest &request)
{
    return qobject_cast<RemoveFromGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RemoveSourceIdentifierFromSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a source identifier from an existing Amazon DocumentDB event notification
 */
RemoveSourceIdentifierFromSubscriptionResponse * DocDBClient::removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request)
{
    return qobject_cast<RemoveSourceIdentifierFromSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from an Amazon DocumentDB
 */
RemoveTagsFromResourceResponse * DocDBClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * ResetDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a cluster parameter group to the default value. To reset specific parameters, submit a list
 * of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire cluster parameter group,
 * specify the <code>DBClusterParameterGroupName</code> and <code>ResetAllParameters</code> parameters.
 *
 * </p
 *
 * When you reset the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance
 */
ResetDBClusterParameterGroupResponse * DocDBClient::resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ResetDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RestoreDBClusterFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cluster from a snapshot or cluster
 *
 * snapshot>
 *
 * If a snapshot is specified, the target cluster is created from the source DB snapshot with a default configuration and
 * default security
 *
 * group>
 *
 * If a cluster snapshot is specified, the target cluster is created from the source cluster restore point with the same
 * configuration as the original source DB cluster, except that the new cluster is created with the default security
 */
RestoreDBClusterFromSnapshotResponse * DocDBClient::restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request)
{
    return qobject_cast<RestoreDBClusterFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RestoreDBClusterToPointInTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a cluster to an arbitrary point in time. Users can restore to any point in time before
 * <code>LatestRestorableTime</code> for up to <code>BackupRetentionPeriod</code> days. The target cluster is created from
 * the source cluster with the same configuration as the original cluster, except that the new cluster is created with the
 * default security group.
 */
RestoreDBClusterToPointInTimeResponse * DocDBClient::restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request)
{
    return qobject_cast<RestoreDBClusterToPointInTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * StartDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts the stopped cluster that is specified by <code>DBClusterIdentifier</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/db-cluster-stop-start.html">Stopping and Starting an
 * Amazon DocumentDB
 */
StartDBClusterResponse * DocDBClient::startDBCluster(const StartDBClusterRequest &request)
{
    return qobject_cast<StartDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * StopDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the running cluster that is specified by <code>DBClusterIdentifier</code>. The cluster must be in the
 * <i>available</i> state. For more information, see <a
 * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/db-cluster-stop-start.html">Stopping and Starting an
 * Amazon DocumentDB
 */
StopDBClusterResponse * DocDBClient::stopDBCluster(const StopDBClusterRequest &request)
{
    return qobject_cast<StopDBClusterResponse *>(send(request));
}

/*!
 * \class QtAws::DocDB::DocDBClientPrivate
 * \brief The DocDBClientPrivate class provides private implementation for DocDBClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DocDBClientPrivate object with public implementation \a q.
 */
DocDBClientPrivate::DocDBClientPrivate(DocDBClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace DocDB
} // namespace QtAws
