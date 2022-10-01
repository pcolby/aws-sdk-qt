// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrackerconsumersrequest.h"
#include "listtrackerconsumersrequest_p.h"
#include "listtrackerconsumersresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListTrackerConsumersRequest
 * \brief The ListTrackerConsumersRequest class provides an interface for Location ListTrackerConsumers requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listTrackerConsumers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrackerConsumersRequest::ListTrackerConsumersRequest(const ListTrackerConsumersRequest &other)
    : LocationRequest(new ListTrackerConsumersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrackerConsumersRequest object.
 */
ListTrackerConsumersRequest::ListTrackerConsumersRequest()
    : LocationRequest(new ListTrackerConsumersRequestPrivate(LocationRequest::ListTrackerConsumersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrackerConsumersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrackerConsumersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrackerConsumersRequest::response(QNetworkReply * const reply) const
{
    return new ListTrackerConsumersResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListTrackerConsumersRequestPrivate
 * \brief The ListTrackerConsumersRequestPrivate class provides private implementation for ListTrackerConsumersRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListTrackerConsumersRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListTrackerConsumersRequestPrivate::ListTrackerConsumersRequestPrivate(
    const LocationRequest::Action action, ListTrackerConsumersRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrackerConsumersRequest
 * class' copy constructor.
 */
ListTrackerConsumersRequestPrivate::ListTrackerConsumersRequestPrivate(
    const ListTrackerConsumersRequestPrivate &other, ListTrackerConsumersRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
