// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletegeofencerequest.h"
#include "batchdeletegeofencerequest_p.h"
#include "batchdeletegeofenceresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchDeleteGeofenceRequest
 * \brief The BatchDeleteGeofenceRequest class provides an interface for Location BatchDeleteGeofence requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchDeleteGeofence
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteGeofenceRequest::BatchDeleteGeofenceRequest(const BatchDeleteGeofenceRequest &other)
    : LocationRequest(new BatchDeleteGeofenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteGeofenceRequest object.
 */
BatchDeleteGeofenceRequest::BatchDeleteGeofenceRequest()
    : LocationRequest(new BatchDeleteGeofenceRequestPrivate(LocationRequest::BatchDeleteGeofenceAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteGeofenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteGeofenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteGeofenceRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteGeofenceResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchDeleteGeofenceRequestPrivate
 * \brief The BatchDeleteGeofenceRequestPrivate class provides private implementation for BatchDeleteGeofenceRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchDeleteGeofenceRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchDeleteGeofenceRequestPrivate::BatchDeleteGeofenceRequestPrivate(
    const LocationRequest::Action action, BatchDeleteGeofenceRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteGeofenceRequest
 * class' copy constructor.
 */
BatchDeleteGeofenceRequestPrivate::BatchDeleteGeofenceRequestPrivate(
    const BatchDeleteGeofenceRequestPrivate &other, BatchDeleteGeofenceRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
