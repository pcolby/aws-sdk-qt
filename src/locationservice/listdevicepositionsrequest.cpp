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

#include "listdevicepositionsrequest.h"
#include "listdevicepositionsrequest_p.h"
#include "listdevicepositionsresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListDevicePositionsRequest
 * \brief The ListDevicePositionsRequest class provides an interface for LocationService ListDevicePositions requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listDevicePositions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicePositionsRequest::ListDevicePositionsRequest(const ListDevicePositionsRequest &other)
    : LocationServiceRequest(new ListDevicePositionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicePositionsRequest object.
 */
ListDevicePositionsRequest::ListDevicePositionsRequest()
    : LocationServiceRequest(new ListDevicePositionsRequestPrivate(LocationServiceRequest::ListDevicePositionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicePositionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicePositionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicePositionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicePositionsResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListDevicePositionsRequestPrivate
 * \brief The ListDevicePositionsRequestPrivate class provides private implementation for ListDevicePositionsRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListDevicePositionsRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListDevicePositionsRequestPrivate::ListDevicePositionsRequestPrivate(
    const LocationServiceRequest::Action action, ListDevicePositionsRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicePositionsRequest
 * class' copy constructor.
 */
ListDevicePositionsRequestPrivate::ListDevicePositionsRequestPrivate(
    const ListDevicePositionsRequestPrivate &other, ListDevicePositionsRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
