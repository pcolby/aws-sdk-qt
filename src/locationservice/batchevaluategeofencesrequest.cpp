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

#include "batchevaluategeofencesrequest.h"
#include "batchevaluategeofencesrequest_p.h"
#include "batchevaluategeofencesresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchEvaluateGeofencesRequest
 * \brief The BatchEvaluateGeofencesRequest class provides an interface for LocationService BatchEvaluateGeofences requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchEvaluateGeofences
 */

/*!
 * Constructs a copy of \a other.
 */
BatchEvaluateGeofencesRequest::BatchEvaluateGeofencesRequest(const BatchEvaluateGeofencesRequest &other)
    : LocationServiceRequest(new BatchEvaluateGeofencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchEvaluateGeofencesRequest object.
 */
BatchEvaluateGeofencesRequest::BatchEvaluateGeofencesRequest()
    : LocationServiceRequest(new BatchEvaluateGeofencesRequestPrivate(LocationServiceRequest::BatchEvaluateGeofencesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchEvaluateGeofencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchEvaluateGeofencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchEvaluateGeofencesRequest::response(QNetworkReply * const reply) const
{
    return new BatchEvaluateGeofencesResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchEvaluateGeofencesRequestPrivate
 * \brief The BatchEvaluateGeofencesRequestPrivate class provides private implementation for BatchEvaluateGeofencesRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchEvaluateGeofencesRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchEvaluateGeofencesRequestPrivate::BatchEvaluateGeofencesRequestPrivate(
    const LocationServiceRequest::Action action, BatchEvaluateGeofencesRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchEvaluateGeofencesRequest
 * class' copy constructor.
 */
BatchEvaluateGeofencesRequestPrivate::BatchEvaluateGeofencesRequestPrivate(
    const BatchEvaluateGeofencesRequestPrivate &other, BatchEvaluateGeofencesRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
