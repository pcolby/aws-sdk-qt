// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsrequest.h"
#include "listcontactsrequest_p.h"
#include "listcontactsresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::ListContactsRequest
 * \brief The ListContactsRequest class provides an interface for GroundStation ListContacts requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::listContacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactsRequest::ListContactsRequest(const ListContactsRequest &other)
    : GroundStationRequest(new ListContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactsRequest object.
 */
ListContactsRequest::ListContactsRequest()
    : GroundStationRequest(new ListContactsRequestPrivate(GroundStationRequest::ListContactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactsResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::ListContactsRequestPrivate
 * \brief The ListContactsRequestPrivate class provides private implementation for ListContactsRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a ListContactsRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const GroundStationRequest::Action action, ListContactsRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactsRequest
 * class' copy constructor.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const ListContactsRequestPrivate &other, ListContactsRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
