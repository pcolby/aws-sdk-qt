// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationgroupsrequest.h"
#include "describereplicationgroupsrequest_p.h"
#include "describereplicationgroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeReplicationGroupsRequest
 * \brief The DescribeReplicationGroupsRequest class provides an interface for ElastiCache DescribeReplicationGroups requests.
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
 * \sa ElastiCacheClient::describeReplicationGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationGroupsRequest::DescribeReplicationGroupsRequest(const DescribeReplicationGroupsRequest &other)
    : ElastiCacheRequest(new DescribeReplicationGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationGroupsRequest object.
 */
DescribeReplicationGroupsRequest::DescribeReplicationGroupsRequest()
    : ElastiCacheRequest(new DescribeReplicationGroupsRequestPrivate(ElastiCacheRequest::DescribeReplicationGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeReplicationGroupsRequestPrivate
 * \brief The DescribeReplicationGroupsRequestPrivate class provides private implementation for DescribeReplicationGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeReplicationGroupsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeReplicationGroupsRequestPrivate::DescribeReplicationGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeReplicationGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationGroupsRequest
 * class' copy constructor.
 */
DescribeReplicationGroupsRequestPrivate::DescribeReplicationGroupsRequestPrivate(
    const DescribeReplicationGroupsRequestPrivate &other, DescribeReplicationGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
