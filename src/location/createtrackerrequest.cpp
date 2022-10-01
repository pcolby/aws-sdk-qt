// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrackerrequest.h"
#include "createtrackerrequest_p.h"
#include "createtrackerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreateTrackerRequest
 * \brief The CreateTrackerRequest class provides an interface for Location CreateTracker requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createTracker
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrackerRequest::CreateTrackerRequest(const CreateTrackerRequest &other)
    : LocationRequest(new CreateTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrackerRequest object.
 */
CreateTrackerRequest::CreateTrackerRequest()
    : LocationRequest(new CreateTrackerRequestPrivate(LocationRequest::CreateTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrackerRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CreateTrackerRequestPrivate
 * \brief The CreateTrackerRequestPrivate class provides private implementation for CreateTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreateTrackerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CreateTrackerRequestPrivate::CreateTrackerRequestPrivate(
    const LocationRequest::Action action, CreateTrackerRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrackerRequest
 * class' copy constructor.
 */
CreateTrackerRequestPrivate::CreateTrackerRequestPrivate(
    const CreateTrackerRequestPrivate &other, CreateTrackerRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
