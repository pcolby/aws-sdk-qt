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

#include "creategeofencecollectionrequest.h"
#include "creategeofencecollectionrequest_p.h"
#include "creategeofencecollectionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateGeofenceCollectionRequest
 * \brief The CreateGeofenceCollectionRequest class provides an interface for LocationService CreateGeofenceCollection requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGeofenceCollectionRequest::CreateGeofenceCollectionRequest(const CreateGeofenceCollectionRequest &other)
    : LocationServiceRequest(new CreateGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGeofenceCollectionRequest object.
 */
CreateGeofenceCollectionRequest::CreateGeofenceCollectionRequest()
    : LocationServiceRequest(new CreateGeofenceCollectionRequestPrivate(LocationServiceRequest::CreateGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CreateGeofenceCollectionRequestPrivate
 * \brief The CreateGeofenceCollectionRequestPrivate class provides private implementation for CreateGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateGeofenceCollectionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CreateGeofenceCollectionRequestPrivate::CreateGeofenceCollectionRequestPrivate(
    const LocationServiceRequest::Action action, CreateGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGeofenceCollectionRequest
 * class' copy constructor.
 */
CreateGeofenceCollectionRequestPrivate::CreateGeofenceCollectionRequestPrivate(
    const CreateGeofenceCollectionRequestPrivate &other, CreateGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
