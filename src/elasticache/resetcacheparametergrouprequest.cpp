/*
    Copyright 2013-2019 Paul Colby

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

#include "resetcacheparametergrouprequest.h"
#include "resetcacheparametergrouprequest_p.h"
#include "resetcacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ResetCacheParameterGroupRequest
 * \brief The ResetCacheParameterGroupRequest class provides an interface for ElastiCache ResetCacheParameterGroup requests.
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
 * \sa ElastiCacheClient::resetCacheParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ResetCacheParameterGroupRequest::ResetCacheParameterGroupRequest(const ResetCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new ResetCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetCacheParameterGroupRequest object.
 */
ResetCacheParameterGroupRequest::ResetCacheParameterGroupRequest()
    : ElastiCacheRequest(new ResetCacheParameterGroupRequestPrivate(ElastiCacheRequest::ResetCacheParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ResetCacheParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetCacheParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetCacheParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ResetCacheParameterGroupRequestPrivate
 * \brief The ResetCacheParameterGroupRequestPrivate class provides private implementation for ResetCacheParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ResetCacheParameterGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ResetCacheParameterGroupRequestPrivate::ResetCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ResetCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetCacheParameterGroupRequest
 * class' copy constructor.
 */
ResetCacheParameterGroupRequestPrivate::ResetCacheParameterGroupRequestPrivate(
    const ResetCacheParameterGroupRequestPrivate &other, ResetCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
