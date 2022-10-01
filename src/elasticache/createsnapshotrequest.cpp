// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsnapshotrequest.h"
#include "createsnapshotrequest_p.h"
#include "createsnapshotresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateSnapshotRequest
 * \brief The CreateSnapshotRequest class provides an interface for ElastiCache CreateSnapshot requests.
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
 * \sa ElastiCacheClient::createSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSnapshotRequest::CreateSnapshotRequest(const CreateSnapshotRequest &other)
    : ElastiCacheRequest(new CreateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSnapshotRequest object.
 */
CreateSnapshotRequest::CreateSnapshotRequest()
    : ElastiCacheRequest(new CreateSnapshotRequestPrivate(ElastiCacheRequest::CreateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::CreateSnapshotRequestPrivate
 * \brief The CreateSnapshotRequestPrivate class provides private implementation for CreateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateSnapshotRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const ElastiCacheRequest::Action action, CreateSnapshotRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotRequest
 * class' copy constructor.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const CreateSnapshotRequestPrivate &other, CreateSnapshotRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
