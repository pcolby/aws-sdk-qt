// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemissionprofilerequest.h"
#include "updatemissionprofilerequest_p.h"
#include "updatemissionprofileresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::UpdateMissionProfileRequest
 * \brief The UpdateMissionProfileRequest class provides an interface for GroundStation UpdateMissionProfile requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::updateMissionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMissionProfileRequest::UpdateMissionProfileRequest(const UpdateMissionProfileRequest &other)
    : GroundStationRequest(new UpdateMissionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMissionProfileRequest object.
 */
UpdateMissionProfileRequest::UpdateMissionProfileRequest()
    : GroundStationRequest(new UpdateMissionProfileRequestPrivate(GroundStationRequest::UpdateMissionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMissionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMissionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMissionProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMissionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::UpdateMissionProfileRequestPrivate
 * \brief The UpdateMissionProfileRequestPrivate class provides private implementation for UpdateMissionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a UpdateMissionProfileRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
UpdateMissionProfileRequestPrivate::UpdateMissionProfileRequestPrivate(
    const GroundStationRequest::Action action, UpdateMissionProfileRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMissionProfileRequest
 * class' copy constructor.
 */
UpdateMissionProfileRequestPrivate::UpdateMissionProfileRequestPrivate(
    const UpdateMissionProfileRequestPrivate &other, UpdateMissionProfileRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
