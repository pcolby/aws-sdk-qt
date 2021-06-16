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

#include "listaccountsforprovisionedpermissionsetrequest.h"
#include "listaccountsforprovisionedpermissionsetrequest_p.h"
#include "listaccountsforprovisionedpermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListAccountsForProvisionedPermissionSetRequest
 * \brief The ListAccountsForProvisionedPermissionSetRequest class provides an interface for SSOAdmin ListAccountsForProvisionedPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listAccountsForProvisionedPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountsForProvisionedPermissionSetRequest::ListAccountsForProvisionedPermissionSetRequest(const ListAccountsForProvisionedPermissionSetRequest &other)
    : SSOAdminRequest(new ListAccountsForProvisionedPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountsForProvisionedPermissionSetRequest object.
 */
ListAccountsForProvisionedPermissionSetRequest::ListAccountsForProvisionedPermissionSetRequest()
    : SSOAdminRequest(new ListAccountsForProvisionedPermissionSetRequestPrivate(SSOAdminRequest::ListAccountsForProvisionedPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountsForProvisionedPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountsForProvisionedPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountsForProvisionedPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountsForProvisionedPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListAccountsForProvisionedPermissionSetRequestPrivate
 * \brief The ListAccountsForProvisionedPermissionSetRequestPrivate class provides private implementation for ListAccountsForProvisionedPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListAccountsForProvisionedPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListAccountsForProvisionedPermissionSetRequestPrivate::ListAccountsForProvisionedPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, ListAccountsForProvisionedPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountsForProvisionedPermissionSetRequest
 * class' copy constructor.
 */
ListAccountsForProvisionedPermissionSetRequestPrivate::ListAccountsForProvisionedPermissionSetRequestPrivate(
    const ListAccountsForProvisionedPermissionSetRequestPrivate &other, ListAccountsForProvisionedPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
