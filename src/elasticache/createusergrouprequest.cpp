// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusergrouprequest.h"
#include "createusergrouprequest_p.h"
#include "createusergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateUserGroupRequest
 * \brief The CreateUserGroupRequest class provides an interface for ElastiCache CreateUserGroup requests.
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
 * \sa ElastiCacheClient::createUserGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserGroupRequest::CreateUserGroupRequest(const CreateUserGroupRequest &other)
    : ElastiCacheRequest(new CreateUserGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserGroupRequest object.
 */
CreateUserGroupRequest::CreateUserGroupRequest()
    : ElastiCacheRequest(new CreateUserGroupRequestPrivate(ElastiCacheRequest::CreateUserGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::CreateUserGroupRequestPrivate
 * \brief The CreateUserGroupRequestPrivate class provides private implementation for CreateUserGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateUserGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
CreateUserGroupRequestPrivate::CreateUserGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateUserGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserGroupRequest
 * class' copy constructor.
 */
CreateUserGroupRequestPrivate::CreateUserGroupRequestPrivate(
    const CreateUserGroupRequestPrivate &other, CreateUserGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
