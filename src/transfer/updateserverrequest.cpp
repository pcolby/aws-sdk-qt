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

#include "updateserverrequest.h"
#include "updateserverrequest_p.h"
#include "updateserverresponse.h"
#include "transferrequest_p.h"

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::UpdateServerRequest
 * \brief The UpdateServerRequest class provides an interface for Transfer UpdateServer requests.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::updateServer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServerRequest::UpdateServerRequest(const UpdateServerRequest &other)
    : TransferRequest(new UpdateServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServerRequest object.
 */
UpdateServerRequest::UpdateServerRequest()
    : TransferRequest(new UpdateServerRequestPrivate(TransferRequest::UpdateServerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerResponse(*this, reply);
}

/*!
 * \class QtAws::Transfer::UpdateServerRequestPrivate
 * \brief The UpdateServerRequestPrivate class provides private implementation for UpdateServerRequest.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a UpdateServerRequestPrivate object for Transfer \a action,
 * with public implementation \a q.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const TransferRequest::Action action, UpdateServerRequest * const q)
    : TransferRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerRequest
 * class' copy constructor.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const UpdateServerRequestPrivate &other, UpdateServerRequest * const q)
    : TransferRequestPrivate(other, q)
{

}

} // namespace Transfer
} // namespace QtAws
