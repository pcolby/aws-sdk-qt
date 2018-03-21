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

#include "getsubscriptionstaterequest.h"
#include "getsubscriptionstaterequest_p.h"
#include "getsubscriptionstateresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  GetSubscriptionStateRequest
 *
 * @brief  Implements Shield GetSubscriptionState requests.
 *
 * @see    ShieldClient::getSubscriptionState
 */

/**
 * @brief  Constructs a new GetSubscriptionStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionStateResponse::GetSubscriptionStateResponse(

/**
 * @brief  Constructs a new GetSubscriptionStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest(const GetSubscriptionStateRequest &other)
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSubscriptionStateRequest object.
 */
GetSubscriptionStateRequest::GetSubscriptionStateRequest()
    : ShieldRequest(new GetSubscriptionStateRequestPrivate(ShieldRequest::GetSubscriptionStateAction, this))
{

}

bool GetSubscriptionStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSubscriptionStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSubscriptionStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * GetSubscriptionStateRequest::response(QNetworkReply * const reply) const
{
    return new GetSubscriptionStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSubscriptionStateRequestPrivate
 *
 * @brief  Private implementation for GetSubscriptionStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionStateRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public GetSubscriptionStateRequest instance.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const ShieldRequest::Action action, GetSubscriptionStateRequest * const q)
    : GetSubscriptionStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSubscriptionStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSubscriptionStateRequest instance.
 */
GetSubscriptionStateRequestPrivate::GetSubscriptionStateRequestPrivate(
    const GetSubscriptionStateRequestPrivate &other, GetSubscriptionStateRequest * const q)
    : GetSubscriptionStatePrivate(other, q)
{

}
