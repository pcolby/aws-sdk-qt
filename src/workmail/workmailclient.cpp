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

#include "workmailclient.h"
#include "workmailclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace WorkMail {

/**
 * @class  WorkMailClient
 *
 * @brief  Client for Amazon WorkMail
 *
 * Amazon WorkMail is a secure, managed business email and calendaring service with support for existing desktop and mobile
 * email clients. You can access your email, contacts, and calendars using Microsoft Outlook, your browser, or their native
 * iOS and Android email applications. You can integrate Amazon WorkMail with your existing corporate directory and control
 * both the keys that encrypt your data and the location in which your data is
 *
 * stored>
 *
 * The Amazon WorkMail API is designed for the following
 *
 * scenarios> <ul> <li>
 *
 * Listing and describing
 *
 * organization> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * user> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * group> </li> </ul> <ul> <li>
 *
 * Managing
 *
 * resource> </li> </ul>
 *
 * All Amazon WorkMail API actions are Amazon-authenticated and certificate-signed. They not only require the use of the
 * AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 * policies. By creating a role and allowing an IAM user to access the Amazon WorkMail site, the IAM user gains full
 * administrative visibility into the entire Amazon WorkMail organization (or as set in the IAM policy). This includes, but
 * is not limited to, the ability to create, update, and delete users, groups, and resources. This allows developers to
 * perform the scenarios listed above, as well as give users the ability to grant access on a selective basis using the IAM
 */

/**
 * @brief  Constructs a new WorkMailClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
WorkMailClient::WorkMailClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WorkMailClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new WorkMailClient object.
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
WorkMailClient::WorkMailClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new WorkMailClientPrivate(this), parent)
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

/**
 * Adds a member to the resource's set of
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateDelegateToResourceResponse * WorkMailClient::associateDelegateToResource(const AssociateDelegateToResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Adds a member to the group's
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateMemberToGroupResponse * WorkMailClient::associateMemberToGroup(const AssociateMemberToGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Adds an alias to the set of a given member of Amazon
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAliasResponse * WorkMailClient::createAlias(const CreateAliasRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a group that can be used in Amazon WorkMail by calling the RegisterToWorkMail
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * WorkMailClient::createGroup(const CreateGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a new Amazon WorkMail resource. The available types are equipment and
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceResponse * WorkMailClient::createResource(const CreateResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a user who can be used in Amazon WorkMail by calling the RegisterToWorkMail
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserResponse * WorkMailClient::createUser(const CreateUserRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Remove the alias from a set of aliases for a given
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAliasResponse * WorkMailClient::deleteAlias(const DeleteAliasRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a group from Amazon
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * WorkMailClient::deleteGroup(const DeleteGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified resource.
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourceResponse * WorkMailClient::deleteResource(const DeleteResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes a user from Amazon WorkMail and all subsequent systems. The action can't be undone. The mailbox is kept as-is
 * for a minimum of 30 days, without any means to restore it.
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserResponse * WorkMailClient::deleteUser(const DeleteUserRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Mark a user, group, or resource as no longer used in Amazon WorkMail. This action disassociates the mailbox and
 * schedules it for clean-up. Amazon WorkMail keeps mailboxes for 30 days before they are permanently removed. The
 * functionality in the console is
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterFromWorkMailResponse * WorkMailClient::deregisterFromWorkMail(const DeregisterFromWorkMailRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns the data available for the
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeGroupResponse * WorkMailClient::describeGroup(const DescribeGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Provides more information regarding a given organization based on its
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOrganizationResponse * WorkMailClient::describeOrganization(const DescribeOrganizationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns the data available for the
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeResourceResponse * WorkMailClient::describeResource(const DescribeResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Provides information regarding the
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserResponse * WorkMailClient::describeUser(const DescribeUserRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes a member from the resource's set of
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateDelegateFromResourceResponse * WorkMailClient::disassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes a member from a
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateMemberFromGroupResponse * WorkMailClient::disassociateMemberFromGroup(const DisassociateMemberFromGroupRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a paginated call to list the aliases associated with a given
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListAliasesResponse * WorkMailClient::listAliases(const ListAliasesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns an overview of the members of a
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupMembersResponse * WorkMailClient::listGroupMembers(const ListGroupMembersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns summaries of the organization's
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * WorkMailClient::listGroups(const ListGroupsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns summaries of the customer's non-deleted
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOrganizationsResponse * WorkMailClient::listOrganizations(const ListOrganizationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Lists the delegates associated with a resource. Users and groups can be resource delegates and answer requests on behalf
 * of the
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceDelegatesResponse * WorkMailClient::listResourceDelegates(const ListResourceDelegatesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns summaries of the organization's
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourcesResponse * WorkMailClient::listResources(const ListResourcesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns summaries of the organization's
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUsersResponse * WorkMailClient::listUsers(const ListUsersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Registers an existing and disabled user, group, or resource/entity for Amazon WorkMail use by associating a mailbox and
 * calendaring capabilities. It performs no change if the entity is enabled and fails if the entity is deleted. This
 * operation results in the accumulation of costs. For more information, see <a
 * href="http://aws.amazon.com/workmail/pricing">Pricing</a>. The equivalent console functionality for this operation is
 * <i>Enable</i>. Users can either be created by calling the CreateUser API or they can be synchronized from your
 * directory. For more information, see
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterToWorkMailResponse * WorkMailClient::registerToWorkMail(const RegisterToWorkMailRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Allows the administrator to reset the password for a
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetPasswordResponse * WorkMailClient::resetPassword(const ResetPasswordRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates the primary email for an entity. The current email is moved into the list of aliases (or swapped between an
 * existing alias and the current primary email) and the email provided in the input is promoted as the
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePrimaryEmailAddressResponse * WorkMailClient::updatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Updates data for the resource. It must be preceded by a describe call in order to have the latest information. The
 * dataset in the request should be the one expected when performing another describe
 *
 * @param  request Request to send to Amazon WorkMail.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResourceResponse * WorkMailClient::updateResource(const UpdateResourceRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  WorkMailClientPrivate
 *
 * @brief  Private implementation for WorkMailClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkMailClientPrivate object.
 *
 * @param  q  Pointer to this object's public WorkMailClient instance.
 */
WorkMailClientPrivate::WorkMailClientPrivate(WorkMailClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace WorkMail
} // namespace AWS
