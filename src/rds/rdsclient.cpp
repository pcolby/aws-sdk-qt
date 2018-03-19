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

#include "rdsclient.h"
#include "rdsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace RDS {

/**
 * @class  RdsClient
 *
 * @brief  Client for Amazon Relational Database Service ( RDS)
 *
 * <fullname>Amazon Relational Database Service</fullname>
 *
 *
 * </p
 *
 * Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a
 * relational database in the cloud. It provides cost-efficient, resizable capacity for an industry-standard relational
 * database and manages common database administration tasks, freeing up developers to focus on what makes their
 * applications and businesses
 *
 * unique>
 *
 * Amazon RDS gives you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL Server, Oracle, or Amazon
 * Aurora database server. These capabilities mean that the code, applications, and tools you already use today with your
 * existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and
 * maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your DB instance's
 * compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no
 * up-front investments, and you pay only for the resources you
 *
 * use>
 *
 * This interface reference for Amazon RDS contains documentation for a programming or command line interface you can use
 * to manage Amazon RDS. Note that Amazon RDS is asynchronous, which means that some interfaces might require techniques
 * such as polling or callback functions to determine when a command has been applied. In this reference, the parameter
 * descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance
 * window. The reference structure is as follows, and we list following some related topics from the user
 *
 * guide>
 *
 * <b>Amazon RDS API Reference</b>
 *
 * </p <ul> <li>
 *
 * For the alphabetical list of API actions, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
 *
 * Actions</a>> </li> <li>
 *
 * For the alphabetical list of data types, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
 *
 * Types</a>> </li> <li>
 *
 * For a list of common query parameters, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
 *
 * Parameters</a>> </li> <li>
 *
 * For descriptions of the error codes, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
 *
 * Errors</a>> </li> </ul>
 *
 * <b>Amazon RDS User Guide</b>
 *
 * </p <ul> <li>
 *
 * For a summary of the Amazon RDS interfaces, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS
 *
 * Interfaces</a>> </li> <li>
 *
 * For more information about how to use the Query API, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using the Query
 */

