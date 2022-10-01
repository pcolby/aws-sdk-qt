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

#include "ramclient.h"
#include "ramclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptresourceshareinvitationrequest.h"
#include "acceptresourceshareinvitationresponse.h"
#include "associateresourcesharerequest.h"
#include "associateresourceshareresponse.h"
#include "associateresourcesharepermissionrequest.h"
#include "associateresourcesharepermissionresponse.h"
#include "createresourcesharerequest.h"
#include "createresourceshareresponse.h"
#include "deleteresourcesharerequest.h"
#include "deleteresourceshareresponse.h"
#include "disassociateresourcesharerequest.h"
#include "disassociateresourceshareresponse.h"
#include "disassociateresourcesharepermissionrequest.h"
#include "disassociateresourcesharepermissionresponse.h"
#include "enablesharingwithawsorganizationrequest.h"
#include "enablesharingwithawsorganizationresponse.h"
#include "getpermissionrequest.h"
#include "getpermissionresponse.h"
#include "getresourcepoliciesrequest.h"
#include "getresourcepoliciesresponse.h"
#include "getresourceshareassociationsrequest.h"
#include "getresourceshareassociationsresponse.h"
#include "getresourceshareinvitationsrequest.h"
#include "getresourceshareinvitationsresponse.h"
#include "getresourcesharesrequest.h"
#include "getresourcesharesresponse.h"
#include "listpendinginvitationresourcesrequest.h"
#include "listpendinginvitationresourcesresponse.h"
#include "listpermissionversionsrequest.h"
#include "listpermissionversionsresponse.h"
#include "listpermissionsrequest.h"
#include "listpermissionsresponse.h"
#include "listprincipalsrequest.h"
#include "listprincipalsresponse.h"
#include "listresourcesharepermissionsrequest.h"
#include "listresourcesharepermissionsresponse.h"
#include "listresourcetypesrequest.h"
#include "listresourcetypesresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "promoteresourcesharecreatedfrompolicyrequest.h"
#include "promoteresourcesharecreatedfrompolicyresponse.h"
#include "rejectresourceshareinvitationrequest.h"
#include "rejectresourceshareinvitationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateresourcesharerequest.h"
#include "updateresourceshareresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Ram
 * \brief Contains classess for accessing AWS Resource Access Manager.
 *
 * \inmodule QtAwsRam
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::RamClient
 * \brief The RamClient class provides access to the AWS Resource Access Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 */

/*!
 * \brief Constructs a RamClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RamClient::RamClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RamClientPrivate(this), parent)
{
    Q_D(RamClient);
    d->apiVersion = QStringLiteral("2018-01-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ram");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Resource Access Manager");
    d->serviceName = QStringLiteral("ram");
}

/*!
 * \overload RamClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RamClient::RamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RamClientPrivate(this), parent)
{
    Q_D(RamClient);
    d->apiVersion = QStringLiteral("2018-01-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ram");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Resource Access Manager");
    d->serviceName = QStringLiteral("ram");
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * AcceptResourceShareInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts an invitation to a resource share from another Amazon Web Services account. After you accept the invitation, the
 * resources included in the resource share are available to interact with in the relevant Amazon Web Services Management
 * Consoles and
 */
