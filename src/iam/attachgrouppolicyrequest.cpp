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

#include "attachgrouppolicyrequest.h"
#include "attachgrouppolicyrequest_p.h"
#include "attachgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  AttachGroupPolicyRequest
 *
 * @brief  Implements IAM AttachGroupPolicy requests.
 *
 * @see    IAMClient::attachGroupPolicy
 */

/**
 * @brief  Constructs a new AttachGroupPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachGroupPolicyResponse::AttachGroupPolicyResponse(

/**
 * @brief  Constructs a new AttachGroupPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachGroupPolicyRequest::AttachGroupPolicyRequest(const AttachGroupPolicyRequest &other)
    : IAMRequest(new AttachGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachGroupPolicyRequest object.
 */
AttachGroupPolicyRequest::AttachGroupPolicyRequest()
    : IAMRequest(new AttachGroupPolicyRequestPrivate(IAMRequest::AttachGroupPolicyAction, this))
{

}

bool AttachGroupPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachGroupPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachGroupPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * AttachGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachGroupPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachGroupPolicyRequestPrivate
 *
 * @brief  Private implementation for AttachGroupPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachGroupPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public AttachGroupPolicyRequest instance.
 */
AttachGroupPolicyRequestPrivate::AttachGroupPolicyRequestPrivate(
    const IAMRequest::Action action, AttachGroupPolicyRequest * const q)
    : AttachGroupPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachGroupPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachGroupPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachGroupPolicyRequest instance.
 */
AttachGroupPolicyRequestPrivate::AttachGroupPolicyRequestPrivate(
    const AttachGroupPolicyRequestPrivate &other, AttachGroupPolicyRequest * const q)
    : AttachGroupPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
