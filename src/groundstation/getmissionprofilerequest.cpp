// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
