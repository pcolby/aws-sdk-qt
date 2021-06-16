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

#include "getgeofencerequest.h"
#include "getgeofencerequest_p.h"
#include "getgeofenceresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetGeofenceRequest
 * \brief The GetGeofenceRequest class provides an interface for LocationService GetGeofence requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeofenceRequest::GetGeofenceRequest(const GetGeofenceRequest &other)
    : LocationServiceRequest(new GetGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeofenceRequest object.
 */
GetGeofenceRequest::GetGeofenceRequest()
    : LocationServiceRequest(new GetGeofenceRequestPrivate(LocationServiceRequest::GetGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new GetGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetGeofenceRequestPrivate
 * \brief The GetGeofenceRequestPrivate class provides private implementation for GetGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetGeofenceRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetGeofenceRequestPrivate::GetGeofenceRequestPrivate(
    const LocationServiceRequest::Action action, GetGeofenceRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeofenceRequest
 * class' copy constructor.
 */
GetGeofenceRequestPrivate::GetGeofenceRequestPrivate(
    const GetGeofenceRequestPrivate &other, GetGeofenceRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
