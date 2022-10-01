// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeofencesrequest.h"
#include "listgeofencesrequest_p.h"
#include "listgeofencesresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListGeofencesRequest
 * \brief The ListGeofencesRequest class provides an interface for Location ListGeofences requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listGeofences
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeofencesRequest::ListGeofencesRequest(const ListGeofencesRequest &other)
    : LocationRequest(new ListGeofencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeofencesRequest object.
 */
ListGeofencesRequest::ListGeofencesRequest()
    : LocationRequest(new ListGeofencesRequestPrivate(LocationRequest::ListGeofencesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeofencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeofencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeofencesRequest::response(QNetworkReply * const reply) const
{
    return new ListGeofencesResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListGeofencesRequestPrivate
 * \brief The ListGeofencesRequestPrivate class provides private implementation for ListGeofencesRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListGeofencesRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListGeofencesRequestPrivate::ListGeofencesRequestPrivate(
    const LocationRequest::Action action, ListGeofencesRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeofencesRequest
 * class' copy constructor.
 */
ListGeofencesRequestPrivate::ListGeofencesRequestPrivate(
    const ListGeofencesRequestPrivate &other, ListGeofencesRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
