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

#include "getcontextkeysforcustompolicyrequest.h"
#include "getcontextkeysforcustompolicyrequest_p.h"
#include "getcontextkeysforcustompolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetContextKeysForCustomPolicyRequest
 *
 * @brief  Implements IAM GetContextKeysForCustomPolicy requests.
 *
 * @see    IAMClient::getContextKeysForCustomPolicy
 */

/**
 * @brief  Constructs a new GetContextKeysForCustomPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContextKeysForCustomPolicyRequest::GetContextKeysForCustomPolicyRequest(const GetContextKeysForCustomPolicyRequest &other)
    : IAMRequest(new GetContextKeysForCustomPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetContextKeysForCustomPolicyRequest object.
 */
GetContextKeysForCustomPolicyRequest::GetContextKeysForCustomPolicyRequest()
    : IAMRequest(new GetContextKeysForCustomPolicyRequestPrivate(IAMRequest::GetContextKeysForCustomPolicyAction, this))
{

}

bool GetContextKeysForCustomPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetContextKeysForCustomPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContextKeysForCustomPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetContextKeysForCustomPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContextKeysForCustomPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetContextKeysForCustomPolicyRequestPrivate
 *
 * @brief  Private implementation for GetContextKeysForCustomPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForCustomPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetContextKeysForCustomPolicyRequest instance.
 */
GetContextKeysForCustomPolicyRequestPrivate::GetContextKeysForCustomPolicyRequestPrivate(
    const IAMRequest::Action action, GetContextKeysForCustomPolicyRequest * const q)
    : GetContextKeysForCustomPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForCustomPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContextKeysForCustomPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContextKeysForCustomPolicyRequest instance.
 */
GetContextKeysForCustomPolicyRequestPrivate::GetContextKeysForCustomPolicyRequestPrivate(
    const GetContextKeysForCustomPolicyRequestPrivate &other, GetContextKeysForCustomPolicyRequest * const q)
    : GetContextKeysForCustomPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
