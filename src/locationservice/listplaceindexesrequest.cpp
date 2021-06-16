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

#include "listplaceindexesrequest.h"
#include "listplaceindexesrequest_p.h"
#include "listplaceindexesresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListPlaceIndexesRequest
 * \brief The ListPlaceIndexesRequest class provides an interface for LocationService ListPlaceIndexes requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listPlaceIndexes
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlaceIndexesRequest::ListPlaceIndexesRequest(const ListPlaceIndexesRequest &other)
    : LocationServiceRequest(new ListPlaceIndexesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlaceIndexesRequest object.
 */
ListPlaceIndexesRequest::ListPlaceIndexesRequest()
    : LocationServiceRequest(new ListPlaceIndexesRequestPrivate(LocationServiceRequest::ListPlaceIndexesAction, this))
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
 * \class QtAws::LocationService::ListPlaceIndexesRequestPrivate
 * \brief The ListPlaceIndexesRequestPrivate class provides private implementation for ListPlaceIndexesRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListPlaceIndexesRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListPlaceIndexesRequestPrivate::ListPlaceIndexesRequestPrivate(
    const LocationServiceRequest::Action action, ListPlaceIndexesRequest * const q)
    : LocationServiceRequestPrivate(action, q)
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
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