/**
 * @brief  Constructs a new RdsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
RdsClient::RdsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("rds");
}

/**
 * @brief  Constructs a new RdsClient object.
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
RdsClient::RdsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("rds");
}

/// @todo override getEndpoint() to use rds.

/**
 * Associates an Identity and Access Management (IAM) role from an Aurora DB cluster. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Authorizing.AWSServices.html">Authorizing Amazon
 * Aurora to Access Other AWS Services On Your
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddRoleToDBClusterResponse * RdsClient::addRoleToDBCluster(const AddRoleToDBClusterRequest &request)
{

}

/**
 * Adds a source identifier to an existing RDS event notification
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddSourceIdentifierToSubscriptionResponse * RdsClient::addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request)
{

}

/**
 * Adds metadata tags to an Amazon RDS resource. These tags can also be used with cost allocation reporting to track cost
 * associated with Amazon RDS resources, or used in a Condition statement in an IAM policy for Amazon
 *
 * RDS>
 *
 * For an overview on tagging Amazon RDS resources, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToResourceResponse * RdsClient::addTagsToResource(const AddTagsToResourceRequest &request)
{

}

/**
 * Applies a pending maintenance action to a resource (for example, to a DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ApplyPendingMaintenanceActionResponse * RdsClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{

}

/**
 * Enables ingress to a DBSecurityGroup using one of two forms of authorization. First, EC2 or VPC security groups can be
 * added to the DBSecurityGroup if the application using the database is running on EC2 or VPC instances. Second, IP ranges
 * are available if the application accessing your database is running on the Internet. Required parameters for this API
 * are one of CIDR range, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or
 * EC2SecurityGroupId for
 *
 * non-VPC)> <note>
 *
 * You can't authorize ingress from an EC2 security group in one AWS Region to an Amazon RDS DB instance in another. You
 * can't authorize ingress from a VPC security group in one VPC to an Amazon RDS DB instance in
 *
 * another> </note>
 *
 * For an overview of CIDR ranges, go to the <a
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AuthorizeDBSecurityGroupIngressResponse * RdsClient::authorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest &request)
{

}

/**
 * Copies the specified DB cluster parameter
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyDBClusterParameterGroupResponse * RdsClient::copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request)
{

}

/**
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
 * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:aurora-cluster1-snapshot-20161115</code>> </li> </ul>
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
 *
 * status>
 *
 * For more information on copying encrypted DB cluster snapshots from one AWS Region to another, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBClusterSnapshot.CrossRegion">
 * Copying a DB Cluster Snapshot in the Same Account, Either in the Same Region or Across Regions</a> in the Amazon RDS
 * User
 *
 * Guide>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyDBClusterSnapshotResponse * RdsClient::copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request)
{

}

/**
 * Copies the specified DB parameter
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyDBParameterGroupResponse * RdsClient::copyDBParameterGroup(const CopyDBParameterGroupRequest &request)
{

}

/**
 * Copies the specified DB snapshot. The source DB snapshot must be in the "available"
 *
 * state>
 *
 * You can copy a snapshot from one AWS Region to another. In that case, the AWS Region where you call the
 * <code>CopyDBSnapshot</code> action is the destination AWS Region for the DB snapshot copy.
 *
 * </p
 *
 * For more information about copying snapshots, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopyDBSnapshot.html">Copying a DB Snapshot</a> in the
 * Amazon RDS User Guide.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyDBSnapshotResponse * RdsClient::copyDBSnapshot(const CopyDBSnapshotRequest &request)
{

}

/**
 * Copies the specified option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyOptionGroupResponse * RdsClient::copyOptionGroup(const CopyOptionGroupRequest &request)
{

}

/**
 * Creates a new Amazon Aurora DB
 *
 * cluster>
 *
 * You can use the <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a Read Replica of another
 * DB cluster or Amazon RDS MySQL DB instance. For cross-region replication where the DB cluster identified by
 * <code>ReplicationSourceIdentifier</code> is encrypted, you must also specify the <code>PreSignedUrl</code>
 *
 * parameter>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBClusterResponse * RdsClient::createDBCluster(const CreateDBClusterRequest &request)
{

}

/**
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
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon RDS to fully complete the
 * create action before the DB cluster parameter group is used as the default for a new DB cluster. This is especially
 * important for parameters that are critical when creating the default database for a DB cluster, such as the character
 * set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter
 * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
 * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster parameter group has been created or
 *
 * modified> </b>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBClusterParameterGroupResponse * RdsClient::createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request)
{

}

/**
 * Creates a snapshot of a DB cluster. For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBClusterSnapshotResponse * RdsClient::createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request)
{

}

/**
 * Creates a new DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBInstanceResponse * RdsClient::createDBInstance(const CreateDBInstanceRequest &request)
{

}

/**
 * Creates a new DB instance that acts as a Read Replica for an existing source DB instance. You can create a Read Replica
 * for a DB instance running MySQL, MariaDB, or PostgreSQL. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working with PostgreSQL, MySQL, and
 * MariaDB Read Replicas</a>.
 *
 * </p
 *
 * Amazon Aurora doesn't support this action. You must call the <code>CreateDBInstance</code> action to create a DB
 * instance for an Aurora DB cluster.
 *
 * </p
 *
 * All Read Replica DB instances are created with backups disabled. All other DB instance attributes (including DB security
 * groups and DB parameter groups) are inherited from the source DB instance, except as specified following.
 *
 * </p <b>
 *
 * Your source DB instance must have backup retention enabled.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBInstanceReadReplicaResponse * RdsClient::createDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest &request)
{

}

/**
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
 * uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the create action
 * before the parameter group is used as the default for a new DB instance. This is especially important for parameters
 * that are critical when creating the default database for a DB instance, such as the character set for the default
 * database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of
 * the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to
 * verify that your DB parameter group has been created or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBParameterGroupResponse * RdsClient::createDBParameterGroup(const CreateDBParameterGroupRequest &request)
{

}

/**
 * Creates a new DB security group. DB security groups control access to a DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBSecurityGroupResponse * RdsClient::createDBSecurityGroup(const CreateDBSecurityGroupRequest &request)
{

}

/**
 * Creates a DBSnapshot. The source DBInstance must be in "available"
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBSnapshotResponse * RdsClient::createDBSnapshot(const CreateDBSnapshotRequest &request)
{

}

/**
 * Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDBSubnetGroupResponse * RdsClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{

}

/**
 * Creates an RDS event notification subscription. This action requires a topic ARN (Amazon Resource Name) created by
 * either the RDS console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon
 * SNS and subscribe to the topic. The ARN is displayed in the SNS
 *
 * console>
 *
 * You can specify the type of source (SourceType) you want to be notified of, provide a list of RDS sources (SourceIds)
 * that triggers the events, and provide a list of event categories (EventCategories) for events you want to be notified
 * of. For example, you can specify SourceType = db-instance, SourceIds = mydbinstance1, mydbinstance2 and EventCategories
 * = Availability,
 *
 * Backup>
 *
 * If you specify both the SourceType and SourceIds, such as SourceType = db-instance and SourceIdentifier = myDBInstance1,
 * you are notified of all the db-instance events for the specified source. If you specify a SourceType but do not specify
 * a SourceIdentifier, you receive notice of the events for that source type for all your RDS sources. If you do not
 * specify either the SourceType nor the SourceIdentifier, you are notified of events generated from all RDS sources
 * belonging to your customer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEventSubscriptionResponse * RdsClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{

}

/**
 * Creates a new option group. You can create up to 20 option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateOptionGroupResponse * RdsClient::createOptionGroup(const CreateOptionGroupRequest &request)
{

}

/**
 * The DeleteDBCluster action deletes a previously provisioned DB cluster. When you delete a DB cluster, all automated
 * backups for that DB cluster are deleted and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
 * are not
 *
 * deleted> <p/>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBClusterResponse * RdsClient::deleteDBCluster(const DeleteDBClusterRequest &request)
{

}

/**
 * Deletes a specified DB cluster parameter group. The DB cluster parameter group to be deleted can't be associated with
 * any DB
 *
 * clusters>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBClusterParameterGroupResponse * RdsClient::deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request)
{

}

/**
 * Deletes a DB cluster snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DB cluster snapshot must be in the <code>available</code> state to be
 *
 * deleted> </note>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBClusterSnapshotResponse * RdsClient::deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request)
{

}

/**
 * The DeleteDBInstance action deletes a previously provisioned DB instance. When you delete a DB instance, all automated
 * backups for that instance are deleted and can't be recovered. Manual DB snapshots of the DB instance to be deleted by
 * <code>DeleteDBInstance</code> are not
 *
 * deleted>
 *
 * If you request a final DB snapshot the status of the Amazon RDS DB instance is <code>deleting</code> until the DB
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
 * If the specified DB instance is part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of the
 * following conditions are
 *
 * true> <ul> <li>
 *
 * The DB cluster is a Read Replica of another Amazon Aurora DB
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBInstanceResponse * RdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request)
{

}

/**
 * Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted can't be associated with any DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBParameterGroupResponse * RdsClient::deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request)
{

}

/**
 * Deletes a DB security
 *
 * group> <note>
 *
 * The specified DB security group must not be associated with any DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBSecurityGroupResponse * RdsClient::deleteDBSecurityGroup(const DeleteDBSecurityGroupRequest &request)
{

}

/**
 * Deletes a DBSnapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DBSnapshot must be in the <code>available</code> state to be
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBSnapshotResponse * RdsClient::deleteDBSnapshot(const DeleteDBSnapshotRequest &request)
{

}

/**
 * Deletes a DB subnet
 *
 * group> <note>
 *
 * The specified database subnet group must not be associated with any DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDBSubnetGroupResponse * RdsClient::deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request)
{

}

/**
 * Deletes an RDS event notification
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventSubscriptionResponse * RdsClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{

}

/**
 * Deletes an existing option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteOptionGroupResponse * RdsClient::deleteOptionGroup(const DeleteOptionGroupRequest &request)
{

}

/**
 * Lists all of the attributes for a customer account. The attributes include Amazon RDS quotas for the account, such as
 * the number of DB instances allowed. The description for a quota includes the quota name, current usage toward that
 * quota, and the quota's maximum
 *
 * value>
 *
 * This command doesn't take any
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountAttributesResponse * RdsClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{

}

/**
 * Lists the set of CA certificates provided by Amazon RDS for this AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCertificatesResponse * RdsClient::describeCertificates(const DescribeCertificatesRequest &request)
{

}

/**
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list will contain only the description of the specified DB cluster parameter group.
 *
 * </p
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBClusterParameterGroupsResponse * RdsClient::describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request)
{

}

/**
 * Returns the detailed parameter list for a particular DB cluster parameter
 *
 * group>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBClusterParametersResponse * RdsClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBClusterSnapshotAttributesResponse * RdsClient::describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request)
{

}

/**
 * Returns information about DB cluster snapshots. This API action supports
 *
 * pagination>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBClusterSnapshotsResponse * RdsClient::describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request)
{

}

/**
 * Returns information about provisioned Aurora DB clusters. This API supports
 *
 * pagination>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBClustersResponse * RdsClient::describeDBClusters(const DescribeDBClustersRequest &request)
{

}

/**
 * Returns a list of the available DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBEngineVersionsResponse * RdsClient::describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request)
{

}

/**
 * Returns information about provisioned RDS instances. This API supports
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBInstancesResponse * RdsClient::describeDBInstances(const DescribeDBInstancesRequest &request)
{

}

/**
 * Returns a list of DB log files for the DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBLogFilesResponse * RdsClient::describeDBLogFiles(const DescribeDBLogFilesRequest &request)
{

}

/**
 * Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the
 * list will contain only the description of the specified DB parameter group.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBParameterGroupsResponse * RdsClient::describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request)
{

}

/**
 * Returns the detailed parameter list for a particular DB parameter
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBParametersResponse * RdsClient::describeDBParameters(const DescribeDBParametersRequest &request)
{

}

/**
 * Returns a list of <code>DBSecurityGroup</code> descriptions. If a <code>DBSecurityGroupName</code> is specified, the
 * list will contain only the descriptions of the specified DB security group.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBSecurityGroupsResponse * RdsClient::describeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{

}

/**
 * Returns a list of DB snapshot attribute names and values for a manual DB
 *
 * snapshot>
 *
 * When sharing snapshots with other AWS accounts, <code>DescribeDBSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the AWS accounts that are authorized to copy or restore the manual
 * DB snapshot. If <code>all</code> is included in the list of values for the <code>restore</code> attribute, then the
 * manual DB snapshot is public and can be copied or restored by all AWS
 *
 * accounts>
 *
 * To add or remove access for an AWS account to copy or restore a manual DB snapshot, or to make the manual DB snapshot
 * public or private, use the <a>ModifyDBSnapshotAttribute</a> API
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBSnapshotAttributesResponse * RdsClient::describeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest &request)
{

}

/**
 * Returns information about DB snapshots. This API action supports
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBSnapshotsResponse * RdsClient::describeDBSnapshots(const DescribeDBSnapshotsRequest &request)
{

}

/**
 * Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is specified, the list will contain only the
 * descriptions of the specified
 *
 * DBSubnetGroup>
 *
 * For an overview of CIDR ranges, go to the <a
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia Tutorial</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDBSubnetGroupsResponse * RdsClient::describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request)
{

}

/**
 * Returns the default engine and system parameter information for the cluster database
 *
 * engine>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEngineDefaultClusterParametersResponse * RdsClient::describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request)
{

}

/**
 * Returns the default engine and system parameter information for the specified database
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEngineDefaultParametersResponse * RdsClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{

}

/**
 * Displays a list of categories for all event source types, or, if specified, for a specified source type. You can see a
 * list of the event categories and source types in the <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html"> Events</a> topic in the <i>Amazon RDS
 * User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventCategoriesResponse * RdsClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{

}

/**
 * Lists all the subscription descriptions for a customer account. The description for a subscription includes
 * SubscriptionName, SNSTopicARN, CustomerID, SourceType, SourceID, CreationTime, and
 *
 * Status>
 *
 * If you specify a SubscriptionName, lists the description for that
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventSubscriptionsResponse * RdsClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{

}

/**
 * Returns events related to DB instances, DB security groups, DB snapshots, and DB parameter groups for the past 14 days.
 * Events specific to a particular DB instance, DB security group, database snapshot, or DB parameter group can be obtained
 * by providing the name as a parameter. By default, the past hour of events are
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * RdsClient::describeEvents(const DescribeEventsRequest &request)
{

}

/**
 * Describes all available
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOptionGroupOptionsResponse * RdsClient::describeOptionGroupOptions(const DescribeOptionGroupOptionsRequest &request)
{

}

/**
 * Describes the available option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOptionGroupsResponse * RdsClient::describeOptionGroups(const DescribeOptionGroupsRequest &request)
{

}

/**
 * Returns a list of orderable DB instance options for the specified
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOrderableDBInstanceOptionsResponse * RdsClient::describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request)
{

}

/**
 * Returns a list of resources (for example, DB instances) that have at least one pending maintenance
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribePendingMaintenanceActionsResponse * RdsClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{

}

/**
 * Returns information about reserved DB instances for this account, or about a specified reserved DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedDBInstancesResponse * RdsClient::describeReservedDBInstances(const DescribeReservedDBInstancesRequest &request)
{

}

/**
 * Lists available reserved DB instance
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReservedDBInstancesOfferingsResponse * RdsClient::describeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest &request)
{

}

/**
 * Returns a list of the source AWS Regions where the current AWS Region can create a Read Replica or copy a DB snapshot
 * from. This API action supports
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSourceRegionsResponse * RdsClient::describeSourceRegions(const DescribeSourceRegionsRequest &request)
{

}

/**
 * You can call <a>DescribeValidDBInstanceModifications</a> to learn what modifications you can make to your DB instance.
 * You can use this information when you call <a>ModifyDBInstance</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeValidDBInstanceModificationsResponse * RdsClient::describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request)
{

}

/**
 * Downloads all or a portion of the specified log file, up to 1 MB in
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DownloadDBLogFilePortionResponse * RdsClient::downloadDBLogFilePortion(const DownloadDBLogFilePortionRequest &request)
{

}

/**
 * Forces a failover for a DB
 *
 * cluster>
 *
 * A failover for a DB cluster promotes one of the Aurora Replicas (read-only instances) in the DB cluster to be the
 * primary instance (the cluster
 *
 * writer)>
 *
 * Amazon Aurora will automatically fail over to an Aurora Replica, if one exists, when the primary instance fails. You can
 * force a failover when you want to simulate a failure of a primary instance for testing. Because each instance in a DB
 * cluster has its own endpoint address, you will need to clean up and re-establish any existing connections that use those
 * endpoint addresses when the failover is
 *
 * complete>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
FailoverDBClusterResponse * RdsClient::failoverDBCluster(const FailoverDBClusterRequest &request)
{

}

/**
 * Lists all tags on an Amazon RDS
 *
 * resource>
 *
 * For an overview on tagging an Amazon RDS resource, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * RdsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Modify a setting for an Amazon Aurora DB cluster. You can change one or more database configuration parameters by
 * specifying these parameters and the new values in the request. For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBClusterResponse * RdsClient::modifyDBCluster(const ModifyDBClusterRequest &request)
{

}

/**
 * Modifies the parameters of a DB cluster parameter group. To modify more than one parameter, submit a list of the
 * following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
 * parameters can be modified in a single request.
 *
 * </p
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * </p <note>
 *
 * Changes to dynamic parameters are applied immediately. Changes to static parameters require a reboot without failover to
 * the DB cluster associated with the parameter group before the change can take
 *
 * effect> </note> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon RDS to fully complete the
 * create action before the parameter group is used as the default for a new DB cluster. This is especially important for
 * parameters that are critical when creating the default database for a DB cluster, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
 * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster parameter group has been created or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBClusterParameterGroupResponse * RdsClient::modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBClusterSnapshotAttributeResponse * RdsClient::modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request)
{

}

/**
 * Modifies settings for a DB instance. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the request. To learn what modifications you can make to your DB instance, call
 * <a>DescribeValidDBInstanceModifications</a> before you call <a>ModifyDBInstance</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBInstanceResponse * RdsClient::modifyDBInstance(const ModifyDBInstanceRequest &request)
{

}

/**
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
 * uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the modify action
 * before the parameter group is used as the default for a new DB instance. This is especially important for parameters
 * that are critical when creating the default database for a DB instance, such as the character set for the default
 * database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of
 * the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to
 * verify that your DB parameter group has been created or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBParameterGroupResponse * RdsClient::modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request)
{

}

/**
 * Updates a manual DB snapshot, which can be encrypted or not encrypted, with a new engine version.
 *
 * </p
 *
 * Amazon RDS supports upgrading DB snapshots for MySQL and Oracle.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBSnapshotResponse * RdsClient::modifyDBSnapshot(const ModifyDBSnapshotRequest &request)
{

}

/**
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB
 *
 * snapshot>
 *
 * To share a manual DB snapshot with other AWS accounts, specify <code>restore</code> as the <code>AttributeName</code>
 * and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the AWS accounts that are authorized to restore
 * the manual DB snapshot. Uses the value <code>all</code> to make the manual DB snapshot public, which means it can be
 * copied or restored by all AWS accounts. Do not add the <code>all</code> value for any manual DB snapshots that contain
 * private information that you don't want available to all AWS accounts. If the manual DB snapshot is encrypted, it can be
 * shared, but only by specifying a list of authorized AWS account IDs for the <code>ValuesToAdd</code> parameter. You
 * can't use <code>all</code> as a value for that parameter in this
 *
 * case>
 *
 * To view which AWS accounts have access to copy or restore a manual DB snapshot, or whether a manual DB snapshot public
 * or private, use the <a>DescribeDBSnapshotAttributes</a> API
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBSnapshotAttributeResponse * RdsClient::modifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest &request)
{

}

/**
 * Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyDBSubnetGroupResponse * RdsClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{

}

/**
 * Modifies an existing RDS event notification subscription. Note that you can't modify the source identifiers using this
 * call; to change source identifiers for a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
 * <a>RemoveSourceIdentifierFromSubscription</a>
 *
 * calls>
 *
 * You can see a list of the event categories for a given SourceType in the <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a> topic in the Amazon RDS User
 * Guide or by using the <b>DescribeEventCategories</b>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyEventSubscriptionResponse * RdsClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{

}

/**
 * Modifies an existing option
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyOptionGroupResponse * RdsClient::modifyOptionGroup(const ModifyOptionGroupRequest &request)
{

}

/**
 * Promotes a Read Replica DB instance to a standalone DB
 *
 * instance> <note> <ul> <li>
 *
 * Backup duration is a function of the amount of changes to the database since the previous backup. If you plan to promote
 * a Read Replica to a standalone instance, we recommend that you enable backups and complete at least one backup prior to
 * promotion. In addition, a Read Replica cannot be promoted to a standalone instance when it is in the
 * <code>backing-up</code> status. If you have enabled backups on your Read Replica, configure the automated backup window
 * so that daily backups do not interfere with Read Replica
 *
 * promotion> </li> <li>
 *
 * This command doesn't apply to Aurora MySQL and Aurora
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PromoteReadReplicaResponse * RdsClient::promoteReadReplica(const PromoteReadReplicaRequest &request)
{

}

/**
 * Promotes a Read Replica DB cluster to a standalone DB
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PromoteReadReplicaDBClusterResponse * RdsClient::promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request)
{

}

/**
 * Purchases a reserved DB instance
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PurchaseReservedDBInstancesOfferingResponse * RdsClient::purchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest &request)
{

}

/**
 * You might need to reboot your DB instance, usually for maintenance reasons. For example, if you make certain
 * modifications, or if you change the DB parameter group associated with the DB instance, you must reboot the instance for
 * the changes to take effect.
 *
 * </p
 *
 * Rebooting a DB instance restarts the database engine service. Rebooting a DB instance results in a momentary outage,
 * during which the DB instance status is set to rebooting.
 *
 * </p
 *
 * For more information about rebooting, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting a DB Instance</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootDBInstanceResponse * RdsClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{

}

/**
 * Disassociates an Identity and Access Management (IAM) role from an Aurora DB cluster. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Authorizing.AWSServices.html">Authorizing Amazon
 * Aurora to Access Other AWS Services On Your
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveRoleFromDBClusterResponse * RdsClient::removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request)
{

}

/**
 * Removes a source identifier from an existing RDS event notification
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveSourceIdentifierFromSubscriptionResponse * RdsClient::removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request)
{

}

/**
 * Removes metadata tags from an Amazon RDS
 *
 * resource>
 *
 * For an overview on tagging an Amazon RDS resource, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromResourceResponse * RdsClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{

}

/**
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
 *
 * to>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetDBClusterParameterGroupResponse * RdsClient::resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request)
{

}

/**
 * Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters,
 * provide a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
 * parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When
 * resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetDBParameterGroupResponse * RdsClient::resetDBParameterGroup(const ResetDBParameterGroupRequest &request)
{

}

/**
 * Creates an Amazon Aurora DB cluster from data stored in an Amazon S3 bucket. Amazon RDS must be authorized to access the
 * Amazon S3 bucket and the data must be created using the Percona XtraBackup utility as described in <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Migrate.MySQL.html#Aurora.Migrate.MySQL.S3">Migrating
 * Data from MySQL by Using an Amazon S3
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBClusterFromS3Response * RdsClient::restoreDBClusterFromS3(const RestoreDBClusterFromS3Request &request)
{

}

/**
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
 *
 * group>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBClusterFromSnapshotResponse * RdsClient::restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request)
{

}

/**
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
 *
 * available> </note>
 *
 * For more information on Amazon Aurora, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Aurora.html">Aurora on Amazon RDS</a> in the <i>Amazon
 * RDS User Guide.</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBClusterToPointInTimeResponse * RdsClient::restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request)
{

}

/**
 * Creates a new DB instance from a DB snapshot. The target database is created from the source database restore point with
 * the most of original configuration with the default security group and the default DB parameter group. By default, the
 * new DB instance is created as a single-AZ deployment except when the instance is a SQL Server instance that has an
 * option group that is associated with mirroring; in this case, the instance becomes a mirrored AZ deployment and not a
 * single-AZ
 *
 * deployment>
 *
 * If your intent is to replace your original DB instance with the new, restored DB instance, then rename your original DB
 * instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB instances with the same
 * name. Once you have renamed your original DB instance with a different identifier, then you can pass the original name
 * of the DB instance as the DBInstanceIdentifier in the call to the RestoreDBInstanceFromDBSnapshot action. The result is
 * that you will replace the original DB instance with the DB instance created from the
 *
 * snapshot>
 *
 * If you are restoring from a shared manual DB snapshot, the <code>DBSnapshotIdentifier</code> must be the ARN of the
 * shared DB
 *
 * snapshot> <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBInstanceFromDBSnapshotResponse * RdsClient::restoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest &request)
{

}

/**
 * Amazon Relational Database Service (Amazon RDS) supports importing MySQL databases by using backup files. You can create
 * a backup of your on-premises database, store it on Amazon Simple Storage Service (Amazon S3), and then restore the
 * backup file onto a new Amazon RDS DB instance running MySQL. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing Data into an
 * Amazon RDS MySQL DB Instance</a>.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBInstanceFromS3Response * RdsClient::restoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request &request)
{

}

/**
 * Restores a DB instance to an arbitrary point in time. You can restore to any point in time before the time identified by
 * the LatestRestorableTime property. You can restore to a point up to the number of days specified by the
 * BackupRetentionPeriod
 *
 * property>
 *
 * The target database is created with most of the original configuration, but in a system-selected availability zone, with
 * the default security group, the default subnet group, and the default DB parameter group. By default, the new DB
 * instance is created as a single-AZ deployment except when the instance is a SQL Server instance that has an option group
 * that is associated with mirroring; in this case, the instance becomes a mirrored deployment and not a single-AZ
 *
 * deployment> <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreDBInstanceToPointInTimeResponse * RdsClient::restoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest &request)
{

}

/**
 * Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or EC2 or VPC Security Groups. Required
 * parameters for this API are one of CIDRIP, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
 * EC2SecurityGroupName or
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeDBSecurityGroupIngressResponse * RdsClient::revokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest &request)
{

}

/**
 * Starts a DB instance that was stopped using the AWS console, the stop-db-instance AWS CLI command, or the StopDBInstance
 * action. For more information, see Stopping and Starting a DB instance in the AWS RDS user guide.
 *
 * </p <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartDBInstanceResponse * RdsClient::startDBInstance(const StartDBInstanceRequest &request)
{

}

/**
 * Stops a DB instance. When you stop a DB instance, Amazon RDS retains the DB instance's metadata, including its endpoint,
 * DB parameter group, and option group membership. Amazon RDS also retains the transaction logs so you can do a
 * point-in-time restore if necessary. For more information, see Stopping and Starting a DB instance in the AWS RDS user
 * guide.
 *
 * </p <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopDBInstanceResponse * RdsClient::stopDBInstance(const StopDBInstanceRequest &request)
{

}

/**
 * @internal
 *
 * @class  RdsClientPrivate
 *
 * @brief  Private implementation for RdsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientPrivate object.
 *
 * @param  q  Pointer to this object's public RdsClient instance.
 */
RdsClientPrivate::RdsClientPrivate(RdsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace RDS
} // namespace AWS
