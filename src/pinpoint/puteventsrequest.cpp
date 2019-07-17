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

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventsRequest
 * \brief The PutEventsRequest class provides an interface for Pinpoint PutEvents requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::putEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : PinpointRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : PinpointRequest(new PutEventsRequestPrivate(PinpointRequest::PutEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::PutEventsRequestPrivate
 * \brief The PutEventsRequestPrivate class provides private implementation for PutEventsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PinpointRequest::Action action, PutEventsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
