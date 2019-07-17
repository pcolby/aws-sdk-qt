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

#include "geteventstreamrequest.h"
#include "geteventstreamrequest_p.h"
#include "geteventstreamresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEventStreamRequest
 * \brief The GetEventStreamRequest class provides an interface for Pinpoint GetEventStream requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getEventStream
 */

/*!
 * Constructs a copy of \a other.
 */
GetEventStreamRequest::GetEventStreamRequest(const GetEventStreamRequest &other)
    : PinpointRequest(new GetEventStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEventStreamRequest object.
 */
GetEventStreamRequest::GetEventStreamRequest()
    : PinpointRequest(new GetEventStreamRequestPrivate(PinpointRequest::GetEventStreamAction, this))
{

}

/*!
 * \reimp
 */
bool GetEventStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEventStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEventStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetEventStreamResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEventStreamRequestPrivate
 * \brief The GetEventStreamRequestPrivate class provides private implementation for GetEventStreamRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEventStreamRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const PinpointRequest::Action action, GetEventStreamRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEventStreamRequest
 * class' copy constructor.
 */
GetEventStreamRequestPrivate::GetEventStreamRequestPrivate(
    const GetEventStreamRequestPrivate &other, GetEventStreamRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
