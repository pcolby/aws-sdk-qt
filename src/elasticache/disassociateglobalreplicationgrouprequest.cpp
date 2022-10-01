// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateglobalreplicationgrouprequest.h"
#include "disassociateglobalreplicationgrouprequest_p.h"
#include "disassociateglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupRequest
 * \brief The DisassociateGlobalReplicationGroupRequest class provides an interface for ElastiCache DisassociateGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::disassociateGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateGlobalReplicationGroupRequest::DisassociateGlobalReplicationGroupRequest(const DisassociateGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new DisassociateGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateGlobalReplicationGroupRequest object.
 */
DisassociateGlobalReplicationGroupRequest::DisassociateGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new DisassociateGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::DisassociateGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DisassociateGlobalReplicationGroupRequestPrivate
 * \brief The DisassociateGlobalReplicationGroupRequestPrivate class provides private implementation for DisassociateGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DisassociateGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DisassociateGlobalReplicationGroupRequestPrivate::DisassociateGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, DisassociateGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateGlobalReplicationGroupRequest
 * class' copy constructor.
 */
DisassociateGlobalReplicationGroupRequestPrivate::DisassociateGlobalReplicationGroupRequestPrivate(
    const DisassociateGlobalReplicationGroupRequestPrivate &other, DisassociateGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
