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

#include "describegeofencecollectionrequest.h"
#include "describegeofencecollectionrequest_p.h"
#include "describegeofencecollectionresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::DescribeGeofenceCollectionRequest
 * \brief The DescribeGeofenceCollectionRequest class provides an interface for LocationService DescribeGeofenceCollection requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::describeGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGeofenceCollectionRequest::DescribeGeofenceCollectionRequest(const DescribeGeofenceCollectionRequest &other)
    : LocationServiceRequest(new DescribeGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGeofenceCollectionRequest object.
 */
DescribeGeofenceCollectionRequest::DescribeGeofenceCollectionRequest()
    : LocationServiceRequest(new DescribeGeofenceCollectionRequestPrivate(LocationServiceRequest::DescribeGeofenceCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGeofenceCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGeofenceCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGeofenceCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGeofenceCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::DescribeGeofenceCollectionRequestPrivate
 * \brief The DescribeGeofenceCollectionRequestPrivate class provides private implementation for DescribeGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a DescribeGeofenceCollectionRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
DescribeGeofenceCollectionRequestPrivate::DescribeGeofenceCollectionRequestPrivate(
    const LocationServiceRequest::Action action, DescribeGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGeofenceCollectionRequest
 * class' copy constructor.
 */
DescribeGeofenceCollectionRequestPrivate::DescribeGeofenceCollectionRequestPrivate(
    const DescribeGeofenceCollectionRequestPrivate &other, DescribeGeofenceCollectionRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
