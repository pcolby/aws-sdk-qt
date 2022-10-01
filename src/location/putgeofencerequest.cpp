// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgeofencerequest.h"
#include "putgeofencerequest_p.h"
#include "putgeofenceresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::PutGeofenceRequest
 * \brief The PutGeofenceRequest class provides an interface for Location PutGeofence requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::putGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
PutGeofenceRequest::PutGeofenceRequest(const PutGeofenceRequest &other)
    : LocationRequest(new PutGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutGeofenceRequest object.
 */
PutGeofenceRequest::PutGeofenceRequest()
    : LocationRequest(new PutGeofenceRequestPrivate(LocationRequest::PutGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool PutGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new PutGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::Location::PutGeofenceRequestPrivate
 * \brief The PutGeofenceRequestPrivate class provides private implementation for PutGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a PutGeofenceRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
PutGeofenceRequestPrivate::PutGeofenceRequestPrivate(
    const LocationRequest::Action action, PutGeofenceRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutGeofenceRequest
 * class' copy constructor.
 */
PutGeofenceRequestPrivate::PutGeofenceRequestPrivate(
    const PutGeofenceRequestPrivate &other, PutGeofenceRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
