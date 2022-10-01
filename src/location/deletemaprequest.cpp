// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemaprequest.h"
#include "deletemaprequest_p.h"
#include "deletemapresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteMapRequest
 * \brief The DeleteMapRequest class provides an interface for Location DeleteMap requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteMap
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMapRequest::DeleteMapRequest(const DeleteMapRequest &other)
    : LocationRequest(new DeleteMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMapRequest object.
 */
DeleteMapRequest::DeleteMapRequest()
    : LocationRequest(new DeleteMapRequestPrivate(LocationRequest::DeleteMapAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMapRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMapResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DeleteMapRequestPrivate
 * \brief The DeleteMapRequestPrivate class provides private implementation for DeleteMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteMapRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DeleteMapRequestPrivate::DeleteMapRequestPrivate(
    const LocationRequest::Action action, DeleteMapRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMapRequest
 * class' copy constructor.
 */
DeleteMapRequestPrivate::DeleteMapRequestPrivate(
    const DeleteMapRequestPrivate &other, DeleteMapRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
