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