AcceptResourceShareInvitationResponse * RamClient::acceptResourceShareInvitation(const AcceptResourceShareInvitationRequest &request)
{
    return qobject_cast<AcceptResourceShareInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * AssociateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified list of principals and list of resources to a resource share. Principals that already have access to
 * this resource share immediately receive access to the added resources. Newly added principals immediately receive access
 * to the resources shared in this resource share.
 */
AssociateResourceShareResponse * RamClient::associateResourceShare(const AssociateResourceShareRequest &request)
{
    return qobject_cast<AssociateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * AssociateResourceSharePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or replaces the RAM permission for a resource type included in a resource share. You can have exactly one
 * permission associated with each resource type in the resource share. You can add a new RAM permission only if there are
 * currently no resources of that resource type currently in the resource
 */
AssociateResourceSharePermissionResponse * RamClient::associateResourceSharePermission(const AssociateResourceSharePermissionRequest &request)
{
    return qobject_cast<AssociateResourceSharePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * CreateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resource share. You can provide a list of the <a
 * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names (ARNs)</a> for
 * the resources that you want to share, a list of principals you want to share the resources with, and the permissions to
 * grant those
 *
 * principals> <note>
 *
 * Sharing a resource makes it available for use by principals outside of the Amazon Web Services account that created the
 * resource. Sharing doesn't change any permissions or quotas that apply to the resource in the account that created
 */
CreateResourceShareResponse * RamClient::createResourceShare(const CreateResourceShareRequest &request)
{
    return qobject_cast<CreateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * DeleteResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified resource share. This doesn't delete any of the resources that were associated with the resource
 * share; it only stops the sharing of those resources outside of the Amazon Web Services account that created
 */
DeleteResourceShareResponse * RamClient::deleteResourceShare(const DeleteResourceShareRequest &request)
{
    return qobject_cast<DeleteResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * DisassociateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified principals or resources from the specified resource
 */
DisassociateResourceShareResponse * RamClient::disassociateResourceShare(const DisassociateResourceShareRequest &request)
{
    return qobject_cast<DisassociateResourceShareResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * DisassociateResourceSharePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an RAM permission from a resource share. Permission changes take effect immediately. You can remove a RAM
 * permission from a resource share only if there are currently no resources of the relevant resource type currently
 * attached to the resource
 */
DisassociateResourceSharePermissionResponse * RamClient::disassociateResourceSharePermission(const DisassociateResourceSharePermissionRequest &request)
{
    return qobject_cast<DisassociateResourceSharePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * EnableSharingWithAwsOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables resource sharing within your organization in Organizations. Calling this operation enables RAM to retrieve
 * information about the organization and its structure. This lets you share resources with all of the accounts in an
 * organization by specifying the organization's ID, or all of the accounts in an organizational unit (OU) by specifying
 * the OU's ID. Until you enable sharing within the organization, you can specify only individual Amazon Web Services
 * accounts, or for supported resource types, IAM users and
 *
 * roles>
 *
 * You must call this operation from an IAM user or role in the organization's management
 */
EnableSharingWithAwsOrganizationResponse * RamClient::enableSharingWithAwsOrganization(const EnableSharingWithAwsOrganizationRequest &request)
{
    return qobject_cast<EnableSharingWithAwsOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the contents of an RAM permission in JSON
 */
GetPermissionResponse * RamClient::getPermission(const GetPermissionRequest &request)
{
    return qobject_cast<GetPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourcePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource policies for the specified resources that you own and have
 */
GetResourcePoliciesResponse * RamClient::getResourcePolicies(const GetResourcePoliciesRequest &request)
{
    return qobject_cast<GetResourcePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceShareAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the resource and principal associations for resource shares that you
 */
GetResourceShareAssociationsResponse * RamClient::getResourceShareAssociations(const GetResourceShareAssociationsRequest &request)
{
    return qobject_cast<GetResourceShareAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceShareInvitationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about invitations that you have received for resource
 */
GetResourceShareInvitationsResponse * RamClient::getResourceShareInvitations(const GetResourceShareInvitationsRequest &request)
{
    return qobject_cast<GetResourceShareInvitationsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * GetResourceSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves details about the resource shares that you own or that are shared with
 */
GetResourceSharesResponse * RamClient::getResourceShares(const GetResourceSharesRequest &request)
{
    return qobject_cast<GetResourceSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListPendingInvitationResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources in a resource share that is shared with you but for which the invitation is still
 * <code>PENDING</code>. That means that you haven't accepted or rejected the invitation and the invitation hasn't
 */
ListPendingInvitationResourcesResponse * RamClient::listPendingInvitationResources(const ListPendingInvitationResourcesRequest &request)
{
    return qobject_cast<ListPendingInvitationResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListPermissionVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the available versions of the specified RAM
 */
ListPermissionVersionsResponse * RamClient::listPermissionVersions(const ListPermissionVersionsRequest &request)
{
    return qobject_cast<ListPermissionVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of available RAM permissions that you can use for the supported resource types.
 */
ListPermissionsResponse * RamClient::listPermissions(const ListPermissionsRequest &request)
{
    return qobject_cast<ListPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals that you are sharing resources with or that are sharing resources with
 */
ListPrincipalsResponse * RamClient::listPrincipals(const ListPrincipalsRequest &request)
{
    return qobject_cast<ListPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListResourceSharePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the RAM permissions that are associated with a resource
 */
ListResourceSharePermissionsResponse * RamClient::listResourceSharePermissions(const ListResourceSharePermissionsRequest &request)
{
    return qobject_cast<ListResourceSharePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListResourceTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resource types that can be shared by
 */
ListResourceTypesResponse * RamClient::listResourceTypes(const ListResourceTypesRequest &request)
{
    return qobject_cast<ListResourceTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the resources that you added to a resource share or the resources that are shared with
 */
ListResourcesResponse * RamClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * PromoteResourceShareCreatedFromPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When you attach a resource-based permission policy to a resource, it automatically creates a resource share. However,
 * resource shares created this way are visible only to the resource share owner, and the resource share can't be modified
 * in
 *
 * RAM>
 *
 * You can use this operation to promote the resource share to a full RAM resource share. When you promote a resource
 * share, you can then manage the resource share in RAM and it becomes visible to all of the principals you shared it
 */
PromoteResourceShareCreatedFromPolicyResponse * RamClient::promoteResourceShareCreatedFromPolicy(const PromoteResourceShareCreatedFromPolicyRequest &request)
{
    return qobject_cast<PromoteResourceShareCreatedFromPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * RejectResourceShareInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects an invitation to a resource share from another Amazon Web Services
 */
RejectResourceShareInvitationResponse * RamClient::rejectResourceShareInvitation(const RejectResourceShareInvitationRequest &request)
{
    return qobject_cast<RejectResourceShareInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tag keys and values to the specified resource share. The tags are attached only to the resource
 * share, not to the resources that are in the resource
 */
TagResourceResponse * RamClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tag key and value pairs from the specified resource
 */
UntagResourceResponse * RamClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the RamClient service, and returns a pointer to an
 * UpdateResourceShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies some of the properties of the specified resource
 */
UpdateResourceShareResponse * RamClient::updateResourceShare(const UpdateResourceShareRequest &request)
{
    return qobject_cast<UpdateResourceShareResponse *>(send(request));
}

/*!
 * \class QtAws::Ram::RamClientPrivate
 * \brief The RamClientPrivate class provides private implementation for RamClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a RamClientPrivate object with public implementation \a q.
 */
RamClientPrivate::RamClientPrivate(RamClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Ram
} // namespace QtAws
