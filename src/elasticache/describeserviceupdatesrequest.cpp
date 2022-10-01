// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceupdatesrequest.h"
#include "describeserviceupdatesrequest_p.h"
#include "describeserviceupdatesresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeServiceUpdatesRequest
 * \brief The DescribeServiceUpdatesRequest class provides an interface for ElastiCache DescribeServiceUpdates requests.
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
 * \sa ElastiCacheClient::describeServiceUpdates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest(const DescribeServiceUpdatesRequest &other)
    : ElastiCacheRequest(new DescribeServiceUpdatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceUpdatesRequest object.
 */
DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest()
    : ElastiCacheRequest(new DescribeServiceUpdatesRequestPrivate(ElastiCacheRequest::DescribeServiceUpdatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceUpdatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceUpdatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceUpdatesResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeServiceUpdatesRequestPrivate
 * \brief The DescribeServiceUpdatesRequestPrivate class provides private implementation for DescribeServiceUpdatesRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeServiceUpdatesRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeServiceUpdatesRequestPrivate::DescribeServiceUpdatesRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeServiceUpdatesRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceUpdatesRequest
 * class' copy constructor.
 */
DescribeServiceUpdatesRequestPrivate::DescribeServiceUpdatesRequestPrivate(
    const DescribeServiceUpdatesRequestPrivate &other, DescribeServiceUpdatesRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
