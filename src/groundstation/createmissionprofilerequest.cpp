// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmissionprofilerequest.h"
#include "createmissionprofilerequest_p.h"
#include "createmissionprofileresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateMissionProfileRequest
 * \brief The CreateMissionProfileRequest class provides an interface for GroundStation CreateMissionProfile requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createMissionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMissionProfileRequest::CreateMissionProfileRequest(const CreateMissionProfileRequest &other)
    : GroundStationRequest(new CreateMissionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMissionProfileRequest object.
 */
CreateMissionProfileRequest::CreateMissionProfileRequest()
    : GroundStationRequest(new CreateMissionProfileRequestPrivate(GroundStationRequest::CreateMissionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMissionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMissionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMissionProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateMissionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::CreateMissionProfileRequestPrivate
 * \brief The CreateMissionProfileRequestPrivate class provides private implementation for CreateMissionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateMissionProfileRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
CreateMissionProfileRequestPrivate::CreateMissionProfileRequestPrivate(
    const GroundStationRequest::Action action, CreateMissionProfileRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMissionProfileRequest
 * class' copy constructor.
 */
CreateMissionProfileRequestPrivate::CreateMissionProfileRequestPrivate(
    const CreateMissionProfileRequestPrivate &other, CreateMissionProfileRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
