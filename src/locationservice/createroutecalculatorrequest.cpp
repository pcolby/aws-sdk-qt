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

#include "createroutecalculatorrequest.h"
#include "createroutecalculatorrequest_p.h"
#include "createroutecalculatorresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateRouteCalculatorRequest
 * \brief The CreateRouteCalculatorRequest class provides an interface for LocationService CreateRouteCalculator requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRouteCalculatorRequest::CreateRouteCalculatorRequest(const CreateRouteCalculatorRequest &other)
    : LocationServiceRequest(new CreateRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRouteCalculatorRequest object.
 */
CreateRouteCalculatorRequest::CreateRouteCalculatorRequest()
    : LocationServiceRequest(new CreateRouteCalculatorRequestPrivate(LocationServiceRequest::CreateRouteCalculatorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRouteCalculatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRouteCalculatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRouteCalculatorRequest::response(QNetworkReply * const reply) const
{
    return new CreateRouteCalculatorResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CreateRouteCalculatorRequestPrivate
 * \brief The CreateRouteCalculatorRequestPrivate class provides private implementation for CreateRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateRouteCalculatorRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CreateRouteCalculatorRequestPrivate::CreateRouteCalculatorRequestPrivate(
    const LocationServiceRequest::Action action, CreateRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRouteCalculatorRequest
 * class' copy constructor.
 */
CreateRouteCalculatorRequestPrivate::CreateRouteCalculatorRequestPrivate(
    const CreateRouteCalculatorRequestPrivate &other, CreateRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
