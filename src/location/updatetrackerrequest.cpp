// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrackerrequest.h"
#include "updatetrackerrequest_p.h"
#include "updatetrackerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::UpdateTrackerRequest
 * \brief The UpdateTrackerRequest class provides an interface for Location UpdateTracker requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::updateTracker
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrackerRequest::UpdateTrackerRequest(const UpdateTrackerRequest &other)
    : LocationRequest(new UpdateTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrackerRequest object.
 */
UpdateTrackerRequest::UpdateTrackerRequest()
    : LocationRequest(new UpdateTrackerRequestPrivate(LocationRequest::UpdateTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrackerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Location::UpdateTrackerRequestPrivate
 * \brief The UpdateTrackerRequestPrivate class provides private implementation for UpdateTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a UpdateTrackerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
UpdateTrackerRequestPrivate::UpdateTrackerRequestPrivate(
    const LocationRequest::Action action, UpdateTrackerRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrackerRequest
 * class' copy constructor.
 */
UpdateTrackerRequestPrivate::UpdateTrackerRequestPrivate(
    const UpdateTrackerRequestPrivate &other, UpdateTrackerRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
