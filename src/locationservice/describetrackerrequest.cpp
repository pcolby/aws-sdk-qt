/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describetrackerrequest.h"
#include "describetrackerrequest_p.h"
#include "describetrackerresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeTrackerRequest
 * \brief The DescribeTrackerRequest class provides an interface for LocationService DescribeTracker requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrackerRequest::DescribeTrackerRequest(const DescribeTrackerRequest &other)
    : LocationServiceRequest(new DescribeTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrackerRequest object.
 */
DescribeTrackerRequest::DescribeTrackerRequest()
    : LocationServiceRequest(new DescribeTrackerRequestPrivate(LocationServiceRequest::DescribeTrackerAction, this))
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
 * \class QtAws::LocationService::DescribeTrackerRequestPrivate
 * \brief The DescribeTrackerRequestPrivate class provides private implementation for DescribeTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeTrackerRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DescribeTrackerRequestPrivate::DescribeTrackerRequestPrivate(
    const LocationServiceRequest::Action action, DescribeTrackerRequest * const q)
    : LocationServiceRequestPrivate(action, q)
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
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
