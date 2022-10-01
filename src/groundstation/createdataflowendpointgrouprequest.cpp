// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
