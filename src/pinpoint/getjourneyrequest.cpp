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

#include "getjourneyrequest.h"
#include "getjourneyrequest_p.h"
#include "getjourneyresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyRequest
 * \brief The GetJourneyRequest class provides an interface for Pinpoint GetJourney requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourney
 */

/*!
 * Constructs a copy of \a other.
 */
GetJourneyRequest::GetJourneyRequest(const GetJourneyRequest &other)
    : PinpointRequest(new GetJourneyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJourneyRequest object.
 */
GetJourneyRequest::GetJourneyRequest()
    : PinpointRequest(new GetJourneyRequestPrivate(PinpointRequest::GetJourneyAction, this))
{

}

/*!
 * \reimp
 */
bool GetJourneyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJourneyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJourneyRequest::response(QNetworkReply * const reply) const
{
    return new GetJourneyResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetJourneyRequestPrivate
 * \brief The GetJourneyRequestPrivate class provides private implementation for GetJourneyRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetJourneyRequestPrivate::GetJourneyRequestPrivate(
    const PinpointRequest::Action action, GetJourneyRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJourneyRequest
 * class' copy constructor.
 */
GetJourneyRequestPrivate::GetJourneyRequestPrivate(
    const GetJourneyRequestPrivate &other, GetJourneyRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
