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

#include "deleteroutecalculatorrequest.h"
#include "deleteroutecalculatorrequest_p.h"
#include "deleteroutecalculatorresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteRouteCalculatorRequest
 * \brief The DeleteRouteCalculatorRequest class provides an interface for LocationService DeleteRouteCalculator requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteCalculatorRequest::DeleteRouteCalculatorRequest(const DeleteRouteCalculatorRequest &other)
    : LocationServiceRequest(new DeleteRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteCalculatorRequest object.
 */
DeleteRouteCalculatorRequest::DeleteRouteCalculatorRequest()
    : LocationServiceRequest(new DeleteRouteCalculatorRequestPrivate(LocationServiceRequest::DeleteRouteCalculatorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteCalculatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteCalculatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteCalculatorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteCalculatorResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DeleteRouteCalculatorRequestPrivate
 * \brief The DeleteRouteCalculatorRequestPrivate class provides private implementation for DeleteRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteRouteCalculatorRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DeleteRouteCalculatorRequestPrivate::DeleteRouteCalculatorRequestPrivate(
    const LocationServiceRequest::Action action, DeleteRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteCalculatorRequest
 * class' copy constructor.
 */
DeleteRouteCalculatorRequestPrivate::DeleteRouteCalculatorRequestPrivate(
    const DeleteRouteCalculatorRequestPrivate &other, DeleteRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
