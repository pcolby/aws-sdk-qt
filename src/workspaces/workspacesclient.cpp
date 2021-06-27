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

#include "workspacesclient.h"
#include "workspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "associateconnectionaliasrequest.h"
#include "associateconnectionaliasresponse.h"
#include "associateipgroupsrequest.h"
#include "associateipgroupsresponse.h"
#include "authorizeiprulesrequest.h"
#include "authorizeiprulesresponse.h"
#include "copyworkspaceimagerequest.h"
#include "copyworkspaceimageresponse.h"
#include "createconnectionaliasrequest.h"
#include "createconnectionaliasresponse.h"
#include "createipgrouprequest.h"
#include "createipgroupresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createworkspacebundlerequest.h"
#include "createworkspacebundleresponse.h"
#include "createworkspacesrequest.h"
#include "createworkspacesresponse.h"
#include "deleteconnectionaliasrequest.h"
#include "deleteconnectionaliasresponse.h"
#include "deleteipgrouprequest.h"
#include "deleteipgroupresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deleteworkspacebundlerequest.h"
#include "deleteworkspacebundleresponse.h"
#include "deleteworkspaceimagerequest.h"
#include "deleteworkspaceimageresponse.h"
#include "deregisterworkspacedirectoryrequest.h"
#include "deregisterworkspacedirectoryresponse.h"
#include "describeaccountrequest.h"
#include "describeaccountresponse.h"
#include "describeaccountmodificationsrequest.h"
#include "describeaccountmodificationsresponse.h"
#include "describeclientpropertiesrequest.h"
#include "describeclientpropertiesresponse.h"
#include "describeconnectionaliaspermissionsrequest.h"
#include "describeconnectionaliaspermissionsresponse.h"
#include "describeconnectionaliasesrequest.h"
#include "describeconnectionaliasesresponse.h"
#include "describeipgroupsrequest.h"
#include "describeipgroupsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describeworkspacebundlesrequest.h"
#include "describeworkspacebundlesresponse.h"
#include "describeworkspacedirectoriesrequest.h"
#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspaceimagepermissionsrequest.h"
#include "describeworkspaceimagepermissionsresponse.h"
#include "describeworkspaceimagesrequest.h"
#include "describeworkspaceimagesresponse.h"
#include "describeworkspacesnapshotsrequest.h"
#include "describeworkspacesnapshotsresponse.h"
#include "describeworkspacesrequest.h"
#include "describeworkspacesresponse.h"
#include "describeworkspacesconnectionstatusrequest.h"
#include "describeworkspacesconnectionstatusresponse.h"
#include "disassociateconnectionaliasrequest.h"
#include "disassociateconnectionaliasresponse.h"
#include "disassociateipgroupsrequest.h"
#include "disassociateipgroupsresponse.h"
#include "importworkspaceimagerequest.h"
#include "importworkspaceimageresponse.h"
#include "listavailablemanagementcidrrangesrequest.h"
#include "listavailablemanagementcidrrangesresponse.h"
#include "migrateworkspacerequest.h"
#include "migrateworkspaceresponse.h"
#include "modifyaccountrequest.h"
#include "modifyaccountresponse.h"
#include "modifyclientpropertiesrequest.h"
#include "modifyclientpropertiesresponse.h"
#include "modifyselfservicepermissionsrequest.h"
#include "modifyselfservicepermissionsresponse.h"
#include "modifyworkspaceaccesspropertiesrequest.h"
#include "modifyworkspaceaccesspropertiesresponse.h"
#include "modifyworkspacecreationpropertiesrequest.h"
#include "modifyworkspacecreationpropertiesresponse.h"
#include "modifyworkspacepropertiesrequest.h"
#include "modifyworkspacepropertiesresponse.h"
#include "modifyworkspacestaterequest.h"
#include "modifyworkspacestateresponse.h"
#include "rebootworkspacesrequest.h"
#include "rebootworkspacesresponse.h"
#include "rebuildworkspacesrequest.h"
#include "rebuildworkspacesresponse.h"
#include "registerworkspacedirectoryrequest.h"
#include "registerworkspacedirectoryresponse.h"
#include "restoreworkspacerequest.h"
#include "restoreworkspaceresponse.h"
#include "revokeiprulesrequest.h"
#include "revokeiprulesresponse.h"
#include "startworkspacesrequest.h"
#include "startworkspacesresponse.h"
#include "stopworkspacesrequest.h"
#include "stopworkspacesresponse.h"
#include "terminateworkspacesrequest.h"
#include "terminateworkspacesresponse.h"
#include "updateconnectionaliaspermissionrequest.h"
#include "updateconnectionaliaspermissionresponse.h"
#include "updaterulesofipgrouprequest.h"
#include "updaterulesofipgroupresponse.h"
#include "updateworkspacebundlerequest.h"
#include "updateworkspacebundleresponse.h"
#include "updateworkspaceimagepermissionrequest.h"
#include "updateworkspaceimagepermissionresponse.h"

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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-04-08"),
    QStringLiteral("workspaces"),
    QStringLiteral("Amazon WorkSpaces"),
    QStringLiteral("workspaces"),
    parent), d_ptr(new WorkSpacesClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-04-08"),
    QStringLiteral("workspaces"),
    QStringLiteral("Amazon WorkSpaces"),
    QStringLiteral("workspaces"),
    parent), d_ptr(new WorkSpacesClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * AssociateConnectionAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified connection alias with the specified directory to enable cross-Region redirection. For more
 * information, see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
 * Cross-Region Redirection for Amazon
 *
 * WorkSpaces</a>> <note>
 *
 * Before performing this operation, call <a
 * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
 * DescribeConnectionAliases</a> to make sure that the current state of the connection alias is
 */
AssociateConnectionAliasResponse * WorkSpacesClient::associateConnectionAlias(const AssociateConnectionAliasRequest &request)
{
    return qobject_cast<AssociateConnectionAliasResponse *>(send(request));
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
 * Copies the specified image from the specified Region to the current Region. For more information about copying images,
 * see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html"> Copy a Custom WorkSpaces
 *
 * Image</a>> <note>
 *
 * In the China (Ningxia) Region, you can copy images only within the same
 *
 * Region>
 *
 * In the AWS GovCloud (US-West) Region, to copy images to and from other AWS Regions, contact AWS
 *
 * Support> </note> <b>
 *
 * Before copying a shared image, be sure to verify that it has been shared from the correct AWS account. To determine if
 * an image has been shared and to see the AWS account ID that owns an image, use the <a
 * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
 * and <a
 * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
 * API operations.
 */
CopyWorkspaceImageResponse * WorkSpacesClient::copyWorkspaceImage(const CopyWorkspaceImageRequest &request)
{
    return qobject_cast<CopyWorkspaceImageResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * CreateConnectionAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified connection alias for use with cross-Region redirection. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html"> Cross-Region Redirection
 * for Amazon
 */
CreateConnectionAliasResponse * WorkSpacesClient::createConnectionAlias(const CreateConnectionAliasRequest &request)
{
    return qobject_cast<CreateConnectionAliasResponse *>(send(request));
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
 * CreateWorkspaceBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified WorkSpace bundle. For more information about creating WorkSpace bundles, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html"> Create a Custom WorkSpaces
 * Image and
 */
CreateWorkspaceBundleResponse * WorkSpacesClient::createWorkspaceBundle(const CreateWorkspaceBundleRequest &request)
{
    return qobject_cast<CreateWorkspaceBundleResponse *>(send(request));
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
 * DeleteConnectionAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified connection alias. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html"> Cross-Region Redirection
 * for Amazon
 *
 * WorkSpaces</a>> <b>
 *
 * <b>If you will no longer be using a fully qualified domain name (FQDN) as the registration code for your WorkSpaces
 * users, you must take certain precautions to prevent potential security issues.</b> For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
 * Security Considerations if You Stop Using Cross-Region
 *
 * Redirection</a>> </b> <note>
 *
 * To delete a connection alias that has been shared, the shared account must first disassociate the connection alias from
 * any directories it has been associated with. Then you must unshare the connection alias from the account it has been
 * shared with. You can delete a connection alias only after it is no longer shared with any accounts or associated with
 * any
 */
DeleteConnectionAliasResponse * WorkSpacesClient::deleteConnectionAlias(const DeleteConnectionAliasRequest &request)
{
    return qobject_cast<DeleteConnectionAliasResponse *>(send(request));
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
 * DeleteWorkspaceBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified WorkSpace bundle. For more information about deleting WorkSpace bundles, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html"> Delete a Custom WorkSpaces Bundle or
 */
DeleteWorkspaceBundleResponse * WorkSpacesClient::deleteWorkspaceBundle(const DeleteWorkspaceBundleRequest &request)
{
    return qobject_cast<DeleteWorkspaceBundleResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeleteWorkspaceImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image from your account. To delete an image, you must first delete any bundles that are associated
 * with the image and unshare the image if it is shared with other accounts.
 */
DeleteWorkspaceImageResponse * WorkSpacesClient::deleteWorkspaceImage(const DeleteWorkspaceImageRequest &request)
{
    return qobject_cast<DeleteWorkspaceImageResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DeregisterWorkspaceDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified directory. This operation is asynchronous and returns before the WorkSpace directory is
 * deregistered. If any WorkSpaces are registered to this directory, you must remove them before you can deregister the
 *
 * directory> <note>
 *
 * Simple AD and AD Connector are made available to you free of charge to use with WorkSpaces. If there are no WorkSpaces
 * being used with your Simple AD or AD Connector directory for 30 consecutive days, this directory will be automatically
 * deregistered for use with Amazon WorkSpaces, and you will be charged for this directory as per the <a
 * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services pricing
 *
 * terms</a>>
 *
 * To delete empty directories, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html"> Delete the Directory
 * for Your WorkSpaces</a>. If you delete your Simple AD or AD Connector directory, you can always create a new one when
 * you want to start using WorkSpaces
 */
DeregisterWorkspaceDirectoryResponse * WorkSpacesClient::deregisterWorkspaceDirectory(const DeregisterWorkspaceDirectoryRequest &request)
{
    return qobject_cast<DeregisterWorkspaceDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the configuration of Bring Your Own License (BYOL) for the specified
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
 * Retrieves a list that describes modifications to the configuration of Bring Your Own License (BYOL) for the specified
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
 * DescribeConnectionAliasPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions that the owner of a connection alias has granted to another AWS account for the specified
 * connection alias. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html"> Cross-Region Redirection
 * for Amazon
 */
DescribeConnectionAliasPermissionsResponse * WorkSpacesClient::describeConnectionAliasPermissions(const DescribeConnectionAliasPermissionsRequest &request)
{
    return qobject_cast<DescribeConnectionAliasPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeConnectionAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the connection aliases used for cross-Region redirection. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html"> Cross-Region Redirection
 * for Amazon
 */
DescribeConnectionAliasesResponse * WorkSpacesClient::describeConnectionAliases(const DescribeConnectionAliasesRequest &request)
{
    return qobject_cast<DescribeConnectionAliasesResponse *>(send(request));
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
 * Describes the available directories that are registered with Amazon
 */
DescribeWorkspaceDirectoriesResponse * WorkSpacesClient::describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request)
{
    return qobject_cast<DescribeWorkspaceDirectoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * DescribeWorkspaceImagePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions that the owner of an image has granted to other AWS accounts for an
 */
DescribeWorkspaceImagePermissionsResponse * WorkSpacesClient::describeWorkspaceImagePermissions(const DescribeWorkspaceImagePermissionsRequest &request)
{
    return qobject_cast<DescribeWorkspaceImagePermissionsResponse *>(send(request));
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
 * DescribeWorkspaceSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the snapshots for the specified
 */
DescribeWorkspaceSnapshotsResponse * WorkSpacesClient::describeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest &request)
{
    return qobject_cast<DescribeWorkspaceSnapshotsResponse *>(send(request));
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
 * DisassociateConnectionAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a connection alias from a directory. Disassociating a connection alias disables cross-Region redirection
 * between two directories in different AWS Regions. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html"> Cross-Region Redirection
 * for Amazon
 *
 * WorkSpaces</a>> <note>
 *
 * Before performing this operation, call <a
 * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
 * DescribeConnectionAliases</a> to make sure that the current state of the connection alias is
 */
DisassociateConnectionAliasResponse * WorkSpacesClient::disassociateConnectionAlias(const DisassociateConnectionAliasRequest &request)
{
    return qobject_cast<DisassociateConnectionAliasResponse *>(send(request));
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
 * Imports the specified Windows 10 Bring Your Own License (BYOL) image into Amazon WorkSpaces. The image must be an
 * already licensed Amazon EC2 image that is in your AWS account, and you must own the image. For more information about
 * creating BYOL images, see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
 * Bring Your Own Windows Desktop
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
 * interface when you enable Bring Your Own License (BYOL).
 *
 * </p
 *
 * This operation can be run only by AWS accounts that are enabled for BYOL. If your account isn't enabled for BYOL, you'll
 * receive an <code>AccessDeniedException</code>
 *
 * error>
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
 * MigrateWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Migrates a WorkSpace from one operating system or bundle type to another, while retaining the data on the user
 *
 * volume>
 *
 * The migration process recreates the WorkSpace by using a new root volume from the target bundle image and the user
 * volume from the last available snapshot of the original WorkSpace. During migration, the original
 * <code>D:\Users\%USERNAME%</code> user profile folder is renamed to
 * <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>. A new <code>D:\Users\%USERNAME%\</code> folder is generated
 * by the new OS. Certain files in the old user profile are moved to the new user
 *
 * profile>
 *
 * For available migration scenarios, details about what happens during migration, and best practices, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate a
 */
MigrateWorkspaceResponse * WorkSpacesClient::migrateWorkspace(const MigrateWorkspaceRequest &request)
{
    return qobject_cast<MigrateWorkspaceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the configuration of Bring Your Own License (BYOL) for the specified
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
 * ModifySelfservicePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the self-service WorkSpace management capabilities for your users. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
 * Self-Service WorkSpace Management Capabilities for Your
 */
ModifySelfservicePermissionsResponse * WorkSpacesClient::modifySelfservicePermissions(const ModifySelfservicePermissionsRequest &request)
{
    return qobject_cast<ModifySelfservicePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspaceAccessPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies which devices and operating systems users can use to access their WorkSpaces. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
 * Control Device
 */
ModifyWorkspaceAccessPropertiesResponse * WorkSpacesClient::modifyWorkspaceAccessProperties(const ModifyWorkspaceAccessPropertiesRequest &request)
{
    return qobject_cast<ModifyWorkspaceAccessPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspaceCreationPropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify the default properties used to create
 */
ModifyWorkspaceCreationPropertiesResponse * WorkSpacesClient::modifyWorkspaceCreationProperties(const ModifyWorkspaceCreationPropertiesRequest &request)
{
    return qobject_cast<ModifyWorkspaceCreationPropertiesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * ModifyWorkspacePropertiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified WorkSpace properties. For important information about how to modify the size of the root and user
 * volumes, see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html"> Modify a
 * WorkSpace</a>.
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
 * You cannot rebuild a WorkSpace unless its state is <code>AVAILABLE</code>, <code>ERROR</code>, <code>UNHEALTHY</code>,
 * <code>STOPPED</code>, or
 *
 * <code>REBOOTING</code>>
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
 * RegisterWorkspaceDirectoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the specified directory. This operation is asynchronous and returns before the WorkSpace directory is
 * registered. If this is the first time you are registering a directory, you will need to create the
 * workspaces_DefaultRole role before you can register a directory. For more information, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
 * Creating the workspaces_DefaultRole
 */
RegisterWorkspaceDirectoryResponse * WorkSpacesClient::registerWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest &request)
{
    return qobject_cast<RegisterWorkspaceDirectoryResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * RestoreWorkspaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores the specified WorkSpace to its last known healthy
 *
 * state>
 *
 * You cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>, <code>ERROR</code>, <code>UNHEALTHY</code>,
 * or
 *
 * <code>STOPPED</code>>
 *
 * Restoring a WorkSpace is a potentially destructive action that can result in the loss of data. For more information, see
 * <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore a
 *
 * WorkSpace</a>>
 *
 * This operation is asynchronous and returns before the WorkSpace is completely
 */
RestoreWorkspaceResponse * WorkSpacesClient::restoreWorkspace(const RestoreWorkspaceRequest &request)
{
    return qobject_cast<RestoreWorkspaceResponse *>(send(request));
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
 * WorkSpaces> <b>
 *
 * Terminating a WorkSpace is a permanent action and cannot be undone. The user's data is destroyed. If you need to archive
 * any user data, contact AWS Support before terminating the
 *
 * WorkSpace> </b>
 *
 * You can terminate a WorkSpace that is in any state except
 *
 * <code>SUSPENDED</code>>
 *
 * This operation is asynchronous and returns before the WorkSpaces have been completely terminated. After a WorkSpace is
 * terminated, the <code>TERMINATED</code> state is returned only briefly before the WorkSpace directory metadata is
 * cleaned up, so this state is rarely returned. To confirm that a WorkSpace is terminated, check for the WorkSpace ID by
 * using <a href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html"> DescribeWorkSpaces</a>.
 * If the WorkSpace ID isn't returned, then the WorkSpace has been successfully
 *
 * terminated> <note>
 *
 * Simple AD and AD Connector are made available to you free of charge to use with WorkSpaces. If there are no WorkSpaces
 * being used with your Simple AD or AD Connector directory for 30 consecutive days, this directory will be automatically
 * deregistered for use with Amazon WorkSpaces, and you will be charged for this directory as per the <a
 * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services pricing
 *
 * terms</a>>
 *
 * To delete empty directories, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html"> Delete the Directory
 * for Your WorkSpaces</a>. If you delete your Simple AD or AD Connector directory, you can always create a new one when
 * you want to start using WorkSpaces
 */
TerminateWorkspacesResponse * WorkSpacesClient::terminateWorkspaces(const TerminateWorkspacesRequest &request)
{
    return qobject_cast<TerminateWorkspacesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * UpdateConnectionAliasPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shares or unshares a connection alias with one account by specifying whether that account has permission to associate
 * the connection alias with a directory. If the association permission is granted, the connection alias is shared with
 * that account. If the association permission is revoked, the connection alias is unshared with the account. For more
 * information, see <a href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
 * Cross-Region Redirection for Amazon
 *
 * WorkSpaces</a>> <note> <ul> <li>
 *
 * Before performing this operation, call <a
 * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
 * DescribeConnectionAliases</a> to make sure that the current state of the connection alias is
 *
 * <code>CREATED</code>> </li> <li>
 *
 * To delete a connection alias that has been shared, the shared account must first disassociate the connection alias from
 * any directories it has been associated with. Then you must unshare the connection alias from the account it has been
 * shared with. You can delete a connection alias only after it is no longer shared with any accounts or associated with
 * any
 */
UpdateConnectionAliasPermissionResponse * WorkSpacesClient::updateConnectionAliasPermission(const UpdateConnectionAliasPermissionRequest &request)
{
    return qobject_cast<UpdateConnectionAliasPermissionResponse *>(send(request));
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
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * UpdateWorkspaceBundleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a WorkSpace bundle with a new image. For more information about updating WorkSpace bundles, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html"> Update a Custom WorkSpaces
 *
 * Bundle</a>> <b>
 *
 * Existing WorkSpaces aren't automatically updated when you update the bundle that they're based on. To update existing
 * WorkSpaces that are based on a bundle that you've updated, you must either rebuild the WorkSpaces or delete and recreate
 */
UpdateWorkspaceBundleResponse * WorkSpacesClient::updateWorkspaceBundle(const UpdateWorkspaceBundleRequest &request)
{
    return qobject_cast<UpdateWorkspaceBundleResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkSpacesClient service, and returns a pointer to an
 * UpdateWorkspaceImagePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shares or unshares an image with one account in the same AWS Region by specifying whether that account has permission to
 * copy the image. If the copy image permission is granted, the image is shared with that account. If the copy image
 * permission is revoked, the image is unshared with the
 *
 * account>
 *
 * After an image has been shared, the recipient account can copy the image to other AWS Regions as
 *
 * needed> <note>
 *
 * In the China (Ningxia) Region, you can copy images only within the same
 *
 * Region>
 *
 * In the AWS GovCloud (US-West) Region, to copy images to and from other AWS Regions, contact AWS
 *
 * Support> </note>
 *
 * For more information about sharing images, see <a
 * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html"> Share or Unshare a Custom
 * WorkSpaces
 *
 * Image</a>> <note> <ul> <li>
 *
 * To delete an image that has been shared, you must unshare the image before you delete
 *
 * it> </li> <li>
 *
 * Sharing Bring Your Own License (BYOL) images across AWS accounts isn't supported at this time in the AWS GovCloud
 * (US-West) Region. To share BYOL images across accounts in the AWS GovCloud (US-West) Region, contact AWS
 */
UpdateWorkspaceImagePermissionResponse * WorkSpacesClient::updateWorkspaceImagePermission(const UpdateWorkspaceImagePermissionRequest &request)
{
    return qobject_cast<UpdateWorkspaceImagePermissionResponse *>(send(request));
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
WorkSpacesClientPrivate::WorkSpacesClientPrivate(WorkSpacesClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace WorkSpaces
} // namespace QtAws
