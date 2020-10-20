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

#include "workspacesclient.h"
#include "workspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "associateipgroupsrequest.h"
#include "associateipgroupsresponse.h"
#include "authorizeiprulesrequest.h"
#include "authorizeiprulesresponse.h"
#include "copyworkspaceimagerequest.h"
#include "copyworkspaceimageresponse.h"
#include "createipgrouprequest.h"
#include "createipgroupresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createworkspacesrequest.h"
#include "createworkspacesresponse.h"
#include "deleteipgrouprequest.h"
#include "deleteipgroupresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deleteworkspaceimagerequest.h"
#include "deleteworkspaceimageresponse.h"
#include "describeaccountrequest.h"
#include "describeaccountresponse.h"
#include "describeaccountmodificationsrequest.h"
#include "describeaccountmodificationsresponse.h"
#include "describeclientpropertiesrequest.h"
#include "describeclientpropertiesresponse.h"
#include "describeipgroupsrequest.h"
#include "describeipgroupsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesresponse.h"
#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspaceimagesrequest.h"
#include "describeworkspaceimagesresponse.h"
#include "describeworkspacesrequest.h"
#include "describeworkspacesresponse.h"
#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "disassociateipgroupsrequest.h"
#include "disassociateipgroupsresponse.h"
#include "importworkspaceimagerequest.h"
#include "importworkspaceimageresponse.h"
#include "listavailablemanagementcidrrangesrequest.h"
#include "listavailablemanagementcidrrangesresponse.h"
#include "modifyaccountrequest.h"
#include "modifyaccountresponse.h"
#include "modifyclientpropertiesrequest.h"
#include "modifyclientpropertiesresponse.h"
#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesresponse.h"
#include "modifyworkspacestaterequest.h"
#include "modifyworkspacestateresponse.h"
#include "rebootworkspacesrequest.h"
#include "rebootworkspacesresponse.h"
#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesresponse.h"
#include "revokeiprulesrequest.h"
#include "revokeiprulesresponse.h"
#include "startworkspacesrequest.h"
#include "startworkspacesresponse.h"
#include "stopworkspacesrequest.h"
#include "stopworkspacesresponse.h"
#include "terminateworkspacesrequest.h"
#include "terminateworkspacesresponse.h"
#include "updaterulesofipgrouprequest.h"
#include "updaterulesofipgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkSpaces
 * \brief Contains classess for accessing Amazon WorkSpaces.
 *
 * \inmodule QtAwsWorkSpaces
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::WorkSpacesClient
 * \brief The WorkSpacesClient class provides access to the Amazon WorkSpaces service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 */

/*!
 * \brief Constructs a WorkSpacesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkSpacesClient::WorkSpacesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * \overload WorkSpacesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkSpacesClient::WorkSpacesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkSpacesClientPrivate(this), parent)
{
    Q_D(WorkSpacesClient);
    d->apiVersion = QStringLiteral("2015-04-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workspaces");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkSpaces");
    d->serviceName = QStringLiteral("workspaces");
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * AssociateIpGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified IP access control group with the specified
 */
