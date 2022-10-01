// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegeofencecollectionrequest.h"
#include "deletegeofencecollectionrequest_p.h"
#include "deletegeofencecollectionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteGeofenceCollectionRequest
 * \brief The DeleteGeofenceCollectionRequest class provides an interface for Location DeleteGeofenceCollection requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGeofenceCollectionRequest::DeleteGeofenceCollectionRequest(const DeleteGeofenceCollectionRequest &other)
    : LocationRequest(new DeleteGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGeofenceCollectionRequest object.
 */
DeleteGeofenceCollectionRequest::DeleteGeofenceCollectionRequest()
    : LocationRequest(new DeleteGeofenceCollectionRequestPrivate(LocationRequest::DeleteGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DeleteGeofenceCollectionRequestPrivate
 * \brief The DeleteGeofenceCollectionRequestPrivate class provides private implementation for DeleteGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteGeofenceCollectionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DeleteGeofenceCollectionRequestPrivate::DeleteGeofenceCollectionRequestPrivate(
    const LocationRequest::Action action, DeleteGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGeofenceCollectionRequest
 * class' copy constructor.
 */
DeleteGeofenceCollectionRequestPrivate::DeleteGeofenceCollectionRequestPrivate(
    const DeleteGeofenceCollectionRequestPrivate &other, DeleteGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
