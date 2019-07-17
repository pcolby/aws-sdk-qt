/*
    Copyright 2013-2019 Paul Colby

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

#include "neptuneclient.h"
#include "neptuneclient_p.h"

#include "core/awssignaturev4.h"
#include "addroletodbclusterrequest.h"
#include "addroletodbclusterresponse.h"
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
#include "copydbparametergrouprequest.h"
#include "copydbparametergroupresponse.h"
#include "createdbclusterrequest.h"
#include "createdbclusterresponse.h"
#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergroupresponse.h"
#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotresponse.h"
#include "createdbinstancerequest.h"
#include "createdbinstanceresponse.h"
#include "createdbparametergrouprequest.h"
#include "createdbparametergroupresponse.h"
#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgroupresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "deletedbclusterrequest.h"
#include "deletedbclusterresponse.h"
#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotresponse.h"
#include "deletedbinstancerequest.h"
#include "deletedbinstanceresponse.h"
#include "deletedbparametergrouprequest.h"
#include "deletedbparametergroupresponse.h"
#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgroupresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
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
#include "describedbparametergroupsrequest.h"
#include "describedbparametergroupsresponse.h"
#include "describedbparametersrequest.h"
#include "describedbparametersresponse.h"
#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsresponse.h"
#include "describeenginedefaultclusterparametersrequest.h"
#include "describeenginedefaultclusterparametersresponse.h"
#include "describeenginedefaultparametersrequest.h"
#include "describeenginedefaultparametersresponse.h"
#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesresponse.h"
#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsresponse.h"
#include "describevaliddbinstancemodificationsrequest.h"
#include "describevaliddbinstancemodificationsresponse.h"
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
#include "modifydbparametergrouprequest.h"
#include "modifydbparametergroupresponse.h"
#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgroupresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "promotereadreplicadbclusterrequest.h"
#include "promotereadreplicadbclusterresponse.h"
#include "rebootdbinstancerequest.h"
#include "rebootdbinstanceresponse.h"
#include "removerolefromdbclusterrequest.h"
#include "removerolefromdbclusterresponse.h"
#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergroupresponse.h"
#include "resetdbparametergrouprequest.h"
#include "resetdbparametergroupresponse.h"
#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Neptune
 * \brief Contains classess for accessing Amazon Neptune.
 *
 * \inmodule QtAwsNeptune
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::NeptuneClient
 * \brief The NeptuneClient class provides access to the Amazon Neptune service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 */

/*!
 * \brief Constructs a NeptuneClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
NeptuneClient::NeptuneClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NeptuneClientPrivate(this), parent)
{
    Q_D(NeptuneClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Neptune");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * \overload NeptuneClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
NeptuneClient::NeptuneClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NeptuneClientPrivate(this), parent)
{
    Q_D(NeptuneClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Neptune");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddRoleToDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Identity and Access Management (IAM) role from an Neptune DB cluster.
 */
