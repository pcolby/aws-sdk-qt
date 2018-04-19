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

#include "createcachesecuritygrouprequest.h"
#include "createcachesecuritygrouprequest_p.h"
#include "createcachesecuritygroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheSecurityGroupRequest
 * \brief The CreateCacheSecurityGroupRequest class provides an interface for ElastiCache CreateCacheSecurityGroup requests.
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
 * \sa ElastiCacheClient::createCacheSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCacheSecurityGroupRequest::CreateCacheSecurityGroupRequest(const CreateCacheSecurityGroupRequest &other)
    : ElastiCacheRequest(new CreateCacheSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCacheSecurityGroupRequest object.
 */
CreateCacheSecurityGroupRequest::CreateCacheSecurityGroupRequest()
    : ElastiCacheRequest(new CreateCacheSecurityGroupRequestPrivate(ElastiCacheRequest::CreateCacheSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCacheSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCacheSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCacheSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateCacheSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::CreateCacheSecurityGroupRequestPrivate
 * \brief The CreateCacheSecurityGroupRequestPrivate class provides private implementation for CreateCacheSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 *
 * Constructs a CreateCacheSecurityGroupRequestPrivate object for ElastiCache \a action with,
 * public implementation \a q.
 */
CreateCacheSecurityGroupRequestPrivate::CreateCacheSecurityGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCacheSecurityGroupRequest
 * class' copy constructor.
 */
CreateCacheSecurityGroupRequestPrivate::CreateCacheSecurityGroupRequestPrivate(
    const CreateCacheSecurityGroupRequestPrivate &other, CreateCacheSecurityGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
