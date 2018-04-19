/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsegmentrequest.h"
#include "getsegmentrequest_p.h"
#include "getsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentRequest
 * \brief The GetSegmentRequest class provides an interface for Pinpoint GetSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegment
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentRequest::GetSegmentRequest(const GetSegmentRequest &other)
    : PinpointRequest(new GetSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentRequest object.
 */
GetSegmentRequest::GetSegmentRequest()
    : PinpointRequest(new GetSegmentRequestPrivate(PinpointRequest::GetSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentRequestPrivate
 * \brief The GetSegmentRequestPrivate class provides private implementation for GetSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const PinpointRequest::Action action, GetSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentRequest
 * class' copy constructor.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const GetSegmentRequestPrivate &other, GetSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
