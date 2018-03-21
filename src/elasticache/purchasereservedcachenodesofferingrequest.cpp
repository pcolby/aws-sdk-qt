/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "purchasereservedcachenodesofferingrequest.h"
#include "purchasereservedcachenodesofferingrequest_p.h"
#include "purchasereservedcachenodesofferingresponse.h"
#include "elasticacherequest_p.h"

namespace AWS {
namespace ElastiCache {

/**
 * @class  PurchaseReservedCacheNodesOfferingRequest
 *
 * @brief  Implements ElastiCache PurchaseReservedCacheNodesOffering requests.
 *
 * @see    ElastiCacheClient::purchaseReservedCacheNodesOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseReservedCacheNodesOfferingRequest::PurchaseReservedCacheNodesOfferingRequest(const PurchaseReservedCacheNodesOfferingRequest &other)
    : ElastiCacheRequest(new PurchaseReservedCacheNodesOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingRequest object.
 */
PurchaseReservedCacheNodesOfferingRequest::PurchaseReservedCacheNodesOfferingRequest()
    : ElastiCacheRequest(new PurchaseReservedCacheNodesOfferingRequestPrivate(ElastiCacheRequest::PurchaseReservedCacheNodesOfferingAction, this))
{

}

bool PurchaseReservedCacheNodesOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseReservedCacheNodesOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseReservedCacheNodesOfferingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElastiCacheClient::send
 */
AwsAbstractResponse * PurchaseReservedCacheNodesOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedCacheNodesOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseReservedCacheNodesOfferingRequestPrivate
 *
 * @brief  Private implementation for PurchaseReservedCacheNodesOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingRequestPrivate object.
 *
 * @param  action  ElastiCache action being performed.
 * @param  q       Pointer to this object's public PurchaseReservedCacheNodesOfferingRequest instance.
 */
PurchaseReservedCacheNodesOfferingRequestPrivate::PurchaseReservedCacheNodesOfferingRequestPrivate(
    const ElastiCacheRequest::Action action, PurchaseReservedCacheNodesOfferingRequest * const q)
    : PurchaseReservedCacheNodesOfferingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedCacheNodesOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedCacheNodesOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseReservedCacheNodesOfferingRequest instance.
 */
PurchaseReservedCacheNodesOfferingRequestPrivate::PurchaseReservedCacheNodesOfferingRequestPrivate(
    const PurchaseReservedCacheNodesOfferingRequestPrivate &other, PurchaseReservedCacheNodesOfferingRequest * const q)
    : PurchaseReservedCacheNodesOfferingPrivate(other, q)
{

}

} // namespace ElastiCache
} // namespace AWS
