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

#include "listmapsrequest.h"
#include "listmapsrequest_p.h"
#include "listmapsresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListMapsRequest
 * \brief The ListMapsRequest class provides an interface for LocationService ListMaps requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listMaps
 */

/*!
 * Constructs a copy of \a other.
 */
ListMapsRequest::ListMapsRequest(const ListMapsRequest &other)
    : LocationServiceRequest(new ListMapsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMapsRequest object.
 */
ListMapsRequest::ListMapsRequest()
    : LocationServiceRequest(new ListMapsRequestPrivate(LocationServiceRequest::ListMapsAction, this))
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
 * \class QtAws::LocationService::ListMapsRequestPrivate
 * \brief The ListMapsRequestPrivate class provides private implementation for ListMapsRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListMapsRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListMapsRequestPrivate::ListMapsRequestPrivate(
    const LocationServiceRequest::Action action, ListMapsRequest * const q)
    : LocationServiceRequestPrivate(action, q)
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
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
