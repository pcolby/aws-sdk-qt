// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
