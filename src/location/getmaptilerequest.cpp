// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmaptilerequest.h"
#include "getmaptilerequest_p.h"
#include "getmaptileresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetMapTileRequest
 * \brief The GetMapTileRequest class provides an interface for Location GetMapTile requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getMapTile
 */

/*!
 * Constructs a copy of \a other.
 */
GetMapTileRequest::GetMapTileRequest(const GetMapTileRequest &other)
    : LocationRequest(new GetMapTileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMapTileRequest object.
 */
GetMapTileRequest::GetMapTileRequest()
    : LocationRequest(new GetMapTileRequestPrivate(LocationRequest::GetMapTileAction, this))
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
 * \class QtAws::Location::GetMapTileRequestPrivate
 * \brief The GetMapTileRequestPrivate class provides private implementation for GetMapTileRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetMapTileRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetMapTileRequestPrivate::GetMapTileRequestPrivate(
    const LocationRequest::Action action, GetMapTileRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
