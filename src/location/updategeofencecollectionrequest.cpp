// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategeofencecollectionrequest.h"
#include "updategeofencecollectionrequest_p.h"
#include "updategeofencecollectionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateGeofenceCollectionRequest
 * \brief The UpdateGeofenceCollectionRequest class provides an interface for Location UpdateGeofenceCollection requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGeofenceCollectionRequest::UpdateGeofenceCollectionRequest(const UpdateGeofenceCollectionRequest &other)
    : LocationRequest(new UpdateGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGeofenceCollectionRequest object.
 */
UpdateGeofenceCollectionRequest::UpdateGeofenceCollectionRequest()
    : LocationRequest(new UpdateGeofenceCollectionRequestPrivate(LocationRequest::UpdateGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::UpdateGeofenceCollectionRequestPrivate
 * \brief The UpdateGeofenceCollectionRequestPrivate class provides private implementation for UpdateGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateGeofenceCollectionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
UpdateGeofenceCollectionRequestPrivate::UpdateGeofenceCollectionRequestPrivate(
    const LocationRequest::Action action, UpdateGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGeofenceCollectionRequest
 * class' copy constructor.
 */
UpdateGeofenceCollectionRequestPrivate::UpdateGeofenceCollectionRequestPrivate(
    const UpdateGeofenceCollectionRequestPrivate &other, UpdateGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
