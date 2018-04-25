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

#include "deleteeventstreamrequest.h"
#include "deleteeventstreamrequest_p.h"
#include "deleteeventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamRequest
 * \brief The DeleteEventStreamRequest class provides an interface for Pinpoint DeleteEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest(const DeleteEventStreamRequest &other)
    : PinpointRequest(new DeleteEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventStreamRequest object.
 */
DeleteEventStreamRequest::DeleteEventStreamRequest()
    : PinpointRequest(new DeleteEventStreamRequestPrivate(PinpointRequest::DeleteEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamRequestPrivate
 * \brief The DeleteEventStreamRequestPrivate class provides private implementation for DeleteEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const PinpointRequest::Action action, DeleteEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventStreamRequest
 * class' copy constructor.
 */
DeleteEventStreamRequestPrivate::DeleteEventStreamRequestPrivate(
    const DeleteEventStreamRequestPrivate &other, DeleteEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
