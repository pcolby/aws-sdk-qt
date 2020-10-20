/*
    Copyright 2013-2020 Paul Colby

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

#include "deletemissionprofilerequest.h"
#include "deletemissionprofilerequest_p.h"
#include "deletemissionprofileresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteMissionProfileRequest
 * \brief The DeleteMissionProfileRequest class provides an interface for GroundStation DeleteMissionProfile requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteMissionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMissionProfileRequest::DeleteMissionProfileRequest(const DeleteMissionProfileRequest &other)
    : GroundStationRequest(new DeleteMissionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMissionProfileRequest object.
 */
DeleteMissionProfileRequest::DeleteMissionProfileRequest()
    : GroundStationRequest(new DeleteMissionProfileRequestPrivate(GroundStationRequest::DeleteMissionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMissionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMissionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMissionProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMissionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::DeleteMissionProfileRequestPrivate
 * \brief The DeleteMissionProfileRequestPrivate class provides private implementation for DeleteMissionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteMissionProfileRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
DeleteMissionProfileRequestPrivate::DeleteMissionProfileRequestPrivate(
    const GroundStationRequest::Action action, DeleteMissionProfileRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMissionProfileRequest
 * class' copy constructor.
 */
DeleteMissionProfileRequestPrivate::DeleteMissionProfileRequestPrivate(
    const DeleteMissionProfileRequestPrivate &other, DeleteMissionProfileRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
