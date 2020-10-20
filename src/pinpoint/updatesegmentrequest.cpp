/*
    Copyright 2013-2020 Paul Colby

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
