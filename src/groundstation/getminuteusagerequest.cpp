/*
    Copyright 2013-2019 Paul Colby

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

#include "getminuteusagerequest.h"
#include "getminuteusagerequest_p.h"
#include "getminuteusageresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMinuteUsageRequest
 * \brief The GetMinuteUsageRequest class provides an interface for GroundStation GetMinuteUsage requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMinuteUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetMinuteUsageRequest::GetMinuteUsageRequest(const GetMinuteUsageRequest &other)
    : GroundStationRequest(new GetMinuteUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMinuteUsageRequest object.
 */
GetMinuteUsageRequest::GetMinuteUsageRequest()
    : GroundStationRequest(new GetMinuteUsageRequestPrivate(GroundStationRequest::GetMinuteUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetMinuteUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMinuteUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMinuteUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetMinuteUsageResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetMinuteUsageRequestPrivate
 * \brief The GetMinuteUsageRequestPrivate class provides private implementation for GetMinuteUsageRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMinuteUsageRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetMinuteUsageRequestPrivate::GetMinuteUsageRequestPrivate(
    const GroundStationRequest::Action action, GetMinuteUsageRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMinuteUsageRequest
 * class' copy constructor.
 */
GetMinuteUsageRequestPrivate::GetMinuteUsageRequestPrivate(
    const GetMinuteUsageRequestPrivate &other, GetMinuteUsageRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
