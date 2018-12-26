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

#include "listserversrequest.h"
#include "listserversrequest_p.h"
#include "listserversresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::ListServersRequest
 * \brief The ListServersRequest class provides an interface for Transfer ListServers requests.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::listServers
 */

/*!
 * Constructs a copy of \a other.
 */
ListServersRequest::ListServersRequest(const ListServersRequest &other)
    : TransferRequest(new ListServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListServersRequest object.
 */
ListServersRequest::ListServersRequest()
    : TransferRequest(new ListServersRequestPrivate(TransferRequest::ListServersAction, this))
{

}

/*!
 * \reimp
 */
bool ListServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServersRequest::response(QNetworkReply * const reply) const
{
    return new ListServersResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::ListServersRequestPrivate
 * \brief The ListServersRequestPrivate class provides private implementation for ListServersRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a ListServersRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
ListServersRequestPrivate::ListServersRequestPrivate(
    const TransferRequest::Action action, ListServersRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListServersRequest
 * class' copy constructor.
 */
ListServersRequestPrivate::ListServersRequestPrivate(
    const ListServersRequestPrivate &other, ListServersRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
