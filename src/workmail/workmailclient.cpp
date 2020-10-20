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

#include "workmailclient.h"
#include "workmailclient_p.h"

#include "core/awssignaturev4.h"
#include "associatedelegatetoresourcerequest.h"
#include "associatedelegatetoresourceresponse.h"
#include "associatemembertogrouprequest.h"
#include "associatemembertogroupresponse.h"
#include "createaliasrequest.h"
#include "createaliasresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "createresourcerequest.h"
#include "createresourceresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deletealiasrequest.h"
#include "deletealiasresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletemailboxpermissionsrequest.h"
#include "deletemailboxpermissionsresponse.h"
#include "deleteresourcerequest.h"
#include "deleteresourceresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "deregisterfromworkmailrequest.h"
#include "deregisterfromworkmailresponse.h"
#include "describegrouprequest.h"
#include "describegroupresponse.h"
#include "describeorganizationrequest.h"
#include "describeorganizationresponse.h"
#include "describeresourcerequest.h"
#include "describeresourceresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "disassociatedelegatefromresourcerequest.h"
#include "disassociatedelegatefromresourceresponse.h"
#include "disassociatememberfromgrouprequest.h"
#include "disassociatememberfromgroupresponse.h"
#include "getmailboxdetailsrequest.h"
#include "getmailboxdetailsresponse.h"
#include "listaliasesrequest.h"
#include "listaliasesresponse.h"
#include "listgroupmembersrequest.h"
#include "listgroupmembersresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listmailboxpermissionsrequest.h"
#include "listmailboxpermissionsresponse.h"
#include "listorganizationsrequest.h"
#include "listorganizationsresponse.h"
#include "listresourcedelegatesrequest.h"
#include "listresourcedelegatesresponse.h"
#include "listresourcesrequest.h"
#include "listresourcesresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "putmailboxpermissionsrequest.h"
#include "putmailboxpermissionsresponse.h"
#include "registertoworkmailrequest.h"
#include "registertoworkmailresponse.h"
#include "resetpasswordrequest.h"
#include "resetpasswordresponse.h"
#include "updatemailboxquotarequest.h"
#include "updatemailboxquotaresponse.h"
#include "updateprimaryemailaddressrequest.h"
#include "updateprimaryemailaddressresponse.h"
#include "updateresourcerequest.h"
#include "updateresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::WorkMail
 * \brief Contains classess for accessing Amazon WorkMail.
 *
 * \inmodule QtAwsWorkMail
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace WorkMail {

/*!
 * \class QtAws::WorkMail::WorkMailClient
 * \brief The WorkMailClient class provides access to the Amazon WorkMail service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkMail
 *
 *  Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 *  email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or other native
 *  iOS and Android email applications. You can integrate WorkMail with your existing corporate directory and control both
 *  the keys that encrypt your data and the location in which your data is
 * 
 *  stored>
 * 
 *  The WorkMail API is designed for the following
 * 
 *  scenarios> <ul> <li>
 * 
 *  Listing and describing
 * 
 *  organization> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  user> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  group> </li> </ul> <ul> <li>
 * 
 *  Managing
 * 
 *  resource> </li> </ul>
 * 
 *  All WorkMail API operations are Amazon-authenticated and certificate-signed. They not only require the use of the AWS
 *  SDK, but also allow for the exclusive use of AWS Identity and Access Management users and roles to help facilitate
 *  access, trust, and permission policies. By creating a role and allowing an IAM user to access the WorkMail site, the IAM
 *  user gains full administrative visibility into the entire WorkMail organization (or as set in the IAM policy). This
 *  includes, but is not limited to, the ability to create, update, and delete users, groups, and resources. This allows
 *  developers to perform the scenarios listed above, as well as give users the ability to grant access on a selective basis
 *  using the IAM
 */

/*!
 * \brief Constructs a WorkMailClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
WorkMailClient::WorkMailClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkMailClientPrivate(this), parent)
{
    Q_D(WorkMailClient);
    d->apiVersion = QStringLiteral("2017-10-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("workmail");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon WorkMail");
    d->serviceName = QStringLiteral("workmail");
}

/*!
 * \overload WorkMailClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
WorkMailClient::WorkMailClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new WorkMailClientPrivate(this), parent)
{
    Q_D(WorkMailClient);
    d->apiVersion = QStringLiteral("2017-10-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("workmail");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon WorkMail");
    d->serviceName = QStringLiteral("workmail");
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * AssociateDelegateToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a member (user or group) to the resource's set of
 */
AssociateDelegateToResourceResponse * WorkMailClient::associateDelegateToResource(const AssociateDelegateToResourceRequest &request)
{
    return qobject_cast<AssociateDelegateToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * AssociateMemberToGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a member (user or group) to the group's
 */
AssociateMemberToGroupResponse * WorkMailClient::associateMemberToGroup(const AssociateMemberToGroupRequest &request)
{
    return qobject_cast<AssociateMemberToGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * CreateAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an alias to the set of a given member (user or group) of Amazon
 */
CreateAliasResponse * WorkMailClient::createAlias(const CreateAliasRequest &request)
{
    return qobject_cast<CreateAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group that can be used in Amazon WorkMail by calling the <a>RegisterToWorkMail</a>
 */
CreateGroupResponse * WorkMailClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * CreateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amazon WorkMail resource.
 */
CreateResourceResponse * WorkMailClient::createResource(const CreateResourceRequest &request)
{
    return qobject_cast<CreateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user who can be used in Amazon WorkMail by calling the <a>RegisterToWorkMail</a>
 */
CreateUserResponse * WorkMailClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeleteAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more specified aliases from a set of aliases for a given
 */
DeleteAliasResponse * WorkMailClient::deleteAlias(const DeleteAliasRequest &request)
{
    return qobject_cast<DeleteAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a group from Amazon
 */
DeleteGroupResponse * WorkMailClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeleteMailboxPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes permissions granted to a member (user or
 */
DeleteMailboxPermissionsResponse * WorkMailClient::deleteMailboxPermissions(const DeleteMailboxPermissionsRequest &request)
{
    return qobject_cast<DeleteMailboxPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeleteResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified resource.
 */
DeleteResourceResponse * WorkMailClient::deleteResource(const DeleteResourceRequest &request)
{
    return qobject_cast<DeleteResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user from Amazon WorkMail and all subsequent systems. Before you can delete a user, the user state must be
 * <code>DISABLED</code>. Use the <a>DescribeUser</a> action to confirm the user
 *
 * state>
 *
 * Deleting a user is permanent and cannot be undone. WorkMail archives user mailboxes for 30 days before they are
 * permanently
 */
DeleteUserResponse * WorkMailClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DeregisterFromWorkMailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Mark a user, group, or resource as no longer used in Amazon WorkMail. This action disassociates the mailbox and
 * schedules it for clean-up. WorkMail keeps mailboxes for 30 days before they are permanently removed. The functionality
 * in the console is
 */
DeregisterFromWorkMailResponse * WorkMailClient::deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request)
{
    return qobject_cast<DeregisterFromWorkMailResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DescribeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data available for the
 */
DescribeGroupResponse * WorkMailClient::describeGroup(const DescribeGroupRequest &request)
{
    return qobject_cast<DescribeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DescribeOrganizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides more information regarding a given organization based on its
 */
DescribeOrganizationResponse * WorkMailClient::describeOrganization(const DescribeOrganizationRequest &request)
{
    return qobject_cast<DescribeOrganizationResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DescribeResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data available for the
 */
DescribeResourceResponse * WorkMailClient::describeResource(const DescribeResourceRequest &request)
{
    return qobject_cast<DescribeResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information regarding the
 */
DescribeUserResponse * WorkMailClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DisassociateDelegateFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member from the resource's set of
 */
DisassociateDelegateFromResourceResponse * WorkMailClient::disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request)
{
    return qobject_cast<DisassociateDelegateFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * DisassociateMemberFromGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a member from a
 */
DisassociateMemberFromGroupResponse * WorkMailClient::disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request)
{
    return qobject_cast<DisassociateMemberFromGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * GetMailboxDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a user's mailbox details for a specified organization and
 */
GetMailboxDetailsResponse * WorkMailClient::getMailboxDetails(const GetMailboxDetailsRequest &request)
{
    return qobject_cast<GetMailboxDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a paginated call to list the aliases associated with a given
 */
ListAliasesResponse * WorkMailClient::listAliases(const ListAliasesRequest &request)
{
    return qobject_cast<ListAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListGroupMembersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an overview of the members of a group. Users and groups can be members of a
 */
ListGroupMembersResponse * WorkMailClient::listGroupMembers(const ListGroupMembersRequest &request)
{
    return qobject_cast<ListGroupMembersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summaries of the organization's
 */
ListGroupsResponse * WorkMailClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListMailboxPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the mailbox permissions associated with a user, group, or resource
 */
ListMailboxPermissionsResponse * WorkMailClient::listMailboxPermissions(const ListMailboxPermissionsRequest &request)
{
    return qobject_cast<ListMailboxPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListOrganizationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summaries of the customer's non-deleted
 */
ListOrganizationsResponse * WorkMailClient::listOrganizations(const ListOrganizationsRequest &request)
{
    return qobject_cast<ListOrganizationsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListResourceDelegatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the delegates associated with a resource. Users and groups can be resource delegates and answer requests on behalf
 * of the
 */
ListResourceDelegatesResponse * WorkMailClient::listResourceDelegates(const ListResourceDelegatesRequest &request)
{
    return qobject_cast<ListResourceDelegatesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summaries of the organization's
 */
ListResourcesResponse * WorkMailClient::listResources(const ListResourcesRequest &request)
{
    return qobject_cast<ListResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summaries of the organization's
 */
ListUsersResponse * WorkMailClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * PutMailboxPermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets permissions for a user, group, or resource. This replaces any pre-existing
 */
PutMailboxPermissionsResponse * WorkMailClient::putMailboxPermissions(const PutMailboxPermissionsRequest &request)
{
    return qobject_cast<PutMailboxPermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * RegisterToWorkMailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an existing and disabled user, group, or resource for Amazon WorkMail use by associating a mailbox and
 * calendaring capabilities. It performs no change if the user, group, or resource is enabled and fails if the user, group,
 * or resource is deleted. This operation results in the accumulation of costs. For more information, see <a
 * href="https://aws.amazon.com//workmail/pricing">Pricing</a>. The equivalent console functionality for this operation is
 * <i>Enable</i>.
 *
 * </p
 *
 * Users can either be created by calling the <a>CreateUser</a> API operation or they can be synchronized from your
 * directory. For more information, see
 */
RegisterToWorkMailResponse * WorkMailClient::registerToWorkMail(const RegisterToWorkMailRequest &request)
{
    return qobject_cast<RegisterToWorkMailResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * ResetPasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the administrator to reset the password for a
 */
ResetPasswordResponse * WorkMailClient::resetPassword(const ResetPasswordRequest &request)
{
    return qobject_cast<ResetPasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * UpdateMailboxQuotaResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a user's current mailbox quota for a specified organization and
 */
UpdateMailboxQuotaResponse * WorkMailClient::updateMailboxQuota(const UpdateMailboxQuotaRequest &request)
{
    return qobject_cast<UpdateMailboxQuotaResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * UpdatePrimaryEmailAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the primary email for a user, group, or resource. The current email is moved into the list of aliases (or
 * swapped between an existing alias and the current primary email), and the email provided in the input is promoted as the
 */
UpdatePrimaryEmailAddressResponse * WorkMailClient::updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request)
{
    return qobject_cast<UpdatePrimaryEmailAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the WorkMailClient service, and returns a pointer to an
 * UpdateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates data for the resource. To have the latest information, it must be preceded by a <a>DescribeResource</a> call.
 * The dataset in the request should be the one expected when performing another <code>DescribeResource</code>
 */
UpdateResourceResponse * WorkMailClient::updateResource(const UpdateResourceRequest &request)
{
    return qobject_cast<UpdateResourceResponse *>(send(request));
}

/*!
 * \class QtAws::WorkMail::WorkMailClientPrivate
 * \brief The WorkMailClientPrivate class provides private implementation for WorkMailClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsWorkMail
 */

/*!
 * Constructs a WorkMailClientPrivate object with public implementation \a q.
 */
WorkMailClientPrivate::WorkMailClientPrivate(WorkMailClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace WorkMail
} // namespace QtAws
