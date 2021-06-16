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

#include "deletejourneyrequest.h"
#include "deletejourneyrequest_p.h"
#include "deletejourneyresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteJourneyRequest
 * \brief The DeleteJourneyRequest class provides an interface for Pinpoint DeleteJourney requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteJourney
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJourneyRequest::DeleteJourneyRequest(const DeleteJourneyRequest &other)
    : PinpointRequest(new DeleteJourneyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJourneyRequest object.
 */
DeleteJourneyRequest::DeleteJourneyRequest()
    : PinpointRequest(new DeleteJourneyRequestPrivate(PinpointRequest::DeleteJourneyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJourneyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJourneyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJourneyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJourneyResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteJourneyRequestPrivate
 * \brief The DeleteJourneyRequestPrivate class provides private implementation for DeleteJourneyRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteJourneyRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteJourneyRequestPrivate::DeleteJourneyRequestPrivate(
    const PinpointRequest::Action action, DeleteJourneyRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJourneyRequest
 * class' copy constructor.
 */
DeleteJourneyRequestPrivate::DeleteJourneyRequestPrivate(
    const DeleteJourneyRequestPrivate &other, DeleteJourneyRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
