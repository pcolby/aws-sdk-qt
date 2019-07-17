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

#include "authorizecachesecuritygroupingressrequest.h"
#include "authorizecachesecuritygroupingressrequest_p.h"
#include "authorizecachesecuritygroupingressresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::AuthorizeCacheSecurityGroupIngressRequest
 * \brief The AuthorizeCacheSecurityGroupIngressRequest class provides an interface for ElastiCache AuthorizeCacheSecurityGroupIngress requests.
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
 * \sa ElastiCacheClient::authorizeCacheSecurityGroupIngress
 */

/*!
 * Constructs a copy of \a other.
 */
AuthorizeCacheSecurityGroupIngressRequest::AuthorizeCacheSecurityGroupIngressRequest(const AuthorizeCacheSecurityGroupIngressRequest &other)
    : ElastiCacheRequest(new AuthorizeCacheSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AuthorizeCacheSecurityGroupIngressRequest object.
 */
AuthorizeCacheSecurityGroupIngressRequest::AuthorizeCacheSecurityGroupIngressRequest()
    : ElastiCacheRequest(new AuthorizeCacheSecurityGroupIngressRequestPrivate(ElastiCacheRequest::AuthorizeCacheSecurityGroupIngressAction, this))
{

}

/*!
 * \reimp
 */
bool AuthorizeCacheSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AuthorizeCacheSecurityGroupIngressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeCacheSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeCacheSecurityGroupIngressResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::AuthorizeCacheSecurityGroupIngressRequestPrivate
 * \brief The AuthorizeCacheSecurityGroupIngressRequestPrivate class provides private implementation for AuthorizeCacheSecurityGroupIngressRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a AuthorizeCacheSecurityGroupIngressRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
AuthorizeCacheSecurityGroupIngressRequestPrivate::AuthorizeCacheSecurityGroupIngressRequestPrivate(
    const ElastiCacheRequest::Action action, AuthorizeCacheSecurityGroupIngressRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeCacheSecurityGroupIngressRequest
 * class' copy constructor.
 */
AuthorizeCacheSecurityGroupIngressRequestPrivate::AuthorizeCacheSecurityGroupIngressRequestPrivate(
    const AuthorizeCacheSecurityGroupIngressRequestPrivate &other, AuthorizeCacheSecurityGroupIngressRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
