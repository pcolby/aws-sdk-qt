// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebalanceslotsinglobalreplicationgrouprequest.h"
#include "rebalanceslotsinglobalreplicationgrouprequest_p.h"
#include "rebalanceslotsinglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::RebalanceSlotsInGlobalReplicationGroupRequest
 * \brief The RebalanceSlotsInGlobalReplicationGroupRequest class provides an interface for ElastiCache RebalanceSlotsInGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::rebalanceSlotsInGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
RebalanceSlotsInGlobalReplicationGroupRequest::RebalanceSlotsInGlobalReplicationGroupRequest(const RebalanceSlotsInGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new RebalanceSlotsInGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebalanceSlotsInGlobalReplicationGroupRequest object.
 */
RebalanceSlotsInGlobalReplicationGroupRequest::RebalanceSlotsInGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new RebalanceSlotsInGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::RebalanceSlotsInGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool RebalanceSlotsInGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebalanceSlotsInGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebalanceSlotsInGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new RebalanceSlotsInGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::RebalanceSlotsInGlobalReplicationGroupRequestPrivate
 * \brief The RebalanceSlotsInGlobalReplicationGroupRequestPrivate class provides private implementation for RebalanceSlotsInGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a RebalanceSlotsInGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
RebalanceSlotsInGlobalReplicationGroupRequestPrivate::RebalanceSlotsInGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, RebalanceSlotsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebalanceSlotsInGlobalReplicationGroupRequest
 * class' copy constructor.
 */
RebalanceSlotsInGlobalReplicationGroupRequestPrivate::RebalanceSlotsInGlobalReplicationGroupRequestPrivate(
    const RebalanceSlotsInGlobalReplicationGroupRequestPrivate &other, RebalanceSlotsInGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