AssociateIpGroupsResponse * WorkSpacesClient::associateIpGroups(const AssociateIpGroupsRequest &request)
{
    return qobject_cast<AssociateIpGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * AuthorizeIpRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more rules to the specified IP access control
 *
 * group>
 *
 * This action gives users permission to access their WorkSpaces from the CIDR address ranges specified in the
 */
AuthorizeIpRulesResponse * WorkSpacesClient::authorizeIpRules(const AuthorizeIpRulesRequest &request)
{
    return qobject_cast<AuthorizeIpRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CopyWorkspaceImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified image from the specified Region to the current
 */
CopyWorkspaceImageResponse * WorkSpacesClient::copyWorkspaceImage(const CopyWorkspaceImageRequest &request)
{
    return qobject_cast<CopyWorkspaceImageResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateIpGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IP access control
 *
 * group>
 *
 * An IP access control group provides you with the ability to control the IP addresses from which users are allowed to
 * access their WorkSpaces. To specify the CIDR address ranges, add rules to your IP access control group and then
 * associate the group with your directory. You can add rules when you create the group or at any time using
 *
 * <a>AuthorizeIpRules</a>>
 *
 * There is a default IP access control group associated with your directory. If you don't associate an IP access control
 * group with your directory, the default group is used. The default group includes a default rule that allows users to
 * access their WorkSpaces from anywhere. You cannot modify the default IP access control group for your
 */
CreateIpGroupResponse * WorkSpacesClient::createIpGroup(const CreateIpGroupRequest &request)
{
    return qobject_cast<CreateIpGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified tags for the specified WorkSpaces
 */
CreateTagsResponse * WorkSpacesClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more
 *
 * WorkSpaces>
 *
 * This operation is asynchronous and returns before the WorkSpaces are
 */
CreateWorkspacesResponse * WorkSpacesClient::createWorkspaces(const CreateWorkspacesRequest &request)
{
    return qobject_cast<CreateWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeleteIpGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified IP access control
 *
 * group>
 *
 * You cannot delete an IP access control group that is associated with a
 */
DeleteIpGroupResponse * WorkSpacesClient::deleteIpGroup(const DeleteIpGroupRequest &request)
{
    return qobject_cast<DeleteIpGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from the specified WorkSpaces
 */
DeleteTagsResponse * WorkSpacesClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeleteWorkspaceImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image from your account. To delete an image, you must first delete any bundles that are associated
 * with the image and un-share the image if it is shared with other accounts.
 */
DeleteWorkspaceImageResponse * WorkSpacesClient::deleteWorkspaceImage(const DeleteWorkspaceImageRequest &request)
{
    return qobject_cast<DeleteWorkspaceImageResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the configuration of bring your own license (BYOL) for the specified
 */
DescribeAccountResponse * WorkSpacesClient::describeAccount(const DescribeAccountRequest &request)
{
    return qobject_cast<DescribeAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeAccountModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes modifications to the configuration of bring your own license (BYOL) for the specified
 */
DescribeAccountModificationsResponse * WorkSpacesClient::describeAccountModifications(const DescribeAccountModificationsRequest &request)
{
    return qobject_cast<DescribeAccountModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeClientPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified Amazon WorkSpaces
 */
DescribeClientPropertiesResponse * WorkSpacesClient::describeClientProperties(const DescribeClientPropertiesRequest &request)
{
    return qobject_cast<DescribeClientPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeIpGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your IP access control
 */
DescribeIpGroupsResponse * WorkSpacesClient::describeIpGroups(const DescribeIpGroupsRequest &request)
{
    return qobject_cast<DescribeIpGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified tags for the specified WorkSpaces
 */
DescribeTagsResponse * WorkSpacesClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceBundlesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the available WorkSpace
 *
 * bundles>
 *
 * You can filter the results using either bundle ID or owner, but not
 */
DescribeWorkspaceBundlesResponse * WorkSpacesClient::describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request)
{
    return qobject_cast<DescribeWorkspaceBundlesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceDirectoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the available AWS Directory Service directories that are registered with Amazon
 */
DescribeWorkspaceDirectoriesResponse * WorkSpacesClient::describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request)
{
    return qobject_cast<DescribeWorkspaceDirectoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified images, if the image identifiers are provided. Otherwise, all
 * images in the account are described.
 */
DescribeWorkspaceImagesResponse * WorkSpacesClient::describeWorkspaceImages(const DescribeWorkspaceImagesRequest &request)
{
    return qobject_cast<DescribeWorkspaceImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * WorkSpaces>
 *
 * You can filter the results by using the bundle identifier, directory identifier, or owner, but you can specify only one
 * filter at a
 */
DescribeWorkspacesResponse * WorkSpacesClient::describeWorkspaces(const DescribeWorkspacesRequest &request)
{
    return qobject_cast<DescribeWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspacesConnectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connection status of the specified
 */
DescribeWorkspacesConnectionStatusResponse * WorkSpacesClient::describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request)
{
    return qobject_cast<DescribeWorkspacesConnectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DisassociateIpGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified IP access control group from the specified
 */
DisassociateIpGroupsResponse * WorkSpacesClient::disassociateIpGroups(const DisassociateIpGroupsRequest &request)
{
    return qobject_cast<DisassociateIpGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ImportWorkspaceImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the specified Windows 7 or Windows 10 bring your own license (BYOL) image into Amazon WorkSpaces. The image must
 * be an already licensed EC2 image that is in your AWS account, and you must own the image.
 */
ImportWorkspaceImageResponse * WorkSpacesClient::importWorkspaceImage(const ImportWorkspaceImageRequest &request)
{
    return qobject_cast<ImportWorkspaceImageResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ListAvailableManagementCidrRangesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that you can use for the network management
 * interface when you enable bring your own license (BYOL).
 *
 * </p
 *
 * The management network interface is connected to a secure Amazon WorkSpaces management network. It is used for
 * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and to allow Amazon WorkSpaces to manage
 * the
 */
ListAvailableManagementCidrRangesResponse * WorkSpacesClient::listAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest &request)
{
    return qobject_cast<ListAvailableManagementCidrRangesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the configuration of bring your own license (BYOL) for the specified
 */
ModifyAccountResponse * WorkSpacesClient::modifyAccount(const ModifyAccountRequest &request)
{
    return qobject_cast<ModifyAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyClientPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the properties of the specified Amazon WorkSpaces
 */
ModifyClientPropertiesResponse * WorkSpacesClient::modifyClientProperties(const ModifyClientPropertiesRequest &request)
{
    return qobject_cast<ModifyClientPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspacePropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified WorkSpace
 */
ModifyWorkspacePropertiesResponse * WorkSpacesClient::modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request)
{
    return qobject_cast<ModifyWorkspacePropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspaceStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the state of the specified
 *
 * WorkSpace>
 *
 * To maintain a WorkSpace without being interrupted, set the WorkSpace state to <code>ADMIN_MAINTENANCE</code>. WorkSpaces
 * in this state do not respond to requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in this
 * state is not stopped. Users cannot log into a WorkSpace in the <code>ADMIN_MAINTENANCE</code>
 */
ModifyWorkspaceStateResponse * WorkSpacesClient::modifyWorkspaceState(const ModifyWorkspaceStateRequest &request)
{
    return qobject_cast<ModifyWorkspaceStateResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RebootWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots the specified
 *
 * WorkSpaces>
 *
 * You cannot reboot a WorkSpace unless its state is <code>AVAILABLE</code> or
 *
 * <code>UNHEALTHY</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have
 */
RebootWorkspacesResponse * WorkSpacesClient::rebootWorkspaces(const RebootWorkspacesRequest &request)
{
    return qobject_cast<RebootWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RebuildWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rebuilds the specified
 *
 * WorkSpace>
 *
 * You cannot rebuild a WorkSpace unless its state is <code>AVAILABLE</code>, <code>ERROR</code>, or
 *
 * <code>UNHEALTHY</code>>
 *
 * Rebuilding a WorkSpace is a potentially destructive action that can result in the loss of data. For more information,
 * see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild a
 *
 * WorkSpace</a>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 */
RebuildWorkspacesResponse * WorkSpacesClient::rebuildWorkspaces(const RebuildWorkspacesRequest &request)
{
    return qobject_cast<RebuildWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RevokeIpRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more rules from the specified IP access control
 */
RevokeIpRulesResponse * WorkSpacesClient::revokeIpRules(const RevokeIpRulesRequest &request)
{
    return qobject_cast<RevokeIpRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * StartWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified
 *
 * WorkSpaces>
 *
 * You cannot start a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of
 */
StartWorkspacesResponse * WorkSpacesClient::startWorkspaces(const StartWorkspacesRequest &request)
{
    return qobject_cast<StartWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * StopWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified
 *
 * WorkSpaces>
 *
 * You cannot stop a WorkSpace unless it has a running mode of <code>AutoStop</code> and a state of <code>AVAILABLE</code>,
 * <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
 */
StopWorkspacesResponse * WorkSpacesClient::stopWorkspaces(const StopWorkspacesRequest &request)
{
    return qobject_cast<StopWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * TerminateWorkspacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the specified
 *
 * WorkSpaces>
 *
 * Terminating a WorkSpace is a permanent action and cannot be undone. The user's data is destroyed. If you need to archive
 * any user data, contact Amazon Web Services before terminating the
 *
 * WorkSpace>
 *
 * You can terminate a WorkSpace that is in any state except
 *
 * <code>SUSPENDED</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely
 */
TerminateWorkspacesResponse * WorkSpacesClient::terminateWorkspaces(const TerminateWorkspacesRequest &request)
{
    return qobject_cast<TerminateWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * UpdateRulesOfIpGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the current rules of the specified IP access control group with the specified
 */
UpdateRulesOfIpGroupResponse * WorkSpacesClient::updateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest &request)
{
    return qobject_cast<UpdateRulesOfIpGroupResponse *>(send(request));
}

/*!
 * \class QtAws::WorkSpaces::WorkSpacesClientPrivate
 * \brief The WorkSpacesClientPrivate class provides private implementation for WorkSpacesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a WorkSpacesClientPrivate object with public implementation \a q.
 */
WorkSpacesClientPrivate::WorkSpacesClientPrivate(WorkSpacesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkSpaces
} // namespace QtAws
