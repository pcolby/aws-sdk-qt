// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
