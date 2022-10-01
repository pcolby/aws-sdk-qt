// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
