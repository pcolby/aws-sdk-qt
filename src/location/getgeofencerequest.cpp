// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeofencerequest.h"
#include "getgeofencerequest_p.h"
#include "getgeofenceresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetGeofenceRequest
 * \brief The GetGeofenceRequest class provides an interface for Location GetGeofence requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
GetGeofenceRequest::GetGeofenceRequest(const GetGeofenceRequest &other)
    : LocationRequest(new GetGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGeofenceRequest object.
 */
GetGeofenceRequest::GetGeofenceRequest()
    : LocationRequest(new GetGeofenceRequestPrivate(LocationRequest::GetGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool GetGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new GetGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::Location::GetGeofenceRequestPrivate
 * \brief The GetGeofenceRequestPrivate class provides private implementation for GetGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetGeofenceRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetGeofenceRequestPrivate::GetGeofenceRequestPrivate(
    const LocationRequest::Action action, GetGeofenceRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGeofenceRequest
 * class' copy constructor.
 */
GetGeofenceRequestPrivate::GetGeofenceRequestPrivate(
    const GetGeofenceRequestPrivate &other, GetGeofenceRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
