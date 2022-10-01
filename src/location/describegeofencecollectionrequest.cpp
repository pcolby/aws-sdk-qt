// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describegeofencecollectionrequest.h"
#include "describegeofencecollectionrequest_p.h"
#include "describegeofencecollectionresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeGeofenceCollectionRequest
 * \brief The DescribeGeofenceCollectionRequest class provides an interface for Location DescribeGeofenceCollection requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeGeofenceCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGeofenceCollectionRequest::DescribeGeofenceCollectionRequest(const DescribeGeofenceCollectionRequest &other)
    : LocationRequest(new DescribeGeofenceCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGeofenceCollectionRequest object.
 */
DescribeGeofenceCollectionRequest::DescribeGeofenceCollectionRequest()
    : LocationRequest(new DescribeGeofenceCollectionRequestPrivate(LocationRequest::DescribeGeofenceCollectionAction, this))
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
 * \class QtAws::Location::DescribeGeofenceCollectionRequestPrivate
 * \brief The DescribeGeofenceCollectionRequestPrivate class provides private implementation for DescribeGeofenceCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeGeofenceCollectionRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DescribeGeofenceCollectionRequestPrivate::DescribeGeofenceCollectionRequestPrivate(
    const LocationRequest::Action action, DescribeGeofenceCollectionRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
