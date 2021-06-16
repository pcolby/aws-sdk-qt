/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getmissionprofilerequest.h"
#include "getmissionprofilerequest_p.h"
#include "getmissionprofileresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMissionProfileRequest
 * \brief The GetMissionProfileRequest class provides an interface for GroundStation GetMissionProfile requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMissionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetMissionProfileRequest::GetMissionProfileRequest(const GetMissionProfileRequest &other)
    : GroundStationRequest(new GetMissionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMissionProfileRequest object.
 */
GetMissionProfileRequest::GetMissionProfileRequest()
    : GroundStationRequest(new GetMissionProfileRequestPrivate(GroundStationRequest::GetMissionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetMissionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMissionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMissionProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetMissionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetMissionProfileRequestPrivate
 * \brief The GetMissionProfileRequestPrivate class provides private implementation for GetMissionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMissionProfileRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetMissionProfileRequestPrivate::GetMissionProfileRequestPrivate(
    const GroundStationRequest::Action action, GetMissionProfileRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMissionProfileRequest
 * class' copy constructor.
 */
GetMissionProfileRequestPrivate::GetMissionProfileRequestPrivate(
    const GetMissionProfileRequestPrivate &other, GetMissionProfileRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
