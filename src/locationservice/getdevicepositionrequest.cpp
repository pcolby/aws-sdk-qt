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

#include "getdevicepositionrequest.h"
#include "getdevicepositionrequest_p.h"
#include "getdevicepositionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetDevicePositionRequest
 * \brief The GetDevicePositionRequest class provides an interface for LocationService GetDevicePosition requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePositionRequest::GetDevicePositionRequest(const GetDevicePositionRequest &other)
    : LocationServiceRequest(new GetDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePositionRequest object.
 */
GetDevicePositionRequest::GetDevicePositionRequest()
    : LocationServiceRequest(new GetDevicePositionRequestPrivate(LocationServiceRequest::GetDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetDevicePositionRequestPrivate
 * \brief The GetDevicePositionRequestPrivate class provides private implementation for GetDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetDevicePositionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetDevicePositionRequestPrivate::GetDevicePositionRequestPrivate(
    const LocationServiceRequest::Action action, GetDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePositionRequest
 * class' copy constructor.
 */
GetDevicePositionRequestPrivate::GetDevicePositionRequestPrivate(
    const GetDevicePositionRequestPrivate &other, GetDevicePositionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
