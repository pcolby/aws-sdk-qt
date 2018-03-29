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

#include "purchasereserveddbinstancesofferingrequest.h"
#include "purchasereserveddbinstancesofferingrequest_p.h"
#include "purchasereserveddbinstancesofferingresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  PurchaseReservedDBInstancesOfferingRequest
 *
 * @brief  Implements RDS PurchaseReservedDBInstancesOffering requests.
 *
 * @see    RDSClient::purchaseReservedDBInstancesOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedDBInstancesOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseReservedDBInstancesOfferingRequest::PurchaseReservedDBInstancesOfferingRequest(const PurchaseReservedDBInstancesOfferingRequest &other)
    : RDSRequest(new PurchaseReservedDBInstancesOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseReservedDBInstancesOfferingRequest object.
 */
PurchaseReservedDBInstancesOfferingRequest::PurchaseReservedDBInstancesOfferingRequest()
    : RDSRequest(new PurchaseReservedDBInstancesOfferingRequestPrivate(RDSRequest::PurchaseReservedDBInstancesOfferingAction, this))
{

}

bool PurchaseReservedDBInstancesOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseReservedDBInstancesOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseReservedDBInstancesOfferingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseReservedDBInstancesOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedDBInstancesOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseReservedDBInstancesOfferingRequestPrivate
 *
 * @brief  Private implementation for PurchaseReservedDBInstancesOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedDBInstancesOfferingRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public PurchaseReservedDBInstancesOfferingRequest instance.
 */
PurchaseReservedDBInstancesOfferingRequestPrivate::PurchaseReservedDBInstancesOfferingRequestPrivate(
    const RDSRequest::Action action, PurchaseReservedDBInstancesOfferingRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedDBInstancesOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedDBInstancesOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseReservedDBInstancesOfferingRequest instance.
 */
PurchaseReservedDBInstancesOfferingRequestPrivate::PurchaseReservedDBInstancesOfferingRequestPrivate(
    const PurchaseReservedDBInstancesOfferingRequestPrivate &other, PurchaseReservedDBInstancesOfferingRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
