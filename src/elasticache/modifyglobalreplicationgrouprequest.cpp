// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyglobalreplicationgrouprequest.h"
#include "modifyglobalreplicationgrouprequest_p.h"
#include "modifyglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyGlobalReplicationGroupRequest
 * \brief The ModifyGlobalReplicationGroupRequest class provides an interface for ElastiCache ModifyGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::modifyGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyGlobalReplicationGroupRequest::ModifyGlobalReplicationGroupRequest(const ModifyGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new ModifyGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyGlobalReplicationGroupRequest object.
 */
ModifyGlobalReplicationGroupRequest::ModifyGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new ModifyGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::ModifyGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyGlobalReplicationGroupRequestPrivate
 * \brief The ModifyGlobalReplicationGroupRequestPrivate class provides private implementation for ModifyGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyGlobalReplicationGroupRequestPrivate::ModifyGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyGlobalReplicationGroupRequest
 * class' copy constructor.
 */
ModifyGlobalReplicationGroupRequestPrivate::ModifyGlobalReplicationGroupRequestPrivate(
    const ModifyGlobalReplicationGroupRequestPrivate &other, ModifyGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
