/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecacheparametergroupsrequest.h"
#include "describecacheparametergroupsrequest_p.h"
#include "describecacheparametergroupsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheParameterGroupsRequest
 * \brief The DescribeCacheParameterGroupsRequest class provides an interface for ElastiCache DescribeCacheParameterGroups requests.
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
 * \sa ElastiCacheClient::describeCacheParameterGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCacheParameterGroupsRequest::DescribeCacheParameterGroupsRequest(const DescribeCacheParameterGroupsRequest &other)
    : ElastiCacheRequest(new DescribeCacheParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCacheParameterGroupsRequest object.
 */
DescribeCacheParameterGroupsRequest::DescribeCacheParameterGroupsRequest()
    : ElastiCacheRequest(new DescribeCacheParameterGroupsRequestPrivate(ElastiCacheRequest::DescribeCacheParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCacheParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCacheParameterGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCacheParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCacheParameterGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheParameterGroupsRequestPrivate
 * \brief The DescribeCacheParameterGroupsRequestPrivate class provides private implementation for DescribeCacheParameterGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 *
 * Constructs a DescribeCacheParameterGroupsRequestPrivate object for ElastiCache \a action with,
 * public implementation \a q.
 */
DescribeCacheParameterGroupsRequestPrivate::DescribeCacheParameterGroupsRequestPrivate(
    const ElastiCacheRequest::Action action, DescribeCacheParameterGroupsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCacheParameterGroupsRequest
 * class' copy constructor.
 */
DescribeCacheParameterGroupsRequestPrivate::DescribeCacheParameterGroupsRequestPrivate(
    const DescribeCacheParameterGroupsRequestPrivate &other, DescribeCacheParameterGroupsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
