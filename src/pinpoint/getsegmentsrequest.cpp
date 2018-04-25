/*
    Copyright 2013-2018 Paul Colby

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

#include "getsegmentsrequest.h"
#include "getsegmentsrequest_p.h"
#include "getsegmentsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentsRequest
 * \brief The GetSegmentsRequest class provides an interface for Pinpoint GetSegments requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegments
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentsRequest::GetSegmentsRequest(const GetSegmentsRequest &other)
    : PinpointRequest(new GetSegmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentsRequest object.
 */
GetSegmentsRequest::GetSegmentsRequest()
    : PinpointRequest(new GetSegmentsRequestPrivate(PinpointRequest::GetSegmentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentsRequestPrivate
 * \brief The GetSegmentsRequestPrivate class provides private implementation for GetSegmentsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentsRequest
 * class' copy constructor.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const GetSegmentsRequestPrivate &other, GetSegmentsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
