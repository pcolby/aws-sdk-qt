// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsatelliterequest.h"
#include "getsatelliterequest_p.h"
#include "getsatelliteresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetSatelliteRequest
 * \brief The GetSatelliteRequest class provides an interface for GroundStation GetSatellite requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getSatellite
 */

/*!
 * Constructs a copy of \a other.
 */
GetSatelliteRequest::GetSatelliteRequest(const GetSatelliteRequest &other)
    : GroundStationRequest(new GetSatelliteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSatelliteRequest object.
 */
GetSatelliteRequest::GetSatelliteRequest()
    : GroundStationRequest(new GetSatelliteRequestPrivate(GroundStationRequest::GetSatelliteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSatelliteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSatelliteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSatelliteRequest::response(QNetworkReply * const reply) const
{
    return new GetSatelliteResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetSatelliteRequestPrivate
 * \brief The GetSatelliteRequestPrivate class provides private implementation for GetSatelliteRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetSatelliteRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetSatelliteRequestPrivate::GetSatelliteRequestPrivate(
    const GroundStationRequest::Action action, GetSatelliteRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSatelliteRequest
 * class' copy constructor.
 */
GetSatelliteRequestPrivate::GetSatelliteRequestPrivate(
    const GetSatelliteRequestPrivate &other, GetSatelliteRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
