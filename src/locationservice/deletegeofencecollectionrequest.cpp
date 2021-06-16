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

#include "deletegeofencecollectionrequest.h"
#include "deletegeofencecollectionrequest_p.h"
#include "deletegeofencecollectionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteGeofenceCollectionRequest
 * \brief The DeleteGeofenceCollectionRequest class provides an interface for LocationService DeleteGeofenceCollection requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGeofenceCollectionRequest::DeleteGeofenceCollectionRequest(const DeleteGeofenceCollectionRequest &other)
    : LocationServiceRequest(new DeleteGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGeofenceCollectionRequest object.
 */
DeleteGeofenceCollectionRequest::DeleteGeofenceCollectionRequest()
    : LocationServiceRequest(new DeleteGeofenceCollectionRequestPrivate(LocationServiceRequest::DeleteGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DeleteGeofenceCollectionRequestPrivate
 * \brief The DeleteGeofenceCollectionRequestPrivate class provides private implementation for DeleteGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteGeofenceCollectionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DeleteGeofenceCollectionRequestPrivate::DeleteGeofenceCollectionRequestPrivate(
    const LocationServiceRequest::Action action, DeleteGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGeofenceCollectionRequest
 * class' copy constructor.
 */
DeleteGeofenceCollectionRequestPrivate::DeleteGeofenceCollectionRequestPrivate(
    const DeleteGeofenceCollectionRequestPrivate &other, DeleteGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
