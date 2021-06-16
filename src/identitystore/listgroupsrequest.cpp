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

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::ListGroupsRequest
 * \brief The ListGroupsRequest class provides an interface for IdentityStore ListGroups requests.
 *
 * \inmodule QtAwsIdentityStore
 *
 *
 * \sa IdentityStoreClient::listGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : IdentityStoreRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : IdentityStoreRequest(new ListGroupsRequestPrivate(IdentityStoreRequest::ListGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::IdentityStore::ListGroupsRequestPrivate
 * \brief The ListGroupsRequestPrivate class provides private implementation for ListGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a ListGroupsRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const IdentityStoreRequest::Action action, ListGroupsRequest * const q)
    : IdentityStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : IdentityStoreRequestPrivate(other, q)
{

}

} // namespace IdentityStore
} // namespace QtAws
