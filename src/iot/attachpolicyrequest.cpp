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

#include "attachpolicyrequest.h"
#include "attachpolicyrequest_p.h"
#include "attachpolicyresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  AttachPolicyRequest
 *
 * @brief  Implements IoT AttachPolicy requests.
 *
 * @see    IoTClient::attachPolicy
 */

/**
 * @brief  Constructs a new AttachPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachPolicyResponse::AttachPolicyResponse(

/**
 * @brief  Constructs a new AttachPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachPolicyRequest::AttachPolicyRequest(const AttachPolicyRequest &other)
    : IoTRequest(new AttachPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachPolicyRequest object.
 */
AttachPolicyRequest::AttachPolicyRequest()
    : IoTRequest(new AttachPolicyRequestPrivate(IoTRequest::AttachPolicyAction, this))
{

}

bool AttachPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * AttachPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const IoTRequest::Action action, AttachPolicyRequest * const q)
    : AttachPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachPolicyRequest instance.
 */
AttachPolicyRequestPrivate::AttachPolicyRequestPrivate(
    const AttachPolicyRequestPrivate &other, AttachPolicyRequest * const q)
    : AttachPolicyPrivate(other, q)
{

}
