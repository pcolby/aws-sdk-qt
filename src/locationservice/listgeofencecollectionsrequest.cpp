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

#include "listgeofencecollectionsrequest.h"
#include "listgeofencecollectionsrequest_p.h"
#include "listgeofencecollectionsresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListGeofenceCollectionsRequest
 * \brief The ListGeofenceCollectionsRequest class provides an interface for LocationService ListGeofenceCollections requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listGeofenceCollections
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeofenceCollectionsRequest::ListGeofenceCollectionsRequest(const ListGeofenceCollectionsRequest &other)
    : LocationServiceRequest(new ListGeofenceCollectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeofenceCollectionsRequest object.
 */
ListGeofenceCollectionsRequest::ListGeofenceCollectionsRequest()
    : LocationServiceRequest(new ListGeofenceCollectionsRequestPrivate(LocationServiceRequest::ListGeofenceCollectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeofenceCollectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeofenceCollectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeofenceCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeofenceCollectionsResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListGeofenceCollectionsRequestPrivate
 * \brief The ListGeofenceCollectionsRequestPrivate class provides private implementation for ListGeofenceCollectionsRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListGeofenceCollectionsRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListGeofenceCollectionsRequestPrivate::ListGeofenceCollectionsRequestPrivate(
    const LocationServiceRequest::Action action, ListGeofenceCollectionsRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeofenceCollectionsRequest
 * class' copy constructor.
 */
ListGeofenceCollectionsRequestPrivate::ListGeofenceCollectionsRequestPrivate(
    const ListGeofenceCollectionsRequestPrivate &other, ListGeofenceCollectionsRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
