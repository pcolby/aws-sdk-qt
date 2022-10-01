// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesnapshotsrequest.h"
#include "describesnapshotsrequest_p.h"
#include "describesnapshotsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeSnapshotsRequest
 * \brief The DescribeSnapshotsRequest class provides an interface for ElastiCache DescribeSnapshots requests.
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
 * \sa ElastiCacheClient::describeSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other)
    : ElastiCacheRequest(new DescribeSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSnapshotsRequest object.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : ElastiCacheRequest(new DescribeSnapshotsRequestPrivate(ElastiCacheRequest::DescribeSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeSnapshotsRequestPrivate
 * \brief The DescribeSnapshotsRequestPrivate class provides private implementation for DescribeSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeSnapshotsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeSnapshotsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotsRequest
 * class' copy constructor.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const DescribeSnapshotsRequestPrivate &other, DescribeSnapshotsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
