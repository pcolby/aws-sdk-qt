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

#include "deleteserverrequest.h"
#include "deleteserverrequest_p.h"
#include "deleteserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteServerRequest
 * \brief The DeleteServerRequest class provides an interface for Transfer DeleteServer requests.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::deleteServer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServerRequest::DeleteServerRequest(const DeleteServerRequest &other)
    : TransferRequest(new DeleteServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServerRequest object.
 */
DeleteServerRequest::DeleteServerRequest()
    : TransferRequest(new DeleteServerRequestPrivate(TransferRequest::DeleteServerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::DeleteServerRequestPrivate
 * \brief The DeleteServerRequestPrivate class provides private implementation for DeleteServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const TransferRequest::Action action, DeleteServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerRequest
 * class' copy constructor.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const DeleteServerRequestPrivate &other, DeleteServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
