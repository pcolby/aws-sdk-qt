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

#include "batchdeletedevicepositionhistoryrequest.h"
#include "batchdeletedevicepositionhistoryrequest_p.h"
#include "batchdeletedevicepositionhistoryresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchDeleteDevicePositionHistoryRequest
 * \brief The BatchDeleteDevicePositionHistoryRequest class provides an interface for LocationService BatchDeleteDevicePositionHistory requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchDeleteDevicePositionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteDevicePositionHistoryRequest::BatchDeleteDevicePositionHistoryRequest(const BatchDeleteDevicePositionHistoryRequest &other)
    : LocationServiceRequest(new BatchDeleteDevicePositionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteDevicePositionHistoryRequest object.
 */
BatchDeleteDevicePositionHistoryRequest::BatchDeleteDevicePositionHistoryRequest()
    : LocationServiceRequest(new BatchDeleteDevicePositionHistoryRequestPrivate(LocationServiceRequest::BatchDeleteDevicePositionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteDevicePositionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteDevicePositionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteDevicePositionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteDevicePositionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::BatchDeleteDevicePositionHistoryRequestPrivate
 * \brief The BatchDeleteDevicePositionHistoryRequestPrivate class provides private implementation for BatchDeleteDevicePositionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
BatchDeleteDevicePositionHistoryRequestPrivate::BatchDeleteDevicePositionHistoryRequestPrivate(
    const LocationServiceRequest::Action action, BatchDeleteDevicePositionHistoryRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteDevicePositionHistoryRequest
 * class' copy constructor.
 */
BatchDeleteDevicePositionHistoryRequestPrivate::BatchDeleteDevicePositionHistoryRequestPrivate(
    const BatchDeleteDevicePositionHistoryRequestPrivate &other, BatchDeleteDevicePositionHistoryRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
