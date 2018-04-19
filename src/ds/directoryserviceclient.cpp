/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "directoryserviceclient.h"
#include "directoryserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "addiproutesrequest.h"
#include "addiproutesresponse.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "cancelschemaextensionrequest.h"
#include "cancelschemaextensionresponse.h"
#include "connectdirectoryrequest.h"
#include "connectdirectoryresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "createcomputerrequest.h"
#include "createcomputerresponse.h"
#include "createconditionalforwarderrequest.h"
#include "createconditionalforwarderresponse.h"
#include "createdirectoryrequest.h"
#include "createdirectoryresponse.h"
#include "createmicrosoftadrequest.h"
#include "createmicrosoftadresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createtrustrequest.h"
#include "createtrustresponse.h"
#include "deleteconditionalforwarderrequest.h"
#include "deleteconditionalforwarderresponse.h"
#include "deletedirectoryrequest.h"
#include "deletedirectoryresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deletetrustrequest.h"
#include "deletetrustresponse.h"
#include "deregistereventtopicrequest.h"
#include "deregistereventtopicresponse.h"
#include "describeconditionalforwardersrequest.h"
#include "describeconditionalforwardersresponse.h"
#include "describedirectoriesrequest.h"
#include "describedirectoriesresponse.h"
#include "describedomaincontrollersrequest.h"
#include "describedomaincontrollersresponse.h"
#include "describeeventtopicsrequest.h"
#include "describeeventtopicsresponse.h"
#include "describesnapshotsrequest.h"
#include "describesnapshotsresponse.h"
#include "describetrustsrequest.h"
#include "describetrustsresponse.h"
#include "disableradiusrequest.h"
#include "disableradiusresponse.h"
#include "disablessorequest.h"
#include "disablessoresponse.h"
#include "enableradiusrequest.h"
#include "enableradiusresponse.h"
#include "enablessorequest.h"
#include "enablessoresponse.h"
#include "getdirectorylimitsrequest.h"
#include "getdirectorylimitsresponse.h"
#include "getsnapshotlimitsrequest.h"
#include "getsnapshotlimitsresponse.h"
#include "listiproutesrequest.h"
#include "listiproutesresponse.h"
#include "listschemaextensionsrequest.h"
#include "listschemaextensionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "registereventtopicrequest.h"
#include "registereventtopicresponse.h"
#include "removeiproutesrequest.h"
#include "removeiproutesresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "restorefromsnapshotrequest.h"
#include "restorefromsnapshotresponse.h"
#include "startschemaextensionrequest.h"
#include "startschemaextensionresponse.h"
#include "updateconditionalforwarderrequest.h"
#include "updateconditionalforwarderresponse.h"
#include "updatenumberofdomaincontrollersrequest.h"
#include "updatenumberofdomaincontrollersresponse.h"
#include "updateradiusrequest.h"
#include "updateradiusresponse.h"
#include "verifytrustrequest.h"
#include "verifytrustresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DirectoryService
 * \brief The QtAws::DirectoryService contains stuff...
 *
 * \inmodule QtAwsDirectoryService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DirectoryServiceClient
 * \brief The DirectoryServiceClient class provides access to the AWS Directory Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/*!
 * \brief Constructs a DirectoryServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DirectoryServiceClient::DirectoryServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectoryServiceClientPrivate(this), parent)
{
    Q_D(DirectoryServiceClient);
    d->apiVersion = QStringLiteral("2015-04-16");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ds");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Directory Service");
    d->serviceName = QStringLiteral("ds");
}

/*!
 * \overload DirectoryServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DirectoryServiceClient::DirectoryServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectoryServiceClientPrivate(this), parent)
{
    Q_D(DirectoryServiceClient);
    d->apiVersion = QStringLiteral("2015-04-16");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ds");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Directory Service");
    d->serviceName = QStringLiteral("ds");
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * AddIpRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
AddIpRoutesResponse * DirectoryServiceClient::addIpRoutes(const AddIpRoutesRequest &request)
{
    return qobject_cast<AddIpRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified directory. Each directory can have a maximum of 50 tags. Each tag
 * consists of a key and optional value. Tag keys must be unique to each
 */
