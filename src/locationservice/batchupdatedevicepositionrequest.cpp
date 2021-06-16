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

#include "batchupdatedevicepositionrequest.h"
#include "batchupdatedevicepositionrequest_p.h"
#include "batchupdatedevicepositionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchUpdateDevicePositionRequest
 * \brief The BatchUpdateDevicePositionRequest class provides an interface for LocationService BatchUpdateDevicePosition requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchUpdateDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateDevicePositionRequest::BatchUpdateDevicePositionRequest(const BatchUpdateDevicePositionRequest &other)
    : LocationServiceRequest(new BatchUpdateDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateDevicePositionRequest object.
 */
BatchUpdateDevicePositionRequest::BatchUpdateDevicePositionRequest()
    : LocationServiceRequest(new BatchUpdateDevicePositionRequestPrivate(LocationServiceRequest::BatchUpdateDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchUpdateDevicePositionRequestPrivate
 * \brief The BatchUpdateDevicePositionRequestPrivate class provides private implementation for BatchUpdateDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchUpdateDevicePositionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchUpdateDevicePositionRequestPrivate::BatchUpdateDevicePositionRequestPrivate(
    const LocationServiceRequest::Action action, BatchUpdateDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateDevicePositionRequest
 * class' copy constructor.
 */
BatchUpdateDevicePositionRequestPrivate::BatchUpdateDevicePositionRequestPrivate(
    const BatchUpdateDevicePositionRequestPrivate &other, BatchUpdateDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
