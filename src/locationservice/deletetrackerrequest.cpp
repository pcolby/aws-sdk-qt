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

#include "deletetrackerrequest.h"
#include "deletetrackerrequest_p.h"
#include "deletetrackerresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DeleteTrackerRequest
 * \brief The DeleteTrackerRequest class provides an interface for LocationService DeleteTracker requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::deleteTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrackerRequest::DeleteTrackerRequest(const DeleteTrackerRequest &other)
    : LocationServiceRequest(new DeleteTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrackerRequest object.
 */
DeleteTrackerRequest::DeleteTrackerRequest()
    : LocationServiceRequest(new DeleteTrackerRequestPrivate(LocationServiceRequest::DeleteTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DeleteTrackerRequestPrivate
 * \brief The DeleteTrackerRequestPrivate class provides private implementation for DeleteTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DeleteTrackerRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DeleteTrackerRequestPrivate::DeleteTrackerRequestPrivate(
    const LocationServiceRequest::Action action, DeleteTrackerRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrackerRequest
 * class' copy constructor.
 */
DeleteTrackerRequestPrivate::DeleteTrackerRequestPrivate(
    const DeleteTrackerRequestPrivate &other, DeleteTrackerRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
