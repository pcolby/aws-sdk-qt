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

#include "calculaterouterequest.h"
#include "calculaterouterequest_p.h"
#include "calculaterouteresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CalculateRouteRequest
 * \brief The CalculateRouteRequest class provides an interface for LocationService CalculateRoute requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::calculateRoute
 */

/*!
 * Constructs a copy of \a other.
 */
CalculateRouteRequest::CalculateRouteRequest(const CalculateRouteRequest &other)
    : LocationServiceRequest(new CalculateRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CalculateRouteRequest object.
 */
CalculateRouteRequest::CalculateRouteRequest()
    : LocationServiceRequest(new CalculateRouteRequestPrivate(LocationServiceRequest::CalculateRouteAction, this))
{

}

/*!
 * \reimp
 */
bool CalculateRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CalculateRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CalculateRouteRequest::response(QNetworkReply * const reply) const
{
    return new CalculateRouteResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CalculateRouteRequestPrivate
 * \brief The CalculateRouteRequestPrivate class provides private implementation for CalculateRouteRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CalculateRouteRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CalculateRouteRequestPrivate::CalculateRouteRequestPrivate(
    const LocationServiceRequest::Action action, CalculateRouteRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CalculateRouteRequest
 * class' copy constructor.
 */
CalculateRouteRequestPrivate::CalculateRouteRequestPrivate(
    const CalculateRouteRequestPrivate &other, CalculateRouteRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
