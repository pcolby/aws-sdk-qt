// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrackerrequest.h"
#include "describetrackerrequest_p.h"
#include "describetrackerresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeTrackerRequest
 * \brief The DescribeTrackerRequest class provides an interface for Location DescribeTracker requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrackerRequest::DescribeTrackerRequest(const DescribeTrackerRequest &other)
    : LocationRequest(new DescribeTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrackerRequest object.
 */
DescribeTrackerRequest::DescribeTrackerRequest()
    : LocationRequest(new DescribeTrackerRequestPrivate(LocationRequest::DescribeTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Location::DescribeTrackerRequestPrivate
 * \brief The DescribeTrackerRequestPrivate class provides private implementation for DescribeTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeTrackerRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DescribeTrackerRequestPrivate::DescribeTrackerRequestPrivate(
    const LocationRequest::Action action, DescribeTrackerRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrackerRequest
 * class' copy constructor.
 */
DescribeTrackerRequestPrivate::DescribeTrackerRequestPrivate(
    const DescribeTrackerRequestPrivate &other, DescribeTrackerRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
