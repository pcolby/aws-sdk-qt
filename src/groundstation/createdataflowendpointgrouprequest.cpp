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

#include "createdataflowendpointgrouprequest.h"
#include "createdataflowendpointgrouprequest_p.h"
#include "createdataflowendpointgroupresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupRequest
 * \brief The CreateDataflowEndpointGroupRequest class provides an interface for GroundStation CreateDataflowEndpointGroup requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createDataflowEndpointGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataflowEndpointGroupRequest::CreateDataflowEndpointGroupRequest(const CreateDataflowEndpointGroupRequest &other)
    : GroundStationRequest(new CreateDataflowEndpointGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataflowEndpointGroupRequest object.
 */
CreateDataflowEndpointGroupRequest::CreateDataflowEndpointGroupRequest()
    : GroundStationRequest(new CreateDataflowEndpointGroupRequestPrivate(GroundStationRequest::CreateDataflowEndpointGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataflowEndpointGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataflowEndpointGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataflowEndpointGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataflowEndpointGroupResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::CreateDataflowEndpointGroupRequestPrivate
 * \brief The CreateDataflowEndpointGroupRequestPrivate class provides private implementation for CreateDataflowEndpointGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateDataflowEndpointGroupRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
CreateDataflowEndpointGroupRequestPrivate::CreateDataflowEndpointGroupRequestPrivate(
    const GroundStationRequest::Action action, CreateDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataflowEndpointGroupRequest
 * class' copy constructor.
 */
CreateDataflowEndpointGroupRequestPrivate::CreateDataflowEndpointGroupRequestPrivate(
    const CreateDataflowEndpointGroupRequestPrivate &other, CreateDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
