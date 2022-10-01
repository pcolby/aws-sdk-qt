// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listallowednodetypemodificationsrequest.h"
#include "listallowednodetypemodificationsrequest_p.h"
#include "listallowednodetypemodificationsresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ListAllowedNodeTypeModificationsRequest
 * \brief The ListAllowedNodeTypeModificationsRequest class provides an interface for ElastiCache ListAllowedNodeTypeModifications requests.
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
 * \sa ElastiCacheClient::listAllowedNodeTypeModifications
 */

/*!
 * Constructs a copy of \a other.
 */
ListAllowedNodeTypeModificationsRequest::ListAllowedNodeTypeModificationsRequest(const ListAllowedNodeTypeModificationsRequest &other)
    : ElastiCacheRequest(new ListAllowedNodeTypeModificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAllowedNodeTypeModificationsRequest object.
 */
ListAllowedNodeTypeModificationsRequest::ListAllowedNodeTypeModificationsRequest()
    : ElastiCacheRequest(new ListAllowedNodeTypeModificationsRequestPrivate(ElastiCacheRequest::ListAllowedNodeTypeModificationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAllowedNodeTypeModificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAllowedNodeTypeModificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAllowedNodeTypeModificationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAllowedNodeTypeModificationsResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::ListAllowedNodeTypeModificationsRequestPrivate
 * \brief The ListAllowedNodeTypeModificationsRequestPrivate class provides private implementation for ListAllowedNodeTypeModificationsRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ListAllowedNodeTypeModificationsRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
ListAllowedNodeTypeModificationsRequestPrivate::ListAllowedNodeTypeModificationsRequestPrivate(
    const ElastiCacheRequest::Action action, ListAllowedNodeTypeModificationsRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAllowedNodeTypeModificationsRequest
 * class' copy constructor.
 */
ListAllowedNodeTypeModificationsRequestPrivate::ListAllowedNodeTypeModificationsRequestPrivate(
    const ListAllowedNodeTypeModificationsRequestPrivate &other, ListAllowedNodeTypeModificationsRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
