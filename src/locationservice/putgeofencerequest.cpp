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

#include "putgeofencerequest.h"
#include "putgeofencerequest_p.h"
#include "putgeofenceresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::PutGeofenceRequest
 * \brief The PutGeofenceRequest class provides an interface for LocationService PutGeofence requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::putGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
PutGeofenceRequest::PutGeofenceRequest(const PutGeofenceRequest &other)
    : LocationServiceRequest(new PutGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutGeofenceRequest object.
 */
PutGeofenceRequest::PutGeofenceRequest()
    : LocationServiceRequest(new PutGeofenceRequestPrivate(LocationServiceRequest::PutGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool PutGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new PutGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::PutGeofenceRequestPrivate
 * \brief The PutGeofenceRequestPrivate class provides private implementation for PutGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a PutGeofenceRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
PutGeofenceRequestPrivate::PutGeofenceRequestPrivate(
    const LocationServiceRequest::Action action, PutGeofenceRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutGeofenceRequest
 * class' copy constructor.
 */
PutGeofenceRequestPrivate::PutGeofenceRequestPrivate(
    const PutGeofenceRequestPrivate &other, PutGeofenceRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
