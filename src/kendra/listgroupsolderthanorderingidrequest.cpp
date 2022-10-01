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

#include "listgroupsolderthanorderingidrequest.h"
#include "listgroupsolderthanorderingidrequest_p.h"
#include "listgroupsolderthanorderingidresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdRequest
 * \brief The ListGroupsOlderThanOrderingIdRequest class provides an interface for Kendra ListGroupsOlderThanOrderingId requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listGroupsOlderThanOrderingId
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsOlderThanOrderingIdRequest::ListGroupsOlderThanOrderingIdRequest(const ListGroupsOlderThanOrderingIdRequest &other)
    : KendraRequest(new ListGroupsOlderThanOrderingIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsOlderThanOrderingIdRequest object.
 */
ListGroupsOlderThanOrderingIdRequest::ListGroupsOlderThanOrderingIdRequest()
    : KendraRequest(new ListGroupsOlderThanOrderingIdRequestPrivate(KendraRequest::ListGroupsOlderThanOrderingIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsOlderThanOrderingIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsOlderThanOrderingIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsOlderThanOrderingIdRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsOlderThanOrderingIdResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdRequestPrivate
 * \brief The ListGroupsOlderThanOrderingIdRequestPrivate class provides private implementation for ListGroupsOlderThanOrderingIdRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListGroupsOlderThanOrderingIdRequestPrivate::ListGroupsOlderThanOrderingIdRequestPrivate(
    const KendraRequest::Action action, ListGroupsOlderThanOrderingIdRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsOlderThanOrderingIdRequest
 * class' copy constructor.
 */
ListGroupsOlderThanOrderingIdRequestPrivate::ListGroupsOlderThanOrderingIdRequestPrivate(
    const ListGroupsOlderThanOrderingIdRequestPrivate &other, ListGroupsOlderThanOrderingIdRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
