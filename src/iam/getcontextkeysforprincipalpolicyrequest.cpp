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

#include "getcontextkeysforprincipalpolicyrequest.h"
#include "getcontextkeysforprincipalpolicyrequest_p.h"
#include "getcontextkeysforprincipalpolicyresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  GetContextKeysForPrincipalPolicyRequest
 *
 * @brief  Implements IAM GetContextKeysForPrincipalPolicy requests.
 *
 * @see    IAMClient::getContextKeysForPrincipalPolicy
 */

/**
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetContextKeysForPrincipalPolicyRequest::GetContextKeysForPrincipalPolicyRequest(const GetContextKeysForPrincipalPolicyRequest &other)
    : IAMRequest(new GetContextKeysForPrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyRequest object.
 */
GetContextKeysForPrincipalPolicyRequest::GetContextKeysForPrincipalPolicyRequest()
    : IAMRequest(new GetContextKeysForPrincipalPolicyRequestPrivate(IAMRequest::GetContextKeysForPrincipalPolicyAction, this))
{

}

bool GetContextKeysForPrincipalPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetContextKeysForPrincipalPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetContextKeysForPrincipalPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * GetContextKeysForPrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContextKeysForPrincipalPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetContextKeysForPrincipalPolicyRequestPrivate
 *
 * @brief  Private implementation for GetContextKeysForPrincipalPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetContextKeysForPrincipalPolicyRequest instance.
 */
GetContextKeysForPrincipalPolicyRequestPrivate::GetContextKeysForPrincipalPolicyRequestPrivate(
    const IAMRequest::Action action, GetContextKeysForPrincipalPolicyRequest * const q)
    : GetContextKeysForPrincipalPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetContextKeysForPrincipalPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetContextKeysForPrincipalPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetContextKeysForPrincipalPolicyRequest instance.
 */
GetContextKeysForPrincipalPolicyRequestPrivate::GetContextKeysForPrincipalPolicyRequestPrivate(
    const GetContextKeysForPrincipalPolicyRequestPrivate &other, GetContextKeysForPrincipalPolicyRequest * const q)
    : GetContextKeysForPrincipalPolicyPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
