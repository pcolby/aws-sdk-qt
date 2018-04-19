/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "notifyworkersrequest.h"
#include "notifyworkersrequest_p.h"
#include "notifyworkersresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::NotifyWorkersRequest
 * \brief The NotifyWorkersRequest class provides an interface for MTurk NotifyWorkers requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::notifyWorkers
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyWorkersRequest::NotifyWorkersRequest(const NotifyWorkersRequest &other)
    : MTurkRequest(new NotifyWorkersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyWorkersRequest object.
 */
NotifyWorkersRequest::NotifyWorkersRequest()
    : MTurkRequest(new NotifyWorkersRequestPrivate(MTurkRequest::NotifyWorkersAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyWorkersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyWorkersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyWorkersRequest::response(QNetworkReply * const reply) const
{
    return new NotifyWorkersResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::NotifyWorkersRequestPrivate
 * \brief The NotifyWorkersRequestPrivate class provides private implementation for NotifyWorkersRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a NotifyWorkersRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const MTurkRequest::Action action, NotifyWorkersRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyWorkersRequest
 * class' copy constructor.
 */
NotifyWorkersRequestPrivate::NotifyWorkersRequestPrivate(
    const NotifyWorkersRequestPrivate &other, NotifyWorkersRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
