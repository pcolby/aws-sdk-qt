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

#include "listpermissionsetsrequest.h"
#include "listpermissionsetsrequest_p.h"
#include "listpermissionsetsresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsRequest
 * \brief The ListPermissionSetsRequest class provides an interface for SSOAdmin ListPermissionSets requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::listPermissionSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionSetsRequest::ListPermissionSetsRequest(const ListPermissionSetsRequest &other)
    : SSOAdminRequest(new ListPermissionSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionSetsRequest object.
 */
ListPermissionSetsRequest::ListPermissionSetsRequest()
    : SSOAdminRequest(new ListPermissionSetsRequestPrivate(SSOAdminRequest::ListPermissionSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionSetsResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::ListPermissionSetsRequestPrivate
 * \brief The ListPermissionSetsRequestPrivate class provides private implementation for ListPermissionSetsRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a ListPermissionSetsRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
ListPermissionSetsRequestPrivate::ListPermissionSetsRequestPrivate(
    const SSOAdminRequest::Action action, ListPermissionSetsRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionSetsRequest
 * class' copy constructor.
 */
ListPermissionSetsRequestPrivate::ListPermissionSetsRequestPrivate(
    const ListPermissionSetsRequestPrivate &other, ListPermissionSetsRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
