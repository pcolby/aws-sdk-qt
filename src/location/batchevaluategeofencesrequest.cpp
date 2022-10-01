// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchevaluategeofencesrequest.h"
#include "batchevaluategeofencesrequest_p.h"
#include "batchevaluategeofencesresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchEvaluateGeofencesRequest
 * \brief The BatchEvaluateGeofencesRequest class provides an interface for Location BatchEvaluateGeofences requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchEvaluateGeofences
 */

/*!
 * Constructs a copy of \a other.
 */
BatchEvaluateGeofencesRequest::BatchEvaluateGeofencesRequest(const BatchEvaluateGeofencesRequest &other)
    : LocationRequest(new BatchEvaluateGeofencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchEvaluateGeofencesRequest object.
 */
BatchEvaluateGeofencesRequest::BatchEvaluateGeofencesRequest()
    : LocationRequest(new BatchEvaluateGeofencesRequestPrivate(LocationRequest::BatchEvaluateGeofencesAction, this))
{

}

/*!
 * \reimp
 */
bool BatchEvaluateGeofencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchEvaluateGeofencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchEvaluateGeofencesRequest::response(QNetworkReply * const reply) const
{
    return new BatchEvaluateGeofencesResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchEvaluateGeofencesRequestPrivate
 * \brief The BatchEvaluateGeofencesRequestPrivate class provides private implementation for BatchEvaluateGeofencesRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchEvaluateGeofencesRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchEvaluateGeofencesRequestPrivate::BatchEvaluateGeofencesRequestPrivate(
    const LocationRequest::Action action, BatchEvaluateGeofencesRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchEvaluateGeofencesRequest
 * class' copy constructor.
 */
BatchEvaluateGeofencesRequestPrivate::BatchEvaluateGeofencesRequestPrivate(
    const BatchEvaluateGeofencesRequestPrivate &other, BatchEvaluateGeofencesRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
