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

#include "getmapspritesrequest.h"
#include "getmapspritesrequest_p.h"
#include "getmapspritesresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapSpritesRequest
 * \brief The GetMapSpritesRequest class provides an interface for LocationService GetMapSprites requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapSprites
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapSpritesRequest::GetMapSpritesRequest(const GetMapSpritesRequest &other)
    : LocationServiceRequest(new GetMapSpritesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapSpritesRequest object.
 */
GetMapSpritesRequest::GetMapSpritesRequest()
    : LocationServiceRequest(new GetMapSpritesRequestPrivate(LocationServiceRequest::GetMapSpritesAction, this))
{

}

/*!
 * \reimp
 */
bool GetMapSpritesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMapSpritesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMapSpritesRequest::response(QNetworkReply * const reply) const
{
    return new GetMapSpritesResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetMapSpritesRequestPrivate
 * \brief The GetMapSpritesRequestPrivate class provides private implementation for GetMapSpritesRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapSpritesRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetMapSpritesRequestPrivate::GetMapSpritesRequestPrivate(
    const LocationServiceRequest::Action action, GetMapSpritesRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMapSpritesRequest
 * class' copy constructor.
 */
GetMapSpritesRequestPrivate::GetMapSpritesRequestPrivate(
    const GetMapSpritesRequestPrivate &other, GetMapSpritesRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
