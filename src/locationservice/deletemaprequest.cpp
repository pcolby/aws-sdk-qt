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

#include "deletemaprequest.h"
#include "deletemaprequest_p.h"
#include "deletemapresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteMapRequest
 * \brief The DeleteMapRequest class provides an interface for LocationService DeleteMap requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteMap
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMapRequest::DeleteMapRequest(const DeleteMapRequest &other)
    : LocationServiceRequest(new DeleteMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMapRequest object.
 */
DeleteMapRequest::DeleteMapRequest()
    : LocationServiceRequest(new DeleteMapRequestPrivate(LocationServiceRequest::DeleteMapAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMapRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMapResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DeleteMapRequestPrivate
 * \brief The DeleteMapRequestPrivate class provides private implementation for DeleteMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteMapRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DeleteMapRequestPrivate::DeleteMapRequestPrivate(
    const LocationServiceRequest::Action action, DeleteMapRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMapRequest
 * class' copy constructor.
 */
DeleteMapRequestPrivate::DeleteMapRequestPrivate(
    const DeleteMapRequestPrivate &other, DeleteMapRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
