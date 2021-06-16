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

#include "getdevicepositionhistoryrequest.h"
#include "getdevicepositionhistoryrequest_p.h"
#include "getdevicepositionhistoryresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetDevicePositionHistoryRequest
 * \brief The GetDevicePositionHistoryRequest class provides an interface for LocationService GetDevicePositionHistory requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getDevicePositionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePositionHistoryRequest::GetDevicePositionHistoryRequest(const GetDevicePositionHistoryRequest &other)
    : LocationServiceRequest(new GetDevicePositionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePositionHistoryRequest object.
 */
GetDevicePositionHistoryRequest::GetDevicePositionHistoryRequest()
    : LocationServiceRequest(new GetDevicePositionHistoryRequestPrivate(LocationServiceRequest::GetDevicePositionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePositionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePositionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePositionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePositionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetDevicePositionHistoryRequestPrivate
 * \brief The GetDevicePositionHistoryRequestPrivate class provides private implementation for GetDevicePositionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetDevicePositionHistoryRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetDevicePositionHistoryRequestPrivate::GetDevicePositionHistoryRequestPrivate(
    const LocationServiceRequest::Action action, GetDevicePositionHistoryRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePositionHistoryRequest
 * class' copy constructor.
 */
GetDevicePositionHistoryRequestPrivate::GetDevicePositionHistoryRequestPrivate(
    const GetDevicePositionHistoryRequestPrivate &other, GetDevicePositionHistoryRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
