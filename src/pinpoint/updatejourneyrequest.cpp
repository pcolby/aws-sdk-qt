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

#include "updatejourneyrequest.h"
#include "updatejourneyrequest_p.h"
#include "updatejourneyresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateJourneyRequest
 * \brief The UpdateJourneyRequest class provides an interface for Pinpoint UpdateJourney requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateJourney
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJourneyRequest::UpdateJourneyRequest(const UpdateJourneyRequest &other)
    : PinpointRequest(new UpdateJourneyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJourneyRequest object.
 */
UpdateJourneyRequest::UpdateJourneyRequest()
    : PinpointRequest(new UpdateJourneyRequestPrivate(PinpointRequest::UpdateJourneyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJourneyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJourneyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJourneyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJourneyResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateJourneyRequestPrivate
 * \brief The UpdateJourneyRequestPrivate class provides private implementation for UpdateJourneyRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateJourneyRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateJourneyRequestPrivate::UpdateJourneyRequestPrivate(
    const PinpointRequest::Action action, UpdateJourneyRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJourneyRequest
 * class' copy constructor.
 */
UpdateJourneyRequestPrivate::UpdateJourneyRequestPrivate(
    const UpdateJourneyRequestPrivate &other, UpdateJourneyRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
