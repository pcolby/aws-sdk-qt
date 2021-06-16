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

#include "listgeofencesrequest.h"
#include "listgeofencesrequest_p.h"
#include "listgeofencesresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListGeofencesRequest
 * \brief The ListGeofencesRequest class provides an interface for LocationService ListGeofences requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listGeofences
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeofencesRequest::ListGeofencesRequest(const ListGeofencesRequest &other)
    : LocationServiceRequest(new ListGeofencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeofencesRequest object.
 */
ListGeofencesRequest::ListGeofencesRequest()
    : LocationServiceRequest(new ListGeofencesRequestPrivate(LocationServiceRequest::ListGeofencesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeofencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeofencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeofencesRequest::response(QNetworkReply * const reply) const
{
    return new ListGeofencesResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListGeofencesRequestPrivate
 * \brief The ListGeofencesRequestPrivate class provides private implementation for ListGeofencesRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListGeofencesRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListGeofencesRequestPrivate::ListGeofencesRequestPrivate(
    const LocationServiceRequest::Action action, ListGeofencesRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeofencesRequest
 * class' copy constructor.
 */
ListGeofencesRequestPrivate::ListGeofencesRequestPrivate(
    const ListGeofencesRequestPrivate &other, ListGeofencesRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
