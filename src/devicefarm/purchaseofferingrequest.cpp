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

#include "purchaseofferingrequest.h"
#include "purchaseofferingrequest_p.h"
#include "purchaseofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  PurchaseOfferingRequest
 *
 * @brief  Implements DeviceFarm PurchaseOffering requests.
 *
 * @see    DeviceFarmClient::purchaseOffering
 */

/**
 * @brief  Constructs a new PurchaseOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest(const PurchaseOfferingRequest &other)
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseOfferingRequest object.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest()
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(DeviceFarmRequest::PurchaseOfferingAction, this))
{

}

bool PurchaseOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseOfferingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * PurchaseOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseOfferingRequestPrivate
 *
 * @brief  Private implementation for PurchaseOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseOfferingRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public PurchaseOfferingRequest instance.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, PurchaseOfferingRequest * const q)
    : PurchaseOfferingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseOfferingRequest instance.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const PurchaseOfferingRequestPrivate &other, PurchaseOfferingRequest * const q)
    : PurchaseOfferingPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
