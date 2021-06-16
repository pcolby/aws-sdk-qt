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

#include "describeroutecalculatorrequest.h"
#include "describeroutecalculatorrequest_p.h"
#include "describeroutecalculatorresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeRouteCalculatorRequest
 * \brief The DescribeRouteCalculatorRequest class provides an interface for LocationService DescribeRouteCalculator requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRouteCalculatorRequest::DescribeRouteCalculatorRequest(const DescribeRouteCalculatorRequest &other)
    : LocationServiceRequest(new DescribeRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRouteCalculatorRequest object.
 */
DescribeRouteCalculatorRequest::DescribeRouteCalculatorRequest()
    : LocationServiceRequest(new DescribeRouteCalculatorRequestPrivate(LocationServiceRequest::DescribeRouteCalculatorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRouteCalculatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRouteCalculatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRouteCalculatorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRouteCalculatorResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DescribeRouteCalculatorRequestPrivate
 * \brief The DescribeRouteCalculatorRequestPrivate class provides private implementation for DescribeRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeRouteCalculatorRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DescribeRouteCalculatorRequestPrivate::DescribeRouteCalculatorRequestPrivate(
    const LocationServiceRequest::Action action, DescribeRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRouteCalculatorRequest
 * class' copy constructor.
 */
DescribeRouteCalculatorRequestPrivate::DescribeRouteCalculatorRequestPrivate(
    const DescribeRouteCalculatorRequestPrivate &other, DescribeRouteCalculatorRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
