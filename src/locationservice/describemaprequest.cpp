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

#include "describemaprequest.h"
#include "describemaprequest_p.h"
#include "describemapresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeMapRequest
 * \brief The DescribeMapRequest class provides an interface for LocationService DescribeMap requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeMap
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMapRequest::DescribeMapRequest(const DescribeMapRequest &other)
    : LocationServiceRequest(new DescribeMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMapRequest object.
 */
DescribeMapRequest::DescribeMapRequest()
    : LocationServiceRequest(new DescribeMapRequestPrivate(LocationServiceRequest::DescribeMapAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMapRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMapResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DescribeMapRequestPrivate
 * \brief The DescribeMapRequestPrivate class provides private implementation for DescribeMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeMapRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DescribeMapRequestPrivate::DescribeMapRequestPrivate(
    const LocationServiceRequest::Action action, DescribeMapRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMapRequest
 * class' copy constructor.
 */
DescribeMapRequestPrivate::DescribeMapRequestPrivate(
    const DescribeMapRequestPrivate &other, DescribeMapRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
