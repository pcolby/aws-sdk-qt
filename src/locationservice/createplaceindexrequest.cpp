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

#include "createplaceindexrequest.h"
#include "createplaceindexrequest_p.h"
#include "createplaceindexresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreatePlaceIndexRequest
 * \brief The CreatePlaceIndexRequest class provides an interface for LocationService CreatePlaceIndex requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createPlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePlaceIndexRequest::CreatePlaceIndexRequest(const CreatePlaceIndexRequest &other)
    : LocationServiceRequest(new CreatePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePlaceIndexRequest object.
 */
CreatePlaceIndexRequest::CreatePlaceIndexRequest()
    : LocationServiceRequest(new CreatePlaceIndexRequestPrivate(LocationServiceRequest::CreatePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CreatePlaceIndexRequestPrivate
 * \brief The CreatePlaceIndexRequestPrivate class provides private implementation for CreatePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreatePlaceIndexRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CreatePlaceIndexRequestPrivate::CreatePlaceIndexRequestPrivate(
    const LocationServiceRequest::Action action, CreatePlaceIndexRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePlaceIndexRequest
 * class' copy constructor.
 */
CreatePlaceIndexRequestPrivate::CreatePlaceIndexRequestPrivate(
    const CreatePlaceIndexRequestPrivate &other, CreatePlaceIndexRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
