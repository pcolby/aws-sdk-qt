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

#include "opsworkscmclient.h"
#include "opsworkscmclient_p.h"

#include "core/awssignaturev4.h"
#include "associatenoderequest.h"
#include "associatenoderesponse.h"
#include "createbackuprequest.h"
#include "createbackupresponse.h"
#include "createserverrequest.h"
#include "createserverresponse.h"
#include "deletebackuprequest.h"
#include "deletebackupresponse.h"
#include "deleteserverrequest.h"
#include "deleteserverresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describebackupsrequest.h"
#include "describebackupsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describenodeassociationstatusrequest.h"
#include "describenodeassociationstatusresponse.h"
#include "describeserversrequest.h"
#include "describeserversresponse.h"
#include "disassociatenoderequest.h"
#include "disassociatenoderesponse.h"
#include "exportserverengineattributerequest.h"
#include "exportserverengineattributeresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "restoreserverrequest.h"
#include "restoreserverresponse.h"
#include "startmaintenancerequest.h"
#include "startmaintenanceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateserverrequest.h"
#include "updateserverresponse.h"
#include "updateserverengineattributesrequest.h"
#include "updateserverengineattributesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::OpsWorksCm
 * \brief Contains classess for accessing AWS OpsWorks CM.
 *
 * \inmodule QtAwsOpsWorksCm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace OpsWorksCm {

/*!
 * \class QtAws::OpsWorksCm::OpsWorksCmClient
 * \brief The OpsWorksCmClient class provides access to the AWS OpsWorks CM service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpsWorksCm
 *
 *  <fullname>AWS OpsWorks CM</fullname>
 * 
 *  AWS OpsWorks for configuration management (CM) is a service that runs and manages configuration management servers. You
 *  can use AWS OpsWorks CM to create and manage AWS OpsWorks for Chef Automate and AWS OpsWorks for Puppet Enterprise
 *  servers, and add or remove nodes for the servers to
 * 
 *  manage>
 * 
 *  <b>Glossary of terms</b>
 * 
 *  </p <ul> <li>
 * 
 *  <b>Server</b>: A configuration management server that can be highly-available. The configuration management server runs
 *  on an Amazon Elastic Compute Cloud (EC2) instance, and may use various other AWS services, such as Amazon Relational
 *  Database Service (RDS) and Elastic Load Balancing. A server is a generic abstraction over the configuration manager that
 *  you want to use, much like Amazon RDS. In AWS OpsWorks CM, you do not start or stop servers. After you create servers,
 *  they continue to run until they are
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Engine</b>: The engine is the specific configuration manager that you want to use. Valid values in this release
 *  include <code>ChefAutomate</code> and
 * 
 *  <code>Puppet</code>> </li> <li>
 * 
 *  <b>Backup</b>: This is an application-level backup of the data that the configuration manager stores. AWS OpsWorks CM
 *  creates an S3 bucket for backups when you launch the first server. A backup maintains a snapshot of a server's
 *  configuration-related attributes at the time the backup
 * 
 *  starts> </li> <li>
 * 
 *  <b>Events</b>: Events are always related to a server. Events are written during server creation, when health checks run,
 *  when backups are created, when system maintenance is performed, etc. When you delete a server, the server's events are
 *  also
 * 
 *  deleted> </li> <li>
 * 
 *  <b>Account attributes</b>: Every account has attributes that are assigned in the AWS OpsWorks CM database. These
 *  attributes store information about configuration limits (servers, backups, etc.) and your customer account.
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks CM supports the following endpoints, all HTTPS. You must connect to one of the following endpoints. Your
 *  servers can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks-cm.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks-cm.eu-west-1.amazonaws.co> </li> </ul>
 * 
 *  For more information, see <a href="https://docs.aws.amazon.com/general/latest/gr/opsworks-service.html">AWS OpsWorks
 *  endpoints and quotas</a> in the AWS General
 * 
 *  Reference>
 * 
 *  <b>Throttling limits</b>
 * 
 *  </p
 * 
 *  All API operations allow for five requests per second with a burst of 10 requests per
 */

/*!
 * \brief Constructs a OpsWorksCmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
OpsWorksCmClient::OpsWorksCmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpsWorksCmClientPrivate(this), parent)
{
    Q_D(OpsWorksCmClient);
    d->apiVersion = QStringLiteral("2016-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("opsworks-cm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS OpsWorks CM");
    d->serviceName = QStringLiteral("opsworks-cm");
}

/*!
 * \overload OpsWorksCmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
OpsWorksCmClient::OpsWorksCmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new OpsWorksCmClientPrivate(this), parent)
{
    Q_D(OpsWorksCmClient);
    d->apiVersion = QStringLiteral("2016-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("opsworks-cm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS OpsWorks CM");
    d->serviceName = QStringLiteral("opsworks-cm");
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * AssociateNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a new node with the server. For more information about how to disassociate a node, see
 *
 * <a>DisassociateNode</a>>
 *
 * On a Chef server: This command is an alternative to <code>knife
 *
 * bootstrap</code>>
 *
 * Example (Chef): <code>aws opsworks-cm associate-node --server-name <i>MyServer</i> --node-name <i>MyManagedNode</i>
 * --engine-attributes "Name=<i>CHEF_ORGANIZATION</i>,Value=default"
 * "Name=<i>CHEF_NODE_PUBLIC_KEY</i>,Value=<i>public-key-pem</i>"</code>
 *
 * </p
 *
 * On a Puppet server, this command is an alternative to the <code>puppet cert sign</code> command that signs a Puppet node
 * CSR.
 *
 * </p
 *
 * Example (Puppet): <code>aws opsworks-cm associate-node --server-name <i>MyServer</i> --node-name <i>MyManagedNode</i>
 * --engine-attributes "Name=<i>PUPPET_NODE_CSR</i>,Value=<i>csr-pem</i>"</code>
 *
 * </p
 *
 * A node can can only be associated with servers that are in a <code>HEALTHY</code> state. Otherwise, an
 * <code>InvalidStateException</code> is thrown. A <code>ResourceNotFoundException</code> is thrown when the server does
 * not exist. A <code>ValidationException</code> is raised when parameters of the request are not valid. The AssociateNode
 * API call can be integrated into Auto Scaling configurations, AWS Cloudformation templates, or the user data of a
 * server's instance.
 */
AssociateNodeResponse * OpsWorksCmClient::associateNode(const AssociateNodeRequest &request)
{
    return qobject_cast<AssociateNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * CreateBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application-level backup of a server. While the server is in the <code>BACKING_UP</code> state, the server
 * cannot be changed, and no additional backup can be created.
 *
 * </p
 *
 * Backups can be created for servers in <code>RUNNING</code>, <code>HEALTHY</code>, and <code>UNHEALTHY</code> states. By
 * default, you can create a maximum of 50 manual backups.
 *
 * </p
 *
 * This operation is asynchronous.
 *
 * </p
 *
 * A <code>LimitExceededException</code> is thrown when the maximum number of manual backups is reached. An
 * <code>InvalidStateException</code> is thrown when the server is not in any of the following states: RUNNING, HEALTHY, or
 * UNHEALTHY. A <code>ResourceNotFoundException</code> is thrown when the server is not found. A
 * <code>ValidationException</code> is thrown when parameters of the request are not valid.
 */
CreateBackupResponse * OpsWorksCmClient::createBackup(const CreateBackupRequest &request)
{
    return qobject_cast<CreateBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * CreateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and immedately starts a new server. The server is ready to use when it is in the <code>HEALTHY</code> state. By
 * default, you can create a maximum of 10 servers.
 *
 * </p
 *
 * This operation is asynchronous.
 *
 * </p
 *
 * A <code>LimitExceededException</code> is thrown when you have created the maximum number of servers (10). A
 * <code>ResourceAlreadyExistsException</code> is thrown when a server with the same name already exists in the account. A
 * <code>ResourceNotFoundException</code> is thrown when you specify a backup ID that is not valid or is for a backup that
 * does not exist. A <code>ValidationException</code> is thrown when parameters of the request are not valid.
 *
 * </p
 *
 * If you do not specify a security group by adding the <code>SecurityGroupIds</code> parameter, AWS OpsWorks creates a new
 * security group.
 *
 * </p
 *
 * <i>Chef Automate:</i> The default security group opens the Chef server to the world on TCP port 443. If a KeyName is
 * present, AWS OpsWorks enables SSH access. SSH is also open to the world on TCP port 22.
 *
 * </p
 *
 * <i>Puppet Enterprise:</i> The default security group opens TCP ports 22, 443, 4433, 8140, 8142, 8143, and 8170. If a
 * KeyName is present, AWS OpsWorks enables SSH access. SSH is also open to the world on TCP port 22.
 *
 * </p
 *
 * By default, your server is accessible from any IP address. We recommend that you update your security group rules to
 * allow access from known IP addresses and address ranges only. To edit security group rules, open Security Groups in the
 * navigation pane of the EC2 management console.
 *
 * </p
 *
 * To specify your own domain for a server, and provide your own self-signed or CA-signed certificate and private key,
 * specify values for <code>CustomDomain</code>, <code>CustomCertificate</code>, and
 */
CreateServerResponse * OpsWorksCmClient::createServer(const CreateServerRequest &request)
{
    return qobject_cast<CreateServerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DeleteBackupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a backup. You can delete both manual and automated backups. This operation is asynchronous.
 *
 * </p
 *
 * An <code>InvalidStateException</code> is thrown when a backup deletion is already in progress. A
 * <code>ResourceNotFoundException</code> is thrown when the backup does not exist. A <code>ValidationException</code> is
 * thrown when parameters of the request are not valid.
 */
DeleteBackupResponse * OpsWorksCmClient::deleteBackup(const DeleteBackupRequest &request)
{
    return qobject_cast<DeleteBackupResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DeleteServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the server and the underlying AWS CloudFormation stacks (including the server's EC2 instance). When you run this
 * command, the server state is updated to <code>DELETING</code>. After the server is deleted, it is no longer returned by
 * <code>DescribeServer</code> requests. If the AWS CloudFormation stack cannot be deleted, the server cannot be deleted.
 *
 * </p
 *
 * This operation is asynchronous.
 *
 * </p
 *
 * An <code>InvalidStateException</code> is thrown when a server deletion is already in progress. A
 * <code>ResourceNotFoundException</code> is thrown when the server does not exist. A <code>ValidationException</code> is
 * raised when parameters of the request are not valid.
 *
 * </p
 */
DeleteServerResponse * OpsWorksCmClient::deleteServer(const DeleteServerRequest &request)
{
    return qobject_cast<DeleteServerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your OpsWorks-CM account attributes.
 *
 * </p
 *
 * This operation is synchronous.
 */
DescribeAccountAttributesResponse * OpsWorksCmClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DescribeBackupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes backups. The results are ordered by time, with newest backups first. If you do not specify a BackupId or
 * ServerName, the command returns all backups.
 *
 * </p
 *
 * This operation is synchronous.
 *
 * </p
 *
 * A <code>ResourceNotFoundException</code> is thrown when the backup does not exist. A <code>ValidationException</code> is
 * raised when parameters of the request are not valid.
 */
DescribeBackupsResponse * OpsWorksCmClient::describeBackups(const DescribeBackupsRequest &request)
{
    return qobject_cast<DescribeBackupsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes events for a specified server. Results are ordered by time, with newest events first.
 *
 * </p
 *
 * This operation is synchronous.
 *
 * </p
 *
 * A <code>ResourceNotFoundException</code> is thrown when the server does not exist. A <code>ValidationException</code> is
 * raised when parameters of the request are not valid.
 */
DescribeEventsResponse * OpsWorksCmClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DescribeNodeAssociationStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the current status of an existing association or disassociation request.
 *
 * </p
 *
 * A <code>ResourceNotFoundException</code> is thrown when no recent association or disassociation request with the
 * specified token is found, or when the server does not exist. A <code>ValidationException</code> is raised when
 * parameters of the request are not valid.
 */
DescribeNodeAssociationStatusResponse * OpsWorksCmClient::describeNodeAssociationStatus(const DescribeNodeAssociationStatusRequest &request)
{
    return qobject_cast<DescribeNodeAssociationStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DescribeServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all configuration management servers that are identified with your account. Only the stored results from Amazon
 * DynamoDB are returned. AWS OpsWorks CM does not query other services.
 *
 * </p
 *
 * This operation is synchronous.
 *
 * </p
 *
 * A <code>ResourceNotFoundException</code> is thrown when the server does not exist. A <code>ValidationException</code> is
 * raised when parameters of the request are not valid.
 */
DescribeServersResponse * OpsWorksCmClient::describeServers(const DescribeServersRequest &request)
{
    return qobject_cast<DescribeServersResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * DisassociateNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a node from an AWS OpsWorks CM server, and removes the node from the server's managed nodes. After a node
 * is disassociated, the node key pair is no longer valid for accessing the configuration manager's API. For more
 * information about how to associate a node, see <a>AssociateNode</a>.
 *
 * </p
 *
 * A node can can only be disassociated from a server that is in a <code>HEALTHY</code> state. Otherwise, an
 * <code>InvalidStateException</code> is thrown. A <code>ResourceNotFoundException</code> is thrown when the server does
 * not exist. A <code>ValidationException</code> is raised when parameters of the request are not valid.
 */
DisassociateNodeResponse * OpsWorksCmClient::disassociateNode(const DisassociateNodeRequest &request)
{
    return qobject_cast<DisassociateNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * ExportServerEngineAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a specified server engine attribute as a base64-encoded string. For example, you can export user data that you
 * can use in EC2 to associate nodes with a server.
 *
 * </p
 *
 * This operation is synchronous.
 *
 * </p
 *
 * A <code>ValidationException</code> is raised when parameters of the request are not valid. A
 * <code>ResourceNotFoundException</code> is thrown when the server does not exist. An <code>InvalidStateException</code>
 * is thrown when the server is in any of the following states: CREATING, TERMINATED, FAILED or DELETING.
 */
ExportServerEngineAttributeResponse * OpsWorksCmClient::exportServerEngineAttribute(const ExportServerEngineAttributeRequest &request)
{
    return qobject_cast<ExportServerEngineAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags that are applied to the specified AWS OpsWorks for Chef Automate or AWS OpsWorks for Puppet
 * Enterprise servers or
 */
ListTagsForResourceResponse * OpsWorksCmClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * RestoreServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a backup to a server that is in a <code>CONNECTION_LOST</code>, <code>HEALTHY</code>, <code>RUNNING</code>,
 * <code>UNHEALTHY</code>, or <code>TERMINATED</code> state. When you run RestoreServer, the server's EC2 instance is
 * deleted, and a new EC2 instance is configured. RestoreServer maintains the existing server endpoint, so configuration
 * management of the server's client devices (nodes) should continue to work.
 *
 * </p
 *
 * Restoring from a backup is performed by creating a new EC2 instance. If restoration is successful, and the server is in
 * a <code>HEALTHY</code> state, AWS OpsWorks CM switches traffic over to the new instance. After restoration is finished,
 * the old EC2 instance is maintained in a <code>Running</code> or <code>Stopped</code> state, but is eventually
 *
 * terminated>
 *
 * This operation is asynchronous.
 *
 * </p
 *
 * An <code>InvalidStateException</code> is thrown when the server is not in a valid state. A
 * <code>ResourceNotFoundException</code> is thrown when the server does not exist. A <code>ValidationException</code> is
 * raised when parameters of the request are not valid.
 */
RestoreServerResponse * OpsWorksCmClient::restoreServer(const RestoreServerRequest &request)
{
    return qobject_cast<RestoreServerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * StartMaintenanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Manually starts server maintenance. This command can be useful if an earlier maintenance attempt failed, and the
 * underlying cause of maintenance failure has been resolved. The server is in an <code>UNDER_MAINTENANCE</code> state
 * while maintenance is in progress.
 *
 * </p
 *
 * Maintenance can only be started on servers in <code>HEALTHY</code> and <code>UNHEALTHY</code> states. Otherwise, an
 * <code>InvalidStateException</code> is thrown. A <code>ResourceNotFoundException</code> is thrown when the server does
 * not exist. A <code>ValidationException</code> is raised when parameters of the request are not valid.
 */
StartMaintenanceResponse * OpsWorksCmClient::startMaintenance(const StartMaintenanceRequest &request)
{
    return qobject_cast<StartMaintenanceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies tags to an AWS OpsWorks for Chef Automate or AWS OpsWorks for Puppet Enterprise server, or to server
 */
TagResourceResponse * OpsWorksCmClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes specified tags from an AWS OpsWorks-CM server or
 */
UntagResourceResponse * OpsWorksCmClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * UpdateServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates settings for a server.
 *
 * </p
 *
 * This operation is synchronous.
 */
UpdateServerResponse * OpsWorksCmClient::updateServer(const UpdateServerRequest &request)
{
    return qobject_cast<UpdateServerResponse *>(send(request));
}

/*!
 * Sends \a request to the OpsWorksCmClient service, and returns a pointer to an
 * UpdateServerEngineAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates engine-specific attributes on a specified server. The server enters the <code>MODIFYING</code> state when this
 * operation is in progress. Only one update can occur at a time. You can use this command to reset a Chef server's public
 * key (<code>CHEF_PIVOTAL_KEY</code>) or a Puppet server's admin password (<code>PUPPET_ADMIN_PASSWORD</code>).
 *
 * </p
 *
 * This operation is asynchronous.
 *
 * </p
 *
 * This operation can only be called for servers in <code>HEALTHY</code> or <code>UNHEALTHY</code> states. Otherwise, an
 * <code>InvalidStateException</code> is raised. A <code>ResourceNotFoundException</code> is thrown when the server does
 * not exist. A <code>ValidationException</code> is raised when parameters of the request are not valid.
 */
UpdateServerEngineAttributesResponse * OpsWorksCmClient::updateServerEngineAttributes(const UpdateServerEngineAttributesRequest &request)
{
    return qobject_cast<UpdateServerEngineAttributesResponse *>(send(request));
}

/*!
 * \class QtAws::OpsWorksCm::OpsWorksCmClientPrivate
 * \brief The OpsWorksCmClientPrivate class provides private implementation for OpsWorksCmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsOpsWorksCm
 */

/*!
 * Constructs a OpsWorksCmClientPrivate object with public implementation \a q.
 */
OpsWorksCmClientPrivate::OpsWorksCmClientPrivate(OpsWorksCmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace OpsWorksCm
} // namespace QtAws
