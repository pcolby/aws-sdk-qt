// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplaceindexesrequest.h"
#include "listplaceindexesrequest_p.h"
#include "listplaceindexesresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListPlaceIndexesRequest
 * \brief The ListPlaceIndexesRequest class provides an interface for Location ListPlaceIndexes requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listPlaceIndexes
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlaceIndexesRequest::ListPlaceIndexesRequest(const ListPlaceIndexesRequest &other)
    : LocationRequest(new ListPlaceIndexesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlaceIndexesRequest object.
 */
ListPlaceIndexesRequest::ListPlaceIndexesRequest()
    : LocationRequest(new ListPlaceIndexesRequestPrivate(LocationRequest::ListPlaceIndexesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPlaceIndexesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPlaceIndexesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPlaceIndexesRequest::response(QNetworkReply * const reply) const
{
    return new ListPlaceIndexesResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListPlaceIndexesRequestPrivate
 * \brief The ListPlaceIndexesRequestPrivate class provides private implementation for ListPlaceIndexesRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListPlaceIndexesRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListPlaceIndexesRequestPrivate::ListPlaceIndexesRequestPrivate(
    const LocationRequest::Action action, ListPlaceIndexesRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPlaceIndexesRequest
 * class' copy constructor.
 */
ListPlaceIndexesRequestPrivate::ListPlaceIndexesRequestPrivate(
    const ListPlaceIndexesRequestPrivate &other, ListPlaceIndexesRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
