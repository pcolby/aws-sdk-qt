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

#include "purchasereservedinstancesofferingrequest.h"
#include "purchasereservedinstancesofferingrequest_p.h"
#include "purchasereservedinstancesofferingresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  PurchaseReservedInstancesOfferingRequest
 *
 * @brief  Implements EC2 PurchaseReservedInstancesOffering requests.
 *
 * @see    EC2Client::purchaseReservedInstancesOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedInstancesOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest(const PurchaseReservedInstancesOfferingRequest &other)
    : EC2Request(new PurchaseReservedInstancesOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseReservedInstancesOfferingRequest object.
 */
PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest()
    : EC2Request(new PurchaseReservedInstancesOfferingRequestPrivate(EC2Request::PurchaseReservedInstancesOfferingAction, this))
{

}

bool PurchaseReservedInstancesOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseReservedInstancesOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseReservedInstancesOfferingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * PurchaseReservedInstancesOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedInstancesOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseReservedInstancesOfferingRequestPrivate
 *
 * @brief  Private implementation for PurchaseReservedInstancesOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedInstancesOfferingRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public PurchaseReservedInstancesOfferingRequest instance.
 */
PurchaseReservedInstancesOfferingRequestPrivate::PurchaseReservedInstancesOfferingRequestPrivate(
    const EC2Request::Action action, PurchaseReservedInstancesOfferingRequest * const q)
    : PurchaseReservedInstancesOfferingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedInstancesOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedInstancesOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseReservedInstancesOfferingRequest instance.
 */
PurchaseReservedInstancesOfferingRequestPrivate::PurchaseReservedInstancesOfferingRequestPrivate(
    const PurchaseReservedInstancesOfferingRequestPrivate &other, PurchaseReservedInstancesOfferingRequest * const q)
    : PurchaseReservedInstancesOfferingPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
