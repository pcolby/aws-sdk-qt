// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroutecalculatorrequest.h"
#include "updateroutecalculatorrequest_p.h"
#include "updateroutecalculatorresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateRouteCalculatorRequest
 * \brief The UpdateRouteCalculatorRequest class provides an interface for Location UpdateRouteCalculator requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateRouteCalculator
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRouteCalculatorRequest::UpdateRouteCalculatorRequest(const UpdateRouteCalculatorRequest &other)
    : LocationRequest(new UpdateRouteCalculatorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRouteCalculatorRequest object.
 */
UpdateRouteCalculatorRequest::UpdateRouteCalculatorRequest()
    : LocationRequest(new UpdateRouteCalculatorRequestPrivate(LocationRequest::UpdateRouteCalculatorAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRouteCalculatorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRouteCalculatorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRouteCalculatorRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRouteCalculatorResponse(*this, reply);
}

/*!
 * \class QtAws::Location::UpdateRouteCalculatorRequestPrivate
 * \brief The UpdateRouteCalculatorRequestPrivate class provides private implementation for UpdateRouteCalculatorRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateRouteCalculatorRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
UpdateRouteCalculatorRequestPrivate::UpdateRouteCalculatorRequestPrivate(
    const LocationRequest::Action action, UpdateRouteCalculatorRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRouteCalculatorRequest
 * class' copy constructor.
 */
UpdateRouteCalculatorRequestPrivate::UpdateRouteCalculatorRequestPrivate(
    const UpdateRouteCalculatorRequestPrivate &other, UpdateRouteCalculatorRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
