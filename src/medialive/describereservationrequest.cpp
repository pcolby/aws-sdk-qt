/*
    Copyright 2013-2021 Paul Colby

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

#include "describereservationrequest.h"
#include "describereservationrequest_p.h"
#include "describereservationresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeReservationRequest
 * \brief The DescribeReservationRequest class provides an interface for MediaLive DescribeReservation requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeReservation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservationRequest::DescribeReservationRequest(const DescribeReservationRequest &other)
    : MediaLiveRequest(new DescribeReservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservationRequest object.
 */
DescribeReservationRequest::DescribeReservationRequest()
    : MediaLiveRequest(new DescribeReservationRequestPrivate(MediaLiveRequest::DescribeReservationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeReservationRequestPrivate
 * \brief The DescribeReservationRequestPrivate class provides private implementation for DescribeReservationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeReservationRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeReservationRequestPrivate::DescribeReservationRequestPrivate(
    const MediaLiveRequest::Action action, DescribeReservationRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservationRequest
 * class' copy constructor.
 */
DescribeReservationRequestPrivate::DescribeReservationRequestPrivate(
    const DescribeReservationRequestPrivate &other, DescribeReservationRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
