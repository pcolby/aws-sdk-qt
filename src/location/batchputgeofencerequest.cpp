// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputgeofencerequest.h"
#include "batchputgeofencerequest_p.h"
#include "batchputgeofenceresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchPutGeofenceRequest
 * \brief The BatchPutGeofenceRequest class provides an interface for Location BatchPutGeofence requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchPutGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
BatchPutGeofenceRequest::BatchPutGeofenceRequest(const BatchPutGeofenceRequest &other)
    : LocationRequest(new BatchPutGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchPutGeofenceRequest object.
 */
BatchPutGeofenceRequest::BatchPutGeofenceRequest()
    : LocationRequest(new BatchPutGeofenceRequestPrivate(LocationRequest::BatchPutGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool BatchPutGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchPutGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchPutGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new BatchPutGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchPutGeofenceRequestPrivate
 * \brief The BatchPutGeofenceRequestPrivate class provides private implementation for BatchPutGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchPutGeofenceRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchPutGeofenceRequestPrivate::BatchPutGeofenceRequestPrivate(
    const LocationRequest::Action action, BatchPutGeofenceRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchPutGeofenceRequest
 * class' copy constructor.
 */
BatchPutGeofenceRequestPrivate::BatchPutGeofenceRequestPrivate(
    const BatchPutGeofenceRequestPrivate &other, BatchPutGeofenceRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
