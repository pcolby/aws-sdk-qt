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
