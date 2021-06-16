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

#include "createjourneyrequest.h"
#include "createjourneyrequest_p.h"
#include "createjourneyresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateJourneyRequest
 * \brief The CreateJourneyRequest class provides an interface for Pinpoint CreateJourney requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createJourney
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJourneyRequest::CreateJourneyRequest(const CreateJourneyRequest &other)
    : PinpointRequest(new CreateJourneyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJourneyRequest object.
 */
CreateJourneyRequest::CreateJourneyRequest()
    : PinpointRequest(new CreateJourneyRequestPrivate(PinpointRequest::CreateJourneyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJourneyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJourneyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJourneyRequest::response(QNetworkReply * const reply) const
{
    return new CreateJourneyResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateJourneyRequestPrivate
 * \brief The CreateJourneyRequestPrivate class provides private implementation for CreateJourneyRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateJourneyRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateJourneyRequestPrivate::CreateJourneyRequestPrivate(
    const PinpointRequest::Action action, CreateJourneyRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJourneyRequest
 * class' copy constructor.
 */
CreateJourneyRequestPrivate::CreateJourneyRequestPrivate(
    const CreateJourneyRequestPrivate &other, CreateJourneyRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
