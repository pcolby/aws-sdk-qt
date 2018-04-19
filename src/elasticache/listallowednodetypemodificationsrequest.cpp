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
