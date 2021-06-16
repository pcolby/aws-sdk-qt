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

#include "batchputgeofencerequest.h"
#include "batchputgeofencerequest_p.h"
#include "batchputgeofenceresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchPutGeofenceRequest
 * \brief The BatchPutGeofenceRequest class provides an interface for LocationService BatchPutGeofence requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchPutGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutGeofenceRequest::BatchPutGeofenceRequest(const BatchPutGeofenceRequest &other)
    : LocationServiceRequest(new BatchPutGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutGeofenceRequest object.
 */
BatchPutGeofenceRequest::BatchPutGeofenceRequest()
    : LocationServiceRequest(new BatchPutGeofenceRequestPrivate(LocationServiceRequest::BatchPutGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchPutGeofenceRequestPrivate
 * \brief The BatchPutGeofenceRequestPrivate class provides private implementation for BatchPutGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchPutGeofenceRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchPutGeofenceRequestPrivate::BatchPutGeofenceRequestPrivate(
    const LocationServiceRequest::Action action, BatchPutGeofenceRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutGeofenceRequest
 * class' copy constructor.
 */
BatchPutGeofenceRequestPrivate::BatchPutGeofenceRequestPrivate(
    const BatchPutGeofenceRequestPrivate &other, BatchPutGeofenceRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
