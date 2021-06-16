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

#include "createmaprequest.h"
#include "createmaprequest_p.h"
#include "createmapresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::CreateMapRequest
 * \brief The CreateMapRequest class provides an interface for LocationService CreateMap requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::createMap
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMapRequest::CreateMapRequest(const CreateMapRequest &other)
    : LocationServiceRequest(new CreateMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMapRequest object.
 */
CreateMapRequest::CreateMapRequest()
    : LocationServiceRequest(new CreateMapRequestPrivate(LocationServiceRequest::CreateMapAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMapRequest::response(QNetworkReply * const reply) const
{
    return new CreateMapResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::CreateMapRequestPrivate
 * \brief The CreateMapRequestPrivate class provides private implementation for CreateMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a CreateMapRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
CreateMapRequestPrivate::CreateMapRequestPrivate(
    const LocationServiceRequest::Action action, CreateMapRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMapRequest
 * class' copy constructor.
 */
CreateMapRequestPrivate::CreateMapRequestPrivate(
    const CreateMapRequestPrivate &other, CreateMapRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
