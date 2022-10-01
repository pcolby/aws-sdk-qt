// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategeofencecollectionrequest.h"
#include "creategeofencecollectionrequest_p.h"
#include "creategeofencecollectionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateGeofenceCollectionRequest
 * \brief The CreateGeofenceCollectionRequest class provides an interface for Location CreateGeofenceCollection requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGeofenceCollectionRequest::CreateGeofenceCollectionRequest(const CreateGeofenceCollectionRequest &other)
    : LocationRequest(new CreateGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGeofenceCollectionRequest object.
 */
CreateGeofenceCollectionRequest::CreateGeofenceCollectionRequest()
    : LocationRequest(new CreateGeofenceCollectionRequestPrivate(LocationRequest::CreateGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CreateGeofenceCollectionRequestPrivate
 * \brief The CreateGeofenceCollectionRequestPrivate class provides private implementation for CreateGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateGeofenceCollectionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CreateGeofenceCollectionRequestPrivate::CreateGeofenceCollectionRequestPrivate(
    const LocationRequest::Action action, CreateGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGeofenceCollectionRequest
 * class' copy constructor.
 */
CreateGeofenceCollectionRequestPrivate::CreateGeofenceCollectionRequestPrivate(
    const CreateGeofenceCollectionRequestPrivate &other, CreateGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
