// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreservationsrequest.h"
#include "listreservationsrequest_p.h"
#include "listreservationsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListReservationsRequest
 * \brief The ListReservationsRequest class provides an interface for MediaLive ListReservations requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listReservations
 */

/*!
 * Constructs a copy of \a other.
 */
ListReservationsRequest::ListReservationsRequest(const ListReservationsRequest &other)
    : MediaLiveRequest(new ListReservationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReservationsRequest object.
 */
ListReservationsRequest::ListReservationsRequest()
    : MediaLiveRequest(new ListReservationsRequestPrivate(MediaLiveRequest::ListReservationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReservationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReservationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReservationsRequest::response(QNetworkReply * const reply) const
{
    return new ListReservationsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListReservationsRequestPrivate
 * \brief The ListReservationsRequestPrivate class provides private implementation for ListReservationsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListReservationsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListReservationsRequestPrivate::ListReservationsRequestPrivate(
    const MediaLiveRequest::Action action, ListReservationsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReservationsRequest
 * class' copy constructor.
 */
ListReservationsRequestPrivate::ListReservationsRequestPrivate(
    const ListReservationsRequestPrivate &other, ListReservationsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
