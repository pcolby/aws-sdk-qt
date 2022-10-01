// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachesubnetgrouprequest.h"
#include "deletecachesubnetgrouprequest_p.h"
#include "deletecachesubnetgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheSubnetGroupRequest
 * \brief The DeleteCacheSubnetGroupRequest class provides an interface for ElastiCache DeleteCacheSubnetGroup requests.
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
 * \sa ElastiCacheClient::deleteCacheSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCacheSubnetGroupRequest::DeleteCacheSubnetGroupRequest(const DeleteCacheSubnetGroupRequest &other)
    : ElastiCacheRequest(new DeleteCacheSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCacheSubnetGroupRequest object.
 */
DeleteCacheSubnetGroupRequest::DeleteCacheSubnetGroupRequest()
    : ElastiCacheRequest(new DeleteCacheSubnetGroupRequestPrivate(ElastiCacheRequest::DeleteCacheSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCacheSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCacheSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCacheSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCacheSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheSubnetGroupRequestPrivate
 * \brief The DeleteCacheSubnetGroupRequestPrivate class provides private implementation for DeleteCacheSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheSubnetGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteCacheSubnetGroupRequestPrivate::DeleteCacheSubnetGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteCacheSubnetGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCacheSubnetGroupRequest
 * class' copy constructor.
 */
DeleteCacheSubnetGroupRequestPrivate::DeleteCacheSubnetGroupRequestPrivate(
    const DeleteCacheSubnetGroupRequestPrivate &other, DeleteCacheSubnetGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
