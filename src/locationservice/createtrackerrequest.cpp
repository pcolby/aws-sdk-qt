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

#include "createtrackerrequest.h"
#include "createtrackerrequest_p.h"
#include "createtrackerresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateTrackerRequest
 * \brief The CreateTrackerRequest class provides an interface for LocationService CreateTracker requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createTracker
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrackerRequest::CreateTrackerRequest(const CreateTrackerRequest &other)
    : LocationServiceRequest(new CreateTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrackerRequest object.
 */
CreateTrackerRequest::CreateTrackerRequest()
    : LocationServiceRequest(new CreateTrackerRequestPrivate(LocationServiceRequest::CreateTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrackerRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CreateTrackerRequestPrivate
 * \brief The CreateTrackerRequestPrivate class provides private implementation for CreateTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateTrackerRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CreateTrackerRequestPrivate::CreateTrackerRequestPrivate(
    const LocationServiceRequest::Action action, CreateTrackerRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrackerRequest
 * class' copy constructor.
 */
CreateTrackerRequestPrivate::CreateTrackerRequestPrivate(
    const CreateTrackerRequestPrivate &other, CreateTrackerRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
