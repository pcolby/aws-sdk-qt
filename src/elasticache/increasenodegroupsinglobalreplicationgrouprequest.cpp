// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "increasenodegroupsinglobalreplicationgrouprequest.h"
#include "increasenodegroupsinglobalreplicationgrouprequest_p.h"
#include "increasenodegroupsinglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::IncreaseNodeGroupsInGlobalReplicationGroupRequest
 * \brief The IncreaseNodeGroupsInGlobalReplicationGroupRequest class provides an interface for ElastiCache IncreaseNodeGroupsInGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::increaseNodeGroupsInGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
IncreaseNodeGroupsInGlobalReplicationGroupRequest::IncreaseNodeGroupsInGlobalReplicationGroupRequest(const IncreaseNodeGroupsInGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IncreaseNodeGroupsInGlobalReplicationGroupRequest object.
 */
IncreaseNodeGroupsInGlobalReplicationGroupRequest::IncreaseNodeGroupsInGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::IncreaseNodeGroupsInGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool IncreaseNodeGroupsInGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IncreaseNodeGroupsInGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseNodeGroupsInGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseNodeGroupsInGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate
 * \brief The IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate class provides private implementation for IncreaseNodeGroupsInGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate::IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, IncreaseNodeGroupsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IncreaseNodeGroupsInGlobalReplicationGroupRequest
 * class' copy constructor.
 */
IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate::IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate(
    const IncreaseNodeGroupsInGlobalReplicationGroupRequestPrivate &other, IncreaseNodeGroupsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
