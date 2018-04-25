/*
    Copyright 2013-2018 Paul Colby

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

#include "listhitsrequest.h"
#include "listhitsrequest_p.h"
#include "listhitsresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsRequest
 * \brief The ListHITsRequest class provides an interface for MTurk ListHITs requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHITsRequest::ListHITsRequest(const ListHITsRequest &other)
    : MTurkRequest(new ListHITsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHITsRequest object.
 */
ListHITsRequest::ListHITsRequest()
    : MTurkRequest(new ListHITsRequestPrivate(MTurkRequest::ListHITsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHITsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHITsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHITsRequest::response(QNetworkReply * const reply) const
{
    return new ListHITsResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListHITsRequestPrivate
 * \brief The ListHITsRequestPrivate class provides private implementation for ListHITsRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const MTurkRequest::Action action, ListHITsRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHITsRequest
 * class' copy constructor.
 */
ListHITsRequestPrivate::ListHITsRequestPrivate(
    const ListHITsRequestPrivate &other, ListHITsRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
