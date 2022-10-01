// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchapplyupdateactionrequest.h"
#include "batchapplyupdateactionrequest_p.h"
#include "batchapplyupdateactionresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::BatchApplyUpdateActionRequest
 * \brief The BatchApplyUpdateActionRequest class provides an interface for ElastiCache BatchApplyUpdateAction requests.
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
 * \sa ElastiCacheClient::batchApplyUpdateAction
 */

/*!
 * Constructs a copy of \a other.
 */
BatchApplyUpdateActionRequest::BatchApplyUpdateActionRequest(const BatchApplyUpdateActionRequest &other)
    : ElastiCacheRequest(new BatchApplyUpdateActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchApplyUpdateActionRequest object.
 */
BatchApplyUpdateActionRequest::BatchApplyUpdateActionRequest()
    : ElastiCacheRequest(new BatchApplyUpdateActionRequestPrivate(ElastiCacheRequest::BatchApplyUpdateActionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchApplyUpdateActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchApplyUpdateActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchApplyUpdateActionRequest::response(QNetworkReply * const reply) const
{
    return new BatchApplyUpdateActionResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::BatchApplyUpdateActionRequestPrivate
 * \brief The BatchApplyUpdateActionRequestPrivate class provides private implementation for BatchApplyUpdateActionRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a BatchApplyUpdateActionRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
BatchApplyUpdateActionRequestPrivate::BatchApplyUpdateActionRequestPrivate(
    const ElastiCacheRequest::Action action, BatchApplyUpdateActionRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchApplyUpdateActionRequest
 * class' copy constructor.
 */
BatchApplyUpdateActionRequestPrivate::BatchApplyUpdateActionRequestPrivate(
    const BatchApplyUpdateActionRequestPrivate &other, BatchApplyUpdateActionRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
