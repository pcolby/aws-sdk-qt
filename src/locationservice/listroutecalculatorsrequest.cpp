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

#include "listroutecalculatorsrequest.h"
#include "listroutecalculatorsrequest_p.h"
#include "listroutecalculatorsresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListRouteCalculatorsRequest
 * \brief The ListRouteCalculatorsRequest class provides an interface for LocationService ListRouteCalculators requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listRouteCalculators
 */

/*!
 * Constructs a copy of \a other.
 */
ListRouteCalculatorsRequest::ListRouteCalculatorsRequest(const ListRouteCalculatorsRequest &other)
    : LocationServiceRequest(new ListRouteCalculatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRouteCalculatorsRequest object.
 */
ListRouteCalculatorsRequest::ListRouteCalculatorsRequest()
    : LocationServiceRequest(new ListRouteCalculatorsRequestPrivate(LocationServiceRequest::ListRouteCalculatorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRouteCalculatorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRouteCalculatorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRouteCalculatorsRequest::response(QNetworkReply * const reply) const
{
    return new ListRouteCalculatorsResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListRouteCalculatorsRequestPrivate
 * \brief The ListRouteCalculatorsRequestPrivate class provides private implementation for ListRouteCalculatorsRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListRouteCalculatorsRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListRouteCalculatorsRequestPrivate::ListRouteCalculatorsRequestPrivate(
    const LocationServiceRequest::Action action, ListRouteCalculatorsRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRouteCalculatorsRequest
 * class' copy constructor.
 */
ListRouteCalculatorsRequestPrivate::ListRouteCalculatorsRequestPrivate(
    const ListRouteCalculatorsRequestPrivate &other, ListRouteCalculatorsRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
