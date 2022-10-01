// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeusergroupsrequest.h"
#include "describeusergroupsrequest_p.h"
#include "describeusergroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeUserGroupsRequest
 * \brief The DescribeUserGroupsRequest class provides an interface for ElastiCache DescribeUserGroups requests.
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
 * \sa ElastiCacheClient::describeUserGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserGroupsRequest::DescribeUserGroupsRequest(const DescribeUserGroupsRequest &other)
    : ElastiCacheRequest(new DescribeUserGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserGroupsRequest object.
 */
DescribeUserGroupsRequest::DescribeUserGroupsRequest()
    : ElastiCacheRequest(new DescribeUserGroupsRequestPrivate(ElastiCacheRequest::DescribeUserGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeUserGroupsRequestPrivate
 * \brief The DescribeUserGroupsRequestPrivate class provides private implementation for DescribeUserGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeUserGroupsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeUserGroupsRequestPrivate::DescribeUserGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeUserGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserGroupsRequest
 * class' copy constructor.
 */
DescribeUserGroupsRequestPrivate::DescribeUserGroupsRequestPrivate(
    const DescribeUserGroupsRequestPrivate &other, DescribeUserGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