AddRoleToDBClusterResponse * NeptuneClient::addRoleToDBCluster(const AddRoleToDBClusterRequest &request)
{
    return qobject_cast<AddRoleToDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddSourceIdentifierToSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a source identifier to an existing event notification
 */
AddSourceIdentifierToSubscriptionResponse * NeptuneClient::addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request)
{
    return qobject_cast<AddSourceIdentifierToSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an Amazon Neptune resource. These tags can also be used with cost allocation reporting to track
 * cost associated with Amazon Neptune resources, or used in a Condition statement in an IAM policy for Amazon
 */
AddTagsToResourceResponse * NeptuneClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ApplyPendingMaintenanceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a pending maintenance action to a resource (for example, to a DB
 */
ApplyPendingMaintenanceActionResponse * NeptuneClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{
    return qobject_cast<ApplyPendingMaintenanceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CopyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB cluster parameter
 */
CopyDBClusterParameterGroupResponse * NeptuneClient::copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CopyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
 * You can copy an encrypted DB cluster snapshot from another AWS Region. In that case, the AWS Region where you call the
 * <code>CopyDBClusterSnapshot</code> action is the destination AWS Region for the encrypted DB cluster snapshot to be
 * copied to. To copy an encrypted DB cluster snapshot from another AWS Region, you must provide the following
 *
 * values> <ul> <li>
 *
 * <code>KmsKeyId</code> - The AWS Key Management System (AWS KMS) key identifier for the key to use to encrypt the copy of
 * the DB cluster snapshot in the destination AWS
 *
 * Region> </li> <li>
 *
 * <code>PreSignedUrl</code> - A URL that contains a Signature Version 4 signed request for the
 * <code>CopyDBClusterSnapshot</code> action to be called in the source AWS Region where the DB cluster snapshot is copied
 * from. The pre-signed URL must be a valid request for the <code>CopyDBClusterSnapshot</code> API action that can be
 * executed in the source AWS Region that contains the encrypted DB cluster snapshot to be
 *
 * copied>
 *
 * The pre-signed URL request must contain the following parameter
 *
 * values> <ul> <li>
 *
 * <code>KmsKeyId</code> - The KMS key identifier for the key to use to encrypt the copy of the DB cluster snapshot in the
 * destination AWS Region. This is the same identifier for both the <code>CopyDBClusterSnapshot</code> action that is
 * called in the destination AWS Region, and the action contained in the pre-signed
 *
 * URL> </li> <li>
 *
 * <code>DestinationRegion</code> - The name of the AWS Region that the DB cluster snapshot will be created
 *
 * in> </li> <li>
 *
 * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot identifier for the encrypted DB cluster
 * snapshot to be copied. This identifier must be in the Amazon Resource Name (ARN) format for the source AWS Region. For
 * example, if you are copying an encrypted DB cluster snapshot from the us-west-2 AWS Region, then your
 * <code>SourceDBClusterSnapshotIdentifier</code> looks like the following example:
 *
 * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:neptune-cluster1-snapshot-20161115</code>> </li> </ul>
 *
 * To learn how to generate a Signature Version 4 signed request, see <a
 * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html"> Authenticating Requests: Using Query
 * Parameters (AWS Signature Version 4)</a> and <a
 * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html"> Signature Version 4 Signing
 *
 * Process</a>> </li> <li>
 *
 * <code>TargetDBClusterSnapshotIdentifier</code> - The identifier for the new copy of the DB cluster snapshot in the
 * destination AWS
 *
 * Region> </li> <li>
 *
 * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot identifier for the encrypted DB cluster
 * snapshot to be copied. This identifier must be in the ARN format for the source AWS Region and is the same value as the
 * <code>SourceDBClusterSnapshotIdentifier</code> in the pre-signed URL.
 *
 * </p </li> </ul>
 *
 * To cancel the copy operation once it is in progress, delete the target DB cluster snapshot identified by
 * <code>TargetDBClusterSnapshotIdentifier</code> while that DB cluster snapshot is in "copying"
 */
CopyDBClusterSnapshotResponse * NeptuneClient::copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request)
{
    return qobject_cast<CopyDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CopyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB parameter
 */
CopyDBParameterGroupResponse * NeptuneClient::copyDBParameterGroup(const CopyDBParameterGroupRequest &request)
{
    return qobject_cast<CopyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Neptune DB
 *
 * cluster>
 *
 * You can use the <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a Read Replica of another
 * DB cluster or Amazon Neptune DB instance. For cross-region replication where the DB cluster identified by
 * <code>ReplicationSourceIdentifier</code> is encrypted, you must also specify the <code>PreSignedUrl</code>
 */
CreateDBClusterResponse * NeptuneClient::createDBCluster(const CreateDBClusterRequest &request)
{
    return qobject_cast<CreateDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
 * in the DB cluster. To provide custom values for any of the parameters, you must modify the group after creating it using
 * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter group, you need to associate it with
 * your DB cluster using <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with a running DB
 * cluster, you need to reboot the DB instances in the DB cluster without failover for the new DB cluster parameter group
 * and associated settings to take effect.
 *
 * </p <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon Neptune to fully complete
 * the create action before the DB cluster parameter group is used as the default for a new DB cluster. This is especially
 * important for parameters that are critical when creating the default database for a DB cluster, such as the character
 * set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter
 * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon Neptune console</a> or the
 * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster parameter group has been created or
 */
CreateDBClusterParameterGroupResponse * NeptuneClient::createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CreateDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a DB cluster.
 */
CreateDBClusterSnapshotResponse * NeptuneClient::createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request)
{
    return qobject_cast<CreateDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB
 */
CreateDBInstanceResponse * NeptuneClient::createDBInstance(const CreateDBInstanceRequest &request)
{
    return qobject_cast<CreateDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB parameter
 *
 * group>
 *
 * A DB parameter group is initially created with the default parameters for the database engine used by the DB instance.
 * To provide custom values for any of the parameters, you must modify the group after creating it using
 * <i>ModifyDBParameterGroup</i>. Once you've created a DB parameter group, you need to associate it with your DB instance
 * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with a running DB instance, you need to
 * reboot the DB instance without failover for the new DB parameter group and associated settings to take effect.
 *
 * </p <b>
 *
 * After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon Neptune to fully complete the create
 * action before the parameter group is used as the default for a new DB instance. This is especially important for
 * parameters that are critical when creating the default database for a DB instance, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <i>DescribeDBParameters</i> command to verify that your DB parameter group
 * has been created or
 */
CreateDBParameterGroupResponse * NeptuneClient::createDBParameterGroup(const CreateDBParameterGroupRequest &request)
{
    return qobject_cast<CreateDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the AWS
 */
CreateDBSubnetGroupResponse * NeptuneClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{
    return qobject_cast<CreateDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by either
 * the Neptune console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
 * and subscribe to the topic. The ARN is displayed in the SNS
 *
 * console>
 *
 * You can specify the type of source (SourceType) you want to be notified of, provide a list of Neptune sources
 * (SourceIds) that triggers the events, and provide a list of event categories (EventCategories) for events you want to be
 * notified of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and
 * EventCategories = Availability,
 *
 * Backup>
 *
 * If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1,
 * you are notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify
 * a SourceIdentifier, you receive notice of the events for that source type for all your Neptune sources. If you do not
 * specify either the SourceType nor the SourceIdentifier, you are notified of events generated from all Neptune sources
 * belonging to your customer
 */
CreateEventSubscriptionResponse * NeptuneClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteDBCluster action deletes a previously provisioned DB cluster. When you delete a DB cluster, all automated
 * backups for that DB cluster are deleted and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
 * are not
 */
DeleteDBClusterResponse * NeptuneClient::deleteDBCluster(const DeleteDBClusterRequest &request)
{
    return qobject_cast<DeleteDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DB cluster parameter group. The DB cluster parameter group to be deleted can't be associated with
 * any DB
 */
DeleteDBClusterParameterGroupResponse * NeptuneClient::deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
DeleteDBClusterSnapshotResponse * NeptuneClient::deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request)
{
    return qobject_cast<DeleteDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteDBInstance action deletes a previously provisioned DB instance. When you delete a DB instance, all automated
 * backups for that instance are deleted and can't be recovered. Manual DB snapshots of the DB instance to be deleted by
 * <code>DeleteDBInstance</code> are not
 *
 * deleted>
 *
 * If you request a final DB snapshot the status of the Amazon Neptune DB instance is <code>deleting</code> until the DB
 * snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The
 * action can't be canceled or reverted once submitted.
 *
 * </p
 *
 * Note that when a DB instance is in a failure state and has a status of <code>failed</code>,
 * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can only delete it when the
 * <code>SkipFinalSnapshot</code> parameter is set to
 *
 * <code>true</code>>
 *
 * If the specified DB instance is part of a DB cluster, you can't delete the DB instance if both of the following
 * conditions are
 *
 * true> <ul> <li>
 *
 * The DB cluster is a Read Replica of another DB
 *
 * cluster> </li> <li>
 *
 * The DB instance is the only instance in the DB
 *
 * cluster> </li> </ul>
 *
 * To delete a DB instance in this case, first call the <a>PromoteReadReplicaDBCluster</a> API action to promote the DB
 * cluster so it's no longer a Read Replica. After the promotion completes, then call the <code>DeleteDBInstance</code> API
 * action to delete the final instance in the DB
 */
DeleteDBInstanceResponse * NeptuneClient::deleteDBInstance(const DeleteDBInstanceRequest &request)
{
    return qobject_cast<DeleteDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted can't be associated with any DB
 */
DeleteDBParameterGroupResponse * NeptuneClient::deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
DeleteDBSubnetGroupResponse * NeptuneClient::deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request)
{
    return qobject_cast<DeleteDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an event notification
 */
DeleteEventSubscriptionResponse * NeptuneClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list will contain only the description of the specified DB cluster parameter group.
 */
DescribeDBClusterParameterGroupsResponse * NeptuneClient::describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBClusterParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB cluster parameter
 */
DescribeDBClusterParametersResponse * NeptuneClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request)
{
    return qobject_cast<DescribeDBClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DB cluster snapshot attribute names and values for a manual DB cluster
 *
 * snapshot>
 *
 * When sharing snapshots with other AWS accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the AWS accounts that are authorized to copy or restore the manual
 * DB cluster snapshot. If <code>all</code> is included in the list of values for the <code>restore</code> attribute, then
 * the manual DB cluster snapshot is public and can be copied or restored by all AWS
 *
 * accounts>
 *
 * To add or remove access for an AWS account to copy or restore a manual DB cluster snapshot, or to make the manual DB
 * cluster snapshot public or private, use the <a>ModifyDBClusterSnapshotAttribute</a> API
 */
DescribeDBClusterSnapshotAttributesResponse * NeptuneClient::describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB cluster snapshots. This API action supports
 */
DescribeDBClusterSnapshotsResponse * NeptuneClient::describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned DB clusters. This API supports
 */
DescribeDBClustersResponse * NeptuneClient::describeDBClusters(const DescribeDBClustersRequest &request)
{
    return qobject_cast<DescribeDBClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available DB
 */
DescribeDBEngineVersionsResponse * NeptuneClient::describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request)
{
    return qobject_cast<DescribeDBEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned instances. This API supports
 */
DescribeDBInstancesResponse * NeptuneClient::describeDBInstances(const DescribeDBInstancesRequest &request)
{
    return qobject_cast<DescribeDBInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the
 * list will contain only the description of the specified DB parameter group.
 */
DescribeDBParameterGroupsResponse * NeptuneClient::describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB parameter
 */
DescribeDBParametersResponse * NeptuneClient::describeDBParameters(const DescribeDBParametersRequest &request)
{
    return qobject_cast<DescribeDBParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeDBSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the
 * descriptions of the specified
 *
 * DBSubnetGroup>
 *
 * For an overview of CIDR ranges, go to the <a
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>.
 */
DescribeDBSubnetGroupsResponse * NeptuneClient::describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeDBSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEngineDefaultClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the cluster database
 */
DescribeEngineDefaultClusterParametersResponse * NeptuneClient::describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEngineDefaultParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the specified database
 */
DescribeEngineDefaultParametersResponse * NeptuneClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of categories for all event source types, or, if specified, for a specified source type.
 */
DescribeEventCategoriesResponse * NeptuneClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the subscription descriptions for a customer account. The description for a subscription includes
 * SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and
 *
 * Status>
 *
 * If you specify a SubscriptionName, lists the description for that
 */
DescribeEventSubscriptionsResponse * NeptuneClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days.
 * Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained
 * by providing the name as a parameter. By default, the past hour of events are
 */
DescribeEventsResponse * NeptuneClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeOrderableDBInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable DB instance options for the specified
 */
DescribeOrderableDBInstanceOptionsResponse * NeptuneClient::describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request)
{
    return qobject_cast<DescribeOrderableDBInstanceOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribePendingMaintenanceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resources (for example, DB instances) that have at least one pending maintenance
 */
DescribePendingMaintenanceActionsResponse * NeptuneClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{
    return qobject_cast<DescribePendingMaintenanceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * DescribeValidDBInstanceModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can call <a>DescribeValidDBInstanceModifications</a> to learn what modifications you can make to your DB instance.
 * You can use this information when you call <a>ModifyDBInstance</a>.
 */
DescribeValidDBInstanceModificationsResponse * NeptuneClient::describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request)
{
    return qobject_cast<DescribeValidDBInstanceModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * FailoverDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forces a failover for a DB
 *
 * cluster>
 *
 * A failover for a DB cluster promotes one of the Read Replicas (read-only instances) in the DB cluster to be the primary
 * instance (the cluster
 *
 * writer)>
 *
 * Amazon Neptune will automatically fail over to a Read Replica, if one exists, when the primary instance fails. You can
 * force a failover when you want to simulate a failure of a primary instance for testing. Because each instance in a DB
 * cluster has its own endpoint address, you will need to clean up and re-establish any existing connections that use those
 * endpoint addresses when the failover is
 */
FailoverDBClusterResponse * NeptuneClient::failoverDBCluster(const FailoverDBClusterRequest &request)
{
    return qobject_cast<FailoverDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on an Amazon Neptune
 */
ListTagsForResourceResponse * NeptuneClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify a setting for a DB cluster. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the request.
 */
ModifyDBClusterResponse * NeptuneClient::modifyDBCluster(const ModifyDBClusterRequest &request)
{
    return qobject_cast<ModifyDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to
 * the DB cluster associated with the parameter group before the change can take
 *
 * effect> </note> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon Neptune to fully complete
 * the create action before the parameter group is used as the default for a new DB cluster. This is especially important
 * for parameters that are critical when creating the default database for a DB cluster, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
 * parameter group has been created or
 */
ModifyDBClusterParameterGroupResponse * NeptuneClient::modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBClusterSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB cluster
 *
 * snapshot>
 *
 * To share a manual DB cluster snapshot with other AWS accounts, specify <code>restore</code> as the
 * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts that
 * are authorized to restore the manual DB cluster snapshot. Use the value <code>all</code> to make the manual DB cluster
 * snapshot public, which means that it can be copied or restored by all AWS accounts. Do not add the <code>all</code>
 * value for any manual DB cluster snapshots that contain private information that you don't want available to all AWS
 * accounts. If a manual DB cluster snapshot is encrypted, it can be shared, but only by specifying a list of authorized
 * AWS account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value for that parameter
 * in this
 *
 * case>
 *
 * To view which AWS accounts have access to copy or restore a manual DB cluster snapshot, or whether a manual DB cluster
 * snapshot public or private, use the <a>DescribeDBClusterSnapshotAttributes</a> API
 */
ModifyDBClusterSnapshotAttributeResponse * NeptuneClient::modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request)
{
    return qobject_cast<ModifyDBClusterSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies settings for a DB instance. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the request. To learn what modifications you can make to your DB instance, call
 * <a>DescribeValidDBInstanceModifications</a> before you call <a>ModifyDBInstance</a>.
 */
ModifyDBInstanceResponse * NeptuneClient::modifyDBInstance(const ModifyDBInstanceRequest &request)
{
    return qobject_cast<ModifyDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following:
 * <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be
 * modified in a single request.
 *
 * </p <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to
 * the DB instance associated with the parameter group before the change can take
 *
 * effect> </note> <b>
 *
 * After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon Neptune to fully complete the modify
 * action before the parameter group is used as the default for a new DB instance. This is especially important for
 * parameters that are critical when creating the default database for a DB instance, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the Amazon Neptune console or the <i>DescribeDBParameters</i> command to verify that your DB parameter group
 * has been created or
 */
ModifyDBParameterGroupResponse * NeptuneClient::modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the AWS
 */
ModifyDBSubnetGroupResponse * NeptuneClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{
    return qobject_cast<ModifyDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing event notification subscription. Note that you can't modify the source identifiers using this call;
 * to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
 * <a>RemoveSourceIdentifierFromSubscription</a>
 *
 * calls>
 *
 * You can see a list of the event categories for a given SourceType by using the <b>DescribeEventCategories</b>
 */
ModifyEventSubscriptionResponse * NeptuneClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * PromoteReadReplicaDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Promotes a Read Replica DB cluster to a standalone DB
 */
PromoteReadReplicaDBClusterResponse * NeptuneClient::promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request)
{
    return qobject_cast<PromoteReadReplicaDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RebootDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your DB instance, usually for maintenance reasons. For example, if you make certain
 * modifications, or if you change the DB parameter group associated with the DB instance, you must reboot the instance for
 * the changes to take effect.
 *
 * </p
 *
 * Rebooting a DB instance restarts the database engine service. Rebooting a DB instance results in a momentary outage,
 * during which the DB instance status is set to rebooting.
 */
RebootDBInstanceResponse * NeptuneClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{
    return qobject_cast<RebootDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveRoleFromDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Identity and Access Management (IAM) role from a DB cluster.
 */
RemoveRoleFromDBClusterResponse * NeptuneClient::removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request)
{
    return qobject_cast<RemoveRoleFromDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveSourceIdentifierFromSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a source identifier from an existing event notification
 */
RemoveSourceIdentifierFromSubscriptionResponse * NeptuneClient::removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request)
{
    return qobject_cast<RemoveSourceIdentifierFromSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from an Amazon Neptune
 */
RemoveTagsFromResourceResponse * NeptuneClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ResetDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB cluster parameter group to the default value. To reset specific parameters submit a list
 * of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB cluster parameter
 * group, specify the <code>DBClusterParameterGroupName</code> and <code>ResetAllParameters</code> parameters.
 *
 * </p
 *
 * When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <a>RebootDBInstance</a> request. You must
 * call <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want the updated static parameter to
 * apply
 */
ResetDBClusterParameterGroupResponse * NeptuneClient::resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ResetDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * ResetDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters,
 * provide a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
 * parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When
 * resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request.
 */
ResetDBParameterGroupResponse * NeptuneClient::resetDBParameterGroup(const ResetDBParameterGroupRequest &request)
{
    return qobject_cast<ResetDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
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
RestoreDBClusterFromSnapshotResponse * NeptuneClient::restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request)
{
    return qobject_cast<RestoreDBClusterFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the NeptuneClient service, and returns a pointer to an
 * RestoreDBClusterToPointInTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a DB cluster to an arbitrary point in time. Users can restore to any point in time before
 * <code>LatestRestorableTime</code> for up to <code>BackupRetentionPeriod</code> days. The target DB cluster is created
 * from the source DB cluster with the same configuration as the original DB cluster, except that the new DB cluster is
 * created with the default DB security group.
 *
 * </p <note>
 *
 * This action only restores the DB cluster, not the DB instances for that DB cluster. You must invoke the
 * <a>CreateDBInstance</a> action to create DB instances for the restored DB cluster, specifying the identifier of the
 * restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB instances only after the
 * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB cluster is
 */
RestoreDBClusterToPointInTimeResponse * NeptuneClient::restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request)
{
    return qobject_cast<RestoreDBClusterToPointInTimeResponse *>(send(request));
}

/*!
 * \class QtAws::Neptune::NeptuneClientPrivate
 * \brief The NeptuneClientPrivate class provides private implementation for NeptuneClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a NeptuneClientPrivate object with public implementation \a q.
 */
NeptuneClientPrivate::NeptuneClientPrivate(NeptuneClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Neptune
} // namespace QtAws
