// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeofencecollectionsrequest.h"
#include "listgeofencecollectionsrequest_p.h"
#include "listgeofencecollectionsresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::ListGeofenceCollectionsRequest
 * \brief The ListGeofenceCollectionsRequest class provides an interface for Location ListGeofenceCollections requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::listGeofenceCollections
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeofenceCollectionsRequest::ListGeofenceCollectionsRequest(const ListGeofenceCollectionsRequest &other)
    : LocationRequest(new ListGeofenceCollectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeofenceCollectionsRequest object.
 */
ListGeofenceCollectionsRequest::ListGeofenceCollectionsRequest()
    : LocationRequest(new ListGeofenceCollectionsRequestPrivate(LocationRequest::ListGeofenceCollectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeofenceCollectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeofenceCollectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeofenceCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeofenceCollectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Location::ListGeofenceCollectionsRequestPrivate
 * \brief The ListGeofenceCollectionsRequestPrivate class provides private implementation for ListGeofenceCollectionsRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a ListGeofenceCollectionsRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
ListGeofenceCollectionsRequestPrivate::ListGeofenceCollectionsRequestPrivate(
    const LocationRequest::Action action, ListGeofenceCollectionsRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeofenceCollectionsRequest
 * class' copy constructor.
 */
ListGeofenceCollectionsRequestPrivate::ListGeofenceCollectionsRequestPrivate(
    const ListGeofenceCollectionsRequestPrivate &other, ListGeofenceCollectionsRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
