// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventsrequest.h"
#include "puteventsrequest_p.h"
#include "puteventsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventsRequest
 * \brief The PutEventsRequest class provides an interface for Pinpoint PutEvents requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::putEvents
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventsRequest::PutEventsRequest(const PutEventsRequest &other)
    : PinpointRequest(new PutEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventsRequest object.
 */
PutEventsRequest::PutEventsRequest()
    : PinpointRequest(new PutEventsRequestPrivate(PinpointRequest::PutEventsAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventsRequest::response(QNetworkReply * const reply) const
{
    return new PutEventsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::PutEventsRequestPrivate
 * \brief The PutEventsRequestPrivate class provides private implementation for PutEventsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PinpointRequest::Action action, PutEventsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventsRequest
 * class' copy constructor.
 */
PutEventsRequestPrivate::PutEventsRequestPrivate(
    const PutEventsRequestPrivate &other, PutEventsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
