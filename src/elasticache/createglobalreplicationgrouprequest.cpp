// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createglobalreplicationgrouprequest.h"
#include "createglobalreplicationgrouprequest_p.h"
#include "createglobalreplicationgroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateGlobalReplicationGroupRequest
 * \brief The CreateGlobalReplicationGroupRequest class provides an interface for ElastiCache CreateGlobalReplicationGroup requests.
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
 * \sa ElastiCacheClient::createGlobalReplicationGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGlobalReplicationGroupRequest::CreateGlobalReplicationGroupRequest(const CreateGlobalReplicationGroupRequest &other)
    : ElastiCacheRequest(new CreateGlobalReplicationGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGlobalReplicationGroupRequest object.
 */
CreateGlobalReplicationGroupRequest::CreateGlobalReplicationGroupRequest()
    : ElastiCacheRequest(new CreateGlobalReplicationGroupRequestPrivate(ElastiCacheRequest::CreateGlobalReplicationGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGlobalReplicationGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGlobalReplicationGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGlobalReplicationGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateGlobalReplicationGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::CreateGlobalReplicationGroupRequestPrivate
 * \brief The CreateGlobalReplicationGroupRequestPrivate class provides private implementation for CreateGlobalReplicationGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateGlobalReplicationGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
CreateGlobalReplicationGroupRequestPrivate::CreateGlobalReplicationGroupRequestPrivate(
    const ElastiCacheRequest::Action action, CreateGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGlobalReplicationGroupRequest
 * class' copy constructor.
 */
CreateGlobalReplicationGroupRequestPrivate::CreateGlobalReplicationGroupRequestPrivate(
    const CreateGlobalReplicationGroupRequestPrivate &other, CreateGlobalReplicationGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
