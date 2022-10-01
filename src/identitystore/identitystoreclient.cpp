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

#include "identitystoreclient.h"
#include "identitystoreclient_p.h"

#include "core/awssignaturev4.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "creategroupmembershiprequest.h"
#include "creategroupmembershipresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershipresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describegrouprequest.h"
#include "describegroupresponse.h"
#include "describegroupmembershiprequest.h"
#include "describegroupmembershipresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "getgroupidrequest.h"
#include "getgroupidresponse.h"
#include "getgroupmembershipidrequest.h"
#include "getgroupmembershipidresponse.h"
#include "getuseridrequest.h"
#include "getuseridresponse.h"
#include "ismemberingroupsrequest.h"
#include "ismemberingroupsresponse.h"
#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsresponse.h"
#include "listgroupmembershipsformemberrequest.h"
#include "listgroupmembershipsformemberresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IdentityStore
 * \brief Contains classess for accessing AWS SSO Identity Store.
 *
 * \inmodule QtAwsIdentityStore
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IdentityStoreClient
 * \brief The IdentityStoreClient class provides access to the AWS SSO Identity Store service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIdentityStore
 *
 *  The Identity Store service used by AWS IAM Identity Center (successor to AWS Single Sign-On) provides a single place to
 *  retrieve all of your identities (users and groups). For more information, see the <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">IAM Identity Center User
 * 
 *  Guide</a>> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the identity store operations that you can call programatically and includes detailed
 *  information on data types and
 */

/*!
 * \brief Constructs a IdentityStoreClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IdentityStoreClient::IdentityStoreClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IdentityStoreClientPrivate(this), parent)
{
    Q_D(IdentityStoreClient);
    d->apiVersion = QStringLiteral("2020-06-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("identitystore");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS SSO Identity Store");
    d->serviceName = QStringLiteral("identitystore");
}

/*!
 * \overload IdentityStoreClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IdentityStoreClient::IdentityStoreClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IdentityStoreClientPrivate(this), parent)
{
    Q_D(IdentityStoreClient);
    d->apiVersion = QStringLiteral("2020-06-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("identitystore");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS SSO Identity Store");
    d->serviceName = QStringLiteral("identitystore");
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group within the specified identity
 */
CreateGroupResponse * IdentityStoreClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * CreateGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a relationship between a member and a group. The following identifiers must be specified: <code>GroupId</code>,
 * <code>IdentityStoreId</code>, and
 */
CreateGroupMembershipResponse * IdentityStoreClient::createGroupMembership(const CreateGroupMembershipRequest &request)
{
    return qobject_cast<CreateGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user within the specified identity
 */
CreateUserResponse * IdentityStoreClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a group within an identity store given
 */
DeleteGroupResponse * IdentityStoreClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DeleteGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a membership within a group given
 */
DeleteGroupMembershipResponse * IdentityStoreClient::deleteGroupMembership(const DeleteGroupMembershipRequest &request)
{
    return qobject_cast<DeleteGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user within an identity store given
 */
DeleteUserResponse * IdentityStoreClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DescribeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the group metadata and attributes from <code>GroupId</code> in an identity
 */
DescribeGroupResponse * IdentityStoreClient::describeGroup(const DescribeGroupRequest &request)
{
    return qobject_cast<DescribeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DescribeGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves membership metadata and attributes from <code>MembershipId</code> in an identity
 */
DescribeGroupMembershipResponse * IdentityStoreClient::describeGroupMembership(const DescribeGroupMembershipRequest &request)
{
    return qobject_cast<DescribeGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the user metadata and attributes from the <code>UserId</code> in an identity
 */
DescribeUserResponse * IdentityStoreClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * GetGroupIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves <code>GroupId</code> in an identity
 */
GetGroupIdResponse * IdentityStoreClient::getGroupId(const GetGroupIdRequest &request)
{
    return qobject_cast<GetGroupIdResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * GetGroupMembershipIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>MembershipId</code> in an identity
 */
GetGroupMembershipIdResponse * IdentityStoreClient::getGroupMembershipId(const GetGroupMembershipIdRequest &request)
{
    return qobject_cast<GetGroupMembershipIdResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * GetUserIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>UserId</code> in an identity
 */
GetUserIdResponse * IdentityStoreClient::getUserId(const GetUserIdRequest &request)
{
    return qobject_cast<GetUserIdResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * IsMemberInGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the user's membership in all requested groups and returns if the member exists in all queried
 */
IsMemberInGroupsResponse * IdentityStoreClient::isMemberInGroups(const IsMemberInGroupsRequest &request)
{
    return qobject_cast<IsMemberInGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * ListGroupMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For the specified group in the specified identity store, returns the list of all <code>GroupMembership</code> objects
 * and returns results in paginated
 */
ListGroupMembershipsResponse * IdentityStoreClient::listGroupMemberships(const ListGroupMembershipsRequest &request)
{
    return qobject_cast<ListGroupMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * ListGroupMembershipsForMemberResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For the specified member in the specified identity store, returns the list of all <code>GroupMembership</code> objects
 * and returns results in paginated
 */
ListGroupMembershipsForMemberResponse * IdentityStoreClient::listGroupMembershipsForMember(const ListGroupMembershipsForMemberRequest &request)
{
    return qobject_cast<ListGroupMembershipsForMemberResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all groups in the identity store. Returns a paginated list of complete <code>Group</code> objects. Filtering for a
 * <code>Group</code> by the <code>DisplayName</code> attribute is deprecated. Instead, use the <code>GetGroupId</code> API
 */
ListGroupsResponse * IdentityStoreClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all users in the identity store. Returns a paginated list of complete <code>User</code> objects. Filtering for a
 * <code>User</code> by the <code>UserName</code> attribute is deprecated. Instead, use the <code>GetUserId</code> API
 */
ListUsersResponse * IdentityStoreClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For the specified group in the specified identity store, updates the group metadata and
 */
UpdateGroupResponse * IdentityStoreClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For the specified user in the specified identity store, updates the user metadata and
 */
UpdateUserResponse * IdentityStoreClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::IdentityStore::IdentityStoreClientPrivate
 * \brief The IdentityStoreClientPrivate class provides private implementation for IdentityStoreClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IdentityStoreClientPrivate object with public implementation \a q.
 */
IdentityStoreClientPrivate::IdentityStoreClientPrivate(IdentityStoreClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IdentityStore
} // namespace QtAws
