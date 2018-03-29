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

#include "purchasereservednodeofferingrequest.h"
#include "purchasereservednodeofferingrequest_p.h"
#include "purchasereservednodeofferingresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  PurchaseReservedNodeOfferingRequest
 *
 * @brief  Implements Redshift PurchaseReservedNodeOffering requests.
 *
 * @see    RedshiftClient::purchaseReservedNodeOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedNodeOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseReservedNodeOfferingRequest::PurchaseReservedNodeOfferingRequest(const PurchaseReservedNodeOfferingRequest &other)
    : RedshiftRequest(new PurchaseReservedNodeOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseReservedNodeOfferingRequest object.
 */
PurchaseReservedNodeOfferingRequest::PurchaseReservedNodeOfferingRequest()
    : RedshiftRequest(new PurchaseReservedNodeOfferingRequestPrivate(RedshiftRequest::PurchaseReservedNodeOfferingAction, this))
{

}

bool PurchaseReservedNodeOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseReservedNodeOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseReservedNodeOfferingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * PurchaseReservedNodeOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedNodeOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseReservedNodeOfferingRequestPrivate
 *
 * @brief  Private implementation for PurchaseReservedNodeOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedNodeOfferingRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public PurchaseReservedNodeOfferingRequest instance.
 */
PurchaseReservedNodeOfferingRequestPrivate::PurchaseReservedNodeOfferingRequestPrivate(
    const RedshiftRequest::Action action, PurchaseReservedNodeOfferingRequest * const q)
    : PurchaseReservedNodeOfferingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedNodeOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedNodeOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseReservedNodeOfferingRequest instance.
 */
PurchaseReservedNodeOfferingRequestPrivate::PurchaseReservedNodeOfferingRequestPrivate(
    const PurchaseReservedNodeOfferingRequestPrivate &other, PurchaseReservedNodeOfferingRequest * const q)
    : PurchaseReservedNodeOfferingPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