AddTagsToResourceResponse * DirectoryServiceClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CancelSchemaExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an in-progress schema extension to a Microsoft AD directory. Once a schema extension has started replicating to
 * all domain controllers, the task can no longer be canceled. A schema extension can be canceled during any of the
 * following states; <code>Initializing</code>, <code>CreatingSnapshot</code>, and
 */
CancelSchemaExtensionResponse * DirectoryServiceClient::cancelSchemaExtension(const CancelSchemaExtensionRequest &request)
{
    return qobject_cast<CancelSchemaExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * ConnectDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AD Connector to connect to an on-premises
 *
 * directory>
 *
 * Before you call <i>ConnectDirectory</i>, ensure that all of the required permissions have been explicitly granted
 * through a policy. For details about what permissions are required to run the <i>ConnectDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 */
ConnectDirectoryResponse * DirectoryServiceClient::connectDirectory(const ConnectDirectoryRequest &request)
{
    return qobject_cast<ConnectDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an alias for a directory and assigns the alias to the directory. The alias is used to construct the access URL
 * for the directory, such as
 *
 * <code>http://&lt;alias&gt;.awsapps.com</code>> <b>
 *
 * After an alias has been created, it cannot be deleted or reused, so this operation should only be used when absolutely
 */
CreateAliasResponse * DirectoryServiceClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateComputerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a computer account in the specified directory, and joins the computer to the
 */
CreateComputerResponse * DirectoryServiceClient::createComputer(const CreateComputerRequest &request)
{
    return qobject_cast<CreateComputerResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateConditionalForwarderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a conditional forwarder associated with your AWS directory. Conditional forwarders are required in order to set
 * up a trust relationship with another domain. The conditional forwarder points to the trusted
 */
CreateConditionalForwarderResponse * DirectoryServiceClient::createConditionalForwarder(const CreateConditionalForwarderRequest &request)
{
    return qobject_cast<CreateConditionalForwarderResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Simple AD
 *
 * directory>
 *
 * Before you call <i>CreateDirectory</i>, ensure that all of the required permissions have been explicitly granted through
 * a policy. For details about what permissions are required to run the <i>CreateDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 */
CreateDirectoryResponse * DirectoryServiceClient::createDirectory(const CreateDirectoryRequest &request)
{
    return qobject_cast<CreateDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateMicrosoftADResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Microsoft AD in the AWS
 *
 * cloud>
 *
 * Before you call <i>CreateMicrosoftAD</i>, ensure that all of the required permissions have been explicitly granted
 * through a policy. For details about what permissions are required to run the <i>CreateMicrosoftAD</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 */
CreateMicrosoftADResponse * DirectoryServiceClient::createMicrosoftAD(const CreateMicrosoftADRequest &request)
{
    return qobject_cast<CreateMicrosoftADResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of a Simple AD or Microsoft AD directory in the AWS
 *
 * cloud> <note>
 *
 * You cannot take snapshots of AD Connector
 */
CreateSnapshotResponse * DirectoryServiceClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * CreateTrustResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * AWS Directory Service for Microsoft Active Directory allows you to configure trust relationships. For example, you can
 * establish a trust between your Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active Directory.
 * This would allow you to provide users and groups access to resources in either domain, with a single set of
 *
 * credentials>
 *
 * This action initiates the creation of the AWS side of a trust relationship between a Microsoft AD in the AWS cloud and
 * an external
 */
CreateTrustResponse * DirectoryServiceClient::createTrust(const CreateTrustRequest &request)
{
    return qobject_cast<CreateTrustResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DeleteConditionalForwarderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a conditional forwarder that has been set up for your AWS
 */
DeleteConditionalForwarderResponse * DirectoryServiceClient::deleteConditionalForwarder(const DeleteConditionalForwarderRequest &request)
{
    return qobject_cast<DeleteConditionalForwarderResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DeleteDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Directory Service
 *
 * directory>
 *
 * Before you call <i>DeleteDirectory</i>, ensure that all of the required permissions have been explicitly granted through
 * a policy. For details about what permissions are required to run the <i>DeleteDirectory</i> operation, see <a
 * href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/UsingWithDS_IAM_ResourcePermissions.html">AWS
 * Directory Service API Permissions: Actions, Resources, and Conditions
 */
DeleteDirectoryResponse * DirectoryServiceClient::deleteDirectory(const DeleteDirectoryRequest &request)
{
    return qobject_cast<DeleteDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a directory
 */
DeleteSnapshotResponse * DirectoryServiceClient::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DeleteTrustResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing trust relationship between your Microsoft AD in the AWS cloud and an external
 */
DeleteTrustResponse * DirectoryServiceClient::deleteTrust(const DeleteTrustRequest &request)
{
    return qobject_cast<DeleteTrustResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DeregisterEventTopicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified directory as a publisher to the specified SNS
 */
DeregisterEventTopicResponse * DirectoryServiceClient::deregisterEventTopic(const DeregisterEventTopicRequest &request)
{
    return qobject_cast<DeregisterEventTopicResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeConditionalForwardersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains information about the conditional forwarders for this
 *
 * account>
 *
 * If no input parameters are provided for RemoteDomainNames, this request describes all conditional forwarders for the
 * specified directory
 */
DescribeConditionalForwardersResponse * DirectoryServiceClient::describeConditionalForwarders(const DescribeConditionalForwardersRequest &request)
{
    return qobject_cast<DescribeConditionalForwardersResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeDirectoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeDirectoriesResponse * DirectoryServiceClient::describeDirectories(const DescribeDirectoriesRequest &request)
{
    return qobject_cast<DescribeDirectoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeDomainControllersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about any domain controllers in your
 */
DescribeDomainControllersResponse * DirectoryServiceClient::describeDomainControllers(const DescribeDomainControllersRequest &request)
{
    return qobject_cast<DescribeDomainControllersResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeEventTopicsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains information about which SNS topics receive status messages from the specified
 *
 * directory>
 *
 * If no input parameters are provided, such as DirectoryId or TopicName, this request describes all of the associations in
 * the
 */
DescribeEventTopicsResponse * DirectoryServiceClient::describeEventTopics(const DescribeEventTopicsRequest &request)
{
    return qobject_cast<DescribeEventTopicsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
DescribeSnapshotsResponse * DirectoryServiceClient::describeSnapshots(const DescribeSnapshotsRequest &request)
{
    return qobject_cast<DescribeSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DescribeTrustsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains information about the trust relationships for this
 *
 * account>
 *
 * If no input parameters are provided, such as DirectoryId or TrustIds, this request describes all the trust relationships
 * belonging to the
 */
DescribeTrustsResponse * DirectoryServiceClient::describeTrusts(const DescribeTrustsRequest &request)
{
    return qobject_cast<DescribeTrustsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DisableRadiusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables multi-factor authentication (MFA) with the Remote Authentication Dial In User Service (RADIUS) server for an AD
 * Connector
 */
DisableRadiusResponse * DirectoryServiceClient::disableRadius(const DisableRadiusRequest &request)
{
    return qobject_cast<DisableRadiusResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * DisableSsoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables single-sign on for a
 */
DisableSsoResponse * DirectoryServiceClient::disableSso(const DisableSsoRequest &request)
{
    return qobject_cast<DisableSsoResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * EnableRadiusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables multi-factor authentication (MFA) with the Remote Authentication Dial In User Service (RADIUS) server for an AD
 * Connector
 */
EnableRadiusResponse * DirectoryServiceClient::enableRadius(const EnableRadiusRequest &request)
{
    return qobject_cast<EnableRadiusResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * EnableSsoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables single sign-on for a
 */
EnableSsoResponse * DirectoryServiceClient::enableSso(const EnableSsoRequest &request)
{
    return qobject_cast<EnableSsoResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * GetDirectoryLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains directory limit information for the current
 */
GetDirectoryLimitsResponse * DirectoryServiceClient::getDirectoryLimits(const GetDirectoryLimitsRequest &request)
{
    return qobject_cast<GetDirectoryLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * GetSnapshotLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtains the manual snapshot limits for a
 */
GetSnapshotLimitsResponse * DirectoryServiceClient::getSnapshotLimits(const GetSnapshotLimitsRequest &request)
{
    return qobject_cast<GetSnapshotLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * ListIpRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the address blocks that you have added to a
 */
ListIpRoutesResponse * DirectoryServiceClient::listIpRoutes(const ListIpRoutesRequest &request)
{
    return qobject_cast<ListIpRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * ListSchemaExtensionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all schema extensions applied to a Microsoft AD
 */
ListSchemaExtensionsResponse * DirectoryServiceClient::listSchemaExtensions(const ListSchemaExtensionsRequest &request)
{
    return qobject_cast<ListSchemaExtensionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags on a
 */
ListTagsForResourceResponse * DirectoryServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * RegisterEventTopicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a directory with an SNS topic. This establishes the directory as a publisher to the specified SNS topic. You
 * can then receive email or text (SMS) messages when the status of your directory changes. You get notified if your
 * directory goes from an Active status to an Impaired or Inoperable status. You also receive a notification when the
 * directory returns to an Active
 */
RegisterEventTopicResponse * DirectoryServiceClient::registerEventTopic(const RegisterEventTopicRequest &request)
{
    return qobject_cast<RegisterEventTopicResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * RemoveIpRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes IP address blocks from a
 */
RemoveIpRoutesResponse * DirectoryServiceClient::removeIpRoutes(const RemoveIpRoutesRequest &request)
{
    return qobject_cast<RemoveIpRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
RemoveTagsFromResourceResponse * DirectoryServiceClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * RestoreFromSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
RestoreFromSnapshotResponse * DirectoryServiceClient::restoreFromSnapshot(const RestoreFromSnapshotRequest &request)
{
    return qobject_cast<RestoreFromSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * StartSchemaExtensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a schema extension to a Microsoft AD
 */
StartSchemaExtensionResponse * DirectoryServiceClient::startSchemaExtension(const StartSchemaExtensionRequest &request)
{
    return qobject_cast<StartSchemaExtensionResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * UpdateConditionalForwarderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a conditional forwarder that has been set up for your AWS
 */
UpdateConditionalForwarderResponse * DirectoryServiceClient::updateConditionalForwarder(const UpdateConditionalForwarderRequest &request)
{
    return qobject_cast<UpdateConditionalForwarderResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * UpdateNumberOfDomainControllersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or removes domain controllers to or from the directory. Based on the difference between current value and new value
 * (provided through this API call), domain controllers will be added or removed. It may take up to 45 minutes for any new
 * domain controllers to become fully active once the requested number of domain controllers is updated. During this time,
 * you cannot make another update
 */
UpdateNumberOfDomainControllersResponse * DirectoryServiceClient::updateNumberOfDomainControllers(const UpdateNumberOfDomainControllersRequest &request)
{
    return qobject_cast<UpdateNumberOfDomainControllersResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * UpdateRadiusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Remote Authentication Dial In User Service (RADIUS) server information for an AD Connector
 */
UpdateRadiusResponse * DirectoryServiceClient::updateRadius(const UpdateRadiusRequest &request)
{
    return qobject_cast<UpdateRadiusResponse *>(send(request));
}

/*!
 * Sends \a request to the DirectoryServiceClient service, and returns a pointer to an
 * VerifyTrustResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * AWS Directory Service for Microsoft Active Directory allows you to configure and verify trust
 *
 * relationships>
 *
 * This action verifies a trust relationship between your Microsoft AD in the AWS cloud and an external
 */
VerifyTrustResponse * DirectoryServiceClient::verifyTrust(const VerifyTrustRequest &request)
{
    return qobject_cast<VerifyTrustResponse *>(send(request));
}

/*!
 * \class QtAws::DirectoryService::DirectoryServiceClientPrivate
 * \brief The DirectoryServiceClientPrivate class provides private implementation for DirectoryServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DirectoryServiceClientPrivate object with public implementation \a q.
 */
DirectoryServiceClientPrivate::DirectoryServiceClientPrivate(DirectoryServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DirectoryService
} // namespace QtAws
