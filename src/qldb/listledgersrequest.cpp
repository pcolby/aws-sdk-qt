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

#include "listledgersrequest.h"
#include "listledgersrequest_p.h"
#include "listledgersresponse.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListLedgersRequest
 * \brief The ListLedgersRequest class provides an interface for QLDB ListLedgers requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listLedgers
 */

/*!
 * Constructs a copy of \a other.
 */
ListLedgersRequest::ListLedgersRequest(const ListLedgersRequest &other)
    : QldbRequest(new ListLedgersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLedgersRequest object.
 */
ListLedgersRequest::ListLedgersRequest()
    : QldbRequest(new ListLedgersRequestPrivate(QldbRequest::ListLedgersAction, this))
{

}

/*!
 * \reimp
 */
bool ListLedgersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLedgersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLedgersRequest::response(QNetworkReply * const reply) const
{
    return new ListLedgersResponse(*this, reply);
}

/*!
 * \class QtAws::QLDB::ListLedgersRequestPrivate
 * \brief The ListLedgersRequestPrivate class provides private implementation for ListLedgersRequest.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ListLedgersRequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ListLedgersRequestPrivate::ListLedgersRequestPrivate(
    const QldbRequest::Action action, ListLedgersRequest * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLedgersRequest
 * class' copy constructor.
 */
ListLedgersRequestPrivate::ListLedgersRequestPrivate(
    const ListLedgersRequestPrivate &other, ListLedgersRequest * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
