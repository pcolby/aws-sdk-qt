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

#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionrequest_p.h"
#include "modifyeventsubscriptionresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ModifyEventSubscriptionRequest
 *
 * @brief  Implements RDS ModifyEventSubscription requests.
 *
 * @see    RDSClient::modifyEventSubscription
 */

/**
 * @brief  Constructs a new ModifyEventSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyEventSubscriptionResponse::ModifyEventSubscriptionResponse(

/**
 * @brief  Constructs a new ModifyEventSubscriptionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest(const ModifyEventSubscriptionRequest &other)
    : RDSRequest(new ModifyEventSubscriptionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyEventSubscriptionRequest object.
 */
ModifyEventSubscriptionRequest::ModifyEventSubscriptionRequest()
    : RDSRequest(new ModifyEventSubscriptionRequestPrivate(RDSRequest::ModifyEventSubscriptionAction, this))
{

}

bool ModifyEventSubscriptionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyEventSubscriptionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyEventSubscriptionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyEventSubscriptionRequest::response(QNetworkReply * const reply) const
{
    return new ModifyEventSubscriptionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyEventSubscriptionRequestPrivate
 *
 * @brief  Private implementation for ModifyEventSubscriptionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEventSubscriptionRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyEventSubscriptionRequest instance.
 */
ModifyEventSubscriptionRequestPrivate::ModifyEventSubscriptionRequestPrivate(
    const RDSRequest::Action action, ModifyEventSubscriptionRequest * const q)
    : ModifyEventSubscriptionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyEventSubscriptionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyEventSubscriptionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyEventSubscriptionRequest instance.
 */
ModifyEventSubscriptionRequestPrivate::ModifyEventSubscriptionRequestPrivate(
    const ModifyEventSubscriptionRequestPrivate &other, ModifyEventSubscriptionRequest * const q)
    : ModifyEventSubscriptionPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
