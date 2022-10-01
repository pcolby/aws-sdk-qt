// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserrequest.h"
#include "deleteuserrequest_p.h"
#include "deleteuserresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteUserRequest
 * \brief The DeleteUserRequest class provides an interface for ElastiCache DeleteUser requests.
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
 * \sa ElastiCacheClient::deleteUser
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserRequest::DeleteUserRequest(const DeleteUserRequest &other)
    : ElastiCacheRequest(new DeleteUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserRequest object.
 */
DeleteUserRequest::DeleteUserRequest()
    : ElastiCacheRequest(new DeleteUserRequestPrivate(ElastiCacheRequest::DeleteUserAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::DeleteUserRequestPrivate
 * \brief The DeleteUserRequestPrivate class provides private implementation for DeleteUserRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteUserRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const ElastiCacheRequest::Action action, DeleteUserRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserRequest
 * class' copy constructor.
 */
DeleteUserRequestPrivate::DeleteUserRequestPrivate(
    const DeleteUserRequestPrivate &other, DeleteUserRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
