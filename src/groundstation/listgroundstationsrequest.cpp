// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
