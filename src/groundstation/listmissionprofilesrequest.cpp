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

#include "listmissionprofilesrequest.h"
#include "listmissionprofilesrequest_p.h"
#include "listmissionprofilesresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListMissionProfilesRequest
 * \brief The ListMissionProfilesRequest class provides an interface for GroundStation ListMissionProfiles requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listMissionProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListMissionProfilesRequest::ListMissionProfilesRequest(const ListMissionProfilesRequest &other)
    : GroundStationRequest(new ListMissionProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMissionProfilesRequest object.
 */
ListMissionProfilesRequest::ListMissionProfilesRequest()
    : GroundStationRequest(new ListMissionProfilesRequestPrivate(GroundStationRequest::ListMissionProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMissionProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMissionProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMissionProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListMissionProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListMissionProfilesRequestPrivate
 * \brief The ListMissionProfilesRequestPrivate class provides private implementation for ListMissionProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListMissionProfilesRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListMissionProfilesRequestPrivate::ListMissionProfilesRequestPrivate(
    const GroundStationRequest::Action action, ListMissionProfilesRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMissionProfilesRequest
 * class' copy constructor.
 */
ListMissionProfilesRequestPrivate::ListMissionProfilesRequestPrivate(
    const ListMissionProfilesRequestPrivate &other, ListMissionProfilesRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
