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
