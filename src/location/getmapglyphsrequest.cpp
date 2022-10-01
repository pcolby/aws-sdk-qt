// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapglyphsrequest.h"
#include "getmapglyphsrequest_p.h"
#include "getmapglyphsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapGlyphsRequest
 * \brief The GetMapGlyphsRequest class provides an interface for Location GetMapGlyphs requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapGlyphs
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapGlyphsRequest::GetMapGlyphsRequest(const GetMapGlyphsRequest &other)
    : LocationRequest(new GetMapGlyphsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapGlyphsRequest object.
 */
GetMapGlyphsRequest::GetMapGlyphsRequest()
    : LocationRequest(new GetMapGlyphsRequestPrivate(LocationRequest::GetMapGlyphsAction, this))
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
 * \class QtAws::Location::GetMapGlyphsRequestPrivate
 * \brief The GetMapGlyphsRequestPrivate class provides private implementation for GetMapGlyphsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapGlyphsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetMapGlyphsRequestPrivate::GetMapGlyphsRequestPrivate(
    const LocationRequest::Action action, GetMapGlyphsRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
