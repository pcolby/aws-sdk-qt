// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicepositionhistoryrequest.h"
#include "getdevicepositionhistoryrequest_p.h"
#include "getdevicepositionhistoryresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetDevicePositionHistoryRequest
 * \brief The GetDevicePositionHistoryRequest class provides an interface for Location GetDevicePositionHistory requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getDevicePositionHistory
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePositionHistoryRequest::GetDevicePositionHistoryRequest(const GetDevicePositionHistoryRequest &other)
    : LocationRequest(new GetDevicePositionHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePositionHistoryRequest object.
 */
GetDevicePositionHistoryRequest::GetDevicePositionHistoryRequest()
    : LocationRequest(new GetDevicePositionHistoryRequestPrivate(LocationRequest::GetDevicePositionHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePositionHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePositionHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePositionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePositionHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::Location::GetDevicePositionHistoryRequestPrivate
 * \brief The GetDevicePositionHistoryRequestPrivate class provides private implementation for GetDevicePositionHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetDevicePositionHistoryRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetDevicePositionHistoryRequestPrivate::GetDevicePositionHistoryRequestPrivate(
    const LocationRequest::Action action, GetDevicePositionHistoryRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePositionHistoryRequest
 * class' copy constructor.
 */
GetDevicePositionHistoryRequestPrivate::GetDevicePositionHistoryRequestPrivate(
    const GetDevicePositionHistoryRequestPrivate &other, GetDevicePositionHistoryRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
