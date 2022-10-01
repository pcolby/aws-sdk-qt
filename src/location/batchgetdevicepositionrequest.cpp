// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetdevicepositionrequest.h"
#include "batchgetdevicepositionrequest_p.h"
#include "batchgetdevicepositionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchGetDevicePositionRequest
 * \brief The BatchGetDevicePositionRequest class provides an interface for Location BatchGetDevicePosition requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchGetDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetDevicePositionRequest::BatchGetDevicePositionRequest(const BatchGetDevicePositionRequest &other)
    : LocationRequest(new BatchGetDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetDevicePositionRequest object.
 */
BatchGetDevicePositionRequest::BatchGetDevicePositionRequest()
    : LocationRequest(new BatchGetDevicePositionRequestPrivate(LocationRequest::BatchGetDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchGetDevicePositionRequestPrivate
 * \brief The BatchGetDevicePositionRequestPrivate class provides private implementation for BatchGetDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchGetDevicePositionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchGetDevicePositionRequestPrivate::BatchGetDevicePositionRequestPrivate(
    const LocationRequest::Action action, BatchGetDevicePositionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDevicePositionRequest
 * class' copy constructor.
 */
BatchGetDevicePositionRequestPrivate::BatchGetDevicePositionRequestPrivate(
    const BatchGetDevicePositionRequestPrivate &other, BatchGetDevicePositionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
