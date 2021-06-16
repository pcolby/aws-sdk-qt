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

#include "listpermissionsetsprovisionedtoaccountrequest.h"
#include "listpermissionsetsprovisionedtoaccountrequest_p.h"
#include "listpermissionsetsprovisionedtoaccountresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsProvisionedToAccountRequest
 * \brief The ListPermissionSetsProvisionedToAccountRequest class provides an interface for SSOAdmin ListPermissionSetsProvisionedToAccount requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSetsProvisionedToAccount
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionSetsProvisionedToAccountRequest::ListPermissionSetsProvisionedToAccountRequest(const ListPermissionSetsProvisionedToAccountRequest &other)
    : SSOAdminRequest(new ListPermissionSetsProvisionedToAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionSetsProvisionedToAccountRequest object.
 */
ListPermissionSetsProvisionedToAccountRequest::ListPermissionSetsProvisionedToAccountRequest()
    : SSOAdminRequest(new ListPermissionSetsProvisionedToAccountRequestPrivate(SSOAdminRequest::ListPermissionSetsProvisionedToAccountAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionSetsProvisionedToAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionSetsProvisionedToAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionSetsProvisionedToAccountRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionSetsProvisionedToAccountResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsProvisionedToAccountRequestPrivate
 * \brief The ListPermissionSetsProvisionedToAccountRequestPrivate class provides private implementation for ListPermissionSetsProvisionedToAccountRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetsProvisionedToAccountRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListPermissionSetsProvisionedToAccountRequestPrivate::ListPermissionSetsProvisionedToAccountRequestPrivate(
    const SSOAdminRequest::Action action, ListPermissionSetsProvisionedToAccountRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionSetsProvisionedToAccountRequest
 * class' copy constructor.
 */
ListPermissionSetsProvisionedToAccountRequestPrivate::ListPermissionSetsProvisionedToAccountRequestPrivate(
    const ListPermissionSetsProvisionedToAccountRequestPrivate &other, ListPermissionSetsProvisionedToAccountRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
