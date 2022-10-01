// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesegmentrequest.h"
#include "updatesegmentrequest_p.h"
#include "updatesegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSegmentRequest
 * \brief The UpdateSegmentRequest class provides an interface for Pinpoint UpdateSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSegment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSegmentRequest::UpdateSegmentRequest(const UpdateSegmentRequest &other)
    : PinpointRequest(new UpdateSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSegmentRequest object.
 */
UpdateSegmentRequest::UpdateSegmentRequest()
    : PinpointRequest(new UpdateSegmentRequestPrivate(PinpointRequest::UpdateSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateSegmentRequestPrivate
 * \brief The UpdateSegmentRequestPrivate class provides private implementation for UpdateSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateSegmentRequestPrivate::UpdateSegmentRequestPrivate(
    const PinpointRequest::Action action, UpdateSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSegmentRequest
 * class' copy constructor.
 */
UpdateSegmentRequestPrivate::UpdateSegmentRequestPrivate(
    const UpdateSegmentRequestPrivate &other, UpdateSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
