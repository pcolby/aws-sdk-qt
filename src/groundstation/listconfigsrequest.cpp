// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconfigsrequest.h"
#include "listconfigsrequest_p.h"
#include "listconfigsresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListConfigsRequest
 * \brief The ListConfigsRequest class provides an interface for GroundStation ListConfigs requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigsRequest::ListConfigsRequest(const ListConfigsRequest &other)
    : GroundStationRequest(new ListConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigsRequest object.
 */
ListConfigsRequest::ListConfigsRequest()
    : GroundStationRequest(new ListConfigsRequestPrivate(GroundStationRequest::ListConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListConfigsRequestPrivate
 * \brief The ListConfigsRequestPrivate class provides private implementation for ListConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListConfigsRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListConfigsRequestPrivate::ListConfigsRequestPrivate(
    const GroundStationRequest::Action action, ListConfigsRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigsRequest
 * class' copy constructor.
 */
ListConfigsRequestPrivate::ListConfigsRequestPrivate(
    const ListConfigsRequestPrivate &other, ListConfigsRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
