/*
    Copyright 2013-2019 Paul Colby

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

#include "describereservedcachenodesofferingsrequest.h"
#include "describereservedcachenodesofferingsrequest_p.h"
#include "describereservedcachenodesofferingsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesOfferingsRequest
 * \brief The DescribeReservedCacheNodesOfferingsRequest class provides an interface for ElastiCache DescribeReservedCacheNodesOfferings requests.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeReservedCacheNodesOfferings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest(const DescribeReservedCacheNodesOfferingsRequest &other)
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedCacheNodesOfferingsRequest object.
 */
DescribeReservedCacheNodesOfferingsRequest::DescribeReservedCacheNodesOfferingsRequest()
    : ElastiCacheRequest(new DescribeReservedCacheNodesOfferingsRequestPrivate(ElastiCacheRequest::DescribeReservedCacheNodesOfferingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedCacheNodesOfferingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedCacheNodesOfferingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedCacheNodesOfferingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedCacheNodesOfferingsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeReservedCacheNodesOfferingsRequestPrivate
 * \brief The DescribeReservedCacheNodesOfferingsRequestPrivate class provides private implementation for DescribeReservedCacheNodesOfferingsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeReservedCacheNodesOfferingsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReservedCacheNodesOfferingsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedCacheNodesOfferingsRequest
 * class' copy constructor.
 */
DescribeReservedCacheNodesOfferingsRequestPrivate::DescribeReservedCacheNodesOfferingsRequestPrivate(
    const DescribeReservedCacheNodesOfferingsRequestPrivate &other, DescribeReservedCacheNodesOfferingsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
