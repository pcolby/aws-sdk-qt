// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrackerrequest.h"
#include "deletetrackerrequest_p.h"
#include "deletetrackerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DeleteTrackerRequest
 * \brief The DeleteTrackerRequest class provides an interface for Location DeleteTracker requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::deleteTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrackerRequest::DeleteTrackerRequest(const DeleteTrackerRequest &other)
    : LocationRequest(new DeleteTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrackerRequest object.
 */
DeleteTrackerRequest::DeleteTrackerRequest()
    : LocationRequest(new DeleteTrackerRequestPrivate(LocationRequest::DeleteTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DeleteTrackerRequestPrivate
 * \brief The DeleteTrackerRequestPrivate class provides private implementation for DeleteTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DeleteTrackerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DeleteTrackerRequestPrivate::DeleteTrackerRequestPrivate(
    const LocationRequest::Action action, DeleteTrackerRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrackerRequest
 * class' copy constructor.
 */
DeleteTrackerRequestPrivate::DeleteTrackerRequestPrivate(
    const DeleteTrackerRequestPrivate &other, DeleteTrackerRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
