// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroutecalculatorrequest.h"
#include "deleteroutecalculatorrequest_p.h"
#include "deleteroutecalculatorresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteRouteCalculatorRequest
 * \brief The DeleteRouteCalculatorRequest class provides an interface for Location DeleteRouteCalculator requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteCalculatorRequest::DeleteRouteCalculatorRequest(const DeleteRouteCalculatorRequest &other)
    : LocationRequest(new DeleteRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteCalculatorRequest object.
 */
DeleteRouteCalculatorRequest::DeleteRouteCalculatorRequest()
    : LocationRequest(new DeleteRouteCalculatorRequestPrivate(LocationRequest::DeleteRouteCalculatorAction, this))
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
 * \class QtAws::Location::DeleteRouteCalculatorRequestPrivate
 * \brief The DeleteRouteCalculatorRequestPrivate class provides private implementation for DeleteRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteRouteCalculatorRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DeleteRouteCalculatorRequestPrivate::DeleteRouteCalculatorRequestPrivate(
    const LocationRequest::Action action, DeleteRouteCalculatorRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
