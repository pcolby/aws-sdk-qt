/*
    Copyright 2013-2018 Paul Colby

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

#include "increasereplicacountrequest.h"
#include "increasereplicacountrequest_p.h"
#include "increasereplicacountresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::IncreaseReplicaCountRequest
 * \brief The IncreaseReplicaCountRequest class provides an interface for ElastiCache IncreaseReplicaCount requests.
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
 * \sa ElastiCacheClient::increaseReplicaCount
 */

/*!
 * Constructs a copy of \a other.
 */
IncreaseReplicaCountRequest::IncreaseReplicaCountRequest(const IncreaseReplicaCountRequest &other)
    : ElastiCacheRequest(new IncreaseReplicaCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a IncreaseReplicaCountRequest object.
 */
IncreaseReplicaCountRequest::IncreaseReplicaCountRequest()
    : ElastiCacheRequest(new IncreaseReplicaCountRequestPrivate(ElastiCacheRequest::IncreaseReplicaCountAction, this))
{

}

/*!
 * \reimp
 */
bool IncreaseReplicaCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a IncreaseReplicaCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * IncreaseReplicaCountRequest::response(QNetworkReply * const reply) const
{
    return new IncreaseReplicaCountResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::IncreaseReplicaCountRequestPrivate
 * \brief The IncreaseReplicaCountRequestPrivate class provides private implementation for IncreaseReplicaCountRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a IncreaseReplicaCountRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
IncreaseReplicaCountRequestPrivate::IncreaseReplicaCountRequestPrivate(
    const ElastiCacheRequest::Action action, IncreaseReplicaCountRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the IncreaseReplicaCountRequest
 * class' copy constructor.
 */
IncreaseReplicaCountRequestPrivate::IncreaseReplicaCountRequestPrivate(
    const IncreaseReplicaCountRequestPrivate &other, IncreaseReplicaCountRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
