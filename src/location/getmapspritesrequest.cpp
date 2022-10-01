// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmapspritesrequest.h"
#include "getmapspritesrequest_p.h"
#include "getmapspritesresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapSpritesRequest
 * \brief The GetMapSpritesRequest class provides an interface for Location GetMapSprites requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapSprites
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapSpritesRequest::GetMapSpritesRequest(const GetMapSpritesRequest &other)
    : LocationRequest(new GetMapSpritesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapSpritesRequest object.
 */
GetMapSpritesRequest::GetMapSpritesRequest()
    : LocationRequest(new GetMapSpritesRequestPrivate(LocationRequest::GetMapSpritesAction, this))
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
 * \class QtAws::Location::GetMapSpritesRequestPrivate
 * \brief The GetMapSpritesRequestPrivate class provides private implementation for GetMapSpritesRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapSpritesRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetMapSpritesRequestPrivate::GetMapSpritesRequestPrivate(
    const LocationRequest::Action action, GetMapSpritesRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
