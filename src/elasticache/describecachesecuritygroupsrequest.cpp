// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecachesecuritygroupsrequest.h"
#include "describecachesecuritygroupsrequest_p.h"
#include "describecachesecuritygroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheSecurityGroupsRequest
 * \brief The DescribeCacheSecurityGroupsRequest class provides an interface for ElastiCache DescribeCacheSecurityGroups requests.
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
 * \sa ElastiCacheClient::describeCacheSecurityGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest(const DescribeCacheSecurityGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCacheSecurityGroupsRequest object.
 */
DescribeCacheSecurityGroupsRequest::DescribeCacheSecurityGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheSecurityGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCacheSecurityGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheSecurityGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheSecurityGroupsRequestPrivate
 * \brief The DescribeCacheSecurityGroupsRequestPrivate class provides private implementation for DescribeCacheSecurityGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheSecurityGroupsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheSecurityGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheSecurityGroupsRequest
 * class' copy constructor.
 */
DescribeCacheSecurityGroupsRequestPrivate::DescribeCacheSecurityGroupsRequestPrivate(
    const DescribeCacheSecurityGroupsRequestPrivate &other, DescribeCacheSecurityGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
