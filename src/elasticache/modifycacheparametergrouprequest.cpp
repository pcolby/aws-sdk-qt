// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycacheparametergrouprequest.h"
#include "modifycacheparametergrouprequest_p.h"
#include "modifycacheparametergroupresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyCacheParameterGroupRequest
 * \brief The ModifyCacheParameterGroupRequest class provides an interface for ElastiCache ModifyCacheParameterGroup requests.
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
 * \sa ElastiCacheClient::modifyCacheParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest(const ModifyCacheParameterGroupRequest &other)
    : ElastiCacheRequest(new ModifyCacheParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyCacheParameterGroupRequest object.
 */
ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest()
    : ElastiCacheRequest(new ModifyCacheParameterGroupRequestPrivate(ElastiCacheRequest::ModifyCacheParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyCacheParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyCacheParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyCacheParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyCacheParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ModifyCacheParameterGroupRequestPrivate
 * \brief The ModifyCacheParameterGroupRequestPrivate class provides private implementation for ModifyCacheParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyCacheParameterGroupRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ModifyCacheParameterGroupRequestPrivate::ModifyCacheParameterGroupRequestPrivate(
    const ElastiCacheRequest::Action action, ModifyCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyCacheParameterGroupRequest
 * class' copy constructor.
 */
ModifyCacheParameterGroupRequestPrivate::ModifyCacheParameterGroupRequestPrivate(
    const ModifyCacheParameterGroupRequestPrivate &other, ModifyCacheParameterGroupRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
