// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrackersrequest.h"
#include "listtrackersrequest_p.h"
#include "listtrackersresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListTrackersRequest
 * \brief The ListTrackersRequest class provides an interface for Location ListTrackers requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listTrackers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrackersRequest::ListTrackersRequest(const ListTrackersRequest &other)
    : LocationRequest(new ListTrackersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrackersRequest object.
 */
ListTrackersRequest::ListTrackersRequest()
    : LocationRequest(new ListTrackersRequestPrivate(LocationRequest::ListTrackersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrackersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrackersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrackersRequest::response(QNetworkReply * const reply) const
{
    return new ListTrackersResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListTrackersRequestPrivate
 * \brief The ListTrackersRequestPrivate class provides private implementation for ListTrackersRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListTrackersRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListTrackersRequestPrivate::ListTrackersRequestPrivate(
    const LocationRequest::Action action, ListTrackersRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrackersRequest
 * class' copy constructor.
 */
ListTrackersRequestPrivate::ListTrackersRequestPrivate(
    const ListTrackersRequestPrivate &other, ListTrackersRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
