// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedevicepositionhistoryrequest.h"
#include "batchdeletedevicepositionhistoryrequest_p.h"
#include "batchdeletedevicepositionhistoryresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchDeleteDevicePositionHistoryRequest
 * \brief The BatchDeleteDevicePositionHistoryRequest class provides an interface for Location BatchDeleteDevicePositionHistory requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchDeleteDevicePositionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteDevicePositionHistoryRequest::BatchDeleteDevicePositionHistoryRequest(const BatchDeleteDevicePositionHistoryRequest &other)
    : LocationRequest(new BatchDeleteDevicePositionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteDevicePositionHistoryRequest object.
 */
BatchDeleteDevicePositionHistoryRequest::BatchDeleteDevicePositionHistoryRequest()
    : LocationRequest(new BatchDeleteDevicePositionHistoryRequestPrivate(LocationRequest::BatchDeleteDevicePositionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteDevicePositionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteDevicePositionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteDevicePositionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteDevicePositionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::Location::BatchDeleteDevicePositionHistoryRequestPrivate
 * \brief The BatchDeleteDevicePositionHistoryRequestPrivate class provides private implementation for BatchDeleteDevicePositionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
BatchDeleteDevicePositionHistoryRequestPrivate::BatchDeleteDevicePositionHistoryRequestPrivate(
    const LocationRequest::Action action, BatchDeleteDevicePositionHistoryRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteDevicePositionHistoryRequest
 * class' copy constructor.
 */
BatchDeleteDevicePositionHistoryRequestPrivate::BatchDeleteDevicePositionHistoryRequestPrivate(
    const BatchDeleteDevicePositionHistoryRequestPrivate &other, BatchDeleteDevicePositionHistoryRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
