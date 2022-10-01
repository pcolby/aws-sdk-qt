// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereservationrequest.h"
#include "deletereservationrequest_p.h"
#include "deletereservationresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteReservationRequest
 * \brief The DeleteReservationRequest class provides an interface for MediaLive DeleteReservation requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteReservation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReservationRequest::DeleteReservationRequest(const DeleteReservationRequest &other)
    : MediaLiveRequest(new DeleteReservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReservationRequest object.
 */
DeleteReservationRequest::DeleteReservationRequest()
    : MediaLiveRequest(new DeleteReservationRequestPrivate(MediaLiveRequest::DeleteReservationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReservationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReservationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReservationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReservationResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteReservationRequestPrivate
 * \brief The DeleteReservationRequestPrivate class provides private implementation for DeleteReservationRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteReservationRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteReservationRequestPrivate::DeleteReservationRequestPrivate(
    const MediaLiveRequest::Action action, DeleteReservationRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReservationRequest
 * class' copy constructor.
 */
DeleteReservationRequestPrivate::DeleteReservationRequestPrivate(
    const DeleteReservationRequestPrivate &other, DeleteReservationRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
