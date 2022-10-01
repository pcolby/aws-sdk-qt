// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeroutecalculatorrequest.h"
#include "describeroutecalculatorrequest_p.h"
#include "describeroutecalculatorresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeRouteCalculatorRequest
 * \brief The DescribeRouteCalculatorRequest class provides an interface for Location DescribeRouteCalculator requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRouteCalculatorRequest::DescribeRouteCalculatorRequest(const DescribeRouteCalculatorRequest &other)
    : LocationRequest(new DescribeRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRouteCalculatorRequest object.
 */
DescribeRouteCalculatorRequest::DescribeRouteCalculatorRequest()
    : LocationRequest(new DescribeRouteCalculatorRequestPrivate(LocationRequest::DescribeRouteCalculatorAction, this))
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
 * \class QtAws::Location::DescribeRouteCalculatorRequestPrivate
 * \brief The DescribeRouteCalculatorRequestPrivate class provides private implementation for DescribeRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeRouteCalculatorRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DescribeRouteCalculatorRequestPrivate::DescribeRouteCalculatorRequestPrivate(
    const LocationRequest::Action action, DescribeRouteCalculatorRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
