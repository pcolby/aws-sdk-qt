// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchasereservedcachenodesofferingrequest.h"
#include "purchasereservedcachenodesofferingrequest_p.h"
#include "purchasereservedcachenodesofferingresponse.h"
#include "elasticacherequest_p.h"

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::PurchaseReservedCacheNodesOfferingRequest
 * \brief The PurchaseReservedCacheNodesOfferingRequest class provides an interface for ElastiCache PurchaseReservedCacheNodesOffering requests.
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
 * \sa ElastiCacheClient::purchaseReservedCacheNodesOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseReservedCacheNodesOfferingRequest::PurchaseReservedCacheNodesOfferingRequest(const PurchaseReservedCacheNodesOfferingRequest &other)
    : ElastiCacheRequest(new PurchaseReservedCacheNodesOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseReservedCacheNodesOfferingRequest object.
 */
PurchaseReservedCacheNodesOfferingRequest::PurchaseReservedCacheNodesOfferingRequest()
    : ElastiCacheRequest(new PurchaseReservedCacheNodesOfferingRequestPrivate(ElastiCacheRequest::PurchaseReservedCacheNodesOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseReservedCacheNodesOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseReservedCacheNodesOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseReservedCacheNodesOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedCacheNodesOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::ElastiCache::PurchaseReservedCacheNodesOfferingRequestPrivate
 * \brief The PurchaseReservedCacheNodesOfferingRequestPrivate class provides private implementation for PurchaseReservedCacheNodesOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a PurchaseReservedCacheNodesOfferingRequestPrivate object for ElastiCache \a action,
 * with public implementation \a q.
 */
PurchaseReservedCacheNodesOfferingRequestPrivate::PurchaseReservedCacheNodesOfferingRequestPrivate(
    const ElastiCacheRequest::Action action, PurchaseReservedCacheNodesOfferingRequest * const q)
    : ElastiCacheRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedCacheNodesOfferingRequest
 * class' copy constructor.
 */
PurchaseReservedCacheNodesOfferingRequestPrivate::PurchaseReservedCacheNodesOfferingRequestPrivate(
    const PurchaseReservedCacheNodesOfferingRequestPrivate &other, PurchaseReservedCacheNodesOfferingRequest * const q)
    : ElastiCacheRequestPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace QtAws
