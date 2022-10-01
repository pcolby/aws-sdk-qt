// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "calculateroutematrixrequest.h"
#include "calculateroutematrixrequest_p.h"
#include "calculateroutematrixresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CalculateRouteMatrixRequest
 * \brief The CalculateRouteMatrixRequest class provides an interface for Location CalculateRouteMatrix requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::calculateRouteMatrix
 */

/*!
 * Constructs a copy of \a other.
 */
CalculateRouteMatrixRequest::CalculateRouteMatrixRequest(const CalculateRouteMatrixRequest &other)
    : LocationRequest(new CalculateRouteMatrixRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CalculateRouteMatrixRequest object.
 */
CalculateRouteMatrixRequest::CalculateRouteMatrixRequest()
    : LocationRequest(new CalculateRouteMatrixRequestPrivate(LocationRequest::CalculateRouteMatrixAction, this))
{

}

/*!
 * \reimp
 */
bool CalculateRouteMatrixRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CalculateRouteMatrixResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CalculateRouteMatrixRequest::response(QNetworkReply * const reply) const
{
    return new CalculateRouteMatrixResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CalculateRouteMatrixRequestPrivate
 * \brief The CalculateRouteMatrixRequestPrivate class provides private implementation for CalculateRouteMatrixRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CalculateRouteMatrixRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CalculateRouteMatrixRequestPrivate::CalculateRouteMatrixRequestPrivate(
    const LocationRequest::Action action, CalculateRouteMatrixRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CalculateRouteMatrixRequest
 * class' copy constructor.
 */
CalculateRouteMatrixRequestPrivate::CalculateRouteMatrixRequestPrivate(
    const CalculateRouteMatrixRequestPrivate &other, CalculateRouteMatrixRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
