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

#include "renewofferingrequest.h"
#include "renewofferingrequest_p.h"
#include "renewofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  RenewOfferingRequest
 *
 * @brief  Implements DeviceFarm RenewOffering requests.
 *
 * @see    DeviceFarmClient::renewOffering
 */

/**
 * @brief  Constructs a new RenewOfferingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RenewOfferingRequest::RenewOfferingRequest(const RenewOfferingRequest &other)
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RenewOfferingRequest object.
 */
RenewOfferingRequest::RenewOfferingRequest()
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(DeviceFarmRequest::RenewOfferingAction, this))
{

}

bool RenewOfferingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RenewOfferingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RenewOfferingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * RenewOfferingRequest::response(QNetworkReply * const reply) const
{
    return new RenewOfferingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RenewOfferingRequestPrivate
 *
 * @brief  Private implementation for RenewOfferingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RenewOfferingRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public RenewOfferingRequest instance.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, RenewOfferingRequest * const q)
    : RenewOfferingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RenewOfferingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RenewOfferingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RenewOfferingRequest instance.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const RenewOfferingRequestPrivate &other, RenewOfferingRequest * const q)
    : RenewOfferingPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS
