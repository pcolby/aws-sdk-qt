// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmapsrequest.h"
#include "listmapsrequest_p.h"
#include "listmapsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListMapsRequest
 * \brief The ListMapsRequest class provides an interface for Location ListMaps requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listMaps
 */

/*!
 * Constructs a copy of \a other.
 */
ListMapsRequest::ListMapsRequest(const ListMapsRequest &other)
    : LocationRequest(new ListMapsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMapsRequest object.
 */
ListMapsRequest::ListMapsRequest()
    : LocationRequest(new ListMapsRequestPrivate(LocationRequest::ListMapsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMapsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMapsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMapsRequest::response(QNetworkReply * const reply) const
{
    return new ListMapsResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListMapsRequestPrivate
 * \brief The ListMapsRequestPrivate class provides private implementation for ListMapsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListMapsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListMapsRequestPrivate::ListMapsRequestPrivate(
    const LocationRequest::Action action, ListMapsRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMapsRequest
 * class' copy constructor.
 */
ListMapsRequestPrivate::ListMapsRequestPrivate(
    const ListMapsRequestPrivate &other, ListMapsRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
