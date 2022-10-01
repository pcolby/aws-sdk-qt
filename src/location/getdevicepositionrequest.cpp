// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicepositionrequest.h"
#include "getdevicepositionrequest_p.h"
#include "getdevicepositionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetDevicePositionRequest
 * \brief The GetDevicePositionRequest class provides an interface for Location GetDevicePosition requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getDevicePosition
 */

/*!
 * Constructs a copy of \a other.
 */
GetDevicePositionRequest::GetDevicePositionRequest(const GetDevicePositionRequest &other)
    : LocationRequest(new GetDevicePositionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDevicePositionRequest object.
 */
GetDevicePositionRequest::GetDevicePositionRequest()
    : LocationRequest(new GetDevicePositionRequestPrivate(LocationRequest::GetDevicePositionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevicePositionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDevicePositionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevicePositionRequest::response(QNetworkReply * const reply) const
{
    return new GetDevicePositionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::GetDevicePositionRequestPrivate
 * \brief The GetDevicePositionRequestPrivate class provides private implementation for GetDevicePositionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetDevicePositionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
GetDevicePositionRequestPrivate::GetDevicePositionRequestPrivate(
    const LocationRequest::Action action, GetDevicePositionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDevicePositionRequest
 * class' copy constructor.
 */
GetDevicePositionRequestPrivate::GetDevicePositionRequestPrivate(
    const GetDevicePositionRequestPrivate &other, GetDevicePositionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
