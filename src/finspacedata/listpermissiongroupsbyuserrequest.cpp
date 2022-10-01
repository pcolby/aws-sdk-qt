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

#include "listpermissiongroupsbyuserrequest.h"
#include "listpermissiongroupsbyuserrequest_p.h"
#include "listpermissiongroupsbyuserresponse.h"
#include "finspacedatarequest_p.h"

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserRequest
 * \brief The ListPermissionGroupsByUserRequest class provides an interface for FinspaceData ListPermissionGroupsByUser requests.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listPermissionGroupsByUser
 */

/*!
 * Constructs a copy of \a other.
 */
ListPermissionGroupsByUserRequest::ListPermissionGroupsByUserRequest(const ListPermissionGroupsByUserRequest &other)
    : FinspaceDataRequest(new ListPermissionGroupsByUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPermissionGroupsByUserRequest object.
 */
ListPermissionGroupsByUserRequest::ListPermissionGroupsByUserRequest()
    : FinspaceDataRequest(new ListPermissionGroupsByUserRequestPrivate(FinspaceDataRequest::ListPermissionGroupsByUserAction, this))
{

}

/*!
 * \reimp
 */
bool ListPermissionGroupsByUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPermissionGroupsByUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPermissionGroupsByUserRequest::response(QNetworkReply * const reply) const
{
    return new ListPermissionGroupsByUserResponse(*this, reply);
}

/*!
 * \class QtAws::FinspaceData::ListPermissionGroupsByUserRequestPrivate
 * \brief The ListPermissionGroupsByUserRequestPrivate class provides private implementation for ListPermissionGroupsByUserRequest.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListPermissionGroupsByUserRequestPrivate object for FinspaceData \a action,
 * with public implementation \a q.
 */
ListPermissionGroupsByUserRequestPrivate::ListPermissionGroupsByUserRequestPrivate(
    const FinspaceDataRequest::Action action, ListPermissionGroupsByUserRequest * const q)
    : FinspaceDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPermissionGroupsByUserRequest
 * class' copy constructor.
 */
ListPermissionGroupsByUserRequestPrivate::ListPermissionGroupsByUserRequestPrivate(
    const ListPermissionGroupsByUserRequestPrivate &other, ListPermissionGroupsByUserRequest * const q)
    : FinspaceDataRequestPrivate(other, q)
{

}

} // namespace FinspaceData
} // namespace QtAws
