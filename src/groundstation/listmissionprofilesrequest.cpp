// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
