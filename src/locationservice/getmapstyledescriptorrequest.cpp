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

#include "getmapstyledescriptorrequest.h"
#include "getmapstyledescriptorrequest_p.h"
#include "getmapstyledescriptorresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapStyleDescriptorRequest
 * \brief The GetMapStyleDescriptorRequest class provides an interface for LocationService GetMapStyleDescriptor requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapStyleDescriptor
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapStyleDescriptorRequest::GetMapStyleDescriptorRequest(const GetMapStyleDescriptorRequest &other)
    : LocationServiceRequest(new GetMapStyleDescriptorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapStyleDescriptorRequest object.
 */
GetMapStyleDescriptorRequest::GetMapStyleDescriptorRequest()
    : LocationServiceRequest(new GetMapStyleDescriptorRequestPrivate(LocationServiceRequest::GetMapStyleDescriptorAction, this))
{

}

/*!
 * \reimp
 */
bool GetMapStyleDescriptorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMapStyleDescriptorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMapStyleDescriptorRequest::response(QNetworkReply * const reply) const
{
    return new GetMapStyleDescriptorResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetMapStyleDescriptorRequestPrivate
 * \brief The GetMapStyleDescriptorRequestPrivate class provides private implementation for GetMapStyleDescriptorRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapStyleDescriptorRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetMapStyleDescriptorRequestPrivate::GetMapStyleDescriptorRequestPrivate(
    const LocationServiceRequest::Action action, GetMapStyleDescriptorRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMapStyleDescriptorRequest
 * class' copy constructor.
 */
GetMapStyleDescriptorRequestPrivate::GetMapStyleDescriptorRequestPrivate(
    const GetMapStyleDescriptorRequestPrivate &other, GetMapStyleDescriptorRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
