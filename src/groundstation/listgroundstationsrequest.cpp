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

#include "listgroundstationsrequest.h"
#include "listgroundstationsrequest_p.h"
#include "listgroundstationsresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListGroundStationsRequest
 * \brief The ListGroundStationsRequest class provides an interface for GroundStation ListGroundStations requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listGroundStations
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroundStationsRequest::ListGroundStationsRequest(const ListGroundStationsRequest &other)
    : GroundStationRequest(new ListGroundStationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroundStationsRequest object.
 */
ListGroundStationsRequest::ListGroundStationsRequest()
    : GroundStationRequest(new ListGroundStationsRequestPrivate(GroundStationRequest::ListGroundStationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroundStationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroundStationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroundStationsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroundStationsResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListGroundStationsRequestPrivate
 * \brief The ListGroundStationsRequestPrivate class provides private implementation for ListGroundStationsRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListGroundStationsRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListGroundStationsRequestPrivate::ListGroundStationsRequestPrivate(
    const GroundStationRequest::Action action, ListGroundStationsRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroundStationsRequest
 * class' copy constructor.
 */
ListGroundStationsRequestPrivate::ListGroundStationsRequestPrivate(
    const ListGroundStationsRequestPrivate &other, ListGroundStationsRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
