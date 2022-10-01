// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecacheclustersrequest.h"
#include "describecacheclustersrequest_p.h"
#include "describecacheclustersresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheClustersRequest
 * \brief The DescribeCacheClustersRequest class provides an interface for ElastiCache DescribeCacheClusters requests.
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
 * \sa ElastiCacheClient::describeCacheClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCacheClustersRequest::DescribeCacheClustersRequest(const DescribeCacheClustersRequest &other)
    : ElastiCacheRequest(new DescribeCacheClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCacheClustersRequest object.
 */
DescribeCacheClustersRequest::DescribeCacheClustersRequest()
    : ElastiCacheRequest(new DescribeCacheClustersRequestPrivate(ElastiCacheRequest::DescribeCacheClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCacheClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheClustersResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheClustersRequestPrivate
 * \brief The DescribeCacheClustersRequestPrivate class provides private implementation for DescribeCacheClustersRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheClustersRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeCacheClustersRequestPrivate::DescribeCacheClustersRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheClustersRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheClustersRequest
 * class' copy constructor.
 */
DescribeCacheClustersRequestPrivate::DescribeCacheClustersRequestPrivate(
    const DescribeCacheClustersRequestPrivate &other, DescribeCacheClustersRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
