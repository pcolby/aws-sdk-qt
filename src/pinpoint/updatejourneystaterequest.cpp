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

#include "updatejourneystaterequest.h"
#include "updatejourneystaterequest_p.h"
#include "updatejourneystateresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateRequest
 * \brief The UpdateJourneyStateRequest class provides an interface for Pinpoint UpdateJourneyState requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateJourneyState
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJourneyStateRequest::UpdateJourneyStateRequest(const UpdateJourneyStateRequest &other)
    : PinpointRequest(new UpdateJourneyStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJourneyStateRequest object.
 */
UpdateJourneyStateRequest::UpdateJourneyStateRequest()
    : PinpointRequest(new UpdateJourneyStateRequestPrivate(PinpointRequest::UpdateJourneyStateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJourneyStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJourneyStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJourneyStateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJourneyStateResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateJourneyStateRequestPrivate
 * \brief The UpdateJourneyStateRequestPrivate class provides private implementation for UpdateJourneyStateRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateJourneyStateRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateJourneyStateRequestPrivate::UpdateJourneyStateRequestPrivate(
    const PinpointRequest::Action action, UpdateJourneyStateRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJourneyStateRequest
 * class' copy constructor.
 */
UpdateJourneyStateRequestPrivate::UpdateJourneyStateRequestPrivate(
    const UpdateJourneyStateRequestPrivate &other, UpdateJourneyStateRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
