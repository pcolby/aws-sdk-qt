// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemaprequest.h"
#include "describemaprequest_p.h"
#include "describemapresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::DescribeMapRequest
 * \brief The DescribeMapRequest class provides an interface for Location DescribeMap requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::describeMap
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMapRequest::DescribeMapRequest(const DescribeMapRequest &other)
    : LocationRequest(new DescribeMapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMapRequest object.
 */
DescribeMapRequest::DescribeMapRequest()
    : LocationRequest(new DescribeMapRequestPrivate(LocationRequest::DescribeMapAction, this))
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
 * \class QtAws::Location::DescribeMapRequestPrivate
 * \brief The DescribeMapRequestPrivate class provides private implementation for DescribeMapRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a DescribeMapRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
DescribeMapRequestPrivate::DescribeMapRequestPrivate(
    const LocationRequest::Action action, DescribeMapRequest * const q)
    : LocationRequestPrivate(action, q)
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
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
