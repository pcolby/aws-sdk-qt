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
#include "describegrouprequest.h"
#include "describegroupresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IdentityStore
 * \brief Contains classess for accessing AWS SSO Identity Store (IdentityStore).
 *
 * \inmodule QtAwsIdentityStore
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IdentityStoreClient
 * \brief The IdentityStoreClient class provides access to the AWS SSO Identity Store (IdentityStore) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIdentityStore
 *
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-06-15"),
    QStringLiteral("identitystore"),
    QStringLiteral("AWS SSO Identity Store"),
    QStringLiteral("identitystore"),
    parent), d_ptr(new IdentityStoreClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-06-15"),
    QStringLiteral("identitystore"),
    QStringLiteral("AWS SSO Identity Store"),
    QStringLiteral("identitystore"),
    parent), d_ptr(new IdentityStoreClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the user metadata and attributes from <code>UserId</code> in an identity
 */
DescribeUserResponse * IdentityStoreClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the IdentityStoreClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the attribute name and value of the group that you specified in the search. We only support
 * <code>DisplayName</code> as a valid filter attribute path currently, and filter is required. This API returns minimum
 * attributes, including <code>GroupId</code> and group <code>DisplayName</code> in the
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
 * Lists the attribute name and value of the user that you specified in the search. We only support <code>UserName</code>
 * as a valid filter attribute path currently, and filter is required. This API returns minimum attributes, including
 * <code>UserId</code> and <code>UserName</code> in the
 */
ListUsersResponse * IdentityStoreClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
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
IdentityStoreClientPrivate::IdentityStoreClientPrivate(IdentityStoreClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace IdentityStore
} // namespace QtAws
