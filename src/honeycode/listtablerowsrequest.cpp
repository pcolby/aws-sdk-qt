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

#include "listtablerowsrequest.h"
#include "listtablerowsrequest_p.h"
#include "listtablerowsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableRowsRequest
 * \brief The ListTableRowsRequest class provides an interface for Honeycode ListTableRows requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableRows
 */

/*!
 * Constructs a copy of \a other.
 */
ListTableRowsRequest::ListTableRowsRequest(const ListTableRowsRequest &other)
    : HoneycodeRequest(new ListTableRowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTableRowsRequest object.
 */
ListTableRowsRequest::ListTableRowsRequest()
    : HoneycodeRequest(new ListTableRowsRequestPrivate(HoneycodeRequest::ListTableRowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTableRowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTableRowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTableRowsRequest::response(QNetworkReply * const reply) const
{
    return new ListTableRowsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::ListTableRowsRequestPrivate
 * \brief The ListTableRowsRequestPrivate class provides private implementation for ListTableRowsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableRowsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
ListTableRowsRequestPrivate::ListTableRowsRequestPrivate(
    const HoneycodeRequest::Action action, ListTableRowsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTableRowsRequest
 * class' copy constructor.
 */
ListTableRowsRequestPrivate::ListTableRowsRequestPrivate(
    const ListTableRowsRequestPrivate &other, ListTableRowsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
