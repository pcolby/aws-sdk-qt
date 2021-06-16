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

#include "deleteplaceindexrequest.h"
#include "deleteplaceindexrequest_p.h"
#include "deleteplaceindexresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeletePlaceIndexRequest
 * \brief The DeletePlaceIndexRequest class provides an interface for LocationService DeletePlaceIndex requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deletePlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlaceIndexRequest::DeletePlaceIndexRequest(const DeletePlaceIndexRequest &other)
    : LocationServiceRequest(new DeletePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlaceIndexRequest object.
 */
DeletePlaceIndexRequest::DeletePlaceIndexRequest()
    : LocationServiceRequest(new DeletePlaceIndexRequestPrivate(LocationServiceRequest::DeletePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DeletePlaceIndexRequestPrivate
 * \brief The DeletePlaceIndexRequestPrivate class provides private implementation for DeletePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeletePlaceIndexRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DeletePlaceIndexRequestPrivate::DeletePlaceIndexRequestPrivate(
    const LocationServiceRequest::Action action, DeletePlaceIndexRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlaceIndexRequest
 * class' copy constructor.
 */
DeletePlaceIndexRequestPrivate::DeletePlaceIndexRequestPrivate(
    const DeletePlaceIndexRequestPrivate &other, DeletePlaceIndexRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
