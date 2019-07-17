/*
    Copyright 2013-2019 Paul Colby

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

#include "listworkerblocksrequest.h"
#include "listworkerblocksrequest_p.h"
#include "listworkerblocksresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkerBlocksRequest
 * \brief The ListWorkerBlocksRequest class provides an interface for MTurk ListWorkerBlocks requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkerBlocks
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest(const ListWorkerBlocksRequest &other)
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorkerBlocksRequest object.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest()
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(MTurkRequest::ListWorkerBlocksAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorkerBlocksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorkerBlocksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorkerBlocksRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkerBlocksResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::ListWorkerBlocksRequestPrivate
 * \brief The ListWorkerBlocksRequestPrivate class provides private implementation for ListWorkerBlocksRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkerBlocksRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const MTurkRequest::Action action, ListWorkerBlocksRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorkerBlocksRequest
 * class' copy constructor.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const ListWorkerBlocksRequestPrivate &other, ListWorkerBlocksRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
