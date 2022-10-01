// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "calculaterouterequest.h"
#include "calculaterouterequest_p.h"
#include "calculaterouteresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CalculateRouteRequest
 * \brief The CalculateRouteRequest class provides an interface for Location CalculateRoute requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::calculateRoute
 */

/*!
 * Constructs a copy of \a other.
 */
CalculateRouteRequest::CalculateRouteRequest(const CalculateRouteRequest &other)
    : LocationRequest(new CalculateRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CalculateRouteRequest object.
 */
CalculateRouteRequest::CalculateRouteRequest()
    : LocationRequest(new CalculateRouteRequestPrivate(LocationRequest::CalculateRouteAction, this))
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
 * \class QtAws::Location::CalculateRouteRequestPrivate
 * \brief The CalculateRouteRequestPrivate class provides private implementation for CalculateRouteRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CalculateRouteRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CalculateRouteRequestPrivate::CalculateRouteRequestPrivate(
    const LocationRequest::Action action, CalculateRouteRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
