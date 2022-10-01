// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
