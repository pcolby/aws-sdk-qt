// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeusersrequest.h"
#include "describeusersrequest_p.h"
#include "describeusersresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeUsersRequest
 * \brief The DescribeUsersRequest class provides an interface for ElastiCache DescribeUsers requests.
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
 * \sa ElastiCacheClient::describeUsers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUsersRequest::DescribeUsersRequest(const DescribeUsersRequest &other)
    : ElastiCacheRequest(new DescribeUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUsersRequest object.
 */
DescribeUsersRequest::DescribeUsersRequest()
    : ElastiCacheRequest(new DescribeUsersRequestPrivate(ElastiCacheRequest::DescribeUsersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUsersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUsersResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeUsersRequestPrivate
 * \brief The DescribeUsersRequestPrivate class provides private implementation for DescribeUsersRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeUsersRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeUsersRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUsersRequest
 * class' copy constructor.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const DescribeUsersRequestPrivate &other, DescribeUsersRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
