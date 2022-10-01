// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateplaceindexrequest.h"
#include "updateplaceindexrequest_p.h"
#include "updateplaceindexresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdatePlaceIndexRequest
 * \brief The UpdatePlaceIndexRequest class provides an interface for Location UpdatePlaceIndex requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updatePlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePlaceIndexRequest::UpdatePlaceIndexRequest(const UpdatePlaceIndexRequest &other)
    : LocationRequest(new UpdatePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePlaceIndexRequest object.
 */
UpdatePlaceIndexRequest::UpdatePlaceIndexRequest()
    : LocationRequest(new UpdatePlaceIndexRequestPrivate(LocationRequest::UpdatePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Location::UpdatePlaceIndexRequestPrivate
 * \brief The UpdatePlaceIndexRequestPrivate class provides private implementation for UpdatePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdatePlaceIndexRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
UpdatePlaceIndexRequestPrivate::UpdatePlaceIndexRequestPrivate(
    const LocationRequest::Action action, UpdatePlaceIndexRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePlaceIndexRequest
 * class' copy constructor.
 */
UpdatePlaceIndexRequestPrivate::UpdatePlaceIndexRequestPrivate(
    const UpdatePlaceIndexRequestPrivate &other, UpdatePlaceIndexRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
