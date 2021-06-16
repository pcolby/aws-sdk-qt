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

#include "batchdeletegeofencerequest.h"
#include "batchdeletegeofencerequest_p.h"
#include "batchdeletegeofenceresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchDeleteGeofenceRequest
 * \brief The BatchDeleteGeofenceRequest class provides an interface for LocationService BatchDeleteGeofence requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchDeleteGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteGeofenceRequest::BatchDeleteGeofenceRequest(const BatchDeleteGeofenceRequest &other)
    : LocationServiceRequest(new BatchDeleteGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteGeofenceRequest object.
 */
BatchDeleteGeofenceRequest::BatchDeleteGeofenceRequest()
    : LocationServiceRequest(new BatchDeleteGeofenceRequestPrivate(LocationServiceRequest::BatchDeleteGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchDeleteGeofenceRequestPrivate
 * \brief The BatchDeleteGeofenceRequestPrivate class provides private implementation for BatchDeleteGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchDeleteGeofenceRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchDeleteGeofenceRequestPrivate::BatchDeleteGeofenceRequestPrivate(
    const LocationServiceRequest::Action action, BatchDeleteGeofenceRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteGeofenceRequest
 * class' copy constructor.
 */
BatchDeleteGeofenceRequestPrivate::BatchDeleteGeofenceRequestPrivate(
    const BatchDeleteGeofenceRequestPrivate &other, BatchDeleteGeofenceRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
