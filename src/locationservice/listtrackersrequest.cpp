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

#include "listtrackersrequest.h"
#include "listtrackersrequest_p.h"
#include "listtrackersresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListTrackersRequest
 * \brief The ListTrackersRequest class provides an interface for LocationService ListTrackers requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listTrackers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrackersRequest::ListTrackersRequest(const ListTrackersRequest &other)
    : LocationServiceRequest(new ListTrackersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrackersRequest object.
 */
ListTrackersRequest::ListTrackersRequest()
    : LocationServiceRequest(new ListTrackersRequestPrivate(LocationServiceRequest::ListTrackersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrackersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrackersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrackersRequest::response(QNetworkReply * const reply) const
{
    return new ListTrackersResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListTrackersRequestPrivate
 * \brief The ListTrackersRequestPrivate class provides private implementation for ListTrackersRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListTrackersRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListTrackersRequestPrivate::ListTrackersRequestPrivate(
    const LocationServiceRequest::Action action, ListTrackersRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrackersRequest
 * class' copy constructor.
 */
ListTrackersRequestPrivate::ListTrackersRequestPrivate(
    const ListTrackersRequestPrivate &other, ListTrackersRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
