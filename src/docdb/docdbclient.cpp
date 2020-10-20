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

#include "docdbclient.h"
#include "docdbclient_p.h"

#include "core/awssignaturev4.h"
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
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
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
#include "rebootdbinstancerequest.h"
#include "rebootdbinstanceresponse.h"
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
: QtAws::Core::AwsAbstractClient(new DocDBClientPrivate(this), parent)
{
    Q_D(DocDBClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon DocumentDB with MongoDB compatibility");
    d->serviceName = QStringLiteral("rds");
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
: QtAws::Core::AwsAbstractClient(new DocDBClientPrivate(this), parent)
{
    Q_D(DocDBClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon DocumentDB with MongoDB compatibility");
    d->serviceName = QStringLiteral("rds");
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
 * Applies a pending maintenance action to a resource (for example, to a DB
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
 * Copies the specified DB cluster parameter
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
 * Copies a snapshot of a DB
 *
 * cluster>
 *
 * To copy a DB cluster snapshot from a shared manual DB cluster snapshot, <code>SourceDBClusterSnapshotIdentifier</code>
 * must be the Amazon Resource Name (ARN) of the shared DB cluster
 *
 * snapshot>
 *
 * To cancel the copy operation after it is in progress, delete the target DB cluster snapshot identified by
 * <code>TargetDBClusterSnapshotIdentifier</code> while that DB cluster snapshot is in the <i>copying</i>
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
 * Creates a new Amazon DocumentDB DB
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
 * Creates a new DB cluster parameter
 *
 * group>
 *
 * Parameters in a DB cluster parameter group apply to all of the instances in a DB
 *
 * cluster>
 *
 * A DB cluster parameter group is initially created with the default parameters for the database engine used by instances
 * in the DB cluster. To provide custom values for any of the parameters, you must modify the group after you create it.
 * After you create a DB cluster parameter group, you must associate it with your DB cluster. For the new DB cluster
 * parameter group and associated settings to take effect, you must then reboot the DB instances in the DB cluster without
 *
 * failover> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon DocumentDB to fully
 * complete the create action before the DB cluster parameter group is used as the default for a new DB cluster. This step
 * is especially important for parameters that are critical when creating the default database for a DB cluster, such as
 * the character set for the default database defined by the <code>character_set_database</code>
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
 * Creates a snapshot of a DB cluster.
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
 * Creates a new DB
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
 * Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two Availability Zones in
 * the AWS
 */
CreateDBSubnetGroupResponse * DocDBClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{
    return qobject_cast<CreateDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DeleteDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a previously provisioned DB cluster. When you delete a DB cluster, all automated backups for that DB cluster are
 * deleted and can't be recovered. Manual DB cluster snapshots of the specified DB cluster are not
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
 * Deletes a specified DB cluster parameter group. The DB cluster parameter group to be deleted can't be associated with
 * any DB
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
 * Deletes a DB cluster snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DB cluster snapshot must be in the <code>available</code> state to be
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
 * Deletes a previously provisioned DB instance.
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
 * Deletes a DB subnet
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
 * DescribeDBClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list contains only the description of the specified DB cluster parameter group.
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
 * Returns the detailed parameter list for a particular DB cluster parameter
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
 * Returns a list of DB cluster snapshot attribute names and values for a manual DB cluster
 *
 * snapshot>
 *
 * When you share snapshots with other AWS accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the AWS accounts that are authorized to copy or restore the manual
 * DB cluster snapshot. If <code>all</code> is included in the list of values for the <code>restore</code> attribute, then
 * the manual DB cluster snapshot is public and can be copied or restored by all AWS
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
 * Returns information about DB cluster snapshots. This API operation supports
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
 * Returns information about provisioned Amazon DocumentDB DB clusters. This API operation supports
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
 * Returns a list of the available DB
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
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days.
 * You can obtain events specific to a particular DB instance, DB security group, DB snapshot, or DB parameter group by
 * providing the name as a parameter. By default, the events of the past hour are
 */
DescribeEventsResponse * DocDBClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * DescribeOrderableDBInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable DB instance options for the specified
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
 * Returns a list of resources (for example, DB instances) that have at least one pending maintenance
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
 * Forces a failover for a DB
 *
 * cluster>
 *
 * A failover for a DB cluster promotes one of the Amazon DocumentDB replicas (read-only instances) in the DB cluster to be
 * the primary instance (the cluster
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
 * Modifies a setting for an Amazon DocumentDB DB cluster. You can change one or more database configuration parameters by
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
 * Modifies the parameters of a DB cluster parameter group. To modify more than one parameter, submit a list of the
 * following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
 * parameters can be modified in a single request.
 *
 * </p <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot or maintenance
 * window before the change can take
 *
 * effect> </note> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon DocumentDB to fully
 * complete the create action before the parameter group is used as the default for a new DB cluster. This step is
 * especially important for parameters that are critical when creating the default database for a DB cluster, such as the
 * character set for the default database defined by the <code>character_set_database</code>
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
 * To share a manual DB cluster snapshot with other AWS accounts, specify <code>restore</code> as the
 * <code>AttributeName</code>, and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts that
 * are authorized to restore the manual DB cluster snapshot. Use the value <code>all</code> to make the manual DB cluster
 * snapshot public, which means that it can be copied or restored by all AWS accounts. Do not add the <code>all</code>
 * value for any manual DB cluster snapshots that contain private information that you don't want available to all AWS
 * accounts. If a manual DB cluster snapshot is encrypted, it can be shared, but only by specifying a list of authorized
 * AWS account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value for that parameter
 * in this
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
 * Modifies settings for a DB instance. You can change one or more database configuration parameters by specifying these
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
 * Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two Availability
 * Zones in the AWS
 */
ModifyDBSubnetGroupResponse * DocDBClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{
    return qobject_cast<ModifyDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DocDBClient service, and returns a pointer to an
 * RebootDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your DB instance, usually for maintenance reasons. For example, if you make certain changes, or
 * if you change the DB cluster parameter group that is associated with the DB instance, you must reboot the instance for
 * the changes to take effect.
 *
 * </p
 *
 * Rebooting a DB instance restarts the database engine service. Rebooting a DB instance results in a momentary outage,
 * during which the DB instance status is set to <i>rebooting</i>.
 */
RebootDBInstanceResponse * DocDBClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{
    return qobject_cast<RebootDBInstanceResponse *>(send(request));
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
 * Modifies the parameters of a DB cluster parameter group to the default value. To reset specific parameters, submit a
 * list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB cluster parameter
 * group, specify the <code>DBClusterParameterGroupName</code> and <code>ResetAllParameters</code> parameters.
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
 * Creates a new DB cluster from a DB snapshot or DB cluster
 *
 * snapshot>
 *
 * If a DB snapshot is specified, the target DB cluster is created from the source DB snapshot with a default configuration
 * and default security
 *
 * group>
 *
 * If a DB cluster snapshot is specified, the target DB cluster is created from the source DB cluster restore point with
 * the same configuration as the original source DB cluster, except that the new DB cluster is created with the default
 * security
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
 * Restores a DB cluster to an arbitrary point in time. Users can restore to any point in time before
 * <code>LatestRestorableTime</code> for up to <code>BackupRetentionPeriod</code> days. The target DB cluster is created
 * from the source DB cluster with the same configuration as the original DB cluster, except that the new DB cluster is
 * created with the default DB security group.
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
DocDBClientPrivate::DocDBClientPrivate(DocDBClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DocDB
} // namespace QtAws
