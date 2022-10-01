// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataflowendpointgroupsrequest.h"
#include "listdataflowendpointgroupsrequest_p.h"
#include "listdataflowendpointgroupsresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsRequest
 * \brief The ListDataflowEndpointGroupsRequest class provides an interface for GroundStation ListDataflowEndpointGroups requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listDataflowEndpointGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataflowEndpointGroupsRequest::ListDataflowEndpointGroupsRequest(const ListDataflowEndpointGroupsRequest &other)
    : GroundStationRequest(new ListDataflowEndpointGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataflowEndpointGroupsRequest object.
 */
ListDataflowEndpointGroupsRequest::ListDataflowEndpointGroupsRequest()
    : GroundStationRequest(new ListDataflowEndpointGroupsRequestPrivate(GroundStationRequest::ListDataflowEndpointGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataflowEndpointGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataflowEndpointGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataflowEndpointGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataflowEndpointGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListDataflowEndpointGroupsRequestPrivate
 * \brief The ListDataflowEndpointGroupsRequestPrivate class provides private implementation for ListDataflowEndpointGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListDataflowEndpointGroupsRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListDataflowEndpointGroupsRequestPrivate::ListDataflowEndpointGroupsRequestPrivate(
    const GroundStationRequest::Action action, ListDataflowEndpointGroupsRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataflowEndpointGroupsRequest
 * class' copy constructor.
 */
ListDataflowEndpointGroupsRequestPrivate::ListDataflowEndpointGroupsRequestPrivate(
    const ListDataflowEndpointGroupsRequestPrivate &other, ListDataflowEndpointGroupsRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
