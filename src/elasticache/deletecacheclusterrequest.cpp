// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecacheclusterrequest.h"
#include "deletecacheclusterrequest_p.h"
#include "deletecacheclusterresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheClusterRequest
 * \brief The DeleteCacheClusterRequest class provides an interface for ElastiCache DeleteCacheCluster requests.
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
 * \sa ElastiCacheClient::deleteCacheCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCacheClusterRequest::DeleteCacheClusterRequest(const DeleteCacheClusterRequest &other)
    : ElastiCacheRequest(new DeleteCacheClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCacheClusterRequest object.
 */
DeleteCacheClusterRequest::DeleteCacheClusterRequest()
    : ElastiCacheRequest(new DeleteCacheClusterRequestPrivate(ElastiCacheRequest::DeleteCacheClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCacheClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCacheClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheClusterResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheClusterRequestPrivate
 * \brief The DeleteCacheClusterRequestPrivate class provides private implementation for DeleteCacheClusterRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheClusterRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteCacheClusterRequestPrivate::DeleteCacheClusterRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheClusterRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheClusterRequest
 * class' copy constructor.
 */
DeleteCacheClusterRequestPrivate::DeleteCacheClusterRequestPrivate(
    const DeleteCacheClusterRequestPrivate &other, DeleteCacheClusterRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
