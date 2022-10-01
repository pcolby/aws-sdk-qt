// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplaceindexrequest.h"
#include "deleteplaceindexrequest_p.h"
#include "deleteplaceindexresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeletePlaceIndexRequest
 * \brief The DeletePlaceIndexRequest class provides an interface for Location DeletePlaceIndex requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deletePlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePlaceIndexRequest::DeletePlaceIndexRequest(const DeletePlaceIndexRequest &other)
    : LocationRequest(new DeletePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePlaceIndexRequest object.
 */
DeletePlaceIndexRequest::DeletePlaceIndexRequest()
    : LocationRequest(new DeletePlaceIndexRequestPrivate(LocationRequest::DeletePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new DeletePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DeletePlaceIndexRequestPrivate
 * \brief The DeletePlaceIndexRequestPrivate class provides private implementation for DeletePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeletePlaceIndexRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DeletePlaceIndexRequestPrivate::DeletePlaceIndexRequestPrivate(
    const LocationRequest::Action action, DeletePlaceIndexRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePlaceIndexRequest
 * class' copy constructor.
 */
DeletePlaceIndexRequestPrivate::DeletePlaceIndexRequestPrivate(
    const DeletePlaceIndexRequestPrivate &other, DeletePlaceIndexRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
