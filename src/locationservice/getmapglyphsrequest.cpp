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

#include "getmapglyphsrequest.h"
#include "getmapglyphsrequest_p.h"
#include "getmapglyphsresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::GetMapGlyphsRequest
 * \brief The GetMapGlyphsRequest class provides an interface for LocationService GetMapGlyphs requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::getMapGlyphs
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapGlyphsRequest::GetMapGlyphsRequest(const GetMapGlyphsRequest &other)
    : LocationServiceRequest(new GetMapGlyphsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapGlyphsRequest object.
 */
GetMapGlyphsRequest::GetMapGlyphsRequest()
    : LocationServiceRequest(new GetMapGlyphsRequestPrivate(LocationServiceRequest::GetMapGlyphsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMapGlyphsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMapGlyphsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMapGlyphsRequest::response(QNetworkReply * const reply) const
{
    return new GetMapGlyphsResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::GetMapGlyphsRequestPrivate
 * \brief The GetMapGlyphsRequestPrivate class provides private implementation for GetMapGlyphsRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a GetMapGlyphsRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
GetMapGlyphsRequestPrivate::GetMapGlyphsRequestPrivate(
    const LocationServiceRequest::Action action, GetMapGlyphsRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMapGlyphsRequest
 * class' copy constructor.
 */
GetMapGlyphsRequestPrivate::GetMapGlyphsRequestPrivate(
    const GetMapGlyphsRequestPrivate &other, GetMapGlyphsRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
