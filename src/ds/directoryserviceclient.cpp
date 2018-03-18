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

#include "directoryserviceclient.h"
#include "directoryserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DirectoryServiceClient
 *
 * @brief  Client for AWS Directory Service
 *
 * <fullname>AWS Directory Service</fullname>
 *
 * AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 * connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 * information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 * Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * Guide</a>> <note>
 *
 * AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 * .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 * other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 * href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/**
 * @brief  Constructs a new DirectoryServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DirectoryServiceClient::DirectoryServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DirectoryServiceClientPrivate(this), parent)
{
    Q_D(DirectoryServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new DirectoryServiceClient object.
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
DirectoryServiceClient::DirectoryServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DirectoryServiceClientPrivate(this), parent)
{
    Q_D(DirectoryServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * If the DNS server for your on-premises domain uses a publicly addressable IP address, you must add a CIDR address block
 * to correctly route traffic to and from your Microsoft AD on Amazon Web Services. <i>AddIpRoutes</i> adds this address
 * block. You can also use <i>AddIpRoutes</i> to facilitate routing traffic that uses public IP ranges from your Microsoft
 * AD on AWS to a peer VPC.
 *
 * </p
 *
 * Before you call <i>AddIpRoutes</i>, ensure that all of the required permissions have been explicitly granted through a
 * policy. For details about what permissions are required to run the <i>AddIpRoutes</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddIpRoutesResponse * DirectoryServiceClient::addIpRoutes(const AddIpRoutesRequest &request)
{

}

/**
 * Adds or overwrites one or more tags for the specified directory. Each directory can have a maximum of 50 tags. Each tag
 * consists of a key and optional value. Tag keys must be unique to each
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToResourceResponse * DirectoryServiceClient::addTagsToResource(const AddTagsToResourceRequest &request)
{

}

/**
 * Cancels an in-progress schema extension to a Microsoft AD directory. Once a schema extension has started replicating to
 * all domain controllers, the task can no longer be canceled. A schema extension can be canceled during any of the
 * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelSchemaExtensionResponse * DirectoryServiceClient::cancelSchemaExtension(const CancelSchemaExtensionRequest &request)
{

}

/**
 * Creates an AD Connector to connect to an on-premises
 *
 * directory>
 *
 * Before you call <i>ConnectDirectory</i>, ensure that all of the required permissions have been explicitly granted
 * through a policy. For details about what permissions are required to run the <i>ConnectDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConnectDirectoryResponse * DirectoryServiceClient::connectDirectory(const ConnectDirectoryRequest &request)
{

}

/**
 * Creates an alias for a directory and assigns the alias to the directory. The alias is used to construct the access URL
 * for the directory, such as
 *
 * <code>http://&lt;alias&gt;.awsapps.com</code>> <important>
 *
 * After an alias has been created, it cannot be deleted or reused, so this operation should only be used when absolutely
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAliasResponse * DirectoryServiceClient::createAlias(const CreateAliasRequest &request)
{

}

/**
 * Creates a computer account in the specified directory, and joins the computer to the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateComputerResponse * DirectoryServiceClient::createComputer(const CreateComputerRequest &request)
{

}

/**
 * Creates a conditional forwarder associated with your AWS directory. Conditional forwarders are required in order to set
 * up a trust relationship with another domain. The conditional forwarder points to the trusted
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConditionalForwarderResponse * DirectoryServiceClient::createConditionalForwarder(const CreateConditionalForwarderRequest &request)
{

}

/**
 * Creates a Simple AD
 *
 * directory>
 *
 * Before you call <i>CreateDirectory</i>, ensure that all of the required permissions have been explicitly granted through
 * a policy. For details about what permissions are required to run the <i>CreateDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDirectoryResponse * DirectoryServiceClient::createDirectory(const CreateDirectoryRequest &request)
{

}

/**
 * Creates a Microsoft AD in the AWS
 *
 * cloud>
 *
 * Before you call <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have been explicitly granted
 * through a policy. For details about what permissions are required to run the <i>CreateMicrosoftAD</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMicrosoftADResponse * DirectoryServiceClient::createMicrosoftAD(const CreateMicrosoftADRequest &request)
{

}

/**
 * Creates a snapshot of a Simple AD or Microsoft AD directory in the AWS
 *
 * cloud> <note>
 *
 * You cannot take snapshots of AD Connector
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSnapshotResponse * DirectoryServiceClient::createSnapshot(const CreateSnapshotRequest &request)
{

}

/**
 * AWS Directory Service for Microsoft Active Directory allows you to configure trust relationships. For example, you can
 * establish a trust between your Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active Directory.
 * This would allow you to provide users and groups access to resources in either domain, with a single set of
 *
 * credentials>
 *
 * This action initiates the creation of the AWS side of a trust relationship between a Microsoft AD in the AWS cloud and
 * an external
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTrustResponse * DirectoryServiceClient::createTrust(const CreateTrustRequest &request)
{

}

/**
 * Deletes a conditional forwarder that has been set up for your AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConditionalForwarderResponse * DirectoryServiceClient::deleteConditionalForwarder(const DeleteConditionalForwarderRequest &request)
{

}

/**
 * Deletes an AWS Directory Service
 *
 * directory>
 *
 * Before you call <i>DeleteDirectory</i>, ensure that all of the required permissions have been explicitly granted through
 * a policy. For details about what permissions are required to run the <i>DeleteDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDirectoryResponse * DirectoryServiceClient::deleteDirectory(const DeleteDirectoryRequest &request)
{

}

/**
 * Deletes a directory
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSnapshotResponse * DirectoryServiceClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{

}

/**
 * Deletes an existing trust relationship between your Microsoft AD in the AWS cloud and an external
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTrustResponse * DirectoryServiceClient::deleteTrust(const DeleteTrustRequest &request)
{

}

/**
 * Removes the specified directory as a publisher to the specified SNS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterEventTopicResponse * DirectoryServiceClient::deregisterEventTopic(const DeregisterEventTopicRequest &request)
{

}

/**
 * Obtains information about the conditional forwarders for this
 *
 * account>
 *
 * If no input parameters are provided for RemoteDomainNames, this request describes all conditional forwarders for the
 * specified directory
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConditionalForwardersResponse * DirectoryServiceClient::describeConditionalForwarders(const DescribeConditionalForwardersRequest &request)
{

}

/**
 * Obtains information about the directories that belong to this
 *
 * account>
 *
 * You can retrieve information about specific directories by passing the directory identifiers in the <i>DirectoryIds</i>
 * parameter. Otherwise, all directories that belong to the current account are
 *
 * returned>
 *
 * This operation supports pagination with the use of the <i>NextToken</i> request and response parameters. If more results
 * are available, the <i>DescribeDirectoriesResult.NextToken</i> member contains a token that you pass in the next call to
 * <a>DescribeDirectories</a> to retrieve the next set of
 *
 * items>
 *
 * You can also specify a maximum number of return results with the <i>Limit</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDirectoriesResponse * DirectoryServiceClient::describeDirectories(const DescribeDirectoriesRequest &request)
{

}

/**
 * Provides information about any domain controllers in your
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDomainControllersResponse * DirectoryServiceClient::describeDomainControllers(const DescribeDomainControllersRequest &request)
{

}

/**
 * Obtains information about which SNS topics receive status messages from the specified
 *
 * directory>
 *
 * If no input parameters are provided, such as DirectoryId or TopicName, this request describes all of the associations in
 * the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventTopicsResponse * DirectoryServiceClient::describeEventTopics(const DescribeEventTopicsRequest &request)
{

}

/**
 * Obtains information about the directory snapshots that belong to this
 *
 * account>
 *
 * This operation supports pagination with the use of the <i>NextToken</i> request and response parameters. If more results
 * are available, the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in the next call to
 * <a>DescribeSnapshots</a> to retrieve the next set of
 *
 * items>
 *
 * You can also specify a maximum number of return results with the <i>Limit</i>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSnapshotsResponse * DirectoryServiceClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{

}

/**
 * Obtains information about the trust relationships for this
 *
 * account>
 *
 * If no input parameters are provided, such as DirectoryId or TrustIds, this request describes all the trust relationships
 * belonging to the
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTrustsResponse * DirectoryServiceClient::describeTrusts(const DescribeTrustsRequest &request)
{

}

/**
 * Disables multi-factor authentication (MFA) with the Remote Authentication Dial In User Service (RADIUS) server for an AD
 * Connector
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableRadiusResponse * DirectoryServiceClient::disableRadius(const DisableRadiusRequest &request)
{

}

/**
 * Disables single-sign on for a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableSsoResponse * DirectoryServiceClient::disableSso(const DisableSsoRequest &request)
{

}

/**
 * Enables multi-factor authentication (MFA) with the Remote Authentication Dial In User Service (RADIUS) server for an AD
 * Connector
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableRadiusResponse * DirectoryServiceClient::enableRadius(const EnableRadiusRequest &request)
{

}

/**
 * Enables single sign-on for a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableSsoResponse * DirectoryServiceClient::enableSso(const EnableSsoRequest &request)
{

}

/**
 * Obtains directory limit information for the current
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDirectoryLimitsResponse * DirectoryServiceClient::getDirectoryLimits(const GetDirectoryLimitsRequest &request)
{

}

/**
 * Obtains the manual snapshot limits for a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSnapshotLimitsResponse * DirectoryServiceClient::getSnapshotLimits(const GetSnapshotLimitsRequest &request)
{

}

/**
 * Lists the address blocks that you have added to a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIpRoutesResponse * DirectoryServiceClient::listIpRoutes(const ListIpRoutesRequest &request)
{

}

/**
 * Lists all schema extensions applied to a Microsoft AD
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSchemaExtensionsResponse * DirectoryServiceClient::listSchemaExtensions(const ListSchemaExtensionsRequest &request)
{

}

/**
 * Lists all tags on a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * DirectoryServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * Associates a directory with an SNS topic. This establishes the directory as a publisher to the specified SNS topic. You
 * can then receive email or text (SMS) messages when the status of your directory changes. You get notified if your
 * directory goes from an Active status to an Impaired or Inoperable status. You also receive a notification when the
 * directory returns to an Active
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterEventTopicResponse * DirectoryServiceClient::registerEventTopic(const RegisterEventTopicRequest &request)
{

}

/**
 * Removes IP address blocks from a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveIpRoutesResponse * DirectoryServiceClient::removeIpRoutes(const RemoveIpRoutesRequest &request)
{

}

/**
 * Removes tags from a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromResourceResponse * DirectoryServiceClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{

}

/**
 * Restores a directory using an existing directory
 *
 * snapshot>
 *
 * When you restore a directory from a snapshot, any changes made to the directory after the snapshot date are
 *
 * overwritten>
 *
 * This action returns as soon as the restore operation is initiated. You can monitor the progress of the restore operation
 * by calling the <a>DescribeDirectories</a> operation with the directory identifier. When the
 * <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>, the restore operation is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreFromSnapshotResponse * DirectoryServiceClient::restoreFromSnapshot(const RestoreFromSnapshotRequest &request)
{

}

/**
 * Applies a schema extension to a Microsoft AD
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartSchemaExtensionResponse * DirectoryServiceClient::startSchemaExtension(const StartSchemaExtensionRequest &request)
{

}

/**
 * Updates a conditional forwarder that has been set up for your AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConditionalForwarderResponse * DirectoryServiceClient::updateConditionalForwarder(const UpdateConditionalForwarderRequest &request)
{

}

/**
 * Adds or removes domain controllers to or from the directory. Based on the difference between current value and new value
 * (provided through this API call), domain controllers will be added or removed. It may take up to 45 minutes for any new
 * domain controllers to become fully active once the requested number of domain controllers is updated. During this time,
 * you cannot make another update
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateNumberOfDomainControllersResponse * DirectoryServiceClient::updateNumberOfDomainControllers(const UpdateNumberOfDomainControllersRequest &request)
{

}

/**
 * Updates the Remote Authentication Dial In User Service (RADIUS) server information for an AD Connector
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRadiusResponse * DirectoryServiceClient::updateRadius(const UpdateRadiusRequest &request)
{

}

/**
 * AWS Directory Service for Microsoft Active Directory allows you to configure and verify trust
 *
 * relationships>
 *
 * This action verifies a trust relationship between your Microsoft AD in the AWS cloud and an external
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyTrustResponse * DirectoryServiceClient::verifyTrust(const VerifyTrustRequest &request)
{

}

/**
 * @internal
 *
 * @class  DirectoryServiceClientPrivate
 *
 * @brief  Private implementation for DirectoryServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DirectoryServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public DirectoryServiceClient instance.
 */
DirectoryServiceClientPrivate::DirectoryServiceClientPrivate(DirectoryServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DirectoryService
} // namespace AWS
