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

#include "purchaseprovisionedcapacityrequest.h"
#include "purchaseprovisionedcapacityrequest_p.h"
#include "purchaseprovisionedcapacityresponse.h"
#include "glacierrequest_p.h"

namespace AWS {
namespace Glacier {

/**
 * @class  PurchaseProvisionedCapacityRequest
 *
 * @brief  Implements Glacier PurchaseProvisionedCapacity requests.
 *
 * @see    GlacierClient::purchaseProvisionedCapacity
 */

/**
 * @brief  Constructs a new PurchaseProvisionedCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseProvisionedCapacityResponse::PurchaseProvisionedCapacityResponse(

/**
 * @brief  Constructs a new PurchaseProvisionedCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PurchaseProvisionedCapacityRequest::PurchaseProvisionedCapacityRequest(const PurchaseProvisionedCapacityRequest &other)
    : GlacierRequest(new PurchaseProvisionedCapacityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PurchaseProvisionedCapacityRequest object.
 */
PurchaseProvisionedCapacityRequest::PurchaseProvisionedCapacityRequest()
    : GlacierRequest(new PurchaseProvisionedCapacityRequestPrivate(GlacierRequest::PurchaseProvisionedCapacityAction, this))
{

}

bool PurchaseProvisionedCapacityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PurchaseProvisionedCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PurchaseProvisionedCapacityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * PurchaseProvisionedCapacityRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseProvisionedCapacityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PurchaseProvisionedCapacityRequestPrivate
 *
 * @brief  Private implementation for PurchaseProvisionedCapacityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseProvisionedCapacityRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public PurchaseProvisionedCapacityRequest instance.
 */
PurchaseProvisionedCapacityRequestPrivate::PurchaseProvisionedCapacityRequestPrivate(
    const GlacierRequest::Action action, PurchaseProvisionedCapacityRequest * const q)
    : PurchaseProvisionedCapacityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseProvisionedCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PurchaseProvisionedCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PurchaseProvisionedCapacityRequest instance.
 */
PurchaseProvisionedCapacityRequestPrivate::PurchaseProvisionedCapacityRequestPrivate(
    const PurchaseProvisionedCapacityRequestPrivate &other, PurchaseProvisionedCapacityRequest * const q)
    : PurchaseProvisionedCapacityPrivate(other, q)
{

}

} // namespace Glacier
} // namespace AWS
