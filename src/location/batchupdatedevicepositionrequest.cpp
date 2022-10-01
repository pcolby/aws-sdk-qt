// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatedevicepositionrequest.h"
#include "batchupdatedevicepositionrequest_p.h"
#include "batchupdatedevicepositionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchUpdateDevicePositionRequest
 * \brief The BatchUpdateDevicePositionRequest class provides an interface for Location BatchUpdateDevicePosition requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchUpdateDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateDevicePositionRequest::BatchUpdateDevicePositionRequest(const BatchUpdateDevicePositionRequest &other)
    : LocationRequest(new BatchUpdateDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateDevicePositionRequest object.
 */
BatchUpdateDevicePositionRequest::BatchUpdateDevicePositionRequest()
    : LocationRequest(new BatchUpdateDevicePositionRequestPrivate(LocationRequest::BatchUpdateDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchUpdateDevicePositionRequestPrivate
 * \brief The BatchUpdateDevicePositionRequestPrivate class provides private implementation for BatchUpdateDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchUpdateDevicePositionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchUpdateDevicePositionRequestPrivate::BatchUpdateDevicePositionRequestPrivate(
    const LocationRequest::Action action, BatchUpdateDevicePositionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateDevicePositionRequest
 * class' copy constructor.
 */
BatchUpdateDevicePositionRequestPrivate::BatchUpdateDevicePositionRequestPrivate(
    const BatchUpdateDevicePositionRequestPrivate &other, BatchUpdateDevicePositionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
