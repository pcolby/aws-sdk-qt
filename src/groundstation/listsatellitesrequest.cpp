// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsatellitesrequest.h"
#include "listsatellitesrequest_p.h"
#include "listsatellitesresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListSatellitesRequest
 * \brief The ListSatellitesRequest class provides an interface for GroundStation ListSatellites requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listSatellites
 */

/*!
 * Constructs a copy of \a other.
 */
ListSatellitesRequest::ListSatellitesRequest(const ListSatellitesRequest &other)
    : GroundStationRequest(new ListSatellitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSatellitesRequest object.
 */
ListSatellitesRequest::ListSatellitesRequest()
    : GroundStationRequest(new ListSatellitesRequestPrivate(GroundStationRequest::ListSatellitesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSatellitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSatellitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSatellitesRequest::response(QNetworkReply * const reply) const
{
    return new ListSatellitesResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListSatellitesRequestPrivate
 * \brief The ListSatellitesRequestPrivate class provides private implementation for ListSatellitesRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListSatellitesRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListSatellitesRequestPrivate::ListSatellitesRequestPrivate(
    const GroundStationRequest::Action action, ListSatellitesRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSatellitesRequest
 * class' copy constructor.
 */
ListSatellitesRequestPrivate::ListSatellitesRequestPrivate(
    const ListSatellitesRequestPrivate &other, ListSatellitesRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
