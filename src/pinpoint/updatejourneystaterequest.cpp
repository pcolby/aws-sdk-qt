// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
