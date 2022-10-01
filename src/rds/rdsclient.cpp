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

#include "rdsclient.h"
#include "rdsclient_p.h"

#include "core/awssignaturev4.h"
#include "addroletodbclusterrequest.h"
#include "addroletodbclusterresponse.h"
#include "addroletodbinstancerequest.h"
#include "addroletodbinstanceresponse.h"
#include "addsourceidentifiertosubscriptionrequest.h"
#include "addsourceidentifiertosubscriptionresponse.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionresponse.h"
#include "authorizedbsecuritygroupingressrequest.h"
#include "authorizedbsecuritygroupingressresponse.h"
#include "backtrackdbclusterrequest.h"
#include "backtrackdbclusterresponse.h"
#include "cancelexporttaskrequest.h"
#include "cancelexporttaskresponse.h"
#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergroupresponse.h"
#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotresponse.h"
#include "copydbparametergrouprequest.h"
#include "copydbparametergroupresponse.h"
#include "copydbsnapshotrequest.h"
#include "copydbsnapshotresponse.h"
#include "copyoptiongrouprequest.h"
#include "copyoptiongroupresponse.h"
#include "createcustomdbengineversionrequest.h"
#include "createcustomdbengineversionresponse.h"
#include "createdbclusterrequest.h"
#include "createdbclusterresponse.h"
#include "createdbclusterendpointrequest.h"
#include "createdbclusterendpointresponse.h"
#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergroupresponse.h"
#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotresponse.h"
#include "createdbinstancerequest.h"
#include "createdbinstanceresponse.h"
#include "createdbinstancereadreplicarequest.h"
#include "createdbinstancereadreplicaresponse.h"
#include "createdbparametergrouprequest.h"
#include "createdbparametergroupresponse.h"
#include "createdbproxyrequest.h"
#include "createdbproxyresponse.h"
#include "createdbproxyendpointrequest.h"
#include "createdbproxyendpointresponse.h"
#include "createdbsecuritygrouprequest.h"
#include "createdbsecuritygroupresponse.h"
#include "createdbsnapshotrequest.h"
#include "createdbsnapshotresponse.h"
#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgroupresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createglobalclusterrequest.h"
#include "createglobalclusterresponse.h"
#include "createoptiongrouprequest.h"
#include "createoptiongroupresponse.h"
#include "deletecustomdbengineversionrequest.h"
#include "deletecustomdbengineversionresponse.h"
#include "deletedbclusterrequest.h"
#include "deletedbclusterresponse.h"
#include "deletedbclusterendpointrequest.h"
#include "deletedbclusterendpointresponse.h"
#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergroupresponse.h"
#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotresponse.h"
#include "deletedbinstancerequest.h"
#include "deletedbinstanceresponse.h"
#include "deletedbinstanceautomatedbackuprequest.h"
#include "deletedbinstanceautomatedbackupresponse.h"
#include "deletedbparametergrouprequest.h"
#include "deletedbparametergroupresponse.h"
#include "deletedbproxyrequest.h"
#include "deletedbproxyresponse.h"
#include "deletedbproxyendpointrequest.h"
#include "deletedbproxyendpointresponse.h"
#include "deletedbsecuritygrouprequest.h"
#include "deletedbsecuritygroupresponse.h"
#include "deletedbsnapshotrequest.h"
#include "deletedbsnapshotresponse.h"
#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgroupresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deleteglobalclusterrequest.h"
#include "deleteglobalclusterresponse.h"
#include "deleteoptiongrouprequest.h"
#include "deleteoptiongroupresponse.h"
#include "deregisterdbproxytargetsrequest.h"
#include "deregisterdbproxytargetsresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describecertificatesrequest.h"
#include "describecertificatesresponse.h"
#include "describedbclusterbacktracksrequest.h"
#include "describedbclusterbacktracksresponse.h"
#include "describedbclusterendpointsrequest.h"
#include "describedbclusterendpointsresponse.h"
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
#include "describedbinstanceautomatedbackupsrequest.h"
#include "describedbinstanceautomatedbackupsresponse.h"
#include "describedbinstancesrequest.h"
#include "describedbinstancesresponse.h"
#include "describedblogfilesrequest.h"
#include "describedblogfilesresponse.h"
#include "describedbparametergroupsrequest.h"
#include "describedbparametergroupsresponse.h"
#include "describedbparametersrequest.h"
#include "describedbparametersresponse.h"
#include "describedbproxiesrequest.h"
#include "describedbproxiesresponse.h"
#include "describedbproxyendpointsrequest.h"
#include "describedbproxyendpointsresponse.h"
#include "describedbproxytargetgroupsrequest.h"
#include "describedbproxytargetgroupsresponse.h"
#include "describedbproxytargetsrequest.h"
#include "describedbproxytargetsresponse.h"
#include "describedbsecuritygroupsrequest.h"
#include "describedbsecuritygroupsresponse.h"
#include "describedbsnapshotattributesrequest.h"
#include "describedbsnapshotattributesresponse.h"
#include "describedbsnapshotsrequest.h"
#include "describedbsnapshotsresponse.h"
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
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describeglobalclustersrequest.h"
#include "describeglobalclustersresponse.h"
#include "describeoptiongroupoptionsrequest.h"
#include "describeoptiongroupoptionsresponse.h"
#include "describeoptiongroupsrequest.h"
#include "describeoptiongroupsresponse.h"
#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsresponse.h"
#include "describereserveddbinstancesrequest.h"
#include "describereserveddbinstancesresponse.h"
#include "describereserveddbinstancesofferingsrequest.h"
#include "describereserveddbinstancesofferingsresponse.h"
#include "describesourceregionsrequest.h"
#include "describesourceregionsresponse.h"
#include "describevaliddbinstancemodificationsrequest.h"
#include "describevaliddbinstancemodificationsresponse.h"
#include "downloaddblogfileportionrequest.h"
#include "downloaddblogfileportionresponse.h"
#include "failoverdbclusterrequest.h"
#include "failoverdbclusterresponse.h"
#include "failoverglobalclusterrequest.h"
#include "failoverglobalclusterresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifyactivitystreamrequest.h"
#include "modifyactivitystreamresponse.h"
#include "modifycertificatesrequest.h"
#include "modifycertificatesresponse.h"
#include "modifycurrentdbclustercapacityrequest.h"
#include "modifycurrentdbclustercapacityresponse.h"
#include "modifycustomdbengineversionrequest.h"
#include "modifycustomdbengineversionresponse.h"
#include "modifydbclusterrequest.h"
#include "modifydbclusterresponse.h"
#include "modifydbclusterendpointrequest.h"
#include "modifydbclusterendpointresponse.h"
#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergroupresponse.h"
#include "modifydbclustersnapshotattributerequest.h"
#include "modifydbclustersnapshotattributeresponse.h"
#include "modifydbinstancerequest.h"
#include "modifydbinstanceresponse.h"
#include "modifydbparametergrouprequest.h"
#include "modifydbparametergroupresponse.h"
#include "modifydbproxyrequest.h"
#include "modifydbproxyresponse.h"
#include "modifydbproxyendpointrequest.h"
#include "modifydbproxyendpointresponse.h"
#include "modifydbproxytargetgrouprequest.h"
#include "modifydbproxytargetgroupresponse.h"
#include "modifydbsnapshotrequest.h"
#include "modifydbsnapshotresponse.h"
#include "modifydbsnapshotattributerequest.h"
#include "modifydbsnapshotattributeresponse.h"
#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgroupresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "modifyglobalclusterrequest.h"
#include "modifyglobalclusterresponse.h"
#include "modifyoptiongrouprequest.h"
#include "modifyoptiongroupresponse.h"
#include "promotereadreplicarequest.h"
#include "promotereadreplicaresponse.h"
#include "promotereadreplicadbclusterrequest.h"
#include "promotereadreplicadbclusterresponse.h"
#include "purchasereserveddbinstancesofferingrequest.h"
#include "purchasereserveddbinstancesofferingresponse.h"
#include "rebootdbclusterrequest.h"
#include "rebootdbclusterresponse.h"
#include "rebootdbinstancerequest.h"
#include "rebootdbinstanceresponse.h"
#include "registerdbproxytargetsrequest.h"
#include "registerdbproxytargetsresponse.h"
#include "removefromglobalclusterrequest.h"
#include "removefromglobalclusterresponse.h"
#include "removerolefromdbclusterrequest.h"
#include "removerolefromdbclusterresponse.h"
#include "removerolefromdbinstancerequest.h"
#include "removerolefromdbinstanceresponse.h"
#include "removesourceidentifierfromsubscriptionrequest.h"
#include "removesourceidentifierfromsubscriptionresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergroupresponse.h"
#include "resetdbparametergrouprequest.h"
#include "resetdbparametergroupresponse.h"
#include "restoredbclusterfroms3request.h"
#include "restoredbclusterfroms3response.h"
#include "restoredbclusterfromsnapshotrequest.h"
#include "restoredbclusterfromsnapshotresponse.h"
#include "restoredbclustertopointintimerequest.h"
#include "restoredbclustertopointintimeresponse.h"
#include "restoredbinstancefromdbsnapshotrequest.h"
#include "restoredbinstancefromdbsnapshotresponse.h"
#include "restoredbinstancefroms3request.h"
#include "restoredbinstancefroms3response.h"
#include "restoredbinstancetopointintimerequest.h"
#include "restoredbinstancetopointintimeresponse.h"
#include "revokedbsecuritygroupingressrequest.h"
#include "revokedbsecuritygroupingressresponse.h"
#include "startactivitystreamrequest.h"
#include "startactivitystreamresponse.h"
#include "startdbclusterrequest.h"
#include "startdbclusterresponse.h"
#include "startdbinstancerequest.h"
#include "startdbinstanceresponse.h"
#include "startdbinstanceautomatedbackupsreplicationrequest.h"
#include "startdbinstanceautomatedbackupsreplicationresponse.h"
#include "startexporttaskrequest.h"
#include "startexporttaskresponse.h"
#include "stopactivitystreamrequest.h"
#include "stopactivitystreamresponse.h"
#include "stopdbclusterrequest.h"
#include "stopdbclusterresponse.h"
#include "stopdbinstancerequest.h"
#include "stopdbinstanceresponse.h"
#include "stopdbinstanceautomatedbackupsreplicationrequest.h"
#include "stopdbinstanceautomatedbackupsreplicationresponse.h"
#include "switchoverreadreplicarequest.h"
#include "switchoverreadreplicaresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Rds
 * \brief Contains classess for accessing Amazon Relational Database Service.
 *
 * \inmodule QtAwsRds
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Rds {

/*!
 * \class QtAws::Rds::RdsClient
 * \brief The RdsClient class provides access to the Amazon Relational Database Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRds
 *
 *  <fullname>Amazon Relational Database Service</fullname>
 * 
 *  </p
 * 
 *  Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a
 *  relational database in the cloud. It provides cost-efficient, resizeable capacity for an industry-standard relational
 *  database and manages common database administration tasks, freeing up developers to focus on what makes their
 *  applications and businesses
 * 
 *  unique>
 * 
 *  Amazon RDS gives you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL Server, Oracle, or Amazon
 *  Aurora database server. These capabilities mean that the code, applications, and tools you already use today with your
 *  existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and
 *  maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your DB instance's
 *  compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no
 *  up-front investments, and you pay only for the resources you
 * 
 *  use>
 * 
 *  This interface reference for Amazon RDS contains documentation for a programming or command line interface you can use
 *  to manage Amazon RDS. Amazon RDS is asynchronous, which means that some interfaces might require techniques such as
 *  polling or callback functions to determine when a command has been applied. In this reference, the parameter
 *  descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance
 *  window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon RDS API Reference</b>
 * 
 *  </p <ul> <li>
 * 
 *  For the alphabetical list of API actions, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
 * 
 *  Actions</a>> </li> <li>
 * 
 *  For the alphabetical list of data types, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
 * 
 *  Types</a>> </li> <li>
 * 
 *  For a list of common query parameters, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
 * 
 *  Parameters</a>> </li> <li>
 * 
 *  For descriptions of the error codes, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
 * 
 *  Errors</a>> </li> </ul>
 * 
 *  <b>Amazon RDS User Guide</b>
 * 
 *  </p <ul> <li>
 * 
 *  For a summary of the Amazon RDS interfaces, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS
 * 
 *  Interfaces</a>> </li> <li>
 * 
 *  For more information about how to use the Query API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using the Query
 */

/*!
 * \brief Constructs a RdsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RdsClient::RdsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Relational Database Service");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * \overload RdsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RdsClient::RdsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->apiVersion = QStringLiteral("2014-10-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Relational Database Service");
    d->serviceName = QStringLiteral("rds");
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * AddRoleToDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Identity and Access Management (IAM) role with a DB
 */
AddRoleToDBClusterResponse * RdsClient::addRoleToDBCluster(const AddRoleToDBClusterRequest &request)
{
    return qobject_cast<AddRoleToDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * AddRoleToDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Amazon Web Services Identity and Access Management (IAM) role with a DB
 *
 * instance> <note>
 *
 * To add a role to a DB instance, the status of the DB instance must be
 *
 * <code>available</code>> </note>
 *
 * This command doesn't apply to RDS
 */
AddRoleToDBInstanceResponse * RdsClient::addRoleToDBInstance(const AddRoleToDBInstanceRequest &request)
{
    return qobject_cast<AddRoleToDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * AddSourceIdentifierToSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a source identifier to an existing RDS event notification
 */
AddSourceIdentifierToSubscriptionResponse * RdsClient::addSourceIdentifierToSubscription(const AddSourceIdentifierToSubscriptionRequest &request)
{
    return qobject_cast<AddSourceIdentifierToSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an Amazon RDS resource. These tags can also be used with cost allocation reporting to track cost
 * associated with Amazon RDS resources, or used in a Condition statement in an IAM policy for Amazon
 *
 * RDS>
 *
 * For an overview on tagging Amazon RDS resources, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS
 */
AddTagsToResourceResponse * RdsClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ApplyPendingMaintenanceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a pending maintenance action to a resource (for example, to a DB
 */
ApplyPendingMaintenanceActionResponse * RdsClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{
    return qobject_cast<ApplyPendingMaintenanceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * AuthorizeDBSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables ingress to a DBSecurityGroup using one of two forms of authorization. First, EC2 or VPC security groups can be
 * added to the DBSecurityGroup if the application using the database is running on EC2 or VPC instances. Second, IP ranges
 * are available if the application accessing your database is running on the internet. Required parameters for this API
 * are one of CIDR range, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either EC2SecurityGroupName or
 * EC2SecurityGroupId for
 *
 * non-VPC)>
 *
 * You can't authorize ingress from an EC2 security group in one Amazon Web Services Region to an Amazon RDS DB instance in
 * another. You can't authorize ingress from a VPC security group in one VPC to an Amazon RDS DB instance in
 *
 * another>
 *
 * For an overview of CIDR ranges, go to the <a
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
 *
 * Tutorial</a>> <note>
 *
 * EC2-Classic was retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend that you
 * migrate as soon as possible. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate from EC2-Classic to a VPC</a> in the
 * <i>Amazon EC2 User Guide</i>, the blog <a
 * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic Networking is Retiring
 * – Here’s How to Prepare</a>, and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving a DB instance not in a
 * VPC into a VPC</a> in the <i>Amazon RDS User
 */
AuthorizeDBSecurityGroupIngressResponse * RdsClient::authorizeDBSecurityGroupIngress(const AuthorizeDBSecurityGroupIngressRequest &request)
{
    return qobject_cast<AuthorizeDBSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * BacktrackDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Backtracks a DB cluster to a specific time, without creating a new DB
 *
 * cluster>
 *
 * For more information on backtracking, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Managing.Backtrack.html"> Backtracking an
 * Aurora DB Cluster</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action applies only to Aurora MySQL DB
 */
BacktrackDBClusterResponse * RdsClient::backtrackDBCluster(const BacktrackDBClusterRequest &request)
{
    return qobject_cast<BacktrackDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CancelExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an export task in progress that is exporting a snapshot to Amazon S3. Any data that has already been written to
 * the S3 bucket isn't
 */
CancelExportTaskResponse * RdsClient::cancelExportTask(const CancelExportTaskRequest &request)
{
    return qobject_cast<CancelExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CopyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB cluster parameter
 */
CopyDBClusterParameterGroupResponse * RdsClient::copyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CopyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
 * You can copy an encrypted DB cluster snapshot from another Amazon Web Services Region. In that case, the Amazon Web
 * Services Region where you call the <code>CopyDBClusterSnapshot</code> operation is the destination Amazon Web Services
 * Region for the encrypted DB cluster snapshot to be copied to. To copy an encrypted DB cluster snapshot from another
 * Amazon Web Services Region, you must provide the following
 *
 * values> <ul> <li>
 *
 * <code>KmsKeyId</code> - The Amazon Web Services Key Management System (Amazon Web Services KMS) key identifier for the
 * key to use to encrypt the copy of the DB cluster snapshot in the destination Amazon Web Services
 *
 * Region> </li> <li>
 *
 * <code>TargetDBClusterSnapshotIdentifier</code> - The identifier for the new copy of the DB cluster snapshot in the
 * destination Amazon Web Services
 *
 * Region> </li> <li>
 *
 * <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster snapshot identifier for the encrypted DB cluster
 * snapshot to be copied. This identifier must be in the ARN format for the source Amazon Web Services Region and is the
 * same value as the <code>SourceDBClusterSnapshotIdentifier</code> in the presigned
 *
 * URL> </li> </ul>
 *
 * To cancel the copy operation once it is in progress, delete the target DB cluster snapshot identified by
 * <code>TargetDBClusterSnapshotIdentifier</code> while that DB cluster snapshot is in "copying"
 *
 * status>
 *
 * For more information on copying encrypted Amazon Aurora DB cluster snapshots from one Amazon Web Services Region to
 * another, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html"> Copying a
 * Snapshot</a> in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
CopyDBClusterSnapshotResponse * RdsClient::copyDBClusterSnapshot(const CopyDBClusterSnapshotRequest &request)
{
    return qobject_cast<CopyDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CopyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB parameter
 */
CopyDBParameterGroupResponse * RdsClient::copyDBParameterGroup(const CopyDBParameterGroupRequest &request)
{
    return qobject_cast<CopyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CopyDBSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified DB snapshot. The source DB snapshot must be in the <code>available</code>
 *
 * state>
 *
 * You can copy a snapshot from one Amazon Web Services Region to another. In that case, the Amazon Web Services Region
 * where you call the <code>CopyDBSnapshot</code> operation is the destination Amazon Web Services Region for the DB
 * snapshot
 *
 * copy>
 *
 * This command doesn't apply to RDS
 *
 * Custom>
 *
 * For more information about copying snapshots, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopyDBSnapshot">Copying a DB
 * Snapshot</a> in the <i>Amazon RDS User
 */
CopyDBSnapshotResponse * RdsClient::copyDBSnapshot(const CopyDBSnapshotRequest &request)
{
    return qobject_cast<CopyDBSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CopyOptionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified option
 */
CopyOptionGroupResponse * RdsClient::copyOptionGroup(const CopyOptionGroupRequest &request)
{
    return qobject_cast<CopyOptionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateCustomDBEngineVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom DB engine version (CEV). A CEV is a binary volume snapshot of a database engine and specific AMI. The
 * supported engines are the
 *
 * following> <ul> <li>
 *
 * Oracle Database 12.1 Enterprise Edition with the January 2021 or later
 *
 * RU/RU> </li> <li>
 *
 * Oracle Database 19c Enterprise Edition with the January 2021 or later
 *
 * RU/RU> </li> </ul>
 *
 * Amazon RDS, which is a fully managed service, supplies the Amazon Machine Image (AMI) and database software. The Amazon
 * RDS database software is preinstalled, so you need only select a DB engine and version, and create your database. With
 * Amazon RDS Custom for Oracle, you upload your database installation files in Amazon
 *
 * S3>
 *
 * When you create a custom engine version, you specify the files in a JSON document called a CEV manifest. This document
 * describes installation .zip files stored in Amazon S3. RDS Custom creates your CEV from the installation files that you
 * provided. This service model is called Bring Your Own Media
 *
 * (BYOM)>
 *
 * Creation takes approximately two hours. If creation fails, RDS Custom issues <code>RDS-EVENT-0196</code> with the
 * message <code>Creation failed for custom engine version</code>, and includes details about the failure. For example, the
 * event prints missing
 *
 * files>
 *
 * After you create the CEV, it is available for use. You can create multiple CEVs, and create multiple RDS Custom
 * instances from any CEV. You can also change the status of a CEV to make it available or
 *
 * inactive> <note>
 *
 * The MediaImport service that imports files from Amazon S3 to create CEVs isn't integrated with Amazon Web Services
 * CloudTrail. If you turn on data logging for Amazon RDS in CloudTrail, calls to the
 * <code>CreateCustomDbEngineVersion</code> event aren't logged. However, you might see calls from the API gateway that
 * accesses your Amazon S3 bucket. These calls originate from the MediaImport service for the
 * <code>CreateCustomDbEngineVersion</code>
 *
 * event> </note>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.create"> Creating a CEV</a> in
 * the <i>Amazon RDS User
 */
CreateCustomDBEngineVersionResponse * RdsClient::createCustomDBEngineVersion(const CreateCustomDBEngineVersionRequest &request)
{
    return qobject_cast<CreateCustomDBEngineVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon Aurora DB cluster or Multi-AZ DB
 *
 * cluster>
 *
 * You can use the <code>ReplicationSourceIdentifier</code> parameter to create an Amazon Aurora DB cluster as a read
 * replica of another DB cluster or Amazon RDS MySQL or PostgreSQL DB
 *
 * instance>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
CreateDBClusterResponse * RdsClient::createDBCluster(const CreateDBClusterRequest &request)
{
    return qobject_cast<CreateDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom endpoint and associates it with an Amazon Aurora DB
 *
 * cluster> <note>
 *
 * This action applies only to Aurora DB
 */
CreateDBClusterEndpointResponse * RdsClient::createDBClusterEndpoint(const CreateDBClusterEndpointRequest &request)
{
    return qobject_cast<CreateDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
 * <code>ModifyDBClusterParameterGroup</code>. Once you've created a DB cluster parameter group, you need to associate it
 * with your DB cluster using
 *
 * <code>ModifyDBCluster</code>>
 *
 * When you associate a new DB cluster parameter group with a running Aurora DB cluster, reboot the DB instances in the DB
 * cluster without failover for the new DB cluster parameter group and associated settings to take
 *
 * effect>
 *
 * When you associate a new DB cluster parameter group with a running Multi-AZ DB cluster, reboot the DB cluster without
 * failover for the new DB cluster parameter group and associated settings to take
 *
 * effect> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon RDS to fully complete the
 * create action before the DB cluster parameter group is used as the default for a new DB cluster. This is especially
 * important for parameters that are critical when creating the default database for a DB cluster, such as the character
 * set for the default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter
 * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
 * <code>DescribeDBClusterParameters</code> operation to verify that your DB cluster parameter group has been created or
 *
 * modified> </b>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
CreateDBClusterParameterGroupResponse * RdsClient::createDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest &request)
{
    return qobject_cast<CreateDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a DB
 *
 * cluster>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
CreateDBClusterSnapshotResponse * RdsClient::createDBClusterSnapshot(const CreateDBClusterSnapshotRequest &request)
{
    return qobject_cast<CreateDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB
 *
 * instance>
 *
 * The new DB instance can be an RDS DB instance, or it can be a DB instance in an Aurora DB cluster. For an Aurora DB
 * cluster, you can call this operation multiple times to add more than one DB instance to the
 *
 * cluster>
 *
 * For more information about creating an RDS DB instance, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CreateDBInstance.html"> Creating an Amazon RDS DB
 * instance</a> in the <i>Amazon RDS User
 *
 * Guide</i>>
 *
 * For more information about creating a DB instance in an Aurora DB cluster, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.CreateInstance.html"> Creating an Amazon
 * Aurora DB cluster</a> in the <i>Amazon Aurora User
 */
CreateDBInstanceResponse * RdsClient::createDBInstance(const CreateDBInstanceRequest &request)
{
    return qobject_cast<CreateDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBInstanceReadReplicaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB instance that acts as a read replica for an existing source DB instance. You can create a read replica
 * for a DB instance running MySQL, MariaDB, Oracle, PostgreSQL, or SQL Server. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReadRepl.html">Working with Read Replicas</a> in the
 * <i>Amazon RDS User
 *
 * Guide</i>>
 *
 * Amazon Aurora doesn't support this operation. Call the <code>CreateDBInstance</code> operation to create a DB instance
 * for an Aurora DB
 *
 * cluster>
 *
 * All read replica DB instances are created with backups disabled. All other DB instance attributes (including DB security
 * groups and DB parameter groups) are inherited from the source DB instance, except as
 *
 * specified> <b>
 *
 * Your source DB instance must have backup retention
 */
CreateDBInstanceReadReplicaResponse * RdsClient::createDBInstanceReadReplica(const CreateDBInstanceReadReplicaRequest &request)
{
    return qobject_cast<CreateDBInstanceReadReplicaResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
 * <code>ModifyDBParameterGroup</code>. Once you've created a DB parameter group, you need to associate it with your DB
 * instance using <code>ModifyDBInstance</code>. When you associate a new DB parameter group with a running DB instance,
 * you need to reboot the DB instance without failover for the new DB parameter group and associated settings to take
 *
 * effect>
 *
 * This command doesn't apply to RDS
 *
 * Custom> <b>
 *
 * After you create a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the create action
 * before the parameter group is used as the default for a new DB instance. This is especially important for parameters
 * that are critical when creating the default database for a DB instance, such as the character set for the default
 * database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of
 * the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to
 * verify that your DB parameter group has been created or
 */
CreateDBParameterGroupResponse * RdsClient::createDBParameterGroup(const CreateDBParameterGroupRequest &request)
{
    return qobject_cast<CreateDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB
 */
CreateDBProxyResponse * RdsClient::createDBProxy(const CreateDBProxyRequest &request)
{
    return qobject_cast<CreateDBProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBProxyEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>DBProxyEndpoint</code>. Only applies to proxies that are associated with Aurora DB clusters. You can use
 * DB proxy endpoints to specify read/write or read-only access to the DB cluster. You can also use DB proxy endpoints to
 * access a DB proxy through a different VPC than the proxy's default
 */
CreateDBProxyEndpointResponse * RdsClient::createDBProxyEndpoint(const CreateDBProxyEndpointRequest &request)
{
    return qobject_cast<CreateDBProxyEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB security group. DB security groups control access to a DB
 *
 * instance>
 *
 * A DB security group controls access to EC2-Classic DB instances that are not in a
 *
 * VPC> <note>
 *
 * EC2-Classic was retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend that you
 * migrate as soon as possible. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate from EC2-Classic to a VPC</a> in the
 * <i>Amazon EC2 User Guide</i>, the blog <a
 * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic Networking is Retiring
 * – Here’s How to Prepare</a>, and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving a DB instance not in a
 * VPC into a VPC</a> in the <i>Amazon RDS User
 */
CreateDBSecurityGroupResponse * RdsClient::createDBSecurityGroup(const CreateDBSecurityGroupRequest &request)
{
    return qobject_cast<CreateDBSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a DB instance. The source DB instance must be in the <code>available</code> or
 * <code>storage-optimization</code>
 */
CreateDBSnapshotResponse * RdsClient::createDBSnapshot(const CreateDBSnapshotRequest &request)
{
    return qobject_cast<CreateDBSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the Amazon Web
 * Services
 */
CreateDBSubnetGroupResponse * RdsClient::createDBSubnetGroup(const CreateDBSubnetGroupRequest &request)
{
    return qobject_cast<CreateDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an RDS event notification subscription. This operation requires a topic Amazon Resource Name (ARN) created by
 * either the RDS console, the SNS console, or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon
 * SNS and subscribe to the topic. The ARN is displayed in the SNS
 *
 * console>
 *
 * You can specify the type of source (<code>SourceType</code>) that you want to be notified of and provide a list of RDS
 * sources (<code>SourceIds</code>) that triggers the events. You can also provide a list of event categories
 * (<code>EventCategories</code>) for events that you want to be notified of. For example, you can specify
 * <code>SourceType</code> = <code>db-instance</code>, <code>SourceIds</code> = <code>mydbinstance1</code>,
 * <code>mydbinstance2</code> and <code>EventCategories</code> = <code>Availability</code>,
 *
 * <code>Backup</code>>
 *
 * If you specify both the <code>SourceType</code> and <code>SourceIds</code>, such as <code>SourceType</code> =
 * <code>db-instance</code> and <code>SourceIds</code> = <code>myDBInstance1</code>, you are notified of all the
 * <code>db-instance</code> events for the specified source. If you specify a <code>SourceType</code> but do not specify
 * <code>SourceIds</code>, you receive notice of the events for that source type for all your RDS sources. If you don't
 * specify either the SourceType or the <code>SourceIds</code>, you are notified of events generated from all RDS sources
 * belonging to your customer
 *
 * account>
 *
 * For more information about subscribing to an event for RDS DB engines, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Subscribing.html"> Subscribing to Amazon RDS
 * event notification</a> in the <i>Amazon RDS User
 *
 * Guide</i>>
 *
 * For more information about subscribing to an event for Aurora DB engines, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Subscribing.html"> Subscribing to Amazon
 * RDS event notification</a> in the <i>Amazon Aurora User
 */
CreateEventSubscriptionResponse * RdsClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Aurora global database spread across multiple Amazon Web Services Regions. The global database contains a
 * single primary cluster with read-write capability, and a read-only secondary cluster that receives data from the primary
 * cluster through high-speed replication performed by the Aurora storage
 *
 * subsystem>
 *
 * You can create a global database that is initially empty, and then add a primary cluster and a secondary cluster to it.
 * Or you can specify an existing Aurora cluster during the create operation, and this cluster becomes the primary cluster
 * of the global
 *
 * database> <note>
 *
 * This action applies only to Aurora DB
 */
CreateGlobalClusterResponse * RdsClient::createGlobalCluster(const CreateGlobalClusterRequest &request)
{
    return qobject_cast<CreateGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * CreateOptionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new option group. You can create up to 20 option
 *
 * groups>
 *
 * This command doesn't apply to RDS
 */
CreateOptionGroupResponse * RdsClient::createOptionGroup(const CreateOptionGroupRequest &request)
{
    return qobject_cast<CreateOptionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteCustomDBEngineVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom engine version. To run this command, make sure you meet the following
 *
 * prerequisites> <ul> <li>
 *
 * The CEV must not be the default for RDS Custom. If it is, change the default before running this
 *
 * command> </li> <li>
 *
 * The CEV must not be associated with an RDS Custom DB instance, RDS Custom instance snapshot, or automated backup of your
 * RDS Custom
 *
 * instance> </li> </ul>
 *
 * Typically, deletion takes a few
 *
 * minutes> <note>
 *
 * The MediaImport service that imports files from Amazon S3 to create CEVs isn't integrated with Amazon Web Services
 * CloudTrail. If you turn on data logging for Amazon RDS in CloudTrail, calls to the
 * <code>DeleteCustomDbEngineVersion</code> event aren't logged. However, you might see calls from the API gateway that
 * accesses your Amazon S3 bucket. These calls originate from the MediaImport service for the
 * <code>DeleteCustomDbEngineVersion</code>
 *
 * event> </note>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.delete"> Deleting a CEV</a> in
 * the <i>Amazon RDS User
 */
DeleteCustomDBEngineVersionResponse * RdsClient::deleteCustomDBEngineVersion(const DeleteCustomDBEngineVersionRequest &request)
{
    return qobject_cast<DeleteCustomDBEngineVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteDBCluster action deletes a previously provisioned DB cluster. When you delete a DB cluster, all automated
 * backups for that DB cluster are deleted and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
 * are not
 *
 * deleted>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DeleteDBClusterResponse * RdsClient::deleteDBCluster(const DeleteDBClusterRequest &request)
{
    return qobject_cast<DeleteDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a custom endpoint and removes it from an Amazon Aurora DB
 *
 * cluster> <note>
 *
 * This action only applies to Aurora DB
 */
DeleteDBClusterEndpointResponse * RdsClient::deleteDBClusterEndpoint(const DeleteDBClusterEndpointRequest &request)
{
    return qobject_cast<DeleteDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DB cluster parameter group. The DB cluster parameter group to be deleted can't be associated with
 * any DB
 *
 * clusters>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DeleteDBClusterParameterGroupResponse * RdsClient::deleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBClusterSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a DB cluster snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DB cluster snapshot must be in the <code>available</code> state to be
 *
 * deleted> </note>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DeleteDBClusterSnapshotResponse * RdsClient::deleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest &request)
{
    return qobject_cast<DeleteDBClusterSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
 * If you request a final DB snapshot the status of the Amazon RDS DB instance is <code>deleting</code> until the DB
 * snapshot is created. The API action <code>DescribeDBInstance</code> is used to monitor the status of this operation. The
 * action can't be canceled or reverted once
 *
 * submitted>
 *
 * When a DB instance is in a failure state and has a status of <code>failed</code>, <code>incompatible-restore</code>, or
 * <code>incompatible-network</code>, you can only delete it when you skip creation of the final snapshot with the
 * <code>SkipFinalSnapshot</code>
 *
 * parameter>
 *
 * If the specified DB instance is part of an Amazon Aurora DB cluster, you can't delete the DB instance if both of the
 * following conditions are
 *
 * true> <ul> <li>
 *
 * The DB cluster is a read replica of another Amazon Aurora DB
 *
 * cluster> </li> <li>
 *
 * The DB instance is the only instance in the DB
 *
 * cluster> </li> </ul>
 *
 * To delete a DB instance in this case, first call the <code>PromoteReadReplicaDBCluster</code> API action to promote the
 * DB cluster so it's no longer a read replica. After the promotion completes, then call the <code>DeleteDBInstance</code>
 * API action to delete the final instance in the DB
 */
DeleteDBInstanceResponse * RdsClient::deleteDBInstance(const DeleteDBInstanceRequest &request)
{
    return qobject_cast<DeleteDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBInstanceAutomatedBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes automated backups using the <code>DbiResourceId</code> value of the source DB instance or the Amazon Resource
 * Name (ARN) of the automated
 */
DeleteDBInstanceAutomatedBackupResponse * RdsClient::deleteDBInstanceAutomatedBackup(const DeleteDBInstanceAutomatedBackupRequest &request)
{
    return qobject_cast<DeleteDBInstanceAutomatedBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified DB parameter group. The DB parameter group to be deleted can't be associated with any DB
 */
DeleteDBParameterGroupResponse * RdsClient::deleteDBParameterGroup(const DeleteDBParameterGroupRequest &request)
{
    return qobject_cast<DeleteDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing DB
 */
DeleteDBProxyResponse * RdsClient::deleteDBProxy(const DeleteDBProxyRequest &request)
{
    return qobject_cast<DeleteDBProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBProxyEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a <code>DBProxyEndpoint</code>. Doing so removes the ability to access the DB proxy using the endpoint that you
 * defined. The endpoint that you delete might have provided capabilities such as read/write or read-only operations, or
 * using a different VPC than the DB proxy's default
 */
DeleteDBProxyEndpointResponse * RdsClient::deleteDBProxyEndpoint(const DeleteDBProxyEndpointRequest &request)
{
    return qobject_cast<DeleteDBProxyEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a DB security
 *
 * group>
 *
 * The specified DB security group must not be associated with any DB
 *
 * instances> <note>
 *
 * EC2-Classic was retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend that you
 * migrate as soon as possible. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate from EC2-Classic to a VPC</a> in the
 * <i>Amazon EC2 User Guide</i>, the blog <a
 * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic Networking is Retiring
 * – Here’s How to Prepare</a>, and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving a DB instance not in a
 * VPC into a VPC</a> in the <i>Amazon RDS User
 */
DeleteDBSecurityGroupResponse * RdsClient::deleteDBSecurityGroup(const DeleteDBSecurityGroupRequest &request)
{
    return qobject_cast<DeleteDBSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteDBSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a DB snapshot. If the snapshot is being copied, the copy operation is
 *
 * terminated> <note>
 *
 * The DB snapshot must be in the <code>available</code> state to be
 */
DeleteDBSnapshotResponse * RdsClient::deleteDBSnapshot(const DeleteDBSnapshotRequest &request)
{
    return qobject_cast<DeleteDBSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
DeleteDBSubnetGroupResponse * RdsClient::deleteDBSubnetGroup(const DeleteDBSubnetGroupRequest &request)
{
    return qobject_cast<DeleteDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an RDS event notification
 */
DeleteEventSubscriptionResponse * RdsClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a global database cluster. The primary and secondary clusters must already be detached or destroyed
 *
 * first> <note>
 *
 * This action only applies to Aurora DB
 */
DeleteGlobalClusterResponse * RdsClient::deleteGlobalCluster(const DeleteGlobalClusterRequest &request)
{
    return qobject_cast<DeleteGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeleteOptionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing option
 */
DeleteOptionGroupResponse * RdsClient::deleteOptionGroup(const DeleteOptionGroupRequest &request)
{
    return qobject_cast<DeleteOptionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DeregisterDBProxyTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove the association between one or more <code>DBProxyTarget</code> data structures and a
 */
DeregisterDBProxyTargetsResponse * RdsClient::deregisterDBProxyTargets(const DeregisterDBProxyTargetsRequest &request)
{
    return qobject_cast<DeregisterDBProxyTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the attributes for a customer account. The attributes include Amazon RDS quotas for the account, such as
 * the number of DB instances allowed. The description for a quota includes the quota name, current usage toward that
 * quota, and the quota's maximum
 *
 * value>
 *
 * This command doesn't take any
 */
DescribeAccountAttributesResponse * RdsClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the set of CA certificates provided by Amazon RDS for this Amazon Web Services
 */
DescribeCertificatesResponse * RdsClient::describeCertificates(const DescribeCertificatesRequest &request)
{
    return qobject_cast<DescribeCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterBacktracksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about backtracks for a DB
 *
 * cluster>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora MySQL DB
 */
DescribeDBClusterBacktracksResponse * RdsClient::describeDBClusterBacktracks(const DescribeDBClusterBacktracksRequest &request)
{
    return qobject_cast<DescribeDBClusterBacktracksResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about endpoints for an Amazon Aurora DB
 *
 * cluster> <note>
 *
 * This action only applies to Aurora DB
 */
DescribeDBClusterEndpointsResponse * RdsClient::describeDBClusterEndpoints(const DescribeDBClusterEndpointsRequest &request)
{
    return qobject_cast<DescribeDBClusterEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a <code>DBClusterParameterGroupName</code>
 * parameter is specified, the list will contain only the description of the specified DB cluster parameter
 *
 * group>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DescribeDBClusterParameterGroupsResponse * RdsClient::describeDBClusterParameterGroups(const DescribeDBClusterParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBClusterParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB cluster parameter
 *
 * group>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DescribeDBClusterParametersResponse * RdsClient::describeDBClusterParameters(const DescribeDBClusterParametersRequest &request)
{
    return qobject_cast<DescribeDBClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DB cluster snapshot attribute names and values for a manual DB cluster
 *
 * snapshot>
 *
 * When sharing snapshots with other Amazon Web Services accounts, <code>DescribeDBClusterSnapshotAttributes</code> returns
 * the <code>restore</code> attribute and a list of IDs for the Amazon Web Services accounts that are authorized to copy or
 * restore the manual DB cluster snapshot. If <code>all</code> is included in the list of values for the
 * <code>restore</code> attribute, then the manual DB cluster snapshot is public and can be copied or restored by all
 * Amazon Web Services
 *
 * accounts>
 *
 * To add or remove access for an Amazon Web Services account to copy or restore a manual DB cluster snapshot, or to make
 * the manual DB cluster snapshot public or private, use the <code>ModifyDBClusterSnapshotAttribute</code> API
 */
DescribeDBClusterSnapshotAttributesResponse * RdsClient::describeDBClusterSnapshotAttributes(const DescribeDBClusterSnapshotAttributesRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClusterSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB cluster snapshots. This API action supports
 *
 * pagination>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
DescribeDBClusterSnapshotsResponse * RdsClient::describeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest &request)
{
    return qobject_cast<DescribeDBClusterSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Amazon Aurora DB clusters and Multi-AZ DB clusters. This API supports
 *
 * pagination>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 *
 * Guide</i>>
 *
 * This operation can also return information for Amazon Neptune DB instances and Amazon DocumentDB
 */
DescribeDBClustersResponse * RdsClient::describeDBClusters(const DescribeDBClustersRequest &request)
{
    return qobject_cast<DescribeDBClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the available DB
 */
DescribeDBEngineVersionsResponse * RdsClient::describeDBEngineVersions(const DescribeDBEngineVersionsRequest &request)
{
    return qobject_cast<DescribeDBEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBInstanceAutomatedBackupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays backups for both current and deleted instances. For example, use this operation to find details about automated
 * backups for previously deleted instances. Current instances with retention periods greater than zero (0) are returned
 * for both the <code>DescribeDBInstanceAutomatedBackups</code> and <code>DescribeDBInstances</code>
 *
 * operations>
 *
 * All parameters are
 */
DescribeDBInstanceAutomatedBackupsResponse * RdsClient::describeDBInstanceAutomatedBackups(const DescribeDBInstanceAutomatedBackupsRequest &request)
{
    return qobject_cast<DescribeDBInstanceAutomatedBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about provisioned RDS instances. This API supports
 *
 * pagination> <note>
 *
 * This operation can also return information for Amazon Neptune DB instances and Amazon DocumentDB
 */
DescribeDBInstancesResponse * RdsClient::describeDBInstances(const DescribeDBInstancesRequest &request)
{
    return qobject_cast<DescribeDBInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBLogFilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DB log files for the DB
 *
 * instance>
 *
 * This command doesn't apply to RDS
 */
DescribeDBLogFilesResponse * RdsClient::describeDBLogFiles(const DescribeDBLogFilesRequest &request)
{
    return qobject_cast<DescribeDBLogFilesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBParameterGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBParameterGroup</code> descriptions. If a <code>DBParameterGroupName</code> is specified, the
 * list will contain only the description of the specified DB parameter
 */
DescribeDBParameterGroupsResponse * RdsClient::describeDBParameterGroups(const DescribeDBParameterGroupsRequest &request)
{
    return qobject_cast<DescribeDBParameterGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the detailed parameter list for a particular DB parameter
 */
DescribeDBParametersResponse * RdsClient::describeDBParameters(const DescribeDBParametersRequest &request)
{
    return qobject_cast<DescribeDBParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBProxiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB
 */
DescribeDBProxiesResponse * RdsClient::describeDBProxies(const DescribeDBProxiesRequest &request)
{
    return qobject_cast<DescribeDBProxiesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBProxyEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB proxy
 */
DescribeDBProxyEndpointsResponse * RdsClient::describeDBProxyEndpoints(const DescribeDBProxyEndpointsRequest &request)
{
    return qobject_cast<DescribeDBProxyEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBProxyTargetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB proxy target groups, represented by <code>DBProxyTargetGroup</code> data
 */
DescribeDBProxyTargetGroupsResponse * RdsClient::describeDBProxyTargetGroups(const DescribeDBProxyTargetGroupsRequest &request)
{
    return qobject_cast<DescribeDBProxyTargetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBProxyTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about <code>DBProxyTarget</code> objects. This API supports
 */
DescribeDBProxyTargetsResponse * RdsClient::describeDBProxyTargets(const DescribeDBProxyTargetsRequest &request)
{
    return qobject_cast<DescribeDBProxyTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>DBSecurityGroup</code> descriptions. If a <code>DBSecurityGroupName</code> is specified, the
 * list will contain only the descriptions of the specified DB security
 *
 * group> <note>
 *
 * EC2-Classic was retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend that you
 * migrate as soon as possible. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate from EC2-Classic to a VPC</a> in the
 * <i>Amazon EC2 User Guide</i>, the blog <a
 * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic Networking is Retiring
 * – Here’s How to Prepare</a>, and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving a DB instance not in a
 * VPC into a VPC</a> in the <i>Amazon RDS User
 */
DescribeDBSecurityGroupsResponse * RdsClient::describeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeDBSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBSnapshotAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of DB snapshot attribute names and values for a manual DB
 *
 * snapshot>
 *
 * When sharing snapshots with other Amazon Web Services accounts, <code>DescribeDBSnapshotAttributes</code> returns the
 * <code>restore</code> attribute and a list of IDs for the Amazon Web Services accounts that are authorized to copy or
 * restore the manual DB snapshot. If <code>all</code> is included in the list of values for the <code>restore</code>
 * attribute, then the manual DB snapshot is public and can be copied or restored by all Amazon Web Services
 *
 * accounts>
 *
 * To add or remove access for an Amazon Web Services account to copy or restore a manual DB snapshot, or to make the
 * manual DB snapshot public or private, use the <code>ModifyDBSnapshotAttribute</code> API
 */
DescribeDBSnapshotAttributesResponse * RdsClient::describeDBSnapshotAttributes(const DescribeDBSnapshotAttributesRequest &request)
{
    return qobject_cast<DescribeDBSnapshotAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeDBSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about DB snapshots. This API action supports
 */
DescribeDBSnapshotsResponse * RdsClient::describeDBSnapshots(const DescribeDBSnapshotsRequest &request)
{
    return qobject_cast<DescribeDBSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
 * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
 */
DescribeDBSubnetGroupsResponse * RdsClient::describeDBSubnetGroups(const DescribeDBSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeDBSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeEngineDefaultClusterParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the cluster database
 *
 * engine>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 */
DescribeEngineDefaultClusterParametersResponse * RdsClient::describeEngineDefaultClusterParameters(const DescribeEngineDefaultClusterParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultClusterParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeEngineDefaultParametersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the default engine and system parameter information for the specified database
 */
DescribeEngineDefaultParametersResponse * RdsClient::describeEngineDefaultParameters(const DescribeEngineDefaultParametersRequest &request)
{
    return qobject_cast<DescribeEngineDefaultParametersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays a list of categories for all event source types, or, if specified, for a specified source type. You can also
 * see this list in the "Amazon RDS event categories and event messages" section of the <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.Messages.html"> <i>Amazon RDS User Guide</i>
 * </a> or the <a href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_Events.Messages.html"> <i>Amazon
 * Aurora User Guide</i>
 */
DescribeEventCategoriesResponse * RdsClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
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
DescribeEventSubscriptionsResponse * RdsClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns events related to DB instances, DB clusters, DB parameter groups, DB security groups, DB snapshots, DB cluster
 * snapshots, and RDS Proxies for the past 14 days. Events specific to a particular DB instance, DB cluster, DB parameter
 * group, DB security group, DB snapshot, DB cluster snapshot group, or RDS Proxy can be obtained by providing the name as
 * a
 *
 * parameter>
 *
 * For more information on working with events, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/working-with-events.html">Monitoring Amazon RDS events</a>
 * in the <i>Amazon RDS User Guide</i> and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/working-with-events.html">Monitoring Amazon Aurora
 * events</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * By default, RDS returns events that were generated in the past
 */
DescribeEventsResponse * RdsClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeExportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a snapshot export to Amazon S3. This API operation supports
 */
DescribeExportTasksResponse * RdsClient::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeGlobalClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about Aurora global database clusters. This API supports
 *
 * pagination>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora DB
 */
DescribeGlobalClustersResponse * RdsClient::describeGlobalClusters(const DescribeGlobalClustersRequest &request)
{
    return qobject_cast<DescribeGlobalClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeOptionGroupOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes all available
 */
DescribeOptionGroupOptionsResponse * RdsClient::describeOptionGroupOptions(const DescribeOptionGroupOptionsRequest &request)
{
    return qobject_cast<DescribeOptionGroupOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeOptionGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available option
 */
DescribeOptionGroupsResponse * RdsClient::describeOptionGroups(const DescribeOptionGroupsRequest &request)
{
    return qobject_cast<DescribeOptionGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeOrderableDBInstanceOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of orderable DB instance options for the specified DB engine, DB engine version, and DB instance
 */
DescribeOrderableDBInstanceOptionsResponse * RdsClient::describeOrderableDBInstanceOptions(const DescribeOrderableDBInstanceOptionsRequest &request)
{
    return qobject_cast<DescribeOrderableDBInstanceOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribePendingMaintenanceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of resources (for example, DB instances) that have at least one pending maintenance
 */
DescribePendingMaintenanceActionsResponse * RdsClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{
    return qobject_cast<DescribePendingMaintenanceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeReservedDBInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about reserved DB instances for this account, or about a specified reserved DB
 */
DescribeReservedDBInstancesResponse * RdsClient::describeReservedDBInstances(const DescribeReservedDBInstancesRequest &request)
{
    return qobject_cast<DescribeReservedDBInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeReservedDBInstancesOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists available reserved DB instance
 */
DescribeReservedDBInstancesOfferingsResponse * RdsClient::describeReservedDBInstancesOfferings(const DescribeReservedDBInstancesOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedDBInstancesOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeSourceRegionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the source Amazon Web Services Regions where the current Amazon Web Services Region can create a read
 * replica, copy a DB snapshot from, or replicate automated backups
 *
 * from>
 *
 * Use this operation to determine whether cross-Region features are supported between other Regions and your current
 * Region. This operation supports
 *
 * pagination>
 *
 * To return information about the Regions that are enabled for your account, or all Regions, use the EC2 operation
 * <code>DescribeRegions</code>. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeRegions.html"> DescribeRegions</a> in the
 * <i>Amazon EC2 API
 */
DescribeSourceRegionsResponse * RdsClient::describeSourceRegions(const DescribeSourceRegionsRequest &request)
{
    return qobject_cast<DescribeSourceRegionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DescribeValidDBInstanceModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can call <code>DescribeValidDBInstanceModifications</code> to learn what modifications you can make to your DB
 * instance. You can use this information when you call
 *
 * <code>ModifyDBInstance</code>>
 *
 * This command doesn't apply to RDS
 */
DescribeValidDBInstanceModificationsResponse * RdsClient::describeValidDBInstanceModifications(const DescribeValidDBInstanceModificationsRequest &request)
{
    return qobject_cast<DescribeValidDBInstanceModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * DownloadDBLogFilePortionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Downloads all or a portion of the specified log file, up to 1 MB in
 *
 * size>
 *
 * This command doesn't apply to RDS
 */
DownloadDBLogFilePortionResponse * RdsClient::downloadDBLogFilePortion(const DownloadDBLogFilePortionRequest &request)
{
    return qobject_cast<DownloadDBLogFilePortionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * FailoverDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forces a failover for a DB
 *
 * cluster>
 *
 * For an Aurora DB cluster, failover for a DB cluster promotes one of the Aurora Replicas (read-only instances) in the DB
 * cluster to be the primary DB instance (the cluster
 *
 * writer)>
 *
 * For a Multi-AZ DB cluster, failover for a DB cluster promotes one of the readable standby DB instances (read-only
 * instances) in the DB cluster to be the primary DB instance (the cluster
 *
 * writer)>
 *
 * An Amazon Aurora DB cluster automatically fails over to an Aurora Replica, if one exists, when the primary DB instance
 * fails. A Multi-AZ DB cluster automatically fails over to a readable standby DB instance when the primary DB instance
 *
 * fails>
 *
 * To simulate a failure of a primary instance for testing, you can force a failover. Because each instance in a DB cluster
 * has its own endpoint address, make sure to clean up and re-establish any existing connections that use those endpoint
 * addresses when the failover is
 *
 * complete>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
FailoverDBClusterResponse * RdsClient::failoverDBCluster(const FailoverDBClusterRequest &request)
{
    return qobject_cast<FailoverDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * FailoverGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the failover process for an Aurora global database
 *
 * (<a>GlobalCluster</a>)>
 *
 * A failover for an Aurora global database promotes one of secondary read-only DB clusters to be the primary DB cluster
 * and demotes the primary DB cluster to being a secondary (read-only) DB cluster. In other words, the role of the current
 * primary DB cluster and the selected (target) DB cluster are switched. The selected secondary DB cluster assumes full
 * read/write capabilities for the Aurora global
 *
 * database>
 *
 * For more information about failing over an Amazon Aurora global database, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-global-database-disaster-recovery.html#aurora-global-database-disaster-recovery.managed-failover">Managed
 * planned failover for Amazon Aurora global databases</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action applies to <a>GlobalCluster</a> (Aurora global databases) only. Use this action only on healthy Aurora
 * global databases with running Aurora DB clusters and no Region-wide outages, to test disaster recovery scenarios or to
 * reconfigure your Aurora global database
 */
FailoverGlobalClusterResponse * RdsClient::failoverGlobalCluster(const FailoverGlobalClusterRequest &request)
{
    return qobject_cast<FailoverGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on an Amazon RDS
 *
 * resource>
 *
 * For an overview on tagging an Amazon RDS resource, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a> in
 * the <i>Amazon RDS User
 */
ListTagsForResourceResponse * RdsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyActivityStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the audit policy state of a database activity stream to either locked (default) or unlocked. A locked policy is
 * read-only, whereas an unlocked policy is read/write. If your activity stream is started and locked, you can unlock it,
 * customize your audit policy, and then lock your activity stream. Restarting the activity stream isn't required. For more
 * information, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/DBActivityStreams.Modifying.html">
 * Modifying a database activity stream</a> in the <i>Amazon RDS User Guide</i>.
 *
 * </p
 *
 * This operation is supported for RDS for Oracle
 */
ModifyActivityStreamResponse * RdsClient::modifyActivityStream(const ModifyActivityStreamRequest &request)
{
    return qobject_cast<ModifyActivityStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Override the system-default Secure Sockets Layer/Transport Layer Security (SSL/TLS) certificate for Amazon RDS for new
 * DB instances, or remove the
 *
 * override>
 *
 * By using this operation, you can specify an RDS-approved SSL/TLS certificate for new DB instances that is different from
 * the default certificate provided by RDS. You can also use this operation to remove the override, so that new DB
 * instances use the default certificate provided by
 *
 * RDS>
 *
 * You might need to override the default certificate in the following
 *
 * situations> <ul> <li>
 *
 * You already migrated your applications to support the latest certificate authority (CA) certificate, but the new CA
 * certificate is not yet the RDS default CA certificate for the specified Amazon Web Services
 *
 * Region> </li> <li>
 *
 * RDS has already moved to a new default CA certificate for the specified Amazon Web Services Region, but you are still in
 * the process of supporting the new CA certificate. In this case, you temporarily need additional time to finish your
 * application
 *
 * changes> </li> </ul>
 *
 * For more information about rotating your SSL/TLS certificate for RDS DB engines, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html"> Rotating Your
 * SSL/TLS Certificate</a> in the <i>Amazon RDS User
 *
 * Guide</i>>
 *
 * For more information about rotating your SSL/TLS certificate for Aurora DB engines, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html"> Rotating
 * Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
 */
ModifyCertificatesResponse * RdsClient::modifyCertificates(const ModifyCertificatesRequest &request)
{
    return qobject_cast<ModifyCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyCurrentDBClusterCapacityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set the capacity of an Aurora Serverless v1 DB cluster to a specific
 *
 * value>
 *
 * Aurora Serverless v1 scales seamlessly based on the workload on the DB cluster. In some cases, the capacity might not
 * scale fast enough to meet a sudden change in workload, such as a large number of new transactions. Call
 * <code>ModifyCurrentDBClusterCapacity</code> to set the capacity
 *
 * explicitly>
 *
 * After this call sets the DB cluster capacity, Aurora Serverless v1 can automatically scale the DB cluster based on the
 * cooldown period for scaling up and the cooldown period for scaling
 *
 * down>
 *
 * For more information about Aurora Serverless v1, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using Amazon Aurora
 * Serverless v1</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <b>
 *
 * If you call <code>ModifyCurrentDBClusterCapacity</code> with the default <code>TimeoutAction</code>, connections that
 * prevent Aurora Serverless v1 from finding a scaling point might be dropped. For more information about scaling points,
 * see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.how-it-works.html#aurora-serverless.how-it-works.auto-scaling">
 * Autoscaling for Aurora Serverless v1</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> </b> <note>
 *
 * This action only applies to Aurora Serverless v1 DB
 */
ModifyCurrentDBClusterCapacityResponse * RdsClient::modifyCurrentDBClusterCapacity(const ModifyCurrentDBClusterCapacityRequest &request)
{
    return qobject_cast<ModifyCurrentDBClusterCapacityResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyCustomDBEngineVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the status of a custom engine version (CEV). You can find CEVs to modify by calling
 *
 * <code>DescribeDBEngineVersions</code>> <note>
 *
 * The MediaImport service that imports files from Amazon S3 to create CEVs isn't integrated with Amazon Web Services
 * CloudTrail. If you turn on data logging for Amazon RDS in CloudTrail, calls to the
 * <code>ModifyCustomDbEngineVersion</code> event aren't logged. However, you might see calls from the API gateway that
 * accesses your Amazon S3 bucket. These calls originate from the MediaImport service for the
 * <code>ModifyCustomDbEngineVersion</code>
 *
 * event> </note>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-cev.html#custom-cev.modify">Modifying CEV status</a>
 * in the <i>Amazon RDS User
 */
ModifyCustomDBEngineVersionResponse * RdsClient::modifyCustomDBEngineVersion(const ModifyCustomDBEngineVersionRequest &request)
{
    return qobject_cast<ModifyCustomDBEngineVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify the settings for an Amazon Aurora DB cluster or a Multi-AZ DB cluster. You can change one or more settings by
 * specifying these parameters and the new values in the
 *
 * request>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User
 */
ModifyDBClusterResponse * RdsClient::modifyDBCluster(const ModifyDBClusterRequest &request)
{
    return qobject_cast<ModifyDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBClusterEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the properties of an endpoint in an Amazon Aurora DB
 *
 * cluster> <note>
 *
 * This action only applies to Aurora DB
 */
ModifyDBClusterEndpointResponse * RdsClient::modifyDBClusterEndpoint(const ModifyDBClusterEndpointRequest &request)
{
    return qobject_cast<ModifyDBClusterEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB cluster parameter group. To modify more than one parameter, submit a list of the
 * following: <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
 * parameters can be modified in a single
 *
 * request> <b>
 *
 * After you create a DB cluster parameter group, you should wait at least 5 minutes before creating your first DB cluster
 * that uses that DB cluster parameter group as the default parameter group. This allows Amazon RDS to fully complete the
 * create action before the parameter group is used as the default for a new DB cluster. This is especially important for
 * parameters that are critical when creating the default database for a DB cluster, such as the character set for the
 * default database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i>
 * option of the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the
 * <code>DescribeDBClusterParameters</code> operation to verify that your DB cluster parameter group has been created or
 *
 * modified>
 *
 * If the modified DB cluster parameter group is used by an Aurora Serverless v1 cluster, Aurora applies the update
 * immediately. The cluster restart might interrupt your workload. In that case, your application must reopen any
 * connections and retry any transactions that were active when the parameter changes took
 *
 * effect> </b>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
ModifyDBClusterParameterGroupResponse * RdsClient::modifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBClusterSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB cluster
 *
 * snapshot>
 *
 * To share a manual DB cluster snapshot with other Amazon Web Services accounts, specify <code>restore</code> as the
 * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the Amazon Web
 * Services accounts that are authorized to restore the manual DB cluster snapshot. Use the value <code>all</code> to make
 * the manual DB cluster snapshot public, which means that it can be copied or restored by all Amazon Web Services
 *
 * accounts> <note>
 *
 * Don't add the <code>all</code> value for any manual DB cluster snapshots that contain private information that you don't
 * want available to all Amazon Web Services
 *
 * accounts> </note>
 *
 * If a manual DB cluster snapshot is encrypted, it can be shared, but only by specifying a list of authorized Amazon Web
 * Services account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value for that
 * parameter in this
 *
 * case>
 *
 * To view which Amazon Web Services accounts have access to copy or restore a manual DB cluster snapshot, or whether a
 * manual DB cluster snapshot is public or private, use the <a>DescribeDBClusterSnapshotAttributes</a> API operation. The
 * accounts are returned as values for the <code>restore</code>
 */
ModifyDBClusterSnapshotAttributeResponse * RdsClient::modifyDBClusterSnapshotAttribute(const ModifyDBClusterSnapshotAttributeRequest &request)
{
    return qobject_cast<ModifyDBClusterSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies settings for a DB instance. You can change one or more database configuration parameters by specifying these
 * parameters and the new values in the request. To learn what modifications you can make to your DB instance, call
 * <code>DescribeValidDBInstanceModifications</code> before you call
 */
ModifyDBInstanceResponse * RdsClient::modifyDBInstance(const ModifyDBInstanceRequest &request)
{
    return qobject_cast<ModifyDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group. To modify more than one parameter, submit a list of the following:
 * <code>ParameterName</code>, <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20 parameters can be
 * modified in a single
 *
 * request> <b>
 *
 * After you modify a DB parameter group, you should wait at least 5 minutes before creating your first DB instance that
 * uses that DB parameter group as the default parameter group. This allows Amazon RDS to fully complete the modify action
 * before the parameter group is used as the default for a new DB instance. This is especially important for parameters
 * that are critical when creating the default database for a DB instance, such as the character set for the default
 * database defined by the <code>character_set_database</code> parameter. You can use the <i>Parameter Groups</i> option of
 * the <a href="https://console.aws.amazon.com/rds/">Amazon RDS console</a> or the <i>DescribeDBParameters</i> command to
 * verify that your DB parameter group has been created or
 */
ModifyDBParameterGroupResponse * RdsClient::modifyDBParameterGroup(const ModifyDBParameterGroupRequest &request)
{
    return qobject_cast<ModifyDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBProxyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the settings for an existing DB
 */
ModifyDBProxyResponse * RdsClient::modifyDBProxy(const ModifyDBProxyRequest &request)
{
    return qobject_cast<ModifyDBProxyResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBProxyEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the settings for an existing DB proxy
 */
ModifyDBProxyEndpointResponse * RdsClient::modifyDBProxyEndpoint(const ModifyDBProxyEndpointRequest &request)
{
    return qobject_cast<ModifyDBProxyEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBProxyTargetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the properties of a
 */
ModifyDBProxyTargetGroupResponse * RdsClient::modifyDBProxyTargetGroup(const ModifyDBProxyTargetGroupRequest &request)
{
    return qobject_cast<ModifyDBProxyTargetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a manual DB snapshot with a new engine version. The snapshot can be encrypted or unencrypted, but not shared or
 * public.
 *
 * </p
 *
 * Amazon RDS supports upgrading DB snapshots for MySQL, PostgreSQL, and Oracle. This command doesn't apply to RDS
 */
ModifyDBSnapshotResponse * RdsClient::modifyDBSnapshot(const ModifyDBSnapshotRequest &request)
{
    return qobject_cast<ModifyDBSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an attribute and values to, or removes an attribute and values from, a manual DB
 *
 * snapshot>
 *
 * To share a manual DB snapshot with other Amazon Web Services accounts, specify <code>restore</code> as the
 * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add a list of IDs of the Amazon Web
 * Services accounts that are authorized to restore the manual DB snapshot. Uses the value <code>all</code> to make the
 * manual DB snapshot public, which means it can be copied or restored by all Amazon Web Services
 *
 * accounts> <note>
 *
 * Don't add the <code>all</code> value for any manual DB snapshots that contain private information that you don't want
 * available to all Amazon Web Services
 *
 * accounts> </note>
 *
 * If the manual DB snapshot is encrypted, it can be shared, but only by specifying a list of authorized Amazon Web
 * Services account IDs for the <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value for that
 * parameter in this
 *
 * case>
 *
 * To view which Amazon Web Services accounts have access to copy or restore a manual DB snapshot, or whether a manual DB
 * snapshot public or private, use the <a>DescribeDBSnapshotAttributes</a> API operation. The accounts are returned as
 * values for the <code>restore</code>
 */
ModifyDBSnapshotAttributeResponse * RdsClient::modifyDBSnapshotAttribute(const ModifyDBSnapshotAttributeRequest &request)
{
    return qobject_cast<ModifyDBSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyDBSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing DB subnet group. DB subnet groups must contain at least one subnet in at least two AZs in the
 * Amazon Web Services
 */
ModifyDBSubnetGroupResponse * RdsClient::modifyDBSubnetGroup(const ModifyDBSubnetGroupRequest &request)
{
    return qobject_cast<ModifyDBSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing RDS event notification subscription. You can't modify the source identifiers using this call. To
 * change source identifiers for a subscription, use the <code>AddSourceIdentifierToSubscription</code> and
 * <code>RemoveSourceIdentifierFromSubscription</code>
 *
 * calls>
 *
 * You can see a list of the event categories for a given source type (<code>SourceType</code>) in <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Events.html">Events</a> in the <i>Amazon RDS User
 * Guide</i> or by using the <code>DescribeEventCategories</code>
 */
ModifyEventSubscriptionResponse * RdsClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify a setting for an Amazon Aurora global cluster. You can change one or more database configuration parameters by
 * specifying these parameters and the new values in the request. For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora DB
 */
ModifyGlobalClusterResponse * RdsClient::modifyGlobalCluster(const ModifyGlobalClusterRequest &request)
{
    return qobject_cast<ModifyGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ModifyOptionGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing option
 */
ModifyOptionGroupResponse * RdsClient::modifyOptionGroup(const ModifyOptionGroupRequest &request)
{
    return qobject_cast<ModifyOptionGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * PromoteReadReplicaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Promotes a read replica DB instance to a standalone DB
 *
 * instance> <note> <ul> <li>
 *
 * Backup duration is a function of the amount of changes to the database since the previous backup. If you plan to promote
 * a read replica to a standalone instance, we recommend that you enable backups and complete at least one backup prior to
 * promotion. In addition, a read replica cannot be promoted to a standalone instance when it is in the
 * <code>backing-up</code> status. If you have enabled backups on your read replica, configure the automated backup window
 * so that daily backups do not interfere with read replica
 *
 * promotion> </li> <li>
 *
 * This command doesn't apply to Aurora MySQL, Aurora PostgreSQL, or RDS
 */
PromoteReadReplicaResponse * RdsClient::promoteReadReplica(const PromoteReadReplicaRequest &request)
{
    return qobject_cast<PromoteReadReplicaResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * PromoteReadReplicaDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Promotes a read replica DB cluster to a standalone DB
 */
PromoteReadReplicaDBClusterResponse * RdsClient::promoteReadReplicaDBCluster(const PromoteReadReplicaDBClusterRequest &request)
{
    return qobject_cast<PromoteReadReplicaDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * PurchaseReservedDBInstancesOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Purchases a reserved DB instance
 */
PurchaseReservedDBInstancesOfferingResponse * RdsClient::purchaseReservedDBInstancesOffering(const PurchaseReservedDBInstancesOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedDBInstancesOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RebootDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your DB cluster, usually for maintenance reasons. For example, if you make certain
 * modifications, or if you change the DB cluster parameter group associated with the DB cluster, reboot the DB cluster for
 * the changes to take
 *
 * effect>
 *
 * Rebooting a DB cluster restarts the database engine service. Rebooting a DB cluster results in a momentary outage,
 * during which the DB cluster status is set to
 *
 * rebooting>
 *
 * Use this operation only for a non-Aurora Multi-AZ DB
 *
 * cluster>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
RebootDBClusterResponse * RdsClient::rebootDBCluster(const RebootDBClusterRequest &request)
{
    return qobject_cast<RebootDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RebootDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You might need to reboot your DB instance, usually for maintenance reasons. For example, if you make certain
 * modifications, or if you change the DB parameter group associated with the DB instance, you must reboot the instance for
 * the changes to take
 *
 * effect>
 *
 * Rebooting a DB instance restarts the database engine service. Rebooting a DB instance results in a momentary outage,
 * during which the DB instance status is set to
 *
 * rebooting>
 *
 * For more information about rebooting, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_RebootInstance.html">Rebooting a DB Instance</a> in
 * the <i>Amazon RDS User Guide.</i>
 *
 * </p
 *
 * This command doesn't apply to RDS
 *
 * Custom>
 *
 * If your DB instance is part of a Multi-AZ DB cluster, you can reboot the DB cluster with the
 * <code>RebootDBCluster</code>
 */
RebootDBInstanceResponse * RdsClient::rebootDBInstance(const RebootDBInstanceRequest &request)
{
    return qobject_cast<RebootDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RegisterDBProxyTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate one or more <code>DBProxyTarget</code> data structures with a
 */
RegisterDBProxyTargetsResponse * RdsClient::registerDBProxyTargets(const RegisterDBProxyTargetsRequest &request)
{
    return qobject_cast<RegisterDBProxyTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RemoveFromGlobalClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches an Aurora secondary cluster from an Aurora global database cluster. The cluster becomes a standalone cluster
 * with read-write capability instead of being read-only and receiving data from a primary cluster in a different
 *
 * Region> <note>
 *
 * This action only applies to Aurora DB
 */
RemoveFromGlobalClusterResponse * RdsClient::removeFromGlobalCluster(const RemoveFromGlobalClusterRequest &request)
{
    return qobject_cast<RemoveFromGlobalClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RemoveRoleFromDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the asssociation of an Amazon Web Services Identity and Access Management (IAM) role from a DB
 *
 * cluster>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
RemoveRoleFromDBClusterResponse * RdsClient::removeRoleFromDBCluster(const RemoveRoleFromDBClusterRequest &request)
{
    return qobject_cast<RemoveRoleFromDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RemoveRoleFromDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Amazon Web Services Identity and Access Management (IAM) role from a DB
 */
RemoveRoleFromDBInstanceResponse * RdsClient::removeRoleFromDBInstance(const RemoveRoleFromDBInstanceRequest &request)
{
    return qobject_cast<RemoveRoleFromDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RemoveSourceIdentifierFromSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a source identifier from an existing RDS event notification
 */
RemoveSourceIdentifierFromSubscriptionResponse * RdsClient::removeSourceIdentifierFromSubscription(const RemoveSourceIdentifierFromSubscriptionRequest &request)
{
    return qobject_cast<RemoveSourceIdentifierFromSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from an Amazon RDS
 *
 * resource>
 *
 * For an overview on tagging an Amazon RDS resource, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.Tagging.html">Tagging Amazon RDS Resources</a> in
 * the <i>Amazon RDS User Guide.</i>
 */
RemoveTagsFromResourceResponse * RdsClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ResetDBClusterParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB cluster parameter group to the default value. To reset specific parameters submit a list
 * of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB cluster parameter
 * group, specify the <code>DBClusterParameterGroupName</code> and <code>ResetAllParameters</code>
 *
 * parameters>
 *
 * When resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code> request. You
 * must call <code>RebootDBInstance</code> for every DB instance in your DB cluster that you want the updated static
 * parameter to apply
 *
 * to>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
ResetDBClusterParameterGroupResponse * RdsClient::resetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest &request)
{
    return qobject_cast<ResetDBClusterParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * ResetDBParameterGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the parameters of a DB parameter group to the engine/system default value. To reset specific parameters,
 * provide a list of the following: <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
 * parameter group, specify the <code>DBParameterGroup</code> name and <code>ResetAllParameters</code> parameters. When
 * resetting the entire group, dynamic parameters are updated immediately and static parameters are set to
 * <code>pending-reboot</code> to take effect on the next DB instance restart or <code>RebootDBInstance</code>
 */
ResetDBParameterGroupResponse * RdsClient::resetDBParameterGroup(const ResetDBParameterGroupRequest &request)
{
    return qobject_cast<ResetDBParameterGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBClusterFromS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Aurora DB cluster from MySQL data stored in an Amazon S3 bucket. Amazon RDS must be authorized to
 * access the Amazon S3 bucket and the data must be created using the Percona XtraBackup utility as described in <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/AuroraMySQL.Migrating.ExtMySQL.html#AuroraMySQL.Migrating.ExtMySQL.S3">
 * Migrating Data from MySQL by Using an Amazon S3 Bucket</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only restores the DB cluster, not the DB instances for that DB cluster. You must invoke the
 * <code>CreateDBInstance</code> action to create DB instances for the restored DB cluster, specifying the identifier of
 * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB instances only after the
 * <code>RestoreDBClusterFromS3</code> action has completed and the DB cluster is
 *
 * available> </note>
 *
 * For more information on Amazon Aurora, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora DB clusters. The source DB engine must be
 */
RestoreDBClusterFromS3Response * RdsClient::restoreDBClusterFromS3(const RestoreDBClusterFromS3Request &request)
{
    return qobject_cast<RestoreDBClusterFromS3Response *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBClusterFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB cluster from a DB snapshot or DB cluster
 *
 * snapshot>
 *
 * The target DB cluster is created from the source snapshot with a default configuration. If you don't specify a security
 * group, the new DB cluster is associated with the default security
 *
 * group> <note>
 *
 * This action only restores the DB cluster, not the DB instances for that DB cluster. You must invoke the
 * <code>CreateDBInstance</code> action to create DB instances for the restored DB cluster, specifying the identifier of
 * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB instances only after the
 * <code>RestoreDBClusterFromSnapshot</code> action has completed and the DB cluster is
 *
 * available> </note>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
RestoreDBClusterFromSnapshotResponse * RdsClient::restoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest &request)
{
    return qobject_cast<RestoreDBClusterFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBClusterToPointInTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a DB cluster to an arbitrary point in time. Users can restore to any point in time before
 * <code>LatestRestorableTime</code> for up to <code>BackupRetentionPeriod</code> days. The target DB cluster is created
 * from the source DB cluster with the same configuration as the original DB cluster, except that the new DB cluster is
 * created with the default DB security
 *
 * group> <note>
 *
 * For Aurora, this action only restores the DB cluster, not the DB instances for that DB cluster. You must invoke the
 * <code>CreateDBInstance</code> action to create DB instances for the restored DB cluster, specifying the identifier of
 * the restored DB cluster in <code>DBClusterIdentifier</code>. You can create DB instances only after the
 * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB cluster is
 *
 * available> </note>
 *
 * For more information on Amazon Aurora DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/CHAP_AuroraOverview.html"> What is Amazon Aurora?</a>
 * in the <i>Amazon Aurora User
 *
 * Guide</i>>
 *
 * For more information on Multi-AZ DB clusters, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html"> Multi-AZ deployments
 * with two readable standby DB instances</a> in the <i>Amazon RDS User Guide.</i>
 */
RestoreDBClusterToPointInTimeResponse * RdsClient::restoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest &request)
{
    return qobject_cast<RestoreDBClusterToPointInTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBInstanceFromDBSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DB instance from a DB snapshot. The target database is created from the source database restore point with
 * most of the source's original configuration, including the default security group and DB parameter group. By default,
 * the new DB instance is created as a Single-AZ deployment, except when the instance is a SQL Server instance that has an
 * option group associated with mirroring. In this case, the instance becomes a Multi-AZ deployment, not a Single-AZ
 *
 * deployment>
 *
 * If you want to replace your original DB instance with the new, restored DB instance, then rename your original DB
 * instance before you call the RestoreDBInstanceFromDBSnapshot action. RDS doesn't allow two DB instances with the same
 * name. After you have renamed your original DB instance with a different identifier, then you can pass the original name
 * of the DB instance as the DBInstanceIdentifier in the call to the RestoreDBInstanceFromDBSnapshot action. The result is
 * that you replace the original DB instance with the DB instance created from the
 *
 * snapshot>
 *
 * If you are restoring from a shared manual DB snapshot, the <code>DBSnapshotIdentifier</code> must be the ARN of the
 * shared DB
 *
 * snapshot> <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
 */
RestoreDBInstanceFromDBSnapshotResponse * RdsClient::restoreDBInstanceFromDBSnapshot(const RestoreDBInstanceFromDBSnapshotRequest &request)
{
    return qobject_cast<RestoreDBInstanceFromDBSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBInstanceFromS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Amazon Relational Database Service (Amazon RDS) supports importing MySQL databases by using backup files. You can create
 * a backup of your on-premises database, store it on Amazon Simple Storage Service (Amazon S3), and then restore the
 * backup file onto a new Amazon RDS DB instance running MySQL. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/MySQL.Procedural.Importing.html">Importing Data into an
 * Amazon RDS MySQL DB Instance</a> in the <i>Amazon RDS User Guide.</i>
 *
 * </p
 *
 * This command doesn't apply to RDS
 */
RestoreDBInstanceFromS3Response * RdsClient::restoreDBInstanceFromS3(const RestoreDBInstanceFromS3Request &request)
{
    return qobject_cast<RestoreDBInstanceFromS3Response *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RestoreDBInstanceToPointInTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a DB instance to an arbitrary point in time. You can restore to any point in time before the time identified by
 * the LatestRestorableTime property. You can restore to a point up to the number of days specified by the
 * BackupRetentionPeriod
 *
 * property>
 *
 * The target database is created with most of the original configuration, but in a system-selected Availability Zone, with
 * the default security group, the default subnet group, and the default DB parameter group. By default, the new DB
 * instance is created as a single-AZ deployment except when the instance is a SQL Server instance that has an option group
 * that is associated with mirroring; in this case, the instance becomes a mirrored deployment and not a single-AZ
 *
 * deployment> <note>
 *
 * This command doesn't apply to Aurora MySQL and Aurora PostgreSQL. For Aurora, use
 */
RestoreDBInstanceToPointInTimeResponse * RdsClient::restoreDBInstanceToPointInTime(const RestoreDBInstanceToPointInTimeRequest &request)
{
    return qobject_cast<RestoreDBInstanceToPointInTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * RevokeDBSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes ingress from a DBSecurityGroup for previously authorized IP ranges or EC2 or VPC security groups. Required
 * parameters for this API are one of CIDRIP, EC2SecurityGroupId for VPC, or (EC2SecurityGroupOwnerId and either
 * EC2SecurityGroupName or
 *
 * EC2SecurityGroupId)> <note>
 *
 * EC2-Classic was retired on August 15, 2022. If you haven't migrated from EC2-Classic to a VPC, we recommend that you
 * migrate as soon as possible. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate from EC2-Classic to a VPC</a> in the
 * <i>Amazon EC2 User Guide</i>, the blog <a
 * href="http://aws.amazon.com/blogs/aws/ec2-classic-is-retiring-heres-how-to-prepare/">EC2-Classic Networking is Retiring
 * – Here’s How to Prepare</a>, and <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.Non-VPC2VPC.html">Moving a DB instance not in a
 * VPC into a VPC</a> in the <i>Amazon RDS User
 */
RevokeDBSecurityGroupIngressResponse * RdsClient::revokeDBSecurityGroupIngress(const RevokeDBSecurityGroupIngressRequest &request)
{
    return qobject_cast<RevokeDBSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StartActivityStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a database activity stream to monitor activity on the database. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database Activity Streams</a>
 * in the <i>Amazon Aurora User
 */
StartActivityStreamResponse * RdsClient::startActivityStream(const StartActivityStreamRequest &request)
{
    return qobject_cast<StartActivityStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StartDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an Amazon Aurora DB cluster that was stopped using the Amazon Web Services console, the stop-db-cluster CLI
 * command, or the StopDBCluster
 *
 * action>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html"> Stopping and
 * Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora DB
 */
StartDBClusterResponse * RdsClient::startDBCluster(const StartDBClusterRequest &request)
{
    return qobject_cast<StartDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StartDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an Amazon RDS DB instance that was stopped using the Amazon Web Services console, the stop-db-instance CLI
 * command, or the StopDBInstance
 *
 * action>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StartInstance.html">
 * Starting an Amazon RDS DB instance That Was Previously Stopped</a> in the <i>Amazon RDS User Guide.</i>
 *
 * </p <note>
 *
 * This command doesn't apply to RDS Custom, Aurora MySQL, and Aurora PostgreSQL. For Aurora DB clusters, use
 * <code>StartDBCluster</code>
 */
StartDBInstanceResponse * RdsClient::startDBInstance(const StartDBInstanceRequest &request)
{
    return qobject_cast<StartDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StartDBInstanceAutomatedBackupsReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables replication of automated backups to a different Amazon Web Services
 *
 * Region>
 *
 * This command doesn't apply to RDS
 *
 * Custom>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
 * Replicating Automated Backups to Another Amazon Web Services Region</a> in the <i>Amazon RDS User Guide.</i>
 */
StartDBInstanceAutomatedBackupsReplicationResponse * RdsClient::startDBInstanceAutomatedBackupsReplication(const StartDBInstanceAutomatedBackupsReplicationRequest &request)
{
    return qobject_cast<StartDBInstanceAutomatedBackupsReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StartExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an export of a snapshot to Amazon S3. The provided IAM role must have access to the S3
 *
 * bucket>
 *
 * This command doesn't apply to RDS
 */
StartExportTaskResponse * RdsClient::startExportTask(const StartExportTaskRequest &request)
{
    return qobject_cast<StartExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StopActivityStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a database activity stream that was started using the Amazon Web Services console, the
 * <code>start-activity-stream</code> CLI command, or the <code>StartActivityStream</code>
 *
 * action>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/DBActivityStreams.html">Database Activity Streams</a>
 * in the <i>Amazon Aurora User
 */
StopActivityStreamResponse * RdsClient::stopActivityStream(const StopActivityStreamRequest &request)
{
    return qobject_cast<StopActivityStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StopDBClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an Amazon Aurora DB cluster. When you stop a DB cluster, Aurora retains the DB cluster's metadata, including its
 * endpoints and DB parameter groups. Aurora also retains the transaction logs so you can do a point-in-time restore if
 *
 * necessary>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-cluster-stop-start.html"> Stopping and
 * Starting an Aurora Cluster</a> in the <i>Amazon Aurora User
 *
 * Guide</i>> <note>
 *
 * This action only applies to Aurora DB
 */
StopDBClusterResponse * RdsClient::stopDBCluster(const StopDBClusterRequest &request)
{
    return qobject_cast<StopDBClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StopDBInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an Amazon RDS DB instance. When you stop a DB instance, Amazon RDS retains the DB instance's metadata, including
 * its endpoint, DB parameter group, and option group membership. Amazon RDS also retains the transaction logs so you can
 * do a point-in-time restore if
 *
 * necessary>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_StopInstance.html">
 * Stopping an Amazon RDS DB Instance Temporarily</a> in the <i>Amazon RDS User Guide.</i>
 *
 * </p <note>
 *
 * This command doesn't apply to RDS Custom, Aurora MySQL, and Aurora PostgreSQL. For Aurora clusters, use
 * <code>StopDBCluster</code>
 */
StopDBInstanceResponse * RdsClient::stopDBInstance(const StopDBInstanceRequest &request)
{
    return qobject_cast<StopDBInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * StopDBInstanceAutomatedBackupsReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops automated backup replication for a DB
 *
 * instance>
 *
 * This command doesn't apply to RDS Custom, Aurora MySQL, and Aurora
 *
 * PostgreSQL>
 *
 * For more information, see <a href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_ReplicateBackups.html">
 * Replicating Automated Backups to Another Amazon Web Services Region</a> in the <i>Amazon RDS User Guide.</i>
 */
StopDBInstanceAutomatedBackupsReplicationResponse * RdsClient::stopDBInstanceAutomatedBackupsReplication(const StopDBInstanceAutomatedBackupsReplicationRequest &request)
{
    return qobject_cast<StopDBInstanceAutomatedBackupsReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsClient service, and returns a pointer to an
 * SwitchoverReadReplicaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Switches over an Oracle standby database in an Oracle Data Guard environment, making it the new primary database. Issue
 * this command in the Region that hosts the current standby
 */
SwitchoverReadReplicaResponse * RdsClient::switchoverReadReplica(const SwitchoverReadReplicaRequest &request)
{
    return qobject_cast<SwitchoverReadReplicaResponse *>(send(request));
}

/*!
 * \class QtAws::Rds::RdsClientPrivate
 * \brief The RdsClientPrivate class provides private implementation for RdsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRds
 */

/*!
 * Constructs a RdsClientPrivate object with public implementation \a q.
 */
RdsClientPrivate::RdsClientPrivate(RdsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Rds
} // namespace QtAws
