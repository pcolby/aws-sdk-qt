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

#include "batchgetdevicepositionrequest.h"
#include "batchgetdevicepositionrequest_p.h"
#include "batchgetdevicepositionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchGetDevicePositionRequest
 * \brief The BatchGetDevicePositionRequest class provides an interface for LocationService BatchGetDevicePosition requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchGetDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetDevicePositionRequest::BatchGetDevicePositionRequest(const BatchGetDevicePositionRequest &other)
    : LocationServiceRequest(new BatchGetDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetDevicePositionRequest object.
 */
BatchGetDevicePositionRequest::BatchGetDevicePositionRequest()
    : LocationServiceRequest(new BatchGetDevicePositionRequestPrivate(LocationServiceRequest::BatchGetDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchGetDevicePositionRequestPrivate
 * \brief The BatchGetDevicePositionRequestPrivate class provides private implementation for BatchGetDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchGetDevicePositionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchGetDevicePositionRequestPrivate::BatchGetDevicePositionRequestPrivate(
    const LocationServiceRequest::Action action, BatchGetDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDevicePositionRequest
 * class' copy constructor.
 */
BatchGetDevicePositionRequestPrivate::BatchGetDevicePositionRequestPrivate(
    const BatchGetDevicePositionRequestPrivate &other, BatchGetDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
