/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyreplicationgrouprequest.h"
#include "modifyreplicationgrouprequest_p.h"
#include "modifyreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupRequest
 * \brief The ModifyReplicationGroupRequest class provides an interface for ElastiCache ModifyReplicationGroup requests.
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
 * \sa ElastiCacheClient::modifyReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyReplicationGroupRequest::ModifyReplicationGroupRequest(const ModifyReplicationGroupRequest &other)
    : ElastiCacheRequest(new ModifyReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyReplicationGroupRequest object.
 */
ModifyReplicationGroupRequest::ModifyReplicationGroupRequest()
    : ElastiCacheRequest(new ModifyReplicationGroupRequestPrivate(ElastiCacheRequest::ModifyReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupRequestPrivate
 * \brief The ModifyReplicationGroupRequestPrivate class provides private implementation for ModifyReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyReplicationGroupRequestPrivate::ModifyReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyReplicationGroupRequest
 * class' copy constructor.
 */
ModifyReplicationGroupRequestPrivate::ModifyReplicationGroupRequestPrivate(
    const ModifyReplicationGroupRequestPrivate &other, ModifyReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
