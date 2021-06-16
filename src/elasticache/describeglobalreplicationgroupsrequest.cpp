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

#include "describeglobalreplicationgroupsrequest.h"
#include "describeglobalreplicationgroupsrequest_p.h"
#include "describeglobalreplicationgroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeGlobalReplicationGroupsRequest
 * \brief The DescribeGlobalReplicationGroupsRequest class provides an interface for ElastiCache DescribeGlobalReplicationGroups requests.
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
 * \sa ElastiCacheClient::describeGlobalReplicationGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalReplicationGroupsRequest::DescribeGlobalReplicationGroupsRequest(const DescribeGlobalReplicationGroupsRequest &other)
    : ElastiCacheRequest(new DescribeGlobalReplicationGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalReplicationGroupsRequest object.
 */
DescribeGlobalReplicationGroupsRequest::DescribeGlobalReplicationGroupsRequest()
    : ElastiCacheRequest(new DescribeGlobalReplicationGroupsRequestPrivate(ElastiCacheRequest::DescribeGlobalReplicationGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalReplicationGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalReplicationGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalReplicationGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalReplicationGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeGlobalReplicationGroupsRequestPrivate
 * \brief The DescribeGlobalReplicationGroupsRequestPrivate class provides private implementation for DescribeGlobalReplicationGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeGlobalReplicationGroupsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeGlobalReplicationGroupsRequestPrivate::DescribeGlobalReplicationGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeGlobalReplicationGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalReplicationGroupsRequest
 * class' copy constructor.
 */
DescribeGlobalReplicationGroupsRequestPrivate::DescribeGlobalReplicationGroupsRequestPrivate(
    const DescribeGlobalReplicationGroupsRequestPrivate &other, DescribeGlobalReplicationGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
