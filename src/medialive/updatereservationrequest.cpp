/*
    Copyright 2013-2019 Paul Colby

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

#include "updatereservationrequest.h"
#include "updatereservationrequest_p.h"
#include "updatereservationresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateReservationRequest
 * \brief The UpdateReservationRequest class provides an interface for MediaLive UpdateReservation requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateReservation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReservationRequest::UpdateReservationRequest(const UpdateReservationRequest &other)
    : MediaLiveRequest(new UpdateReservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReservationRequest object.
 */
UpdateReservationRequest::UpdateReservationRequest()
    : MediaLiveRequest(new UpdateReservationRequestPrivate(MediaLiveRequest::UpdateReservationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReservationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReservationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReservationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReservationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateReservationRequestPrivate
 * \brief The UpdateReservationRequestPrivate class provides private implementation for UpdateReservationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateReservationRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateReservationRequestPrivate::UpdateReservationRequestPrivate(
    const MediaLiveRequest::Action action, UpdateReservationRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReservationRequest
 * class' copy constructor.
 */
UpdateReservationRequestPrivate::UpdateReservationRequestPrivate(
    const UpdateReservationRequestPrivate &other, UpdateReservationRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
