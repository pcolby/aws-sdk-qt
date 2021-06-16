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

#include "getdataflowendpointgrouprequest.h"
#include "getdataflowendpointgrouprequest_p.h"
#include "getdataflowendpointgroupresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetDataflowEndpointGroupRequest
 * \brief The GetDataflowEndpointGroupRequest class provides an interface for GroundStation GetDataflowEndpointGroup requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getDataflowEndpointGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataflowEndpointGroupRequest::GetDataflowEndpointGroupRequest(const GetDataflowEndpointGroupRequest &other)
    : GroundStationRequest(new GetDataflowEndpointGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataflowEndpointGroupRequest object.
 */
GetDataflowEndpointGroupRequest::GetDataflowEndpointGroupRequest()
    : GroundStationRequest(new GetDataflowEndpointGroupRequestPrivate(GroundStationRequest::GetDataflowEndpointGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataflowEndpointGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataflowEndpointGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataflowEndpointGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetDataflowEndpointGroupResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetDataflowEndpointGroupRequestPrivate
 * \brief The GetDataflowEndpointGroupRequestPrivate class provides private implementation for GetDataflowEndpointGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetDataflowEndpointGroupRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetDataflowEndpointGroupRequestPrivate::GetDataflowEndpointGroupRequestPrivate(
    const GroundStationRequest::Action action, GetDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataflowEndpointGroupRequest
 * class' copy constructor.
 */
GetDataflowEndpointGroupRequestPrivate::GetDataflowEndpointGroupRequestPrivate(
    const GetDataflowEndpointGroupRequestPrivate &other, GetDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
