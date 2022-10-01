// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listroutecalculatorsrequest.h"
#include "listroutecalculatorsrequest_p.h"
#include "listroutecalculatorsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListRouteCalculatorsRequest
 * \brief The ListRouteCalculatorsRequest class provides an interface for Location ListRouteCalculators requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listRouteCalculators
 */

/*!
 * Constructs a copy of \a other.
 */
ListRouteCalculatorsRequest::ListRouteCalculatorsRequest(const ListRouteCalculatorsRequest &other)
    : LocationRequest(new ListRouteCalculatorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRouteCalculatorsRequest object.
 */
ListRouteCalculatorsRequest::ListRouteCalculatorsRequest()
    : LocationRequest(new ListRouteCalculatorsRequestPrivate(LocationRequest::ListRouteCalculatorsAction, this))
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
 * \class QtAws::Location::ListRouteCalculatorsRequestPrivate
 * \brief The ListRouteCalculatorsRequestPrivate class provides private implementation for ListRouteCalculatorsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListRouteCalculatorsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListRouteCalculatorsRequestPrivate::ListRouteCalculatorsRequestPrivate(
    const LocationRequest::Action action, ListRouteCalculatorsRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
