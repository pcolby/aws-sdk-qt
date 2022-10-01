// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemaprequest.h"
#include "updatemaprequest_p.h"
#include "updatemapresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateMapRequest
 * \brief The UpdateMapRequest class provides an interface for Location UpdateMap requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateMap
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMapRequest::UpdateMapRequest(const UpdateMapRequest &other)
    : LocationRequest(new UpdateMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMapRequest object.
 */
UpdateMapRequest::UpdateMapRequest()
    : LocationRequest(new UpdateMapRequestPrivate(LocationRequest::UpdateMapAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMapRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMapResponse(*this, reply);
}

/*!
 * \class QtAws::Location::UpdateMapRequestPrivate
 * \brief The UpdateMapRequestPrivate class provides private implementation for UpdateMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateMapRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
UpdateMapRequestPrivate::UpdateMapRequestPrivate(
    const LocationRequest::Action action, UpdateMapRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMapRequest
 * class' copy constructor.
 */
UpdateMapRequestPrivate::UpdateMapRequestPrivate(
    const UpdateMapRequestPrivate &other, UpdateMapRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
