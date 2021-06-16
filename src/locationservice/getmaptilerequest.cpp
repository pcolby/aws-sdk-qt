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

#include "getmaptilerequest.h"
#include "getmaptilerequest_p.h"
#include "getmaptileresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapTileRequest
 * \brief The GetMapTileRequest class provides an interface for LocationService GetMapTile requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapTile
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapTileRequest::GetMapTileRequest(const GetMapTileRequest &other)
    : LocationServiceRequest(new GetMapTileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapTileRequest object.
 */
GetMapTileRequest::GetMapTileRequest()
    : LocationServiceRequest(new GetMapTileRequestPrivate(LocationServiceRequest::GetMapTileAction, this))
{

}

/*!
 * \reimp
 */
bool GetMapTileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMapTileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMapTileRequest::response(QNetworkReply * const reply) const
{
    return new GetMapTileResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetMapTileRequestPrivate
 * \brief The GetMapTileRequestPrivate class provides private implementation for GetMapTileRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapTileRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetMapTileRequestPrivate::GetMapTileRequestPrivate(
    const LocationServiceRequest::Action action, GetMapTileRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMapTileRequest
 * class' copy constructor.
 */
GetMapTileRequestPrivate::GetMapTileRequestPrivate(
    const GetMapTileRequestPrivate &other, GetMapTileRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
