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

#include "puteventstreamrequest.h"
#include "puteventstreamrequest_p.h"
#include "puteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventStreamRequest
 * \brief The PutEventStreamRequest class provides an interface for Pinpoint PutEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::putEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventStreamRequest::PutEventStreamRequest(const PutEventStreamRequest &other)
    : PinpointRequest(new PutEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventStreamRequest object.
 */
PutEventStreamRequest::PutEventStreamRequest()
    : PinpointRequest(new PutEventStreamRequestPrivate(PinpointRequest::PutEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new PutEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::PutEventStreamRequestPrivate
 * \brief The PutEventStreamRequestPrivate class provides private implementation for PutEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PinpointRequest::Action action, PutEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventStreamRequest
 * class' copy constructor.
 */
PutEventStreamRequestPrivate::PutEventStreamRequestPrivate(
    const PutEventStreamRequestPrivate &other, PutEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
