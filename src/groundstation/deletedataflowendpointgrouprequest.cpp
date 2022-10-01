// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedataflowendpointgrouprequest.h"
#include "deletedataflowendpointgrouprequest_p.h"
#include "deletedataflowendpointgroupresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteDataflowEndpointGroupRequest
 * \brief The DeleteDataflowEndpointGroupRequest class provides an interface for GroundStation DeleteDataflowEndpointGroup requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteDataflowEndpointGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataflowEndpointGroupRequest::DeleteDataflowEndpointGroupRequest(const DeleteDataflowEndpointGroupRequest &other)
    : GroundStationRequest(new DeleteDataflowEndpointGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataflowEndpointGroupRequest object.
 */
DeleteDataflowEndpointGroupRequest::DeleteDataflowEndpointGroupRequest()
    : GroundStationRequest(new DeleteDataflowEndpointGroupRequestPrivate(GroundStationRequest::DeleteDataflowEndpointGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataflowEndpointGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataflowEndpointGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataflowEndpointGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataflowEndpointGroupResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::DeleteDataflowEndpointGroupRequestPrivate
 * \brief The DeleteDataflowEndpointGroupRequestPrivate class provides private implementation for DeleteDataflowEndpointGroupRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteDataflowEndpointGroupRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
DeleteDataflowEndpointGroupRequestPrivate::DeleteDataflowEndpointGroupRequestPrivate(
    const GroundStationRequest::Action action, DeleteDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataflowEndpointGroupRequest
 * class' copy constructor.
 */
DeleteDataflowEndpointGroupRequestPrivate::DeleteDataflowEndpointGroupRequestPrivate(
    const DeleteDataflowEndpointGroupRequestPrivate &other, DeleteDataflowEndpointGroupRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
