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

#include "geteffectivepoliciesrequest.h"
#include "geteffectivepoliciesrequest_p.h"
#include "geteffectivepoliciesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  GetEffectivePoliciesRequest
 *
 * @brief  Implements IoT GetEffectivePolicies requests.
 *
 * @see    IoTClient::getEffectivePolicies
 */

/**
 * @brief  Constructs a new GetEffectivePoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEffectivePoliciesResponse::GetEffectivePoliciesResponse(

/**
 * @brief  Constructs a new GetEffectivePoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEffectivePoliciesRequest::GetEffectivePoliciesRequest(const GetEffectivePoliciesRequest &other)
    : IoTRequest(new GetEffectivePoliciesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEffectivePoliciesRequest object.
 */
GetEffectivePoliciesRequest::GetEffectivePoliciesRequest()
    : IoTRequest(new GetEffectivePoliciesRequestPrivate(IoTRequest::GetEffectivePoliciesAction, this))
{

}

bool GetEffectivePoliciesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEffectivePoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEffectivePoliciesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * GetEffectivePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetEffectivePoliciesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEffectivePoliciesRequestPrivate
 *
 * @brief  Private implementation for GetEffectivePoliciesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEffectivePoliciesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public GetEffectivePoliciesRequest instance.
 */
GetEffectivePoliciesRequestPrivate::GetEffectivePoliciesRequestPrivate(
    const IoTRequest::Action action, GetEffectivePoliciesRequest * const q)
    : GetEffectivePoliciesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEffectivePoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEffectivePoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEffectivePoliciesRequest instance.
 */
GetEffectivePoliciesRequestPrivate::GetEffectivePoliciesRequestPrivate(
    const GetEffectivePoliciesRequestPrivate &other, GetEffectivePoliciesRequest * const q)
    : GetEffectivePoliciesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS
