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

#include "deleteworkerblockrequest.h"
#include "deleteworkerblockrequest_p.h"
#include "deleteworkerblockresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockRequest
 * \brief The DeleteWorkerBlockRequest class provides an interface for MTurk DeleteWorkerBlock requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteWorkerBlock
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest(const DeleteWorkerBlockRequest &other)
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkerBlockRequest object.
 */
DeleteWorkerBlockRequest::DeleteWorkerBlockRequest()
    : MTurkRequest(new DeleteWorkerBlockRequestPrivate(MTurkRequest::DeleteWorkerBlockAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkerBlockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkerBlockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkerBlockRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkerBlockResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockRequestPrivate
 * \brief The DeleteWorkerBlockRequestPrivate class provides private implementation for DeleteWorkerBlockRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteWorkerBlockRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const MTurkRequest::Action action, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkerBlockRequest
 * class' copy constructor.
 */
DeleteWorkerBlockRequestPrivate::DeleteWorkerBlockRequestPrivate(
    const DeleteWorkerBlockRequestPrivate &other, DeleteWorkerBlockRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
